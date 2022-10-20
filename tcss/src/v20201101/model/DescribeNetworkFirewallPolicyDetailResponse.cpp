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

#include <tencentcloud/tcss/v20201101/model/DescribeNetworkFirewallPolicyDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeNetworkFirewallPolicyDetailResponse::DescribeNetworkFirewallPolicyDetailResponse() :
    m_clusterIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_fromPolicyRuleHasBeenSet(false),
    m_toPolicyRuleHasBeenSet(false),
    m_customPolicyHasBeenSet(false),
    m_podSelectorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyCreateTimeHasBeenSet(false),
    m_policySourceTypeHasBeenSet(false),
    m_networkPolicyPluginHasBeenSet(false),
    m_publishStatusHasBeenSet(false),
    m_publishResultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNetworkFirewallPolicyDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyName") && !rsp["PolicyName"].IsNull())
    {
        if (!rsp["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(rsp["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("FromPolicyRule") && !rsp["FromPolicyRule"].IsNull())
    {
        if (!rsp["FromPolicyRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FromPolicyRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fromPolicyRule = rsp["FromPolicyRule"].GetInt64();
        m_fromPolicyRuleHasBeenSet = true;
    }

    if (rsp.HasMember("ToPolicyRule") && !rsp["ToPolicyRule"].IsNull())
    {
        if (!rsp["ToPolicyRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ToPolicyRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toPolicyRule = rsp["ToPolicyRule"].GetInt64();
        m_toPolicyRuleHasBeenSet = true;
    }

    if (rsp.HasMember("CustomPolicy") && !rsp["CustomPolicy"].IsNull())
    {
        if (!rsp["CustomPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPolicy` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkCustomPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customPolicy.push_back(item);
        }
        m_customPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("PodSelector") && !rsp["PodSelector"].IsNull())
    {
        if (!rsp["PodSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podSelector = string(rsp["PodSelector"].GetString());
        m_podSelectorHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyCreateTime") && !rsp["PolicyCreateTime"].IsNull())
    {
        if (!rsp["PolicyCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyCreateTime = string(rsp["PolicyCreateTime"].GetString());
        m_policyCreateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PolicySourceType") && !rsp["PolicySourceType"].IsNull())
    {
        if (!rsp["PolicySourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicySourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policySourceType = string(rsp["PolicySourceType"].GetString());
        m_policySourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkPolicyPlugin") && !rsp["NetworkPolicyPlugin"].IsNull())
    {
        if (!rsp["NetworkPolicyPlugin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyPlugin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPolicyPlugin = string(rsp["NetworkPolicyPlugin"].GetString());
        m_networkPolicyPluginHasBeenSet = true;
    }

    if (rsp.HasMember("PublishStatus") && !rsp["PublishStatus"].IsNull())
    {
        if (!rsp["PublishStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishStatus = string(rsp["PublishStatus"].GetString());
        m_publishStatusHasBeenSet = true;
    }

    if (rsp.HasMember("PublishResult") && !rsp["PublishResult"].IsNull())
    {
        if (!rsp["PublishResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishResult = string(rsp["PublishResult"].GetString());
        m_publishResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNetworkFirewallPolicyDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_fromPolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromPolicyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromPolicyRule, allocator);
    }

    if (m_toPolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToPolicyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toPolicyRule, allocator);
    }

    if (m_customPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customPolicy.begin(); itr != m_customPolicy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_podSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_policyCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policySourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policySourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPolicyPluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPolicyPlugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPolicyPlugin.c_str(), allocator).Move(), allocator);
    }

    if (m_publishStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publishResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishResult.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeNetworkFirewallPolicyDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeNetworkFirewallPolicyDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPolicyName() const
{
    return m_policyName;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeNetworkFirewallPolicyDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t DescribeNetworkFirewallPolicyDetailResponse::GetFromPolicyRule() const
{
    return m_fromPolicyRule;
}

bool DescribeNetworkFirewallPolicyDetailResponse::FromPolicyRuleHasBeenSet() const
{
    return m_fromPolicyRuleHasBeenSet;
}

int64_t DescribeNetworkFirewallPolicyDetailResponse::GetToPolicyRule() const
{
    return m_toPolicyRule;
}

bool DescribeNetworkFirewallPolicyDetailResponse::ToPolicyRuleHasBeenSet() const
{
    return m_toPolicyRuleHasBeenSet;
}

vector<NetworkCustomPolicy> DescribeNetworkFirewallPolicyDetailResponse::GetCustomPolicy() const
{
    return m_customPolicy;
}

bool DescribeNetworkFirewallPolicyDetailResponse::CustomPolicyHasBeenSet() const
{
    return m_customPolicyHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPodSelector() const
{
    return m_podSelector;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PodSelectorHasBeenSet() const
{
    return m_podSelectorHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeNetworkFirewallPolicyDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPolicyCreateTime() const
{
    return m_policyCreateTime;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PolicyCreateTimeHasBeenSet() const
{
    return m_policyCreateTimeHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPolicySourceType() const
{
    return m_policySourceType;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PolicySourceTypeHasBeenSet() const
{
    return m_policySourceTypeHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetNetworkPolicyPlugin() const
{
    return m_networkPolicyPlugin;
}

bool DescribeNetworkFirewallPolicyDetailResponse::NetworkPolicyPluginHasBeenSet() const
{
    return m_networkPolicyPluginHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPublishStatus() const
{
    return m_publishStatus;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PublishStatusHasBeenSet() const
{
    return m_publishStatusHasBeenSet;
}

string DescribeNetworkFirewallPolicyDetailResponse::GetPublishResult() const
{
    return m_publishResult;
}

bool DescribeNetworkFirewallPolicyDetailResponse::PublishResultHasBeenSet() const
{
    return m_publishResultHasBeenSet;
}


