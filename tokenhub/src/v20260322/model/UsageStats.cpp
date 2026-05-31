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

#include <tencentcloud/tokenhub/v20260322/model/UsageStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

UsageStats::UsageStats() :
    m_totalTokenHasBeenSet(false),
    m_inputTotalTokenHasBeenSet(false),
    m_outputTotalTokenHasBeenSet(false)
{
}

CoreInternalOutcome UsageStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalToken") && !value["TotalToken"].IsNull())
    {
        if (!value["TotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.TotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalToken = value["TotalToken"].GetInt64();
        m_totalTokenHasBeenSet = true;
    }

    if (value.HasMember("InputTotalToken") && !value["InputTotalToken"].IsNull())
    {
        if (!value["InputTotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.InputTotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTotalToken = value["InputTotalToken"].GetInt64();
        m_inputTotalTokenHasBeenSet = true;
    }

    if (value.HasMember("OutputTotalToken") && !value["OutputTotalToken"].IsNull())
    {
        if (!value["OutputTotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.OutputTotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTotalToken = value["OutputTotalToken"].GetInt64();
        m_outputTotalTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalToken, allocator);
    }

    if (m_inputTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTotalToken, allocator);
    }

    if (m_outputTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTotalToken, allocator);
    }

}


int64_t UsageStats::GetTotalToken() const
{
    return m_totalToken;
}

void UsageStats::SetTotalToken(const int64_t& _totalToken)
{
    m_totalToken = _totalToken;
    m_totalTokenHasBeenSet = true;
}

bool UsageStats::TotalTokenHasBeenSet() const
{
    return m_totalTokenHasBeenSet;
}

int64_t UsageStats::GetInputTotalToken() const
{
    return m_inputTotalToken;
}

void UsageStats::SetInputTotalToken(const int64_t& _inputTotalToken)
{
    m_inputTotalToken = _inputTotalToken;
    m_inputTotalTokenHasBeenSet = true;
}

bool UsageStats::InputTotalTokenHasBeenSet() const
{
    return m_inputTotalTokenHasBeenSet;
}

int64_t UsageStats::GetOutputTotalToken() const
{
    return m_outputTotalToken;
}

void UsageStats::SetOutputTotalToken(const int64_t& _outputTotalToken)
{
    m_outputTotalToken = _outputTotalToken;
    m_outputTotalTokenHasBeenSet = true;
}

bool UsageStats::OutputTotalTokenHasBeenSet() const
{
    return m_outputTotalTokenHasBeenSet;
}

