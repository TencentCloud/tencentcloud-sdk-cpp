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

#include <tencentcloud/emr/v20190103/model/TopologySpreadConstraint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TopologySpreadConstraint::TopologySpreadConstraint() :
    m_maxSkewHasBeenSet(false),
    m_topologyKeyHasBeenSet(false),
    m_whenUnsatisfiableHasBeenSet(false),
    m_labelSelectorHasBeenSet(false),
    m_minDomainsHasBeenSet(false),
    m_nodeAffinityPolicyHasBeenSet(false),
    m_nodeTaintsPolicyHasBeenSet(false),
    m_matchLabelKeysHasBeenSet(false)
{
}

CoreInternalOutcome TopologySpreadConstraint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxSkew") && !value["MaxSkew"].IsNull())
    {
        if (!value["MaxSkew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.MaxSkew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSkew = value["MaxSkew"].GetInt64();
        m_maxSkewHasBeenSet = true;
    }

    if (value.HasMember("TopologyKey") && !value["TopologyKey"].IsNull())
    {
        if (!value["TopologyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.TopologyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topologyKey = string(value["TopologyKey"].GetString());
        m_topologyKeyHasBeenSet = true;
    }

    if (value.HasMember("WhenUnsatisfiable") && !value["WhenUnsatisfiable"].IsNull())
    {
        if (!value["WhenUnsatisfiable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.WhenUnsatisfiable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whenUnsatisfiable = string(value["WhenUnsatisfiable"].GetString());
        m_whenUnsatisfiableHasBeenSet = true;
    }

    if (value.HasMember("LabelSelector") && !value["LabelSelector"].IsNull())
    {
        if (!value["LabelSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.LabelSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_labelSelector.Deserialize(value["LabelSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelSelectorHasBeenSet = true;
    }

    if (value.HasMember("MinDomains") && !value["MinDomains"].IsNull())
    {
        if (!value["MinDomains"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.MinDomains` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDomains = value["MinDomains"].GetInt64();
        m_minDomainsHasBeenSet = true;
    }

    if (value.HasMember("NodeAffinityPolicy") && !value["NodeAffinityPolicy"].IsNull())
    {
        if (!value["NodeAffinityPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.NodeAffinityPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeAffinityPolicy = string(value["NodeAffinityPolicy"].GetString());
        m_nodeAffinityPolicyHasBeenSet = true;
    }

    if (value.HasMember("NodeTaintsPolicy") && !value["NodeTaintsPolicy"].IsNull())
    {
        if (!value["NodeTaintsPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.NodeTaintsPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeTaintsPolicy = string(value["NodeTaintsPolicy"].GetString());
        m_nodeTaintsPolicyHasBeenSet = true;
    }

    if (value.HasMember("MatchLabelKeys") && !value["MatchLabelKeys"].IsNull())
    {
        if (!value["MatchLabelKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopologySpreadConstraint.MatchLabelKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchLabelKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchLabelKeys.push_back((*itr).GetString());
        }
        m_matchLabelKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologySpreadConstraint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxSkewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSkew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSkew, allocator);
    }

    if (m_topologyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopologyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topologyKey.c_str(), allocator).Move(), allocator);
    }

    if (m_whenUnsatisfiableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhenUnsatisfiable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whenUnsatisfiable.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_labelSelector.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_minDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDomains, allocator);
    }

    if (m_nodeAffinityPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeAffinityPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeAffinityPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTaintsPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTaintsPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeTaintsPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_matchLabelKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchLabelKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchLabelKeys.begin(); itr != m_matchLabelKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t TopologySpreadConstraint::GetMaxSkew() const
{
    return m_maxSkew;
}

void TopologySpreadConstraint::SetMaxSkew(const int64_t& _maxSkew)
{
    m_maxSkew = _maxSkew;
    m_maxSkewHasBeenSet = true;
}

bool TopologySpreadConstraint::MaxSkewHasBeenSet() const
{
    return m_maxSkewHasBeenSet;
}

string TopologySpreadConstraint::GetTopologyKey() const
{
    return m_topologyKey;
}

void TopologySpreadConstraint::SetTopologyKey(const string& _topologyKey)
{
    m_topologyKey = _topologyKey;
    m_topologyKeyHasBeenSet = true;
}

bool TopologySpreadConstraint::TopologyKeyHasBeenSet() const
{
    return m_topologyKeyHasBeenSet;
}

string TopologySpreadConstraint::GetWhenUnsatisfiable() const
{
    return m_whenUnsatisfiable;
}

void TopologySpreadConstraint::SetWhenUnsatisfiable(const string& _whenUnsatisfiable)
{
    m_whenUnsatisfiable = _whenUnsatisfiable;
    m_whenUnsatisfiableHasBeenSet = true;
}

bool TopologySpreadConstraint::WhenUnsatisfiableHasBeenSet() const
{
    return m_whenUnsatisfiableHasBeenSet;
}

LabelSelector TopologySpreadConstraint::GetLabelSelector() const
{
    return m_labelSelector;
}

void TopologySpreadConstraint::SetLabelSelector(const LabelSelector& _labelSelector)
{
    m_labelSelector = _labelSelector;
    m_labelSelectorHasBeenSet = true;
}

bool TopologySpreadConstraint::LabelSelectorHasBeenSet() const
{
    return m_labelSelectorHasBeenSet;
}

int64_t TopologySpreadConstraint::GetMinDomains() const
{
    return m_minDomains;
}

void TopologySpreadConstraint::SetMinDomains(const int64_t& _minDomains)
{
    m_minDomains = _minDomains;
    m_minDomainsHasBeenSet = true;
}

bool TopologySpreadConstraint::MinDomainsHasBeenSet() const
{
    return m_minDomainsHasBeenSet;
}

string TopologySpreadConstraint::GetNodeAffinityPolicy() const
{
    return m_nodeAffinityPolicy;
}

void TopologySpreadConstraint::SetNodeAffinityPolicy(const string& _nodeAffinityPolicy)
{
    m_nodeAffinityPolicy = _nodeAffinityPolicy;
    m_nodeAffinityPolicyHasBeenSet = true;
}

bool TopologySpreadConstraint::NodeAffinityPolicyHasBeenSet() const
{
    return m_nodeAffinityPolicyHasBeenSet;
}

string TopologySpreadConstraint::GetNodeTaintsPolicy() const
{
    return m_nodeTaintsPolicy;
}

void TopologySpreadConstraint::SetNodeTaintsPolicy(const string& _nodeTaintsPolicy)
{
    m_nodeTaintsPolicy = _nodeTaintsPolicy;
    m_nodeTaintsPolicyHasBeenSet = true;
}

bool TopologySpreadConstraint::NodeTaintsPolicyHasBeenSet() const
{
    return m_nodeTaintsPolicyHasBeenSet;
}

vector<string> TopologySpreadConstraint::GetMatchLabelKeys() const
{
    return m_matchLabelKeys;
}

void TopologySpreadConstraint::SetMatchLabelKeys(const vector<string>& _matchLabelKeys)
{
    m_matchLabelKeys = _matchLabelKeys;
    m_matchLabelKeysHasBeenSet = true;
}

bool TopologySpreadConstraint::MatchLabelKeysHasBeenSet() const
{
    return m_matchLabelKeysHasBeenSet;
}

