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

#include <tencentcloud/cbs/v20170312/model/Placement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

Placement::Placement() :
    m_zoneHasBeenSet(false),
    m_cageIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_cdcNameHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
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

    if (value.HasMember("CageId") && !value["CageId"].IsNull())
    {
        if (!value["CageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.CageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cageId = string(value["CageId"].GetString());
        m_cageIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CdcName") && !value["CdcName"].IsNull())
    {
        if (!value["CdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.CdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcName = string(value["CdcName"].GetString());
        m_cdcNameHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Placement.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
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

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
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

string Placement::GetCageId() const
{
    return m_cageId;
}

void Placement::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool Placement::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

uint64_t Placement::GetProjectId() const
{
    return m_projectId;
}

void Placement::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Placement::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Placement::GetProjectName() const
{
    return m_projectName;
}

void Placement::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Placement::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string Placement::GetCdcName() const
{
    return m_cdcName;
}

void Placement::SetCdcName(const string& _cdcName)
{
    m_cdcName = _cdcName;
    m_cdcNameHasBeenSet = true;
}

bool Placement::CdcNameHasBeenSet() const
{
    return m_cdcNameHasBeenSet;
}

string Placement::GetCdcId() const
{
    return m_cdcId;
}

void Placement::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool Placement::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string Placement::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void Placement::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool Placement::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

