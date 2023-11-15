/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/weilingwith/v20230427/model/SpaceDataTotalStatsRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceDataTotalStatsRes::SpaceDataTotalStatsRes() :
    m_buildingCountHasBeenSet(false),
    m_buildingAreaHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDataTotalStatsRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingCount") && !value["BuildingCount"].IsNull())
    {
        if (!value["BuildingCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataTotalStatsRes.BuildingCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildingCount = value["BuildingCount"].GetUint64();
        m_buildingCountHasBeenSet = true;
    }

    if (value.HasMember("BuildingArea") && !value["BuildingArea"].IsNull())
    {
        if (!value["BuildingArea"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataTotalStatsRes.BuildingArea` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_buildingArea = value["BuildingArea"].GetDouble();
        m_buildingAreaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDataTotalStatsRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildingCount, allocator);
    }

    if (m_buildingAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildingArea, allocator);
    }

}


uint64_t SpaceDataTotalStatsRes::GetBuildingCount() const
{
    return m_buildingCount;
}

void SpaceDataTotalStatsRes::SetBuildingCount(const uint64_t& _buildingCount)
{
    m_buildingCount = _buildingCount;
    m_buildingCountHasBeenSet = true;
}

bool SpaceDataTotalStatsRes::BuildingCountHasBeenSet() const
{
    return m_buildingCountHasBeenSet;
}

double SpaceDataTotalStatsRes::GetBuildingArea() const
{
    return m_buildingArea;
}

void SpaceDataTotalStatsRes::SetBuildingArea(const double& _buildingArea)
{
    m_buildingArea = _buildingArea;
    m_buildingAreaHasBeenSet = true;
}

bool SpaceDataTotalStatsRes::BuildingAreaHasBeenSet() const
{
    return m_buildingAreaHasBeenSet;
}

