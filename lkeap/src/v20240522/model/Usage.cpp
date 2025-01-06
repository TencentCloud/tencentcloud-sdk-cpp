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

#include <tencentcloud/lkeap/v20240522/model/Usage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

Usage::Usage() :
    m_totalPagesHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome Usage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalPages") && !value["TotalPages"].IsNull())
    {
        if (!value["TotalPages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.TotalPages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPages = value["TotalPages"].GetInt64();
        m_totalPagesHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.OutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetInt64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Usage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPages, allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


int64_t Usage::GetTotalPages() const
{
    return m_totalPages;
}

void Usage::SetTotalPages(const int64_t& _totalPages)
{
    m_totalPages = _totalPages;
    m_totalPagesHasBeenSet = true;
}

bool Usage::TotalPagesHasBeenSet() const
{
    return m_totalPagesHasBeenSet;
}

int64_t Usage::GetInputTokens() const
{
    return m_inputTokens;
}

void Usage::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool Usage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t Usage::GetOutputTokens() const
{
    return m_outputTokens;
}

void Usage::SetOutputTokens(const int64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool Usage::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

int64_t Usage::GetTotalTokens() const
{
    return m_totalTokens;
}

void Usage::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool Usage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

