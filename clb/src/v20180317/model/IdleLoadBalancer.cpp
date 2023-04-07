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

#include <tencentcloud/clb/v20180317/model/IdleLoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

IdleLoadBalancer::IdleLoadBalancer() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_idleReasonHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_forwardHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome IdleLoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("IdleReason") && !value["IdleReason"].IsNull())
    {
        if (!value["IdleReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.IdleReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleReason = string(value["IdleReason"].GetString());
        m_idleReasonHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Forward") && !value["Forward"].IsNull())
    {
        if (!value["Forward"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.Forward` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forward = value["Forward"].GetUint64();
        m_forwardHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleLoadBalancer.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdleLoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_idleReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleReason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_forwardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Forward";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forward, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string IdleLoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void IdleLoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool IdleLoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string IdleLoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void IdleLoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool IdleLoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string IdleLoadBalancer::GetRegion() const
{
    return m_region;
}

void IdleLoadBalancer::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IdleLoadBalancer::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string IdleLoadBalancer::GetVip() const
{
    return m_vip;
}

void IdleLoadBalancer::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool IdleLoadBalancer::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string IdleLoadBalancer::GetIdleReason() const
{
    return m_idleReason;
}

void IdleLoadBalancer::SetIdleReason(const string& _idleReason)
{
    m_idleReason = _idleReason;
    m_idleReasonHasBeenSet = true;
}

bool IdleLoadBalancer::IdleReasonHasBeenSet() const
{
    return m_idleReasonHasBeenSet;
}

uint64_t IdleLoadBalancer::GetStatus() const
{
    return m_status;
}

void IdleLoadBalancer::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IdleLoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t IdleLoadBalancer::GetForward() const
{
    return m_forward;
}

void IdleLoadBalancer::SetForward(const uint64_t& _forward)
{
    m_forward = _forward;
    m_forwardHasBeenSet = true;
}

bool IdleLoadBalancer::ForwardHasBeenSet() const
{
    return m_forwardHasBeenSet;
}

string IdleLoadBalancer::GetDomain() const
{
    return m_domain;
}

void IdleLoadBalancer::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool IdleLoadBalancer::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

