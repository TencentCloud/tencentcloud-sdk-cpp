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

#include <tencentcloud/tcss/v20201101/model/UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest() :
    m_clusterIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::ToJsonString() const
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


string UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::GetId() const
{
    return m_id;
}

void UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::GetYaml() const
{
    return m_yaml;
}

void UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

string UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::GetDescription() const
{
    return m_description;
}

void UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


