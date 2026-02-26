/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vpc/v20170312/model/CcnPolicyBasedRoutingNextHop.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnPolicyBasedRoutingNextHop::CcnPolicyBasedRoutingNextHop() :
    m_policyBasedRoutingNextHopIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextHopRegionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nextHopResourceTypeHasBeenSet(false),
    m_nextHopResourceIdHasBeenSet(false),
    m_nextHopIpHasBeenSet(false),
    m_policyBasedRoutingRulesCountHasBeenSet(false)
{
}

CoreInternalOutcome CcnPolicyBasedRoutingNextHop::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyBasedRoutingNextHopId") && !value["PolicyBasedRoutingNextHopId"].IsNull())
    {
        if (!value["PolicyBasedRoutingNextHopId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.PolicyBasedRoutingNextHopId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyBasedRoutingNextHopId = string(value["PolicyBasedRoutingNextHopId"].GetString());
        m_policyBasedRoutingNextHopIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NextHopRegion") && !value["NextHopRegion"].IsNull())
    {
        if (!value["NextHopRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.NextHopRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopRegion = string(value["NextHopRegion"].GetString());
        m_nextHopRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("NextHopResourceType") && !value["NextHopResourceType"].IsNull())
    {
        if (!value["NextHopResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.NextHopResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopResourceType = string(value["NextHopResourceType"].GetString());
        m_nextHopResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("NextHopResourceId") && !value["NextHopResourceId"].IsNull())
    {
        if (!value["NextHopResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.NextHopResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopResourceId = string(value["NextHopResourceId"].GetString());
        m_nextHopResourceIdHasBeenSet = true;
    }

    if (value.HasMember("NextHopIp") && !value["NextHopIp"].IsNull())
    {
        if (!value["NextHopIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.NextHopIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopIp = string(value["NextHopIp"].GetString());
        m_nextHopIpHasBeenSet = true;
    }

    if (value.HasMember("PolicyBasedRoutingRulesCount") && !value["PolicyBasedRoutingRulesCount"].IsNull())
    {
        if (!value["PolicyBasedRoutingRulesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnPolicyBasedRoutingNextHop.PolicyBasedRoutingRulesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyBasedRoutingRulesCount = value["PolicyBasedRoutingRulesCount"].GetInt64();
        m_policyBasedRoutingRulesCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnPolicyBasedRoutingNextHop::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyBasedRoutingNextHopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyBasedRoutingNextHopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyBasedRoutingNextHopId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopIp.c_str(), allocator).Move(), allocator);
    }

    if (m_policyBasedRoutingRulesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyBasedRoutingRulesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyBasedRoutingRulesCount, allocator);
    }

}


string CcnPolicyBasedRoutingNextHop::GetPolicyBasedRoutingNextHopId() const
{
    return m_policyBasedRoutingNextHopId;
}

void CcnPolicyBasedRoutingNextHop::SetPolicyBasedRoutingNextHopId(const string& _policyBasedRoutingNextHopId)
{
    m_policyBasedRoutingNextHopId = _policyBasedRoutingNextHopId;
    m_policyBasedRoutingNextHopIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::PolicyBasedRoutingNextHopIdHasBeenSet() const
{
    return m_policyBasedRoutingNextHopIdHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetName() const
{
    return m_name;
}

void CcnPolicyBasedRoutingNextHop::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetNextHopRegion() const
{
    return m_nextHopRegion;
}

void CcnPolicyBasedRoutingNextHop::SetNextHopRegion(const string& _nextHopRegion)
{
    m_nextHopRegion = _nextHopRegion;
    m_nextHopRegionHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::NextHopRegionHasBeenSet() const
{
    return m_nextHopRegionHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetInstanceId() const
{
    return m_instanceId;
}

void CcnPolicyBasedRoutingNextHop::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetZone() const
{
    return m_zone;
}

void CcnPolicyBasedRoutingNextHop::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetState() const
{
    return m_state;
}

void CcnPolicyBasedRoutingNextHop::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetDescription() const
{
    return m_description;
}

void CcnPolicyBasedRoutingNextHop::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetInstanceType() const
{
    return m_instanceType;
}

void CcnPolicyBasedRoutingNextHop::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetNextHopResourceType() const
{
    return m_nextHopResourceType;
}

void CcnPolicyBasedRoutingNextHop::SetNextHopResourceType(const string& _nextHopResourceType)
{
    m_nextHopResourceType = _nextHopResourceType;
    m_nextHopResourceTypeHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::NextHopResourceTypeHasBeenSet() const
{
    return m_nextHopResourceTypeHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetNextHopResourceId() const
{
    return m_nextHopResourceId;
}

void CcnPolicyBasedRoutingNextHop::SetNextHopResourceId(const string& _nextHopResourceId)
{
    m_nextHopResourceId = _nextHopResourceId;
    m_nextHopResourceIdHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::NextHopResourceIdHasBeenSet() const
{
    return m_nextHopResourceIdHasBeenSet;
}

string CcnPolicyBasedRoutingNextHop::GetNextHopIp() const
{
    return m_nextHopIp;
}

void CcnPolicyBasedRoutingNextHop::SetNextHopIp(const string& _nextHopIp)
{
    m_nextHopIp = _nextHopIp;
    m_nextHopIpHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::NextHopIpHasBeenSet() const
{
    return m_nextHopIpHasBeenSet;
}

int64_t CcnPolicyBasedRoutingNextHop::GetPolicyBasedRoutingRulesCount() const
{
    return m_policyBasedRoutingRulesCount;
}

void CcnPolicyBasedRoutingNextHop::SetPolicyBasedRoutingRulesCount(const int64_t& _policyBasedRoutingRulesCount)
{
    m_policyBasedRoutingRulesCount = _policyBasedRoutingRulesCount;
    m_policyBasedRoutingRulesCountHasBeenSet = true;
}

bool CcnPolicyBasedRoutingNextHop::PolicyBasedRoutingRulesCountHasBeenSet() const
{
    return m_policyBasedRoutingRulesCountHasBeenSet;
}

