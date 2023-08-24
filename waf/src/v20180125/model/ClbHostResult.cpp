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

#include <tencentcloud/waf/v20180125/model/ClbHostResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ClbHostResult::ClbHostResult() :
    m_loadBalancerHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_flowModeHasBeenSet(false)
{
}

CoreInternalOutcome ClbHostResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancer") && !value["LoadBalancer"].IsNull())
    {
        if (!value["LoadBalancer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClbHostResult.LoadBalancer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancer.Deserialize(value["LoadBalancer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbHostResult.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbHostResult.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbHostResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FlowMode") && !value["FlowMode"].IsNull())
    {
        if (!value["FlowMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbHostResult.FlowMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMode = value["FlowMode"].GetUint64();
        m_flowModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbHostResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_flowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMode, allocator);
    }

}


LoadBalancer ClbHostResult::GetLoadBalancer() const
{
    return m_loadBalancer;
}

void ClbHostResult::SetLoadBalancer(const LoadBalancer& _loadBalancer)
{
    m_loadBalancer = _loadBalancer;
    m_loadBalancerHasBeenSet = true;
}

bool ClbHostResult::LoadBalancerHasBeenSet() const
{
    return m_loadBalancerHasBeenSet;
}

string ClbHostResult::GetDomain() const
{
    return m_domain;
}

void ClbHostResult::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ClbHostResult::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ClbHostResult::GetDomainId() const
{
    return m_domainId;
}

void ClbHostResult::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ClbHostResult::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

uint64_t ClbHostResult::GetStatus() const
{
    return m_status;
}

void ClbHostResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClbHostResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ClbHostResult::GetFlowMode() const
{
    return m_flowMode;
}

void ClbHostResult::SetFlowMode(const uint64_t& _flowMode)
{
    m_flowMode = _flowMode;
    m_flowModeHasBeenSet = true;
}

bool ClbHostResult::FlowModeHasBeenSet() const
{
    return m_flowModeHasBeenSet;
}

