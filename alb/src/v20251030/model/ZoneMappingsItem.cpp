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

#include <tencentcloud/alb/v20251030/model/ZoneMappingsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ZoneMappingsItem::ZoneMappingsItem() :
    m_subnetIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_loadBalancerAddressHasBeenSet(false)
{
}

CoreInternalOutcome ZoneMappingsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingsItem.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingsItem.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerAddress") && !value["LoadBalancerAddress"].IsNull())
    {
        if (!value["LoadBalancerAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingsItem.LoadBalancerAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancerAddress.Deserialize(value["LoadBalancerAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneMappingsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancerAddress.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ZoneMappingsItem::GetSubnetId() const
{
    return m_subnetId;
}

void ZoneMappingsItem::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ZoneMappingsItem::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ZoneMappingsItem::GetZoneId() const
{
    return m_zoneId;
}

void ZoneMappingsItem::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneMappingsItem::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

LoadBalancerAddress ZoneMappingsItem::GetLoadBalancerAddress() const
{
    return m_loadBalancerAddress;
}

void ZoneMappingsItem::SetLoadBalancerAddress(const LoadBalancerAddress& _loadBalancerAddress)
{
    m_loadBalancerAddress = _loadBalancerAddress;
    m_loadBalancerAddressHasBeenSet = true;
}

bool ZoneMappingsItem::LoadBalancerAddressHasBeenSet() const
{
    return m_loadBalancerAddressHasBeenSet;
}

