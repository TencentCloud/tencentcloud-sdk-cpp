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

#include <tencentcloud/emr/v20190103/model/PodAffinityTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodAffinityTerm::PodAffinityTerm() :
    m_labelSelectorHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_topologyKeyHasBeenSet(false),
    m_namespaceSelectorHasBeenSet(false)
{
}

CoreInternalOutcome PodAffinityTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelSelector") && !value["LabelSelector"].IsNull())
    {
        if (!value["LabelSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodAffinityTerm.LabelSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_labelSelector.Deserialize(value["LabelSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelSelectorHasBeenSet = true;
    }

    if (value.HasMember("Namespaces") && !value["Namespaces"].IsNull())
    {
        if (!value["Namespaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodAffinityTerm.Namespaces` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespaces.push_back((*itr).GetString());
        }
        m_namespacesHasBeenSet = true;
    }

    if (value.HasMember("TopologyKey") && !value["TopologyKey"].IsNull())
    {
        if (!value["TopologyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodAffinityTerm.TopologyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topologyKey = string(value["TopologyKey"].GetString());
        m_topologyKeyHasBeenSet = true;
    }

    if (value.HasMember("NamespaceSelector") && !value["NamespaceSelector"].IsNull())
    {
        if (!value["NamespaceSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodAffinityTerm.NamespaceSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_namespaceSelector.Deserialize(value["NamespaceSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_namespaceSelectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodAffinityTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_labelSelector.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_topologyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopologyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topologyKey.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_namespaceSelector.ToJsonObject(value[key.c_str()], allocator);
    }

}


LabelSelector PodAffinityTerm::GetLabelSelector() const
{
    return m_labelSelector;
}

void PodAffinityTerm::SetLabelSelector(const LabelSelector& _labelSelector)
{
    m_labelSelector = _labelSelector;
    m_labelSelectorHasBeenSet = true;
}

bool PodAffinityTerm::LabelSelectorHasBeenSet() const
{
    return m_labelSelectorHasBeenSet;
}

vector<string> PodAffinityTerm::GetNamespaces() const
{
    return m_namespaces;
}

void PodAffinityTerm::SetNamespaces(const vector<string>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool PodAffinityTerm::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

string PodAffinityTerm::GetTopologyKey() const
{
    return m_topologyKey;
}

void PodAffinityTerm::SetTopologyKey(const string& _topologyKey)
{
    m_topologyKey = _topologyKey;
    m_topologyKeyHasBeenSet = true;
}

bool PodAffinityTerm::TopologyKeyHasBeenSet() const
{
    return m_topologyKeyHasBeenSet;
}

LabelSelector PodAffinityTerm::GetNamespaceSelector() const
{
    return m_namespaceSelector;
}

void PodAffinityTerm::SetNamespaceSelector(const LabelSelector& _namespaceSelector)
{
    m_namespaceSelector = _namespaceSelector;
    m_namespaceSelectorHasBeenSet = true;
}

bool PodAffinityTerm::NamespaceSelectorHasBeenSet() const
{
    return m_namespaceSelectorHasBeenSet;
}

