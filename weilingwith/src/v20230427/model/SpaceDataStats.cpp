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

#include <tencentcloud/weilingwith/v20230427/model/SpaceDataStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceDataStats::SpaceDataStats() :
    m_workspaceIdHasBeenSet(false),
    m_workspaceNameHasBeenSet(false),
    m_buildingCountHasBeenSet(false),
    m_buildingAreaHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDataStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataStats.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceName") && !value["WorkspaceName"].IsNull())
    {
        if (!value["WorkspaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataStats.WorkspaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceName = string(value["WorkspaceName"].GetString());
        m_workspaceNameHasBeenSet = true;
    }

    if (value.HasMember("BuildingCount") && !value["BuildingCount"].IsNull())
    {
        if (!value["BuildingCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataStats.BuildingCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildingCount = value["BuildingCount"].GetUint64();
        m_buildingCountHasBeenSet = true;
    }

    if (value.HasMember("BuildingArea") && !value["BuildingArea"].IsNull())
    {
        if (!value["BuildingArea"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataStats.BuildingArea` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_buildingArea = value["BuildingArea"].GetDouble();
        m_buildingAreaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDataStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceName.c_str(), allocator).Move(), allocator);
    }

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


string SpaceDataStats::GetWorkspaceId() const
{
    return m_workspaceId;
}

void SpaceDataStats::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool SpaceDataStats::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string SpaceDataStats::GetWorkspaceName() const
{
    return m_workspaceName;
}

void SpaceDataStats::SetWorkspaceName(const string& _workspaceName)
{
    m_workspaceName = _workspaceName;
    m_workspaceNameHasBeenSet = true;
}

bool SpaceDataStats::WorkspaceNameHasBeenSet() const
{
    return m_workspaceNameHasBeenSet;
}

uint64_t SpaceDataStats::GetBuildingCount() const
{
    return m_buildingCount;
}

void SpaceDataStats::SetBuildingCount(const uint64_t& _buildingCount)
{
    m_buildingCount = _buildingCount;
    m_buildingCountHasBeenSet = true;
}

bool SpaceDataStats::BuildingCountHasBeenSet() const
{
    return m_buildingCountHasBeenSet;
}

double SpaceDataStats::GetBuildingArea() const
{
    return m_buildingArea;
}

void SpaceDataStats::SetBuildingArea(const double& _buildingArea)
{
    m_buildingArea = _buildingArea;
    m_buildingAreaHasBeenSet = true;
}

bool SpaceDataStats::BuildingAreaHasBeenSet() const
{
    return m_buildingAreaHasBeenSet;
}

