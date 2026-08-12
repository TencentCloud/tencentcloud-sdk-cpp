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

#include <tencentcloud/rce/v20260130/model/Amount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Amount::Amount() :
    m_currencyHasBeenSet(false),
    m_originalAmountHasBeenSet(false),
    m_exchangeRateUSDHasBeenSet(false),
    m_exchangeRateCNYHasBeenSet(false)
{
}

CoreInternalOutcome Amount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Amount.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmount") && !value["OriginalAmount"].IsNull())
    {
        if (!value["OriginalAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Amount.OriginalAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmount = value["OriginalAmount"].GetDouble();
        m_originalAmountHasBeenSet = true;
    }

    if (value.HasMember("ExchangeRateUSD") && !value["ExchangeRateUSD"].IsNull())
    {
        if (!value["ExchangeRateUSD"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Amount.ExchangeRateUSD` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeRateUSD = value["ExchangeRateUSD"].GetDouble();
        m_exchangeRateUSDHasBeenSet = true;
    }

    if (value.HasMember("ExchangeRateCNY") && !value["ExchangeRateCNY"].IsNull())
    {
        if (!value["ExchangeRateCNY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Amount.ExchangeRateCNY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeRateCNY = value["ExchangeRateCNY"].GetDouble();
        m_exchangeRateCNYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Amount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalAmount, allocator);
    }

    if (m_exchangeRateUSDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeRateUSD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exchangeRateUSD, allocator);
    }

    if (m_exchangeRateCNYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeRateCNY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exchangeRateCNY, allocator);
    }

}


string Amount::GetCurrency() const
{
    return m_currency;
}

void Amount::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool Amount::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

double Amount::GetOriginalAmount() const
{
    return m_originalAmount;
}

void Amount::SetOriginalAmount(const double& _originalAmount)
{
    m_originalAmount = _originalAmount;
    m_originalAmountHasBeenSet = true;
}

bool Amount::OriginalAmountHasBeenSet() const
{
    return m_originalAmountHasBeenSet;
}

double Amount::GetExchangeRateUSD() const
{
    return m_exchangeRateUSD;
}

void Amount::SetExchangeRateUSD(const double& _exchangeRateUSD)
{
    m_exchangeRateUSD = _exchangeRateUSD;
    m_exchangeRateUSDHasBeenSet = true;
}

bool Amount::ExchangeRateUSDHasBeenSet() const
{
    return m_exchangeRateUSDHasBeenSet;
}

double Amount::GetExchangeRateCNY() const
{
    return m_exchangeRateCNY;
}

void Amount::SetExchangeRateCNY(const double& _exchangeRateCNY)
{
    m_exchangeRateCNY = _exchangeRateCNY;
    m_exchangeRateCNYHasBeenSet = true;
}

bool Amount::ExchangeRateCNYHasBeenSet() const
{
    return m_exchangeRateCNYHasBeenSet;
}

