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

#include <tencentcloud/domain/v20180808/model/PreAuctionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

PreAuctionInfo::PreAuctionInfo() :
    m_domainHasBeenSet(false),
    m_biddingTimeHasBeenSet(false),
    m_bidCountHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_opHasBeenSet(false),
    m_businessIdHasBeenSet(false)
{
}

CoreInternalOutcome PreAuctionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("BiddingTime") && !value["BiddingTime"].IsNull())
    {
        if (!value["BiddingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.BiddingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingTime = string(value["BiddingTime"].GetString());
        m_biddingTimeHasBeenSet = true;
    }

    if (value.HasMember("BidCount") && !value["BidCount"].IsNull())
    {
        if (!value["BidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.BidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidCount = value["BidCount"].GetInt64();
        m_bidCountHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreAuctionInfo.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreAuctionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidCount, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

}


string PreAuctionInfo::GetDomain() const
{
    return m_domain;
}

void PreAuctionInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PreAuctionInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PreAuctionInfo::GetBiddingTime() const
{
    return m_biddingTime;
}

void PreAuctionInfo::SetBiddingTime(const string& _biddingTime)
{
    m_biddingTime = _biddingTime;
    m_biddingTimeHasBeenSet = true;
}

bool PreAuctionInfo::BiddingTimeHasBeenSet() const
{
    return m_biddingTimeHasBeenSet;
}

int64_t PreAuctionInfo::GetBidCount() const
{
    return m_bidCount;
}

void PreAuctionInfo::SetBidCount(const int64_t& _bidCount)
{
    m_bidCount = _bidCount;
    m_bidCountHasBeenSet = true;
}

bool PreAuctionInfo::BidCountHasBeenSet() const
{
    return m_bidCountHasBeenSet;
}

double PreAuctionInfo::GetPrice() const
{
    return m_price;
}

void PreAuctionInfo::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PreAuctionInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string PreAuctionInfo::GetOp() const
{
    return m_op;
}

void PreAuctionInfo::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool PreAuctionInfo::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

string PreAuctionInfo::GetBusinessId() const
{
    return m_businessId;
}

void PreAuctionInfo::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool PreAuctionInfo::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

