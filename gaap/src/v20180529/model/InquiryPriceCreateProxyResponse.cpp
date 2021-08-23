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
using namespace std;

InquiryPriceCreateProxyResponse::InquiryPriceCreateProxyResponse() :
    m_proxyDailyPriceHasBeenSet(false),
    m_bandwidthUnitPriceHasBeenSet(false),
    m_discountProxyDailyPriceHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_flowUnitPriceHasBeenSet(false),
    m_discountFlowUnitPriceHasBeenSet(false),
    m_cn2BandwidthPriceHasBeenSet(false),
    m_cn2BandwidthPriceWithDiscountHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceCreateProxyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProxyDailyPrice") && !rsp["ProxyDailyPrice"].IsNull())
    {
        if (!rsp["ProxyDailyPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyDailyPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_proxyDailyPrice = rsp["ProxyDailyPrice"].GetDouble();
        m_proxyDailyPriceHasBeenSet = true;
    }

    if (rsp.HasMember("BandwidthUnitPrice") && !rsp["BandwidthUnitPrice"].IsNull())
    {
        if (!rsp["BandwidthUnitPrice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BandwidthUnitPrice` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BandwidthUnitPrice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
        if (!rsp["DiscountProxyDailyPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountProxyDailyPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountProxyDailyPrice = rsp["DiscountProxyDailyPrice"].GetDouble();
        m_discountProxyDailyPriceHasBeenSet = true;
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

    if (rsp.HasMember("FlowUnitPrice") && !rsp["FlowUnitPrice"].IsNull())
    {
        if (!rsp["FlowUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowUnitPrice = rsp["FlowUnitPrice"].GetDouble();
        m_flowUnitPriceHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountFlowUnitPrice") && !rsp["DiscountFlowUnitPrice"].IsNull())
    {
        if (!rsp["DiscountFlowUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountFlowUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountFlowUnitPrice = rsp["DiscountFlowUnitPrice"].GetDouble();
        m_discountFlowUnitPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Cn2BandwidthPrice") && !rsp["Cn2BandwidthPrice"].IsNull())
    {
        if (!rsp["Cn2BandwidthPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cn2BandwidthPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cn2BandwidthPrice = rsp["Cn2BandwidthPrice"].GetDouble();
        m_cn2BandwidthPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Cn2BandwidthPriceWithDiscount") && !rsp["Cn2BandwidthPriceWithDiscount"].IsNull())
    {
        if (!rsp["Cn2BandwidthPriceWithDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cn2BandwidthPriceWithDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cn2BandwidthPriceWithDiscount = rsp["Cn2BandwidthPriceWithDiscount"].GetDouble();
        m_cn2BandwidthPriceWithDiscountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceCreateProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_proxyDailyPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyDailyPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyDailyPrice, allocator);
    }

    if (m_bandwidthUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bandwidthUnitPrice.begin(); itr != m_bandwidthUnitPrice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_discountProxyDailyPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountProxyDailyPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountProxyDailyPrice, allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_flowUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowUnitPrice, allocator);
    }

    if (m_discountFlowUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountFlowUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountFlowUnitPrice, allocator);
    }

    if (m_cn2BandwidthPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cn2BandwidthPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cn2BandwidthPrice, allocator);
    }

    if (m_cn2BandwidthPriceWithDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cn2BandwidthPriceWithDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cn2BandwidthPriceWithDiscount, allocator);
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

double InquiryPriceCreateProxyResponse::GetCn2BandwidthPrice() const
{
    return m_cn2BandwidthPrice;
}

bool InquiryPriceCreateProxyResponse::Cn2BandwidthPriceHasBeenSet() const
{
    return m_cn2BandwidthPriceHasBeenSet;
}

double InquiryPriceCreateProxyResponse::GetCn2BandwidthPriceWithDiscount() const
{
    return m_cn2BandwidthPriceWithDiscount;
}

bool InquiryPriceCreateProxyResponse::Cn2BandwidthPriceWithDiscountHasBeenSet() const
{
    return m_cn2BandwidthPriceWithDiscountHasBeenSet;
}


