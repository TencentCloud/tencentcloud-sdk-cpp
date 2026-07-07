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

#include <tencentcloud/alb/v20251030/model/ZoneMappingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ZoneMappingInfo::ZoneMappingInfo() :
    m_subnetIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_loadBalancerAddressHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ZoneMappingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerAddress") && !value["LoadBalancerAddress"].IsNull())
    {
        if (!value["LoadBalancerAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingInfo.LoadBalancerAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancerAddress.Deserialize(value["LoadBalancerAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerAddressHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneMappingInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneMappingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ZoneMappingInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ZoneMappingInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ZoneMappingInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ZoneMappingInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneMappingInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneMappingInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

LoadBalancerAddress ZoneMappingInfo::GetLoadBalancerAddress() const
{
    return m_loadBalancerAddress;
}

void ZoneMappingInfo::SetLoadBalancerAddress(const LoadBalancerAddress& _loadBalancerAddress)
{
    m_loadBalancerAddress = _loadBalancerAddress;
    m_loadBalancerAddressHasBeenSet = true;
}

bool ZoneMappingInfo::LoadBalancerAddressHasBeenSet() const
{
    return m_loadBalancerAddressHasBeenSet;
}

string ZoneMappingInfo::GetStatus() const
{
    return m_status;
}

void ZoneMappingInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ZoneMappingInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

