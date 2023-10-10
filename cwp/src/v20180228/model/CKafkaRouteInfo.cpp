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

#include <tencentcloud/cwp/v20180228/model/CKafkaRouteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CKafkaRouteInfo::CKafkaRouteInfo() :
    m_routeIDHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainPortHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_accessTypeHasBeenSet(false)
{
}

CoreInternalOutcome CKafkaRouteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteID") && !value["RouteID"].IsNull())
    {
        if (!value["RouteID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.RouteID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routeID = value["RouteID"].GetInt64();
        m_routeIDHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainPort") && !value["DomainPort"].IsNull())
    {
        if (!value["DomainPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.DomainPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainPort = value["DomainPort"].GetUint64();
        m_domainPortHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VipType") && !value["VipType"].IsNull())
    {
        if (!value["VipType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.VipType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vipType = value["VipType"].GetInt64();
        m_vipTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRouteInfo.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CKafkaRouteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeID, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainPort, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipType, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

}


int64_t CKafkaRouteInfo::GetRouteID() const
{
    return m_routeID;
}

void CKafkaRouteInfo::SetRouteID(const int64_t& _routeID)
{
    m_routeID = _routeID;
    m_routeIDHasBeenSet = true;
}

bool CKafkaRouteInfo::RouteIDHasBeenSet() const
{
    return m_routeIDHasBeenSet;
}

string CKafkaRouteInfo::GetDomain() const
{
    return m_domain;
}

void CKafkaRouteInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CKafkaRouteInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CKafkaRouteInfo::GetDomainPort() const
{
    return m_domainPort;
}

void CKafkaRouteInfo::SetDomainPort(const uint64_t& _domainPort)
{
    m_domainPort = _domainPort;
    m_domainPortHasBeenSet = true;
}

bool CKafkaRouteInfo::DomainPortHasBeenSet() const
{
    return m_domainPortHasBeenSet;
}

string CKafkaRouteInfo::GetVip() const
{
    return m_vip;
}

void CKafkaRouteInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CKafkaRouteInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CKafkaRouteInfo::GetVipType() const
{
    return m_vipType;
}

void CKafkaRouteInfo::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool CKafkaRouteInfo::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

int64_t CKafkaRouteInfo::GetAccessType() const
{
    return m_accessType;
}

void CKafkaRouteInfo::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CKafkaRouteInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

