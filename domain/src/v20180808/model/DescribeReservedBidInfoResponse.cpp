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

#include <tencentcloud/domain/v20180808/model/DescribeReservedBidInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeReservedBidInfoResponse::DescribeReservedBidInfoResponse() :
    m_upPriceHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_upUserHasBeenSet(false),
    m_bidListHasBeenSet(false),
    m_bidEndTimeHasBeenSet(false),
    m_isUpHasBeenSet(false),
    m_nextPriceHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReservedBidInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UpPrice") && !rsp["UpPrice"].IsNull())
    {
        if (!rsp["UpPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upPrice = rsp["UpPrice"].GetInt64();
        m_upPriceHasBeenSet = true;
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

    if (rsp.HasMember("UpUser") && !rsp["UpUser"].IsNull())
    {
        if (!rsp["UpUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upUser = string(rsp["UpUser"].GetString());
        m_upUserHasBeenSet = true;
    }

    if (rsp.HasMember("BidList") && !rsp["BidList"].IsNull())
    {
        if (!rsp["BidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BidList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReserveBidInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bidList.push_back(item);
        }
        m_bidListHasBeenSet = true;
    }

    if (rsp.HasMember("BidEndTime") && !rsp["BidEndTime"].IsNull())
    {
        if (!rsp["BidEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BidEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bidEndTime = string(rsp["BidEndTime"].GetString());
        m_bidEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsUp") && !rsp["IsUp"].IsNull())
    {
        if (!rsp["IsUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUp = rsp["IsUp"].GetBool();
        m_isUpHasBeenSet = true;
    }

    if (rsp.HasMember("NextPrice") && !rsp["NextPrice"].IsNull())
    {
        if (!rsp["NextPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NextPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextPrice = rsp["NextPrice"].GetInt64();
        m_nextPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeReservedBidInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_upPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upPrice, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_upUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upUser.c_str(), allocator).Move(), allocator);
    }

    if (m_bidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bidList.begin(); itr != m_bidList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bidEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bidEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUp, allocator);
    }

    if (m_nextPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextPrice, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


int64_t DescribeReservedBidInfoResponse::GetUpPrice() const
{
    return m_upPrice;
}

bool DescribeReservedBidInfoResponse::UpPriceHasBeenSet() const
{
    return m_upPriceHasBeenSet;
}

int64_t DescribeReservedBidInfoResponse::GetPrice() const
{
    return m_price;
}

bool DescribeReservedBidInfoResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string DescribeReservedBidInfoResponse::GetUpUser() const
{
    return m_upUser;
}

bool DescribeReservedBidInfoResponse::UpUserHasBeenSet() const
{
    return m_upUserHasBeenSet;
}

vector<ReserveBidInfo> DescribeReservedBidInfoResponse::GetBidList() const
{
    return m_bidList;
}

bool DescribeReservedBidInfoResponse::BidListHasBeenSet() const
{
    return m_bidListHasBeenSet;
}

string DescribeReservedBidInfoResponse::GetBidEndTime() const
{
    return m_bidEndTime;
}

bool DescribeReservedBidInfoResponse::BidEndTimeHasBeenSet() const
{
    return m_bidEndTimeHasBeenSet;
}

bool DescribeReservedBidInfoResponse::GetIsUp() const
{
    return m_isUp;
}

bool DescribeReservedBidInfoResponse::IsUpHasBeenSet() const
{
    return m_isUpHasBeenSet;
}

int64_t DescribeReservedBidInfoResponse::GetNextPrice() const
{
    return m_nextPrice;
}

bool DescribeReservedBidInfoResponse::NextPriceHasBeenSet() const
{
    return m_nextPriceHasBeenSet;
}

int64_t DescribeReservedBidInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeReservedBidInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


