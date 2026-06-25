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

#include <tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageStatisticsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWLLMTokenUsageStatisticsResult::AIGWLLMTokenUsageStatisticsResult() :
    m_totalRequestCountHasBeenSet(false),
    m_totalInputTokensHasBeenSet(false),
    m_totalOutputTokensHasBeenSet(false),
    m_totalCachedReadInputTokensHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_topConsumersHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMTokenUsageStatisticsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalRequestCount") && !value["TotalRequestCount"].IsNull())
    {
        if (!value["TotalRequestCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TotalRequestCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequestCount = value["TotalRequestCount"].GetInt64();
        m_totalRequestCountHasBeenSet = true;
    }

    if (value.HasMember("TotalInputTokens") && !value["TotalInputTokens"].IsNull())
    {
        if (!value["TotalInputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TotalInputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInputTokens = value["TotalInputTokens"].GetInt64();
        m_totalInputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalOutputTokens") && !value["TotalOutputTokens"].IsNull())
    {
        if (!value["TotalOutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TotalOutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalOutputTokens = value["TotalOutputTokens"].GetInt64();
        m_totalOutputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalCachedReadInputTokens") && !value["TotalCachedReadInputTokens"].IsNull())
    {
        if (!value["TotalCachedReadInputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TotalCachedReadInputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCachedReadInputTokens = value["TotalCachedReadInputTokens"].GetInt64();
        m_totalCachedReadInputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("TopConsumers") && !value["TopConsumers"].IsNull())
    {
        if (!value["TopConsumers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLLMTokenUsageStatisticsResult.TopConsumers` is not array type"));

        const rapidjson::Value &tmpValue = value["TopConsumers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWTopConsumersItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topConsumers.push_back(item);
        }
        m_topConsumersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMTokenUsageStatisticsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequestCount, allocator);
    }

    if (m_totalInputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalInputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInputTokens, allocator);
    }

    if (m_totalOutputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalOutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalOutputTokens, allocator);
    }

    if (m_totalCachedReadInputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCachedReadInputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCachedReadInputTokens, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_topConsumersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopConsumers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topConsumers.begin(); itr != m_topConsumers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AIGWLLMTokenUsageStatisticsResult::GetTotalRequestCount() const
{
    return m_totalRequestCount;
}

void AIGWLLMTokenUsageStatisticsResult::SetTotalRequestCount(const int64_t& _totalRequestCount)
{
    m_totalRequestCount = _totalRequestCount;
    m_totalRequestCountHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TotalRequestCountHasBeenSet() const
{
    return m_totalRequestCountHasBeenSet;
}

int64_t AIGWLLMTokenUsageStatisticsResult::GetTotalInputTokens() const
{
    return m_totalInputTokens;
}

void AIGWLLMTokenUsageStatisticsResult::SetTotalInputTokens(const int64_t& _totalInputTokens)
{
    m_totalInputTokens = _totalInputTokens;
    m_totalInputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TotalInputTokensHasBeenSet() const
{
    return m_totalInputTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageStatisticsResult::GetTotalOutputTokens() const
{
    return m_totalOutputTokens;
}

void AIGWLLMTokenUsageStatisticsResult::SetTotalOutputTokens(const int64_t& _totalOutputTokens)
{
    m_totalOutputTokens = _totalOutputTokens;
    m_totalOutputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TotalOutputTokensHasBeenSet() const
{
    return m_totalOutputTokensHasBeenSet;
}

int64_t AIGWLLMTokenUsageStatisticsResult::GetTotalCachedReadInputTokens() const
{
    return m_totalCachedReadInputTokens;
}

void AIGWLLMTokenUsageStatisticsResult::SetTotalCachedReadInputTokens(const int64_t& _totalCachedReadInputTokens)
{
    m_totalCachedReadInputTokens = _totalCachedReadInputTokens;
    m_totalCachedReadInputTokensHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TotalCachedReadInputTokensHasBeenSet() const
{
    return m_totalCachedReadInputTokensHasBeenSet;
}

string AIGWLLMTokenUsageStatisticsResult::GetTotalCost() const
{
    return m_totalCost;
}

void AIGWLLMTokenUsageStatisticsResult::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string AIGWLLMTokenUsageStatisticsResult::GetCurrency() const
{
    return m_currency;
}

void AIGWLLMTokenUsageStatisticsResult::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

vector<AIGWTopConsumersItem> AIGWLLMTokenUsageStatisticsResult::GetTopConsumers() const
{
    return m_topConsumers;
}

void AIGWLLMTokenUsageStatisticsResult::SetTopConsumers(const vector<AIGWTopConsumersItem>& _topConsumers)
{
    m_topConsumers = _topConsumers;
    m_topConsumersHasBeenSet = true;
}

bool AIGWLLMTokenUsageStatisticsResult::TopConsumersHasBeenSet() const
{
    return m_topConsumersHasBeenSet;
}

