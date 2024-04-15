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

#include <tencentcloud/domain/v20180808/model/ReserveBidInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ReserveBidInfo::ReserveBidInfo() :
    m_userHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_bidTimeHasBeenSet(false),
    m_bidStatusHasBeenSet(false)
{
}

CoreInternalOutcome ReserveBidInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveBidInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveBidInfo.Price` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetInt64();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("BidTime") && !value["BidTime"].IsNull())
    {
        if (!value["BidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveBidInfo.BidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bidTime = string(value["BidTime"].GetString());
        m_bidTimeHasBeenSet = true;
    }

    if (value.HasMember("BidStatus") && !value["BidStatus"].IsNull())
    {
        if (!value["BidStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveBidInfo.BidStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bidStatus = string(value["BidStatus"].GetString());
        m_bidStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReserveBidInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_bidTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bidTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bidStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bidStatus.c_str(), allocator).Move(), allocator);
    }

}


string ReserveBidInfo::GetUser() const
{
    return m_user;
}

void ReserveBidInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ReserveBidInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

int64_t ReserveBidInfo::GetPrice() const
{
    return m_price;
}

void ReserveBidInfo::SetPrice(const int64_t& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool ReserveBidInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string ReserveBidInfo::GetBidTime() const
{
    return m_bidTime;
}

void ReserveBidInfo::SetBidTime(const string& _bidTime)
{
    m_bidTime = _bidTime;
    m_bidTimeHasBeenSet = true;
}

bool ReserveBidInfo::BidTimeHasBeenSet() const
{
    return m_bidTimeHasBeenSet;
}

string ReserveBidInfo::GetBidStatus() const
{
    return m_bidStatus;
}

void ReserveBidInfo::SetBidStatus(const string& _bidStatus)
{
    m_bidStatus = _bidStatus;
    m_bidStatusHasBeenSet = true;
}

bool ReserveBidInfo::BidStatusHasBeenSet() const
{
    return m_bidStatusHasBeenSet;
}

