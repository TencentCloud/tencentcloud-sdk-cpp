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

#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DeleteFirewallRulesRequest::DeleteFirewallRulesRequest() :
    m_instanceIdHasBeenSet(false),
    m_firewallRulesHasBeenSet(false),
    m_firewallVersionHasBeenSet(false)
{
}

string DeleteFirewallRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_firewallRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_firewallRules.begin(); itr != m_firewallRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_firewallVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_firewallVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteFirewallRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteFirewallRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteFirewallRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<FirewallRule> DeleteFirewallRulesRequest::GetFirewallRules() const
{
    return m_firewallRules;
}

void DeleteFirewallRulesRequest::SetFirewallRules(const vector<FirewallRule>& _firewallRules)
{
    m_firewallRules = _firewallRules;
    m_firewallRulesHasBeenSet = true;
}

bool DeleteFirewallRulesRequest::FirewallRulesHasBeenSet() const
{
    return m_firewallRulesHasBeenSet;
}

uint64_t DeleteFirewallRulesRequest::GetFirewallVersion() const
{
    return m_firewallVersion;
}

void DeleteFirewallRulesRequest::SetFirewallVersion(const uint64_t& _firewallVersion)
{
    m_firewallVersion = _firewallVersion;
    m_firewallVersionHasBeenSet = true;
}

bool DeleteFirewallRulesRequest::FirewallVersionHasBeenSet() const
{
    return m_firewallVersionHasBeenSet;
}


