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

#include <tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWLLMTokenUsageItem::AIGWLLMTokenUsageItem() :
    m_consumerIdHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_consumerGroupsHasBeenSet(false),
    m_modelServiceIdHasBeenSet(false),
    m_modelServiceNameHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_cacheReadInputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_requestCountHasBeenSet(false),
    m_costHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMTokenUsageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerName") && !value["ConsumerName"].IsNull())
    {
        if (!value["ConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.ConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerName = string(value["ConsumerName"].GetString());
        m_consumerNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroups") && !value["ConsumerGroups"].IsNull())
    {
        if (!value["ConsumerGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.ConsumerGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumerGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWConsumerGroupBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumerGroups.push_back(item);
        }
        m_consumerGroupsHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceName") && !value["ModelServiceName"].IsNull())
    {
        if (!value["ModelServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.ModelServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceName = string(value["ModelServiceName"].GetString());
        m_modelServiceNameHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("CacheReadInputTokens") && !value["CacheReadInputTokens"].IsNull())
    {
        if (!value["CacheReadInputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.CacheReadInputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheReadInputTokens = value["CacheReadInputTokens"].GetInt64();
        m_cacheReadInputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.OutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetInt64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("RequestCount") && !value["RequestCount"].IsNull())
    {
        if (!value["RequestCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.RequestCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestCount = value["RequestCount"].GetInt64();
        m_requestCountHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(value["Cost"].GetString());
        m_costHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageItem.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMTokenUsageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumerGroups.begin(); itr != m_consumerGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_cacheReadInputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheReadInputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheReadInputTokens, allocator);
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

    if (m_requestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCount, allocator);
    }

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cost.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

}


string AIGWLLMTokenUsageItem::GetConsumerId() const
{
    return m_consumerId;
}

void AIGWLLMTokenUsageItem::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string AIGWLLMTokenUsageItem::GetConsumerName() const
{
    return m_consumerName;
}

void AIGWLLMTokenUsageItem::SetConsumerName(const string& _consumerName)
{
    m_consumerName = _consumerName;
    m_consumerNameHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::ConsumerNameHasBeenSet() const
{
    return m_consumerNameHasBeenSet;
}

vector<AIGWConsumerGroupBrief> AIGWLLMTokenUsageItem::GetConsumerGroups() const
{
    return m_consumerGroups;
}

void AIGWLLMTokenUsageItem::SetConsumerGroups(const vector<AIGWConsumerGroupBrief>& _consumerGroups)
{
    m_consumerGroups = _consumerGroups;
    m_consumerGroupsHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::ConsumerGroupsHasBeenSet() const
{
    return m_consumerGroupsHasBeenSet;
}

string AIGWLLMTokenUsageItem::GetModelServiceId() const
{
    return m_modelServiceId;
}

void AIGWLLMTokenUsageItem::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string AIGWLLMTokenUsageItem::GetModelServiceName() const
{
    return m_modelServiceName;
}

void AIGWLLMTokenUsageItem::SetModelServiceName(const string& _modelServiceName)
{
    m_modelServiceName = _modelServiceName;
    m_modelServiceNameHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::ModelServiceNameHasBeenSet() const
{
    return m_modelServiceNameHasBeenSet;
}

int64_t AIGWLLMTokenUsageItem::GetInputTokens() const
{
    return m_inputTokens;
}

void AIGWLLMTokenUsageItem::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageItem::GetCacheReadInputTokens() const
{
    return m_cacheReadInputTokens;
}

void AIGWLLMTokenUsageItem::SetCacheReadInputTokens(const int64_t& _cacheReadInputTokens)
{
    m_cacheReadInputTokens = _cacheReadInputTokens;
    m_cacheReadInputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::CacheReadInputTokensHasBeenSet() const
{
    return m_cacheReadInputTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageItem::GetOutputTokens() const
{
    return m_outputTokens;
}

void AIGWLLMTokenUsageItem::SetOutputTokens(const int64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageItem::GetTotalTokens() const
{
    return m_totalTokens;
}

void AIGWLLMTokenUsageItem::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageItem::GetRequestCount() const
{
    return m_requestCount;
}

void AIGWLLMTokenUsageItem::SetRequestCount(const int64_t& _requestCount)
{
    m_requestCount = _requestCount;
    m_requestCountHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::RequestCountHasBeenSet() const
{
    return m_requestCountHasBeenSet;
}

string AIGWLLMTokenUsageItem::GetCost() const
{
    return m_cost;
}

void AIGWLLMTokenUsageItem::SetCost(const string& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

string AIGWLLMTokenUsageItem::GetCurrency() const
{
    return m_currency;
}

void AIGWLLMTokenUsageItem::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool AIGWLLMTokenUsageItem::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

