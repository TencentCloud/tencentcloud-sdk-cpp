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

#include <tencentcloud/lke/v20231130/model/StatisticInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

StatisticInfo::StatisticInfo() :
    m_modelNameHasBeenSet(false),
    m_firstTokenCostHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome StatisticInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("FirstTokenCost") && !value["FirstTokenCost"].IsNull())
    {
        if (!value["FirstTokenCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.FirstTokenCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstTokenCost = value["FirstTokenCost"].GetUint64();
        m_firstTokenCostHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.TotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetUint64();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticInfo.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTokenCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTokenCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstTokenCost, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
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


string StatisticInfo::GetModelName() const
{
    return m_modelName;
}

void StatisticInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool StatisticInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

uint64_t StatisticInfo::GetFirstTokenCost() const
{
    return m_firstTokenCost;
}

void StatisticInfo::SetFirstTokenCost(const uint64_t& _firstTokenCost)
{
    m_firstTokenCost = _firstTokenCost;
    m_firstTokenCostHasBeenSet = true;
}

bool StatisticInfo::FirstTokenCostHasBeenSet() const
{
    return m_firstTokenCostHasBeenSet;
}

uint64_t StatisticInfo::GetTotalCost() const
{
    return m_totalCost;
}

void StatisticInfo::SetTotalCost(const uint64_t& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool StatisticInfo::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

uint64_t StatisticInfo::GetInputTokens() const
{
    return m_inputTokens;
}

void StatisticInfo::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool StatisticInfo::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t StatisticInfo::GetOutputTokens() const
{
    return m_outputTokens;
}

void StatisticInfo::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool StatisticInfo::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

uint64_t StatisticInfo::GetTotalTokens() const
{
    return m_totalTokens;
}

void StatisticInfo::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool StatisticInfo::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

