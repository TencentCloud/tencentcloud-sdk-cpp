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

#include <tencentcloud/alb/v20251030/model/CreateRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CreateRulesRequest::CreateRulesRequest() :
    m_listenerIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string CreateRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRulesRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateRulesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateRulesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateRulesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void CreateRulesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool CreateRulesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string CreateRulesRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateRulesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateRulesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool CreateRulesRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateRulesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateRulesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

vector<RuleInput> CreateRulesRequest::GetRules() const
{
    return m_rules;
}

void CreateRulesRequest::SetRules(const vector<RuleInput>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool CreateRulesRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


