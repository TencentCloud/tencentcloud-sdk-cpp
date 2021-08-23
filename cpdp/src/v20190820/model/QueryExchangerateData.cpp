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

#include <tencentcloud/cpdp/v20190820/model/QueryExchangerateData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryExchangerateData::QueryExchangerateData() :
    m_rateHasBeenSet(false),
    m_sourceCurrencyHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_rateTimeHasBeenSet(false),
    m_baseCurrencyHasBeenSet(false)
{
}

CoreInternalOutcome QueryExchangerateData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExchangerateData.Rate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rate = string(value["Rate"].GetString());
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("SourceCurrency") && !value["SourceCurrency"].IsNull())
    {
        if (!value["SourceCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExchangerateData.SourceCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCurrency = string(value["SourceCurrency"].GetString());
        m_sourceCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TargetCurrency") && !value["TargetCurrency"].IsNull())
    {
        if (!value["TargetCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExchangerateData.TargetCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCurrency = string(value["TargetCurrency"].GetString());
        m_targetCurrencyHasBeenSet = true;
    }

    if (value.HasMember("RateTime") && !value["RateTime"].IsNull())
    {
        if (!value["RateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExchangerateData.RateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateTime = string(value["RateTime"].GetString());
        m_rateTimeHasBeenSet = true;
    }

    if (value.HasMember("BaseCurrency") && !value["BaseCurrency"].IsNull())
    {
        if (!value["BaseCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExchangerateData.BaseCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseCurrency = string(value["BaseCurrency"].GetString());
        m_baseCurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryExchangerateData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_rateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_baseCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseCurrency.c_str(), allocator).Move(), allocator);
    }

}


string QueryExchangerateData::GetRate() const
{
    return m_rate;
}

void QueryExchangerateData::SetRate(const string& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool QueryExchangerateData::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string QueryExchangerateData::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void QueryExchangerateData::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool QueryExchangerateData::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string QueryExchangerateData::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void QueryExchangerateData::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool QueryExchangerateData::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string QueryExchangerateData::GetRateTime() const
{
    return m_rateTime;
}

void QueryExchangerateData::SetRateTime(const string& _rateTime)
{
    m_rateTime = _rateTime;
    m_rateTimeHasBeenSet = true;
}

bool QueryExchangerateData::RateTimeHasBeenSet() const
{
    return m_rateTimeHasBeenSet;
}

string QueryExchangerateData::GetBaseCurrency() const
{
    return m_baseCurrency;
}

void QueryExchangerateData::SetBaseCurrency(const string& _baseCurrency)
{
    m_baseCurrency = _baseCurrency;
    m_baseCurrencyHasBeenSet = true;
}

bool QueryExchangerateData::BaseCurrencyHasBeenSet() const
{
    return m_baseCurrencyHasBeenSet;
}

