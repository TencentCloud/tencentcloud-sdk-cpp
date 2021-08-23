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

#include <tencentcloud/mariadb/v20170312/model/DescribeUpgradePriceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeUpgradePriceResponse::DescribeUpgradePriceResponse() :
    m_originalPriceHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_formulaHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUpgradePriceResponse::Deserialize(const string &payload)
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
        if (!rsp["OriginalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = rsp["OriginalPrice"].GetInt64();
        m_originalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetInt64();
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("Formula") && !rsp["Formula"].IsNull())
    {
        if (!rsp["Formula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(rsp["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUpgradePriceResponse::ToJsonString() const
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

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
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


int64_t DescribeUpgradePriceResponse::GetOriginalPrice() const
{
    return m_originalPrice;
}

bool DescribeUpgradePriceResponse::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

int64_t DescribeUpgradePriceResponse::GetPrice() const
{
    return m_price;
}

bool DescribeUpgradePriceResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string DescribeUpgradePriceResponse::GetFormula() const
{
    return m_formula;
}

bool DescribeUpgradePriceResponse::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}


