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

#include <tencentcloud/iecp/v20210914/model/HorizontalPodAutoscaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

HorizontalPodAutoscaler::HorizontalPodAutoscaler() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_resourceMetricTargetHasBeenSet(false)
{
}

CoreInternalOutcome HorizontalPodAutoscaler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("ResourceMetricTarget") && !value["ResourceMetricTarget"].IsNull())
    {
        if (!value["ResourceMetricTarget"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.ResourceMetricTarget` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceMetricTarget"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceMetricTarget item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceMetricTarget.push_back(item);
        }
        m_resourceMetricTargetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HorizontalPodAutoscaler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_resourceMetricTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMetricTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceMetricTarget.begin(); itr != m_resourceMetricTarget.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HorizontalPodAutoscaler::GetName() const
{
    return m_name;
}

void HorizontalPodAutoscaler::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HorizontalPodAutoscaler::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HorizontalPodAutoscaler::GetNamespace() const
{
    return m_namespace;
}

void HorizontalPodAutoscaler::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool HorizontalPodAutoscaler::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t HorizontalPodAutoscaler::GetMinReplicas() const
{
    return m_minReplicas;
}

void HorizontalPodAutoscaler::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool HorizontalPodAutoscaler::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t HorizontalPodAutoscaler::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void HorizontalPodAutoscaler::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool HorizontalPodAutoscaler::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

vector<ResourceMetricTarget> HorizontalPodAutoscaler::GetResourceMetricTarget() const
{
    return m_resourceMetricTarget;
}

void HorizontalPodAutoscaler::SetResourceMetricTarget(const vector<ResourceMetricTarget>& _resourceMetricTarget)
{
    m_resourceMetricTarget = _resourceMetricTarget;
    m_resourceMetricTargetHasBeenSet = true;
}

bool HorizontalPodAutoscaler::ResourceMetricTargetHasBeenSet() const
{
    return m_resourceMetricTargetHasBeenSet;
}

