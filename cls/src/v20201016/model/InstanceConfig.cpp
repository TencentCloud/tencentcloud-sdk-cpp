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

#include <tencentcloud/cls/v20201016/model/InstanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

InstanceConfig::InstanceConfig() :
    m_instanceDimensionHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceDimension") && !value["InstanceDimension"].IsNull())
    {
        if (!value["InstanceDimension"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.InstanceDimension` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDimension"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceDimension.push_back((*itr).GetString());
        }
        m_instanceDimensionHasBeenSet = true;
    }

    if (value.HasMember("Instances") && !value["Instances"].IsNull())
    {
        if (!value["Instances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Instances` is not array type"));

        const rapidjson::Value &tmpValue = value["Instances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Instance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instances.push_back(item);
        }
        m_instancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceDimension.begin(); itr != m_instanceDimension.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> InstanceConfig::GetInstanceDimension() const
{
    return m_instanceDimension;
}

void InstanceConfig::SetInstanceDimension(const vector<string>& _instanceDimension)
{
    m_instanceDimension = _instanceDimension;
    m_instanceDimensionHasBeenSet = true;
}

bool InstanceConfig::InstanceDimensionHasBeenSet() const
{
    return m_instanceDimensionHasBeenSet;
}

vector<Instance> InstanceConfig::GetInstances() const
{
    return m_instances;
}

void InstanceConfig::SetInstances(const vector<Instance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool InstanceConfig::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

