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

#include <tencentcloud/tcss/v20201101/model/AddAndPublishNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddAndPublishNetworkFirewallPolicyYamlDetailRequest::AddAndPublishNetworkFirewallPolicyYamlDetailRequest() :
    m_clusterIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string AddAndPublishNetworkFirewallPolicyYamlDetailRequest::ToJsonString() const
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

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAndPublishNetworkFirewallPolicyYamlDetailRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddAndPublishNetworkFirewallPolicyYamlDetailRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddAndPublishNetworkFirewallPolicyYamlDetailRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AddAndPublishNetworkFirewallPolicyYamlDetailRequest::GetPolicyName() const
{
    return m_policyName;
}

void AddAndPublishNetworkFirewallPolicyYamlDetailRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AddAndPublishNetworkFirewallPolicyYamlDetailRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AddAndPublishNetworkFirewallPolicyYamlDetailRequest::GetYaml() const
{
    return m_yaml;
}

void AddAndPublishNetworkFirewallPolicyYamlDetailRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool AddAndPublishNetworkFirewallPolicyYamlDetailRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

string AddAndPublishNetworkFirewallPolicyYamlDetailRequest::GetDescription() const
{
    return m_description;
}

void AddAndPublishNetworkFirewallPolicyYamlDetailRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddAndPublishNetworkFirewallPolicyYamlDetailRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


