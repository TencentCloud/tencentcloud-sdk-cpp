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

#include <tencentcloud/clb/v20180317/model/CoefficientTierCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CoefficientTierCondition::CoefficientTierCondition() :
    m_inputTokensAboveHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome CoefficientTierCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokensAbove") && !value["InputTokensAbove"].IsNull())
    {
        if (!value["InputTokensAbove"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientTierCondition.InputTokensAbove` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokensAbove = value["InputTokensAbove"].GetUint64();
        m_inputTokensAboveHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientTierCondition.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoefficientTierCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTokensAboveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokensAbove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokensAbove, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CoefficientTierCondition::GetInputTokensAbove() const
{
    return m_inputTokensAbove;
}

void CoefficientTierCondition::SetInputTokensAbove(const uint64_t& _inputTokensAbove)
{
    m_inputTokensAbove = _inputTokensAbove;
    m_inputTokensAboveHasBeenSet = true;
}

bool CoefficientTierCondition::InputTokensAboveHasBeenSet() const
{
    return m_inputTokensAboveHasBeenSet;
}

string CoefficientTierCondition::GetResolution() const
{
    return m_resolution;
}

void CoefficientTierCondition::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool CoefficientTierCondition::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

