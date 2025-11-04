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

#include <tencentcloud/omics/v20221128/model/CromwellConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

CromwellConfig::CromwellConfig() :
    m_maxConcurrentWorkflowsHasBeenSet(false),
    m_concurrentJobLimitHasBeenSet(false)
{
}

CoreInternalOutcome CromwellConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxConcurrentWorkflows") && !value["MaxConcurrentWorkflows"].IsNull())
    {
        if (!value["MaxConcurrentWorkflows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CromwellConfig.MaxConcurrentWorkflows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentWorkflows = value["MaxConcurrentWorkflows"].GetUint64();
        m_maxConcurrentWorkflowsHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentJobLimit") && !value["ConcurrentJobLimit"].IsNull())
    {
        if (!value["ConcurrentJobLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CromwellConfig.ConcurrentJobLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentJobLimit = value["ConcurrentJobLimit"].GetUint64();
        m_concurrentJobLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CromwellConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxConcurrentWorkflowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentWorkflows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentWorkflows, allocator);
    }

    if (m_concurrentJobLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentJobLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentJobLimit, allocator);
    }

}


uint64_t CromwellConfig::GetMaxConcurrentWorkflows() const
{
    return m_maxConcurrentWorkflows;
}

void CromwellConfig::SetMaxConcurrentWorkflows(const uint64_t& _maxConcurrentWorkflows)
{
    m_maxConcurrentWorkflows = _maxConcurrentWorkflows;
    m_maxConcurrentWorkflowsHasBeenSet = true;
}

bool CromwellConfig::MaxConcurrentWorkflowsHasBeenSet() const
{
    return m_maxConcurrentWorkflowsHasBeenSet;
}

uint64_t CromwellConfig::GetConcurrentJobLimit() const
{
    return m_concurrentJobLimit;
}

void CromwellConfig::SetConcurrentJobLimit(const uint64_t& _concurrentJobLimit)
{
    m_concurrentJobLimit = _concurrentJobLimit;
    m_concurrentJobLimitHasBeenSet = true;
}

bool CromwellConfig::ConcurrentJobLimitHasBeenSet() const
{
    return m_concurrentJobLimitHasBeenSet;
}

