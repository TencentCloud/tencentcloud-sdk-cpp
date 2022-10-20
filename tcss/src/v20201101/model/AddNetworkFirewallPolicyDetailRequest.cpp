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

#include <tencentcloud/tcss/v20201101/model/AddNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddNetworkFirewallPolicyDetailRequest::AddNetworkFirewallPolicyDetailRequest() :
    m_clusterIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_fromPolicyRuleHasBeenSet(false),
    m_toPolicyRuleHasBeenSet(false),
    m_podSelectorHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_customPolicyHasBeenSet(false)
{
}

string AddNetworkFirewallPolicyDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromPolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromPolicyRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fromPolicyRule, allocator);
    }

    if (m_toPolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToPolicyRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toPolicyRule, allocator);
    }

    if (m_podSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSelector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_customPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customPolicy.begin(); itr != m_customPolicy.end(); ++itr, ++i)
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


string AddNetworkFirewallPolicyDetailRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddNetworkFirewallPolicyDetailRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AddNetworkFirewallPolicyDetailRequest::GetPolicyName() const
{
    return m_policyName;
}

void AddNetworkFirewallPolicyDetailRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t AddNetworkFirewallPolicyDetailRequest::GetFromPolicyRule() const
{
    return m_fromPolicyRule;
}

void AddNetworkFirewallPolicyDetailRequest::SetFromPolicyRule(const int64_t& _fromPolicyRule)
{
    m_fromPolicyRule = _fromPolicyRule;
    m_fromPolicyRuleHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::FromPolicyRuleHasBeenSet() const
{
    return m_fromPolicyRuleHasBeenSet;
}

int64_t AddNetworkFirewallPolicyDetailRequest::GetToPolicyRule() const
{
    return m_toPolicyRule;
}

void AddNetworkFirewallPolicyDetailRequest::SetToPolicyRule(const int64_t& _toPolicyRule)
{
    m_toPolicyRule = _toPolicyRule;
    m_toPolicyRuleHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::ToPolicyRuleHasBeenSet() const
{
    return m_toPolicyRuleHasBeenSet;
}

string AddNetworkFirewallPolicyDetailRequest::GetPodSelector() const
{
    return m_podSelector;
}

void AddNetworkFirewallPolicyDetailRequest::SetPodSelector(const string& _podSelector)
{
    m_podSelector = _podSelector;
    m_podSelectorHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::PodSelectorHasBeenSet() const
{
    return m_podSelectorHasBeenSet;
}

string AddNetworkFirewallPolicyDetailRequest::GetNamespace() const
{
    return m_namespace;
}

void AddNetworkFirewallPolicyDetailRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AddNetworkFirewallPolicyDetailRequest::GetDescription() const
{
    return m_description;
}

void AddNetworkFirewallPolicyDetailRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<NetworkCustomPolicy> AddNetworkFirewallPolicyDetailRequest::GetCustomPolicy() const
{
    return m_customPolicy;
}

void AddNetworkFirewallPolicyDetailRequest::SetCustomPolicy(const vector<NetworkCustomPolicy>& _customPolicy)
{
    m_customPolicy = _customPolicy;
    m_customPolicyHasBeenSet = true;
}

bool AddNetworkFirewallPolicyDetailRequest::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}


