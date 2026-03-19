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

#include <tencentcloud/hai/v20230812/model/ComputeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ComputeInfo::ComputeInfo() :
    m_computeResourcesHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

CoreInternalOutcome ComputeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeResources") && !value["ComputeResources"].IsNull())
    {
        if (!value["ComputeResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeInfo.ComputeResources` is not array type"));

        const rapidjson::Value &tmpValue = value["ComputeResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComputeResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_computeResources.push_back(item);
        }
        m_computeResourcesHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_computeResources.begin(); itr != m_computeResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

}


vector<ComputeResource> ComputeInfo::GetComputeResources() const
{
    return m_computeResources;
}

void ComputeInfo::SetComputeResources(const vector<ComputeResource>& _computeResources)
{
    m_computeResources = _computeResources;
    m_computeResourcesHasBeenSet = true;
}

bool ComputeInfo::ComputeResourcesHasBeenSet() const
{
    return m_computeResourcesHasBeenSet;
}

int64_t ComputeInfo::GetReplicas() const
{
    return m_replicas;
}

void ComputeInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ComputeInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

