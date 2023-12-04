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

#include <tencentcloud/es/v20180416/model/InquirePriceRenewInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

InquirePriceRenewInstanceResponse::InquirePriceRenewInstanceResponse() :
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

CoreInternalOutcome InquirePriceRenewInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalPrice") && !rsp["OriginalPrice"].IsNull())
    {
        if (!rsp["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = rsp["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountPrice") && !rsp["DiscountPrice"].IsNull())
    {
        if (!rsp["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = rsp["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Discount") && !rsp["Discount"].IsNull())
    {
        if (!rsp["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = rsp["Discount"].GetDouble();
        m_discountHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string InquirePriceRenewInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
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


double InquirePriceRenewInstanceResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool InquirePriceRenewInstanceResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double InquirePriceRenewInstanceResponse::GetDiscountPrice() const
{
    return m_discountPrice;
}

bool InquirePriceRenewInstanceResponse::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

double InquirePriceRenewInstanceResponse::GetDiscount() const
{
    return m_discount;
}

bool InquirePriceRenewInstanceResponse::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string InquirePriceRenewInstanceResponse::GetCurrency() const
{
    return m_currency;
}

bool InquirePriceRenewInstanceResponse::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}


