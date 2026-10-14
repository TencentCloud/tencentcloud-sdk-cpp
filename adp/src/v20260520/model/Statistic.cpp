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

#include <tencentcloud/adp/v20260520/model/Statistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Statistic::Statistic() :
    m_firstTokenCostMsHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalCostMsHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome Statistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstTokenCostMs") && !value["FirstTokenCostMs"].IsNull())
    {
        if (!value["FirstTokenCostMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.FirstTokenCostMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstTokenCostMs = value["FirstTokenCostMs"].GetUint64();
        m_firstTokenCostMsHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalCostMs") && !value["TotalCostMs"].IsNull())
    {
        if (!value["TotalCostMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.TotalCostMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCostMs = value["TotalCostMs"].GetUint64();
        m_totalCostMsHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Statistic.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Statistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstTokenCostMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTokenCostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstTokenCostMs, allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_totalCostMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCostMs, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


uint64_t Statistic::GetFirstTokenCostMs() const
{
    return m_firstTokenCostMs;
}

void Statistic::SetFirstTokenCostMs(const uint64_t& _firstTokenCostMs)
{
    m_firstTokenCostMs = _firstTokenCostMs;
    m_firstTokenCostMsHasBeenSet = true;
}

bool Statistic::FirstTokenCostMsHasBeenSet() const
{
    return m_firstTokenCostMsHasBeenSet;
}

uint64_t Statistic::GetInputTokens() const
{
    return m_inputTokens;
}

void Statistic::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool Statistic::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

string Statistic::GetModelName() const
{
    return m_modelName;
}

void Statistic::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool Statistic::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

uint64_t Statistic::GetOutputTokens() const
{
    return m_outputTokens;
}

void Statistic::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool Statistic::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

uint64_t Statistic::GetTotalCostMs() const
{
    return m_totalCostMs;
}

void Statistic::SetTotalCostMs(const uint64_t& _totalCostMs)
{
    m_totalCostMs = _totalCostMs;
    m_totalCostMsHasBeenSet = true;
}

bool Statistic::TotalCostMsHasBeenSet() const
{
    return m_totalCostMsHasBeenSet;
}

uint64_t Statistic::GetTotalTokens() const
{
    return m_totalTokens;
}

void Statistic::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool Statistic::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

