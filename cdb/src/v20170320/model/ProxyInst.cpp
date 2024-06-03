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

#include <tencentcloud/cdb/v20170320/model/ProxyInst.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyInst::ProxyInst() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instNodeIdHasBeenSet(false),
    m_instNodeRoleHasBeenSet(false)
{
}

CoreInternalOutcome ProxyInst::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstNodeId") && !value["InstNodeId"].IsNull())
    {
        if (!value["InstNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.InstNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instNodeId = string(value["InstNodeId"].GetString());
        m_instNodeIdHasBeenSet = true;
    }

    if (value.HasMember("InstNodeRole") && !value["InstNodeRole"].IsNull())
    {
        if (!value["InstNodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyInst.InstNodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instNodeRole = string(value["InstNodeRole"].GetString());
        m_instNodeRoleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyInst::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_instNodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstNodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instNodeRole.c_str(), allocator).Move(), allocator);
    }

}


string ProxyInst::GetInstanceId() const
{
    return m_instanceId;
}

void ProxyInst::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProxyInst::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ProxyInst::GetInstanceName() const
{
    return m_instanceName;
}

void ProxyInst::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ProxyInst::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t ProxyInst::GetInstanceType() const
{
    return m_instanceType;
}

void ProxyInst::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ProxyInst::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t ProxyInst::GetStatus() const
{
    return m_status;
}

void ProxyInst::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyInst::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ProxyInst::GetWeight() const
{
    return m_weight;
}

void ProxyInst::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ProxyInst::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string ProxyInst::GetRegion() const
{
    return m_region;
}

void ProxyInst::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyInst::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProxyInst::GetZone() const
{
    return m_zone;
}

void ProxyInst::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyInst::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ProxyInst::GetInstNodeId() const
{
    return m_instNodeId;
}

void ProxyInst::SetInstNodeId(const string& _instNodeId)
{
    m_instNodeId = _instNodeId;
    m_instNodeIdHasBeenSet = true;
}

bool ProxyInst::InstNodeIdHasBeenSet() const
{
    return m_instNodeIdHasBeenSet;
}

string ProxyInst::GetInstNodeRole() const
{
    return m_instNodeRole;
}

void ProxyInst::SetInstNodeRole(const string& _instNodeRole)
{
    m_instNodeRole = _instNodeRole;
    m_instNodeRoleHasBeenSet = true;
}

bool ProxyInst::InstNodeRoleHasBeenSet() const
{
    return m_instNodeRoleHasBeenSet;
}

