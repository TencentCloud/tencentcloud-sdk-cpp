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

#include <tencentcloud/dlc/v20210125/model/ResourceSaleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceSaleInfo::ResourceSaleInfo() :
    m_resourceSpecHasBeenSet(false),
    m_stepHasBeenSet(false),
    m_maxSpecHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSaleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSaleInfo.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSaleInfo.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("MaxSpec") && !value["MaxSpec"].IsNull())
    {
        if (!value["MaxSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSaleInfo.MaxSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSpec = value["MaxSpec"].GetInt64();
        m_maxSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSaleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

    if (m_maxSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSpec, allocator);
    }

}


ResourceSpec ResourceSaleInfo::GetResourceSpec() const
{
    return m_resourceSpec;
}

void ResourceSaleInfo::SetResourceSpec(const ResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool ResourceSaleInfo::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

int64_t ResourceSaleInfo::GetStep() const
{
    return m_step;
}

void ResourceSaleInfo::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool ResourceSaleInfo::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

int64_t ResourceSaleInfo::GetMaxSpec() const
{
    return m_maxSpec;
}

void ResourceSaleInfo::SetMaxSpec(const int64_t& _maxSpec)
{
    m_maxSpec = _maxSpec;
    m_maxSpecHasBeenSet = true;
}

bool ResourceSaleInfo::MaxSpecHasBeenSet() const
{
    return m_maxSpecHasBeenSet;
}

