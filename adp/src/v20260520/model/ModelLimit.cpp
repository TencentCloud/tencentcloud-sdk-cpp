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

#include <tencentcloud/adp/v20260520/model/ModelLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelLimit::ModelLimit() :
    m_contextLengthDescriptionHasBeenSet(false),
    m_inputLengthLimitHasBeenSet(false),
    m_promptLengthLimitHasBeenSet(false)
{
}

CoreInternalOutcome ModelLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContextLengthDescription") && !value["ContextLengthDescription"].IsNull())
    {
        if (!value["ContextLengthDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelLimit.ContextLengthDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextLengthDescription = string(value["ContextLengthDescription"].GetString());
        m_contextLengthDescriptionHasBeenSet = true;
    }

    if (value.HasMember("InputLengthLimit") && !value["InputLengthLimit"].IsNull())
    {
        if (!value["InputLengthLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelLimit.InputLengthLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputLengthLimit = value["InputLengthLimit"].GetInt64();
        m_inputLengthLimitHasBeenSet = true;
    }

    if (value.HasMember("PromptLengthLimit") && !value["PromptLengthLimit"].IsNull())
    {
        if (!value["PromptLengthLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelLimit.PromptLengthLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptLengthLimit = value["PromptLengthLimit"].GetInt64();
        m_promptLengthLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contextLengthDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextLengthDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextLengthDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_inputLengthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputLengthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputLengthLimit, allocator);
    }

    if (m_promptLengthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptLengthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptLengthLimit, allocator);
    }

}


string ModelLimit::GetContextLengthDescription() const
{
    return m_contextLengthDescription;
}

void ModelLimit::SetContextLengthDescription(const string& _contextLengthDescription)
{
    m_contextLengthDescription = _contextLengthDescription;
    m_contextLengthDescriptionHasBeenSet = true;
}

bool ModelLimit::ContextLengthDescriptionHasBeenSet() const
{
    return m_contextLengthDescriptionHasBeenSet;
}

int64_t ModelLimit::GetInputLengthLimit() const
{
    return m_inputLengthLimit;
}

void ModelLimit::SetInputLengthLimit(const int64_t& _inputLengthLimit)
{
    m_inputLengthLimit = _inputLengthLimit;
    m_inputLengthLimitHasBeenSet = true;
}

bool ModelLimit::InputLengthLimitHasBeenSet() const
{
    return m_inputLengthLimitHasBeenSet;
}

int64_t ModelLimit::GetPromptLengthLimit() const
{
    return m_promptLengthLimit;
}

void ModelLimit::SetPromptLengthLimit(const int64_t& _promptLengthLimit)
{
    m_promptLengthLimit = _promptLengthLimit;
    m_promptLengthLimitHasBeenSet = true;
}

bool ModelLimit::PromptLengthLimitHasBeenSet() const
{
    return m_promptLengthLimitHasBeenSet;
}

