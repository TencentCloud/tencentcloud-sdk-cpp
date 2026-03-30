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

#include <tencentcloud/waf/v20180125/model/PromptDetectResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PromptDetectResult::PromptDetectResult() :
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome PromptDetectResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptDetectResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromptDetectResult.Confidence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetUint64();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptDetectResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string PromptDetectResult::GetResult() const
{
    return m_result;
}

void PromptDetectResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool PromptDetectResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t PromptDetectResult::GetConfidence() const
{
    return m_confidence;
}

void PromptDetectResult::SetConfidence(const uint64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool PromptDetectResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

