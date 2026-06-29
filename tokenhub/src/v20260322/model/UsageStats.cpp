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
    m_outputTotalTokenHasBeenSet(false),
    m_cacheTotalTokenHasBeenSet(false),
    m_searchRequestCountHasBeenSet(false),
    m_searchCountHasBeenSet(false)
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

    if (value.HasMember("CacheTotalToken") && !value["CacheTotalToken"].IsNull())
    {
        if (!value["CacheTotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.CacheTotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTotalToken = value["CacheTotalToken"].GetInt64();
        m_cacheTotalTokenHasBeenSet = true;
    }

    if (value.HasMember("SearchRequestCount") && !value["SearchRequestCount"].IsNull())
    {
        if (!value["SearchRequestCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.SearchRequestCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_searchRequestCount = value["SearchRequestCount"].GetInt64();
        m_searchRequestCountHasBeenSet = true;
    }

    if (value.HasMember("SearchCount") && !value["SearchCount"].IsNull())
    {
        if (!value["SearchCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageStats.SearchCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_searchCount = value["SearchCount"].GetInt64();
        m_searchCountHasBeenSet = true;
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

    if (m_cacheTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTotalToken, allocator);
    }

    if (m_searchRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchRequestCount, allocator);
    }

    if (m_searchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchCount, allocator);
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

int64_t UsageStats::GetCacheTotalToken() const
{
    return m_cacheTotalToken;
}

void UsageStats::SetCacheTotalToken(const int64_t& _cacheTotalToken)
{
    m_cacheTotalToken = _cacheTotalToken;
    m_cacheTotalTokenHasBeenSet = true;
}

bool UsageStats::CacheTotalTokenHasBeenSet() const
{
    return m_cacheTotalTokenHasBeenSet;
}

int64_t UsageStats::GetSearchRequestCount() const
{
    return m_searchRequestCount;
}

void UsageStats::SetSearchRequestCount(const int64_t& _searchRequestCount)
{
    m_searchRequestCount = _searchRequestCount;
    m_searchRequestCountHasBeenSet = true;
}

bool UsageStats::SearchRequestCountHasBeenSet() const
{
    return m_searchRequestCountHasBeenSet;
}

int64_t UsageStats::GetSearchCount() const
{
    return m_searchCount;
}

void UsageStats::SetSearchCount(const int64_t& _searchCount)
{
    m_searchCount = _searchCount;
    m_searchCountHasBeenSet = true;
}

bool UsageStats::SearchCountHasBeenSet() const
{
    return m_searchCountHasBeenSet;
}

