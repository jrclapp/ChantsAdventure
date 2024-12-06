#include <AdventureGameMap.hpp>
#include <Node.hpp>
#include <Asset.hpp>

namespace chants
{
    AdventureGameMap::AdventureGameMap()
    {
        buildMapNodes();

        // Possible assets:
        // Flashlight
        // Atomic Map
        // Compass
        // Screwdriver
        // Hammer
        // Polyglot (translator)
        // Treasure
        // Hobgoblin Shield
        // Garden Hose
        // Chest
        // Sign
        // Rabbit Cage
        // Paper Bag
        // Captain’s Chair
        // Purple Haze
        // Drinking Glass
        // Rusty Nail

        // Possible monsters:
        //
    }

    void AdventureGameMap::buildMapNodes()
    {
        // build all nodes
        Node home(0, "Home");
        home.Description = "You are standing in the front yard of a warm and comfortable home that exudes charm and\ntranquility, inviting visitors to feel welcome even before they step inside.\n";

        Node mountain(1, "Mountain");
        mountain.Description = "A majestic mountain rises grandly from the landscape, its towering\npeak piercing the sky and exuding a sense of awe and reverence.\n";

        Node city(2, "City");
        city.Description = "A typical city is a bustling hub of activity, blending diverse elements of\narchitecture, culture, and human interaction. It features a variety of neighborhoods,\neach with its own character, from high-rise apartment buildings and business\ndistricts to residential areas and parks.\n";

        Node ocean(3, "Ocean");
        ocean.Description = "The sea appears restless and chaotic, with surging swells that seem to roil\nand churn, as if the ocean itself is furious, thrashing in a wild, unpredictable rhythm.\n";

        Node island(4, "Island");
        island.Description = "In the midst of an angry sea, the island appears as a defiant outpost,\nbattered but unyielding against the surrounding chaos. Jagged cliffs rise abruptly\nfrom the churning waters, their rugged faces streaked with dark, wet stone, dripping\nwith the constant assault of waves.\n";

        Node hut(5, "Hut");
        hut.Description = "A hut stands as a weathered refuge, small and sturdy against the backdrop of\nthe raging sea. Its wooden walls, gray and splintered from years of exposure to\nsalt and wind, are patched together with whatever materials the island could provide—driftwood,\npalm fronds, and rough-hewn stone.\nThe roof is thatched with dried leaves, lashed tightly\nto withstand the powerful gusts that whip across the island.\n";

        Node quicksand(6, "Quick Sand");
        quicksand.Description = "A patch of treacherous quicksand lurks, deceptively blending into the surrounding\nterrain. It lies at the edge of a narrow clearing, where the ground transitions\nfrom rocky soil to a stretch of damp, silty earth.\n";

        Node cave(7, "Cave");
        cave.Description = "Here is a cave nestled into the rocky cliffs that rise above the angry sea, is a cave that\nseems carved by nature's fury over centuries. Its entrance is half-hidden by\nthick vines and jagged boulders, giving it an air of mystery and shelter.\nThe mouth of the cave is wide and low, just tall enough\nfor a person to crouch and enter, and it faces away from\nthe wind, offering some protection from the relentless storm.\n";

        Node beach(8, "Beach");
        beach.Description = "A beautiful beach stretches out in a graceful curve, bordered by soft, powdery sand that\ngleams white under the sunlight. Each grain feels fine and smooth beneath bare\nfeet, as though sculpted by the gentle hands of time and tide. The shoreline\nis kissed by the crystal-clear waters of the ocean,\nwhere the surf laps quietly and rhythmically, creating a soft,\nsoothing sound with each wave.\n";

        // New nodes
        Node castle(9, "Castle");
        castle.Description = "A grand and imposing castle, its tall towers reaching toward the sky, with sturdy stone walls and a large wooden gate.\n";

        Node forest(10, "Forest");
        forest.Description = "A dense forest filled with towering trees, their leaves whispering in the wind, and the forest floor soft with moss.\n";

        Node lighthouse(11, "Lighthouse");
        lighthouse.Description = "A tall, white lighthouse stands at the edge of a cliff, its beacon flashing out over the dark sea.\n";

        Node volcano(12, "Volcano");
        volcano.Description = "A fiery volcano, spewing smoke and ash into the sky, its molten lava flowing down its sides.\n";

        Node temple(13, "Temple");
        temple.Description = "An ancient temple with intricate carvings, its stone pillars weathered by time and the elements.\n";

        Node glacier(14, "Glacier");
        glacier.Description = "A massive glacier, its icy surface gleaming in the sunlight, the air cold and crisp around it.\n";

        Node swamp(15, "Swamp");
        swamp.Description = "A dark, murky swamp, the air thick with moisture and the ground soft with muck.\n";

        Node desert(16, "Desert");
        desert.Description = "A vast and empty desert, with sand dunes stretching as far as the eye can see under the hot sun.\n";

        Node ruins(17, "Ruins");
        ruins.Description = "The remains of an ancient structure, its stone walls crumbled and overgrown with vines and moss.\n";

        Node harbor(18, "Harbor");
        harbor.Description = "A busy harbor filled with ships, the scent of saltwater and fish in the air, and the sound of waves crashing on the docks.\n";

        Node cliffside(19, "Cliffside");
        cliffside.Description = "A steep cliffside overlooking the ocean, with a breathtaking view of the waves crashing against the rocks below.\n";

        // connect nodes paths
        home.AddConnection(&mountain);
        home.AddConnection(&city);

        mountain.AddConnection(&home);
        mountain.AddConnection(&ocean);
        mountain.AddConnection(&city);

        ocean.AddConnection(&mountain);
        ocean.AddConnection(&city);
        ocean.AddConnection(&island);

        city.AddConnection(&home);
        city.AddConnection(&mountain);
        city.AddConnection(&ocean);
        city.AddConnection(&volcano);  // one-way from city to volcano

        island.AddConnection(&ocean);
        island.AddConnection(&cave);
        island.AddConnection(&beach);
        island.AddConnection(&quicksand);
        island.AddConnection(&hut);

        cave.AddConnection(&home); // one way connection
        cave.AddConnection(&beach);
        cave.AddConnection(&island);

        beach.AddConnection(&cave);
        beach.AddConnection(&island);

        hut.AddConnection(&island);
        hut.AddConnection(&quicksand);

        quicksand.AddConnection(&hut);
        quicksand.AddConnection(&island);

        // New connections
        castle.AddConnection(&mountain);
        castle.AddConnection(&city);
        castle.AddConnection(&home);
        castle.AddConnection(&cave); // one-way connection from cave to castle

        forest.AddConnection(&mountain);
        forest.AddConnection(&hut);
        forest.AddConnection(&ocean);
        forest.AddConnection(&island);
        forest.AddConnection(&desert); // one-way from forest to desert

        lighthouse.AddConnection(&beach);
        lighthouse.AddConnection(&ocean);
        lighthouse.AddConnection(&city);
        lighthouse.AddConnection(&island);
        lighthouse.AddConnection(&castle); // one-way from lighthouse to castle

        volcano.AddConnection(&mountain);
        volcano.AddConnection(&quicksand);
        volcano.AddConnection(&cave); // one-way connection from volcano to cave

        temple.AddConnection(&city);
        temple.AddConnection(&mountain);
        temple.AddConnection(&hut);
        temple.AddConnection(&home);

        glacier.AddConnection(&ocean);
        glacier.AddConnection(&mountain);
        glacier.AddConnection(&cave); // one-way connection from glacier to cave

        swamp.AddConnection(&quicksand);
        swamp.AddConnection(&hut);
        swamp.AddConnection(&ocean);
        swamp.AddConnection(&beach);

        desert.AddConnection(&quicksand);
        desert.AddConnection(&mountain);
        desert.AddConnection(&hut);
        desert.AddConnection(&island);

        ruins.AddConnection(&cave);
        ruins.AddConnection(&city);
        ruins.AddConnection(&forest);
        ruins.AddConnection(&beach);
        ruins.AddConnection(&temple); // one-way from ruins to temple

        harbor.AddConnection(&ocean);
        harbor.AddConnection(&lighthouse);
        harbor.AddConnection(&city);
        harbor.AddConnection(&beach);

        cliffside.AddConnection(&ocean);
        cliffside.AddConnection(&mountain);
        cliffside.AddConnection(&lighthouse);
        cliffside.AddConnection(&island);

        // build map in same order as Node Ids above.
        // The index of each node in the vector must match it's id.
        locations.push_back(home);
        locations.push_back(mountain);
        locations.push_back(city);
        locations.push_back(ocean);
        locations.push_back(island);
        locations.push_back(hut);
        locations.push_back(quicksand);
        locations.push_back(cave);
        locations.push_back(beach);
        locations.push_back(castle);
        locations.push_back(forest);
        locations.push_back(lighthouse);
        locations.push_back(volcano);
        locations.push_back(temple);
        locations.push_back(glacier);
        locations.push_back(swamp);
        locations.push_back(desert);
        locations.push_back(ruins);
        locations.push_back(harbor);
        locations.push_back(cliffside);
        }

    vector<Node> AdventureGameMap::GetLocations()
    {
        return locations;
    }

}
