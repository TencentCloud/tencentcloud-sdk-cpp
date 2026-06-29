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

#include <tencentcloud/tokenhub/v20260322/model/UsageSeries.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

UsageSeries::UsageSeries() :
    m_totalTokenHasBeenSet(false),
    m_inputTotalTokenHasBeenSet(false),
    m_outputTotalTokenHasBeenSet(false),
    m_cacheTotalTokenHasBeenSet(false),
    m_searchRequestCountHasBeenSet(false),
    m_searchCountHasBeenSet(false)
{
}

CoreInternalOutcome UsageSeries::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalToken") && !value["TotalToken"].IsNull())
    {
        if (!value["TotalToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.TotalToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalToken = string(value["TotalToken"].GetString());
        m_totalTokenHasBeenSet = true;
    }

    if (value.HasMember("InputTotalToken") && !value["InputTotalToken"].IsNull())
    {
        if (!value["InputTotalToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.InputTotalToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputTotalToken = string(value["InputTotalToken"].GetString());
        m_inputTotalTokenHasBeenSet = true;
    }

    if (value.HasMember("OutputTotalToken") && !value["OutputTotalToken"].IsNull())
    {
        if (!value["OutputTotalToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.OutputTotalToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputTotalToken = string(value["OutputTotalToken"].GetString());
        m_outputTotalTokenHasBeenSet = true;
    }

    if (value.HasMember("CacheTotalToken") && !value["CacheTotalToken"].IsNull())
    {
        if (!value["CacheTotalToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.CacheTotalToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTotalToken = string(value["CacheTotalToken"].GetString());
        m_cacheTotalTokenHasBeenSet = true;
    }

    if (value.HasMember("SearchRequestCount") && !value["SearchRequestCount"].IsNull())
    {
        if (!value["SearchRequestCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.SearchRequestCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchRequestCount = string(value["SearchRequestCount"].GetString());
        m_searchRequestCountHasBeenSet = true;
    }

    if (value.HasMember("SearchCount") && !value["SearchCount"].IsNull())
    {
        if (!value["SearchCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageSeries.SearchCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchCount = string(value["SearchCount"].GetString());
        m_searchCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageSeries::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalToken.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputTotalToken.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputTotalToken.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTotalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheTotalToken.c_str(), allocator).Move(), allocator);
    }

    if (m_searchRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchRequestCount.c_str(), allocator).Move(), allocator);
    }

    if (m_searchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchCount.c_str(), allocator).Move(), allocator);
    }

}


string UsageSeries::GetTotalToken() const
{
    return m_totalToken;
}

void UsageSeries::SetTotalToken(const string& _totalToken)
{
    m_totalToken = _totalToken;
    m_totalTokenHasBeenSet = true;
}

bool UsageSeries::TotalTokenHasBeenSet() const
{
    return m_totalTokenHasBeenSet;
}

string UsageSeries::GetInputTotalToken() const
{
    return m_inputTotalToken;
}

void UsageSeries::SetInputTotalToken(const string& _inputTotalToken)
{
    m_inputTotalToken = _inputTotalToken;
    m_inputTotalTokenHasBeenSet = true;
}

bool UsageSeries::InputTotalTokenHasBeenSet() const
{
    return m_inputTotalTokenHasBeenSet;
}

string UsageSeries::GetOutputTotalToken() const
{
    return m_outputTotalToken;
}

void UsageSeries::SetOutputTotalToken(const string& _outputTotalToken)
{
    m_outputTotalToken = _outputTotalToken;
    m_outputTotalTokenHasBeenSet = true;
}

bool UsageSeries::OutputTotalTokenHasBeenSet() const
{
    return m_outputTotalTokenHasBeenSet;
}

string UsageSeries::GetCacheTotalToken() const
{
    return m_cacheTotalToken;
}

void UsageSeries::SetCacheTotalToken(const string& _cacheTotalToken)
{
    m_cacheTotalToken = _cacheTotalToken;
    m_cacheTotalTokenHasBeenSet = true;
}

bool UsageSeries::CacheTotalTokenHasBeenSet() const
{
    return m_cacheTotalTokenHasBeenSet;
}

string UsageSeries::GetSearchRequestCount() const
{
    return m_searchRequestCount;
}

void UsageSeries::SetSearchRequestCount(const string& _searchRequestCount)
{
    m_searchRequestCount = _searchRequestCount;
    m_searchRequestCountHasBeenSet = true;
}

bool UsageSeries::SearchRequestCountHasBeenSet() const
{
    return m_searchRequestCountHasBeenSet;
}

string UsageSeries::GetSearchCount() const
{
    return m_searchCount;
}

void UsageSeries::SetSearchCount(const string& _searchCount)
{
    m_searchCount = _searchCount;
    m_searchCountHasBeenSet = true;
}

bool UsageSeries::SearchCountHasBeenSet() const
{
    return m_searchCountHasBeenSet;
}

