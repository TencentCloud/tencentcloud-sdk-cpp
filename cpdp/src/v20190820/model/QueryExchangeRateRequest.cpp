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

#include <tencentcloud/cpdp/v20190820/model/QueryExchangeRateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryExchangeRateRequest::QueryExchangeRateRequest() :
    m_sourceCurrencyHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryExchangeRateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryExchangeRateRequest::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void QueryExchangeRateRequest::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool QueryExchangeRateRequest::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string QueryExchangeRateRequest::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void QueryExchangeRateRequest::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool QueryExchangeRateRequest::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string QueryExchangeRateRequest::GetProfile() const
{
    return m_profile;
}

void QueryExchangeRateRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryExchangeRateRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


