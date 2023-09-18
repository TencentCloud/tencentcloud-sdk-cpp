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

#include <tencentcloud/batch/v20170312/model/Placement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Placement::Placement() :
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostIdHasBeenSet(false)
{
}

CoreInternalOutcome Placement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Placement.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Placement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

}


string Placement::GetZone() const
{
    return m_zone;
}

void Placement::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Placement::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t Placement::GetProjectId() const
{
    return m_projectId;
}

void Placement::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Placement::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> Placement::GetHostIds() const
{
    return m_hostIds;
}

void Placement::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool Placement::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

string Placement::GetHostId() const
{
    return m_hostId;
}

void Placement::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool Placement::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

