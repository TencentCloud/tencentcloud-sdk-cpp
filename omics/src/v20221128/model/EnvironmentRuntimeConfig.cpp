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

#include <tencentcloud/omics/v20221128/model/EnvironmentRuntimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

EnvironmentRuntimeConfig::EnvironmentRuntimeConfig() :
    m_cromwellConfigHasBeenSet(false),
    m_nextflowConfigHasBeenSet(false)
{
}

CoreInternalOutcome EnvironmentRuntimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CromwellConfig") && !value["CromwellConfig"].IsNull())
    {
        if (!value["CromwellConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentRuntimeConfig.CromwellConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cromwellConfig.Deserialize(value["CromwellConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cromwellConfigHasBeenSet = true;
    }

    if (value.HasMember("NextflowConfig") && !value["NextflowConfig"].IsNull())
    {
        if (!value["NextflowConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentRuntimeConfig.NextflowConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nextflowConfig.Deserialize(value["NextflowConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nextflowConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvironmentRuntimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cromwellConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CromwellConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cromwellConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nextflowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextflowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nextflowConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


CromwellConfig EnvironmentRuntimeConfig::GetCromwellConfig() const
{
    return m_cromwellConfig;
}

void EnvironmentRuntimeConfig::SetCromwellConfig(const CromwellConfig& _cromwellConfig)
{
    m_cromwellConfig = _cromwellConfig;
    m_cromwellConfigHasBeenSet = true;
}

bool EnvironmentRuntimeConfig::CromwellConfigHasBeenSet() const
{
    return m_cromwellConfigHasBeenSet;
}

NextflowConfig EnvironmentRuntimeConfig::GetNextflowConfig() const
{
    return m_nextflowConfig;
}

void EnvironmentRuntimeConfig::SetNextflowConfig(const NextflowConfig& _nextflowConfig)
{
    m_nextflowConfig = _nextflowConfig;
    m_nextflowConfigHasBeenSet = true;
}

bool EnvironmentRuntimeConfig::NextflowConfigHasBeenSet() const
{
    return m_nextflowConfigHasBeenSet;
}

