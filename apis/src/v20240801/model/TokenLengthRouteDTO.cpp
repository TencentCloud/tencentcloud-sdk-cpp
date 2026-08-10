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

#include <tencentcloud/apis/v20240801/model/TokenLengthRouteDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

TokenLengthRouteDTO::TokenLengthRouteDTO() :
    m_minTokensHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_targetModelsHasBeenSet(false)
{
}

CoreInternalOutcome TokenLengthRouteDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinTokens") && !value["MinTokens"].IsNull())
    {
        if (!value["MinTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenLengthRouteDTO.MinTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minTokens = value["MinTokens"].GetInt64();
        m_minTokensHasBeenSet = true;
    }

    if (value.HasMember("MaxTokens") && !value["MaxTokens"].IsNull())
    {
        if (!value["MaxTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenLengthRouteDTO.MaxTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTokens = value["MaxTokens"].GetInt64();
        m_maxTokensHasBeenSet = true;
    }

    if (value.HasMember("TargetModels") && !value["TargetModels"].IsNull())
    {
        if (!value["TargetModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TokenLengthRouteDTO.TargetModels` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetModelDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetModels.push_back(item);
        }
        m_targetModelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenLengthRouteDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minTokens, allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTokens, allocator);
    }

    if (m_targetModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetModels.begin(); itr != m_targetModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TokenLengthRouteDTO::GetMinTokens() const
{
    return m_minTokens;
}

void TokenLengthRouteDTO::SetMinTokens(const int64_t& _minTokens)
{
    m_minTokens = _minTokens;
    m_minTokensHasBeenSet = true;
}

bool TokenLengthRouteDTO::MinTokensHasBeenSet() const
{
    return m_minTokensHasBeenSet;
}

int64_t TokenLengthRouteDTO::GetMaxTokens() const
{
    return m_maxTokens;
}

void TokenLengthRouteDTO::SetMaxTokens(const int64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool TokenLengthRouteDTO::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

vector<TargetModelDTO> TokenLengthRouteDTO::GetTargetModels() const
{
    return m_targetModels;
}

void TokenLengthRouteDTO::SetTargetModels(const vector<TargetModelDTO>& _targetModels)
{
    m_targetModels = _targetModels;
    m_targetModelsHasBeenSet = true;
}

bool TokenLengthRouteDTO::TargetModelsHasBeenSet() const
{
    return m_targetModelsHasBeenSet;
}

