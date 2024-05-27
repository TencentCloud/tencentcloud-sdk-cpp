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

#include <tencentcloud/domain/v20180808/model/BidDetailPageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BidDetailPageResponse::BidDetailPageResponse() :
    m_domainHasBeenSet(false),
    m_currentPriceHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_currentPriceScopeHasBeenSet(false),
    m_priceScopeHasBeenSet(false),
    m_depositPriceHasBeenSet(false)
{
}

CoreInternalOutcome BidDetailPageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPrice") && !rsp["CurrentPrice"].IsNull())
    {
        if (!rsp["CurrentPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_currentPrice = rsp["CurrentPrice"].GetDouble();
        m_currentPriceHasBeenSet = true;
    }

    if (rsp.HasMember("BidPrice") && !rsp["BidPrice"].IsNull())
    {
        if (!rsp["BidPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BidPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bidPrice = rsp["BidPrice"].GetDouble();
        m_bidPriceHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPriceScope") && !rsp["CurrentPriceScope"].IsNull())
    {
        if (!rsp["CurrentPriceScope"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPriceScope` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_currentPriceScope = rsp["CurrentPriceScope"].GetDouble();
        m_currentPriceScopeHasBeenSet = true;
    }

    if (rsp.HasMember("PriceScope") && !rsp["PriceScope"].IsNull())
    {
        if (!rsp["PriceScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PriceScope` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PriceScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PriceScopeConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_priceScope.push_back(item);
        }
        m_priceScopeHasBeenSet = true;
    }

    if (rsp.HasMember("DepositPrice") && !rsp["DepositPrice"].IsNull())
    {
        if (!rsp["DepositPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DepositPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_depositPrice = rsp["DepositPrice"].GetDouble();
        m_depositPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string BidDetailPageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPrice, allocator);
    }

    if (m_bidPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidPrice, allocator);
    }

    if (m_currentPriceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPriceScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPriceScope, allocator);
    }

    if (m_priceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_priceScope.begin(); itr != m_priceScope.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_depositPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depositPrice, allocator);
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


string BidDetailPageResponse::GetDomain() const
{
    return m_domain;
}

bool BidDetailPageResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

double BidDetailPageResponse::GetCurrentPrice() const
{
    return m_currentPrice;
}

bool BidDetailPageResponse::CurrentPriceHasBeenSet() const
{
    return m_currentPriceHasBeenSet;
}

double BidDetailPageResponse::GetBidPrice() const
{
    return m_bidPrice;
}

bool BidDetailPageResponse::BidPriceHasBeenSet() const
{
    return m_bidPriceHasBeenSet;
}

double BidDetailPageResponse::GetCurrentPriceScope() const
{
    return m_currentPriceScope;
}

bool BidDetailPageResponse::CurrentPriceScopeHasBeenSet() const
{
    return m_currentPriceScopeHasBeenSet;
}

vector<PriceScopeConf> BidDetailPageResponse::GetPriceScope() const
{
    return m_priceScope;
}

bool BidDetailPageResponse::PriceScopeHasBeenSet() const
{
    return m_priceScopeHasBeenSet;
}

double BidDetailPageResponse::GetDepositPrice() const
{
    return m_depositPrice;
}

bool BidDetailPageResponse::DepositPriceHasBeenSet() const
{
    return m_depositPriceHasBeenSet;
}


