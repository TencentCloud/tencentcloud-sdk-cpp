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

#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateProxyResponse::InquiryPriceCreateProxyResponse() :
    m_proxyDailyPriceHasBeenSet(false),
    m_bandwidthUnitPriceHasBeenSet(false),
    m_discountProxyDailyPriceHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_flowUnitPriceHasBeenSet(false),
    m_discountFlowUnitPriceHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceCreateProxyResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProxyDailyPrice") && !rsp["ProxyDailyPrice"].IsNull())
    {
        if (!rsp["ProxyDailyPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ProxyDailyPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_proxyDailyPrice = rsp["ProxyDailyPrice"].GetDouble();
        m_proxyDailyPriceHasBeenSet = true;
    }

    if (rsp.HasMember("BandwidthUnitPrice") && !rsp["BandwidthUnitPrice"].IsNull())
    {
        if (!rsp["BandwidthUnitPrice"].IsArray())
            return CoreInternalOutcome(Error("response `BandwidthUnitPrice` is not array type"));

        const Value &tmpValue = rsp["BandwidthUnitPrice"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BandwidthPriceGradient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bandwidthUnitPrice.push_back(item);
        }
        m_bandwidthUnitPriceHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountProxyDailyPrice") && !rsp["DiscountProxyDailyPrice"].IsNull())
    {
        if (!rsp["DiscountProxyDailyPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DiscountProxyDailyPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountProxyDailyPrice = rsp["DiscountProxyDailyPrice"].GetDouble();
        m_discountProxyDailyPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Currency") && !rsp["Currency"].IsNull())
    {
        if (!rsp["Currency"].IsString())
        {
            return CoreInternalOutcome(Error("response `Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(rsp["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (rsp.HasMember("FlowUnitPrice") && !rsp["FlowUnitPrice"].IsNull())
    {
        if (!rsp["FlowUnitPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FlowUnitPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowUnitPrice = rsp["FlowUnitPrice"].GetDouble();
        m_flowUnitPriceHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountFlowUnitPrice") && !rsp["DiscountFlowUnitPrice"].IsNull())
    {
        if (!rsp["DiscountFlowUnitPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `DiscountFlowUnitPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountFlowUnitPrice = rsp["DiscountFlowUnitPrice"].GetDouble();
        m_discountFlowUnitPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double InquiryPriceCreateProxyResponse::GetProxyDailyPrice() const
{
    return m_proxyDailyPrice;
}

bool InquiryPriceCreateProxyResponse::ProxyDailyPriceHasBeenSet() const
{
    return m_proxyDailyPriceHasBeenSet;
}

vector<BandwidthPriceGradient> InquiryPriceCreateProxyResponse::GetBandwidthUnitPrice() const
{
    return m_bandwidthUnitPrice;
}

bool InquiryPriceCreateProxyResponse::BandwidthUnitPriceHasBeenSet() const
{
    return m_bandwidthUnitPriceHasBeenSet;
}

double InquiryPriceCreateProxyResponse::GetDiscountProxyDailyPrice() const
{
    return m_discountProxyDailyPrice;
}

bool InquiryPriceCreateProxyResponse::DiscountProxyDailyPriceHasBeenSet() const
{
    return m_discountProxyDailyPriceHasBeenSet;
}

string InquiryPriceCreateProxyResponse::GetCurrency() const
{
    return m_currency;
}

bool InquiryPriceCreateProxyResponse::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

double InquiryPriceCreateProxyResponse::GetFlowUnitPrice() const
{
    return m_flowUnitPrice;
}

bool InquiryPriceCreateProxyResponse::FlowUnitPriceHasBeenSet() const
{
    return m_flowUnitPriceHasBeenSet;
}

double InquiryPriceCreateProxyResponse::GetDiscountFlowUnitPrice() const
{
    return m_discountFlowUnitPrice;
}

bool InquiryPriceCreateProxyResponse::DiscountFlowUnitPriceHasBeenSet() const
{
    return m_discountFlowUnitPriceHasBeenSet;
}


