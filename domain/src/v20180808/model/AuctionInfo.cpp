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

#include <tencentcloud/domain/v20180808/model/AuctionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

AuctionInfo::AuctionInfo() :
    m_bidderHasBeenSet(false),
    m_auctionTimeHasBeenSet(false),
    m_auctionPriceHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AuctionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bidder") && !value["Bidder"].IsNull())
    {
        if (!value["Bidder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuctionInfo.Bidder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bidder = string(value["Bidder"].GetString());
        m_bidderHasBeenSet = true;
    }

    if (value.HasMember("AuctionTime") && !value["AuctionTime"].IsNull())
    {
        if (!value["AuctionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuctionInfo.AuctionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auctionTime = string(value["AuctionTime"].GetString());
        m_auctionTimeHasBeenSet = true;
    }

    if (value.HasMember("AuctionPrice") && !value["AuctionPrice"].IsNull())
    {
        if (!value["AuctionPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AuctionInfo.AuctionPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_auctionPrice = value["AuctionPrice"].GetDouble();
        m_auctionPriceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuctionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuctionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bidderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bidder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bidder.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auctionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_auctionPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuctionPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auctionPrice, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string AuctionInfo::GetBidder() const
{
    return m_bidder;
}

void AuctionInfo::SetBidder(const string& _bidder)
{
    m_bidder = _bidder;
    m_bidderHasBeenSet = true;
}

bool AuctionInfo::BidderHasBeenSet() const
{
    return m_bidderHasBeenSet;
}

string AuctionInfo::GetAuctionTime() const
{
    return m_auctionTime;
}

void AuctionInfo::SetAuctionTime(const string& _auctionTime)
{
    m_auctionTime = _auctionTime;
    m_auctionTimeHasBeenSet = true;
}

bool AuctionInfo::AuctionTimeHasBeenSet() const
{
    return m_auctionTimeHasBeenSet;
}

double AuctionInfo::GetAuctionPrice() const
{
    return m_auctionPrice;
}

void AuctionInfo::SetAuctionPrice(const double& _auctionPrice)
{
    m_auctionPrice = _auctionPrice;
    m_auctionPriceHasBeenSet = true;
}

bool AuctionInfo::AuctionPriceHasBeenSet() const
{
    return m_auctionPriceHasBeenSet;
}

string AuctionInfo::GetStatus() const
{
    return m_status;
}

void AuctionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AuctionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

