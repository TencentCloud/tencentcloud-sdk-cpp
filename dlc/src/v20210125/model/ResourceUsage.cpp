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

#include <tencentcloud/dlc/v20210125/model/ResourceUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceUsage::ResourceUsage() :
    m_resourceSpecHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome ResourceUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsage.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

}


ResourceSpec ResourceUsage::GetResourceSpec() const
{
    return m_resourceSpec;
}

void ResourceUsage::SetResourceSpec(const ResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool ResourceUsage::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

int64_t ResourceUsage::GetMin() const
{
    return m_min;
}

void ResourceUsage::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ResourceUsage::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

int64_t ResourceUsage::GetMax() const
{
    return m_max;
}

void ResourceUsage::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ResourceUsage::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

