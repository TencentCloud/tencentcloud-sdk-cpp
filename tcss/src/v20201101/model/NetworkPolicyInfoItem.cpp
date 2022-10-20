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

#include <tencentcloud/tcss/v20201101/model/NetworkPolicyInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NetworkPolicyInfoItem::NetworkPolicyInfoItem() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publishStatusHasBeenSet(false),
    m_policySourceTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_policyCreateTimeHasBeenSet(false),
    m_networkPolicyPluginHasBeenSet(false),
    m_publishResultHasBeenSet(false),
    m_fromPolicyRuleHasBeenSet(false),
    m_toPolicyRuleHasBeenSet(false),
    m_podSelectorHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome NetworkPolicyInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PublishStatus") && !value["PublishStatus"].IsNull())
    {
        if (!value["PublishStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.PublishStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishStatus = string(value["PublishStatus"].GetString());
        m_publishStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicySourceType") && !value["PolicySourceType"].IsNull())
    {
        if (!value["PolicySourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.PolicySourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policySourceType = string(value["PolicySourceType"].GetString());
        m_policySourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("PolicyCreateTime") && !value["PolicyCreateTime"].IsNull())
    {
        if (!value["PolicyCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.PolicyCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyCreateTime = string(value["PolicyCreateTime"].GetString());
        m_policyCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkPolicyPlugin") && !value["NetworkPolicyPlugin"].IsNull())
    {
        if (!value["NetworkPolicyPlugin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.NetworkPolicyPlugin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPolicyPlugin = string(value["NetworkPolicyPlugin"].GetString());
        m_networkPolicyPluginHasBeenSet = true;
    }

    if (value.HasMember("PublishResult") && !value["PublishResult"].IsNull())
    {
        if (!value["PublishResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.PublishResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishResult = string(value["PublishResult"].GetString());
        m_publishResultHasBeenSet = true;
    }

    if (value.HasMember("FromPolicyRule") && !value["FromPolicyRule"].IsNull())
    {
        if (!value["FromPolicyRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.FromPolicyRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fromPolicyRule = value["FromPolicyRule"].GetInt64();
        m_fromPolicyRuleHasBeenSet = true;
    }

    if (value.HasMember("ToPolicyRule") && !value["ToPolicyRule"].IsNull())
    {
        if (!value["ToPolicyRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.ToPolicyRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toPolicyRule = value["ToPolicyRule"].GetInt64();
        m_toPolicyRuleHasBeenSet = true;
    }

    if (value.HasMember("PodSelector") && !value["PodSelector"].IsNull())
    {
        if (!value["PodSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.PodSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podSelector = string(value["PodSelector"].GetString());
        m_podSelectorHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPolicyInfoItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkPolicyInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_publishStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_policySourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policySourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_policyCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPolicyPluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPolicyPlugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPolicyPlugin.c_str(), allocator).Move(), allocator);
    }

    if (m_publishResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishResult.c_str(), allocator).Move(), allocator);
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

    if (m_podSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string NetworkPolicyInfoItem::GetName() const
{
    return m_name;
}

void NetworkPolicyInfoItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NetworkPolicyInfoItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NetworkPolicyInfoItem::GetDescription() const
{
    return m_description;
}

void NetworkPolicyInfoItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NetworkPolicyInfoItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NetworkPolicyInfoItem::GetPublishStatus() const
{
    return m_publishStatus;
}

void NetworkPolicyInfoItem::SetPublishStatus(const string& _publishStatus)
{
    m_publishStatus = _publishStatus;
    m_publishStatusHasBeenSet = true;
}

bool NetworkPolicyInfoItem::PublishStatusHasBeenSet() const
{
    return m_publishStatusHasBeenSet;
}

string NetworkPolicyInfoItem::GetPolicySourceType() const
{
    return m_policySourceType;
}

void NetworkPolicyInfoItem::SetPolicySourceType(const string& _policySourceType)
{
    m_policySourceType = _policySourceType;
    m_policySourceTypeHasBeenSet = true;
}

bool NetworkPolicyInfoItem::PolicySourceTypeHasBeenSet() const
{
    return m_policySourceTypeHasBeenSet;
}

string NetworkPolicyInfoItem::GetNamespace() const
{
    return m_namespace;
}

void NetworkPolicyInfoItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NetworkPolicyInfoItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NetworkPolicyInfoItem::GetPolicyCreateTime() const
{
    return m_policyCreateTime;
}

void NetworkPolicyInfoItem::SetPolicyCreateTime(const string& _policyCreateTime)
{
    m_policyCreateTime = _policyCreateTime;
    m_policyCreateTimeHasBeenSet = true;
}

bool NetworkPolicyInfoItem::PolicyCreateTimeHasBeenSet() const
{
    return m_policyCreateTimeHasBeenSet;
}

string NetworkPolicyInfoItem::GetNetworkPolicyPlugin() const
{
    return m_networkPolicyPlugin;
}

void NetworkPolicyInfoItem::SetNetworkPolicyPlugin(const string& _networkPolicyPlugin)
{
    m_networkPolicyPlugin = _networkPolicyPlugin;
    m_networkPolicyPluginHasBeenSet = true;
}

bool NetworkPolicyInfoItem::NetworkPolicyPluginHasBeenSet() const
{
    return m_networkPolicyPluginHasBeenSet;
}

string NetworkPolicyInfoItem::GetPublishResult() const
{
    return m_publishResult;
}

void NetworkPolicyInfoItem::SetPublishResult(const string& _publishResult)
{
    m_publishResult = _publishResult;
    m_publishResultHasBeenSet = true;
}

bool NetworkPolicyInfoItem::PublishResultHasBeenSet() const
{
    return m_publishResultHasBeenSet;
}

int64_t NetworkPolicyInfoItem::GetFromPolicyRule() const
{
    return m_fromPolicyRule;
}

void NetworkPolicyInfoItem::SetFromPolicyRule(const int64_t& _fromPolicyRule)
{
    m_fromPolicyRule = _fromPolicyRule;
    m_fromPolicyRuleHasBeenSet = true;
}

bool NetworkPolicyInfoItem::FromPolicyRuleHasBeenSet() const
{
    return m_fromPolicyRuleHasBeenSet;
}

int64_t NetworkPolicyInfoItem::GetToPolicyRule() const
{
    return m_toPolicyRule;
}

void NetworkPolicyInfoItem::SetToPolicyRule(const int64_t& _toPolicyRule)
{
    m_toPolicyRule = _toPolicyRule;
    m_toPolicyRuleHasBeenSet = true;
}

bool NetworkPolicyInfoItem::ToPolicyRuleHasBeenSet() const
{
    return m_toPolicyRuleHasBeenSet;
}

string NetworkPolicyInfoItem::GetPodSelector() const
{
    return m_podSelector;
}

void NetworkPolicyInfoItem::SetPodSelector(const string& _podSelector)
{
    m_podSelector = _podSelector;
    m_podSelectorHasBeenSet = true;
}

bool NetworkPolicyInfoItem::PodSelectorHasBeenSet() const
{
    return m_podSelectorHasBeenSet;
}

uint64_t NetworkPolicyInfoItem::GetId() const
{
    return m_id;
}

void NetworkPolicyInfoItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NetworkPolicyInfoItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

