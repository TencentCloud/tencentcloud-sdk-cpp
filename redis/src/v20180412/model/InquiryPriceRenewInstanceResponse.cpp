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

#include <tencentcloud/redis/v20180412/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InquiryPriceRenewInstanceResponse::InquiryPriceRenewInstanceResponse() :
    m_priceHasBeenSet(false),
    m_highPrecisionPriceHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_amountUnitHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceRenewInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("HighPrecisionPrice") && !rsp["HighPrecisionPrice"].IsNull())
    {
        if (!rsp["HighPrecisionPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighPrecisionPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highPrecisionPrice = rsp["HighPrecisionPrice"].GetDouble();
        m_highPrecisionPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Currency") && !rsp["Currency"].IsNull())
    {
        if (!rsp["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(rsp["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (rsp.HasMember("AmountUnit") && !rsp["AmountUnit"].IsNull())
    {
        if (!rsp["AmountUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountUnit = string(rsp["AmountUnit"].GetString());
        m_amountUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceRenewInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_highPrecisionPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPrecisionPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPrecisionPrice, allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_amountUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountUnit.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


double InquiryPriceRenewInstanceResponse::GetPrice() const
{
    return m_price;
}

bool InquiryPriceRenewInstanceResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double InquiryPriceRenewInstanceResponse::GetHighPrecisionPrice() const
{
    return m_highPrecisionPrice;
}

bool InquiryPriceRenewInstanceResponse::HighPrecisionPriceHasBeenSet() const
{
    return m_highPrecisionPriceHasBeenSet;
}

string InquiryPriceRenewInstanceResponse::GetCurrency() const
{
    return m_currency;
}

bool InquiryPriceRenewInstanceResponse::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string InquiryPriceRenewInstanceResponse::GetAmountUnit() const
{
    return m_amountUnit;
}

bool InquiryPriceRenewInstanceResponse::AmountUnitHasBeenSet() const
{
    return m_amountUnitHasBeenSet;
}


