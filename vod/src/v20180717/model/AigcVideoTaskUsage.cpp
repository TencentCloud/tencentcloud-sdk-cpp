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

#include <tencentcloud/vod/v20180717/model/AigcVideoTaskUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoTaskUsage::AigcVideoTaskUsage() :
    m_inputTokensHasBeenSet(false),
    m_thoughtTokensHasBeenSet(false),
    m_inputImageCountHasBeenSet(false),
    m_inputSecondsHasBeenSet(false),
    m_outputSecondsHasBeenSet(false),
    m_totalSecondsHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoTaskUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("ThoughtTokens") && !value["ThoughtTokens"].IsNull())
    {
        if (!value["ThoughtTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.ThoughtTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thoughtTokens = value["ThoughtTokens"].GetInt64();
        m_thoughtTokensHasBeenSet = true;
    }

    if (value.HasMember("InputImageCount") && !value["InputImageCount"].IsNull())
    {
        if (!value["InputImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.InputImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputImageCount = value["InputImageCount"].GetInt64();
        m_inputImageCountHasBeenSet = true;
    }

    if (value.HasMember("InputSeconds") && !value["InputSeconds"].IsNull())
    {
        if (!value["InputSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.InputSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputSeconds = value["InputSeconds"].GetInt64();
        m_inputSecondsHasBeenSet = true;
    }

    if (value.HasMember("OutputSeconds") && !value["OutputSeconds"].IsNull())
    {
        if (!value["OutputSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.OutputSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputSeconds = value["OutputSeconds"].GetInt64();
        m_outputSecondsHasBeenSet = true;
    }

    if (value.HasMember("TotalSeconds") && !value["TotalSeconds"].IsNull())
    {
        if (!value["TotalSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.TotalSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSeconds = value["TotalSeconds"].GetInt64();
        m_totalSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoTaskUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_thoughtTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThoughtTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thoughtTokens, allocator);
    }

    if (m_inputImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputImageCount, allocator);
    }

    if (m_inputSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputSeconds, allocator);
    }

    if (m_outputSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputSeconds, allocator);
    }

    if (m_totalSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSeconds, allocator);
    }

}


int64_t AigcVideoTaskUsage::GetInputTokens() const
{
    return m_inputTokens;
}

void AigcVideoTaskUsage::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool AigcVideoTaskUsage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetThoughtTokens() const
{
    return m_thoughtTokens;
}

void AigcVideoTaskUsage::SetThoughtTokens(const int64_t& _thoughtTokens)
{
    m_thoughtTokens = _thoughtTokens;
    m_thoughtTokensHasBeenSet = true;
}

bool AigcVideoTaskUsage::ThoughtTokensHasBeenSet() const
{
    return m_thoughtTokensHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetInputImageCount() const
{
    return m_inputImageCount;
}

void AigcVideoTaskUsage::SetInputImageCount(const int64_t& _inputImageCount)
{
    m_inputImageCount = _inputImageCount;
    m_inputImageCountHasBeenSet = true;
}

bool AigcVideoTaskUsage::InputImageCountHasBeenSet() const
{
    return m_inputImageCountHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetInputSeconds() const
{
    return m_inputSeconds;
}

void AigcVideoTaskUsage::SetInputSeconds(const int64_t& _inputSeconds)
{
    m_inputSeconds = _inputSeconds;
    m_inputSecondsHasBeenSet = true;
}

bool AigcVideoTaskUsage::InputSecondsHasBeenSet() const
{
    return m_inputSecondsHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetOutputSeconds() const
{
    return m_outputSeconds;
}

void AigcVideoTaskUsage::SetOutputSeconds(const int64_t& _outputSeconds)
{
    m_outputSeconds = _outputSeconds;
    m_outputSecondsHasBeenSet = true;
}

bool AigcVideoTaskUsage::OutputSecondsHasBeenSet() const
{
    return m_outputSecondsHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetTotalSeconds() const
{
    return m_totalSeconds;
}

void AigcVideoTaskUsage::SetTotalSeconds(const int64_t& _totalSeconds)
{
    m_totalSeconds = _totalSeconds;
    m_totalSecondsHasBeenSet = true;
}

bool AigcVideoTaskUsage::TotalSecondsHasBeenSet() const
{
    return m_totalSecondsHasBeenSet;
}

