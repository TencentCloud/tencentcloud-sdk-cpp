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

#include <tencentcloud/tcm/v20210413/model/SelectedItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

SelectedItems::SelectedItems() :
    m_namespaceHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_gatewaysHasBeenSet(false)
{
}

CoreInternalOutcome SelectedItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedItems.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedItems.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedItems.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("Gateways") && !value["Gateways"].IsNull())
    {
        if (!value["Gateways"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SelectedItems.Gateways` is not array type"));

        const rapidjson::Value &tmpValue = value["Gateways"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_gateways.push_back((*itr).GetString());
        }
        m_gatewaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectedItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gateways";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gateways.begin(); itr != m_gateways.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SelectedItems::GetNamespace() const
{
    return m_namespace;
}

void SelectedItems::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SelectedItems::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SelectedItems::GetClusterName() const
{
    return m_clusterName;
}

void SelectedItems::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool SelectedItems::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string SelectedItems::GetItemName() const
{
    return m_itemName;
}

void SelectedItems::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool SelectedItems::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

vector<string> SelectedItems::GetGateways() const
{
    return m_gateways;
}

void SelectedItems::SetGateways(const vector<string>& _gateways)
{
    m_gateways = _gateways;
    m_gatewaysHasBeenSet = true;
}

bool SelectedItems::GatewaysHasBeenSet() const
{
    return m_gatewaysHasBeenSet;
}

