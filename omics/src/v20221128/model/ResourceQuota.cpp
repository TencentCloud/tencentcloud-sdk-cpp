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

#include <tencentcloud/omics/v20221128/model/ResourceQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ResourceQuota::ResourceQuota() :
    m_cPULimitHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_podsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPULimit") && !value["CPULimit"].IsNull())
    {
        if (!value["CPULimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceQuota.CPULimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPULimit = string(value["CPULimit"].GetString());
        m_cPULimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceQuota.MemoryLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = string(value["MemoryLimit"].GetString());
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("Pods") && !value["Pods"].IsNull())
    {
        if (!value["Pods"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceQuota.Pods` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pods = string(value["Pods"].GetString());
        m_podsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPULimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPULimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPULimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_podsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pods.c_str(), allocator).Move(), allocator);
    }

}


string ResourceQuota::GetCPULimit() const
{
    return m_cPULimit;
}

void ResourceQuota::SetCPULimit(const string& _cPULimit)
{
    m_cPULimit = _cPULimit;
    m_cPULimitHasBeenSet = true;
}

bool ResourceQuota::CPULimitHasBeenSet() const
{
    return m_cPULimitHasBeenSet;
}

string ResourceQuota::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void ResourceQuota::SetMemoryLimit(const string& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool ResourceQuota::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

string ResourceQuota::GetPods() const
{
    return m_pods;
}

void ResourceQuota::SetPods(const string& _pods)
{
    m_pods = _pods;
    m_podsHasBeenSet = true;
}

bool ResourceQuota::PodsHasBeenSet() const
{
    return m_podsHasBeenSet;
}

