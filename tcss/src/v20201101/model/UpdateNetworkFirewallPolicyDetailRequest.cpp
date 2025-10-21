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

#include <tencentcloud/tcss/v20201101/model/UpdateNetworkFirewallPolicyDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

UpdateNetworkFirewallPolicyDetailRequest::UpdateNetworkFirewallPolicyDetailRequest() :
    m_clusterIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fromPolicyRuleHasBeenSet(false),
    m_toPolicyRuleHasBeenSet(false),
    m_podSelectorHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_customPolicyHasBeenSet(false)
{
}

string UpdateNetworkFirewallPolicyDetailRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


string UpdateNetworkFirewallPolicyDetailRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t UpdateNetworkFirewallPolicyDetailRequest::GetId() const
{
    return m_id;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t UpdateNetworkFirewallPolicyDetailRequest::GetFromPolicyRule() const
{
    return m_fromPolicyRule;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetFromPolicyRule(const int64_t& _fromPolicyRule)
{
    m_fromPolicyRule = _fromPolicyRule;
    m_fromPolicyRuleHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::FromPolicyRuleHasBeenSet() const
{
    return m_fromPolicyRuleHasBeenSet;
}

int64_t UpdateNetworkFirewallPolicyDetailRequest::GetToPolicyRule() const
{
    return m_toPolicyRule;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetToPolicyRule(const int64_t& _toPolicyRule)
{
    m_toPolicyRule = _toPolicyRule;
    m_toPolicyRuleHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::ToPolicyRuleHasBeenSet() const
{
    return m_toPolicyRuleHasBeenSet;
}

string UpdateNetworkFirewallPolicyDetailRequest::GetPodSelector() const
{
    return m_podSelector;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetPodSelector(const string& _podSelector)
{
    m_podSelector = _podSelector;
    m_podSelectorHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::PodSelectorHasBeenSet() const
{
    return m_podSelectorHasBeenSet;
}

string UpdateNetworkFirewallPolicyDetailRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string UpdateNetworkFirewallPolicyDetailRequest::GetDescription() const
{
    return m_description;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<NetworkCustomPolicy> UpdateNetworkFirewallPolicyDetailRequest::GetCustomPolicy() const
{
    return m_customPolicy;
}

void UpdateNetworkFirewallPolicyDetailRequest::SetCustomPolicy(const vector<NetworkCustomPolicy>& _customPolicy)
{
    m_customPolicy = _customPolicy;
    m_customPolicyHasBeenSet = true;
}

bool UpdateNetworkFirewallPolicyDetailRequest::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}


