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

#include <tencentcloud/cdc/v20201214/model/DedicatedCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DedicatedCluster::DedicatedCluster() :
    m_dedicatedClusterIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lifecycleStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_runningStatusHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LifecycleStatus") && !value["LifecycleStatus"].IsNull())
    {
        if (!value["LifecycleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.LifecycleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleStatus = string(value["LifecycleStatus"].GetString());
        m_lifecycleStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SiteId") && !value["SiteId"].IsNull())
    {
        if (!value["SiteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.SiteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_siteId = string(value["SiteId"].GetString());
        m_siteIdHasBeenSet = true;
    }

    if (value.HasMember("RunningStatus") && !value["RunningStatus"].IsNull())
    {
        if (!value["RunningStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.RunningStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runningStatus = string(value["RunningStatus"].GetString());
        m_runningStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_siteId.c_str(), allocator).Move(), allocator);
    }

    if (m_runningStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runningStatus.c_str(), allocator).Move(), allocator);
    }

}


string DedicatedCluster::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DedicatedCluster::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DedicatedCluster::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

string DedicatedCluster::GetZone() const
{
    return m_zone;
}

void DedicatedCluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DedicatedCluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DedicatedCluster::GetDescription() const
{
    return m_description;
}

void DedicatedCluster::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DedicatedCluster::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DedicatedCluster::GetName() const
{
    return m_name;
}

void DedicatedCluster::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DedicatedCluster::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DedicatedCluster::GetLifecycleStatus() const
{
    return m_lifecycleStatus;
}

void DedicatedCluster::SetLifecycleStatus(const string& _lifecycleStatus)
{
    m_lifecycleStatus = _lifecycleStatus;
    m_lifecycleStatusHasBeenSet = true;
}

bool DedicatedCluster::LifecycleStatusHasBeenSet() const
{
    return m_lifecycleStatusHasBeenSet;
}

string DedicatedCluster::GetCreateTime() const
{
    return m_createTime;
}

void DedicatedCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DedicatedCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DedicatedCluster::GetSiteId() const
{
    return m_siteId;
}

void DedicatedCluster::SetSiteId(const string& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool DedicatedCluster::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string DedicatedCluster::GetRunningStatus() const
{
    return m_runningStatus;
}

void DedicatedCluster::SetRunningStatus(const string& _runningStatus)
{
    m_runningStatus = _runningStatus;
    m_runningStatusHasBeenSet = true;
}

bool DedicatedCluster::RunningStatusHasBeenSet() const
{
    return m_runningStatusHasBeenSet;
}

