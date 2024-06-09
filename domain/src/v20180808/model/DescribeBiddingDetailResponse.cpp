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

#include <tencentcloud/domain/v20180808/model/DescribeBiddingDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeBiddingDetailResponse::DescribeBiddingDetailResponse() :
    m_domainHasBeenSet(false),
    m_biddingNumHasBeenSet(false),
    m_biddingStartTimeHasBeenSet(false),
    m_biddingEndTimeHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_currentPriceHasBeenSet(false),
    m_currentNicknameHasBeenSet(false),
    m_biddingBondPriceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_biddingFlagHasBeenSet(false),
    m_biddingBondRefundHasBeenSet(false),
    m_biddingPriceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBiddingDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("BiddingNum") && !rsp["BiddingNum"].IsNull())
    {
        if (!rsp["BiddingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingNum = rsp["BiddingNum"].GetUint64();
        m_biddingNumHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingStartTime") && !rsp["BiddingStartTime"].IsNull())
    {
        if (!rsp["BiddingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingStartTime = string(rsp["BiddingStartTime"].GetString());
        m_biddingStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingEndTime") && !rsp["BiddingEndTime"].IsNull())
    {
        if (!rsp["BiddingEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingEndTime = string(rsp["BiddingEndTime"].GetString());
        m_biddingEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RegTime") && !rsp["RegTime"].IsNull())
    {
        if (!rsp["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(rsp["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTime") && !rsp["DeleteTime"].IsNull())
    {
        if (!rsp["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(rsp["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPrice") && !rsp["CurrentPrice"].IsNull())
    {
        if (!rsp["CurrentPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPrice = rsp["CurrentPrice"].GetUint64();
        m_currentPriceHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentNickname") && !rsp["CurrentNickname"].IsNull())
    {
        if (!rsp["CurrentNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentNickname = string(rsp["CurrentNickname"].GetString());
        m_currentNicknameHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingBondPrice") && !rsp["BiddingBondPrice"].IsNull())
    {
        if (!rsp["BiddingBondPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingBondPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondPrice = rsp["BiddingBondPrice"].GetUint64();
        m_biddingBondPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingFlag") && !rsp["BiddingFlag"].IsNull())
    {
        if (!rsp["BiddingFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingFlag = rsp["BiddingFlag"].GetUint64();
        m_biddingFlagHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingBondRefund") && !rsp["BiddingBondRefund"].IsNull())
    {
        if (!rsp["BiddingBondRefund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingBondRefund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondRefund = string(rsp["BiddingBondRefund"].GetString());
        m_biddingBondRefundHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingPrice") && !rsp["BiddingPrice"].IsNull())
    {
        if (!rsp["BiddingPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_biddingPrice = rsp["BiddingPrice"].GetUint64();
        m_biddingPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBiddingDetailResponse::ToJsonString() const
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

    if (m_biddingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingNum, allocator);
    }

    if (m_biddingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPrice, allocator);
    }

    if (m_currentNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingBondPrice, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_biddingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingFlag, allocator);
    }

    if (m_biddingBondRefundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondRefund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingBondRefund.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingPrice, allocator);
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


string DescribeBiddingDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeBiddingDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetBiddingNum() const
{
    return m_biddingNum;
}

bool DescribeBiddingDetailResponse::BiddingNumHasBeenSet() const
{
    return m_biddingNumHasBeenSet;
}

string DescribeBiddingDetailResponse::GetBiddingStartTime() const
{
    return m_biddingStartTime;
}

bool DescribeBiddingDetailResponse::BiddingStartTimeHasBeenSet() const
{
    return m_biddingStartTimeHasBeenSet;
}

string DescribeBiddingDetailResponse::GetBiddingEndTime() const
{
    return m_biddingEndTime;
}

bool DescribeBiddingDetailResponse::BiddingEndTimeHasBeenSet() const
{
    return m_biddingEndTimeHasBeenSet;
}

string DescribeBiddingDetailResponse::GetRegTime() const
{
    return m_regTime;
}

bool DescribeBiddingDetailResponse::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string DescribeBiddingDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeBiddingDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeBiddingDetailResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool DescribeBiddingDetailResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetCurrentPrice() const
{
    return m_currentPrice;
}

bool DescribeBiddingDetailResponse::CurrentPriceHasBeenSet() const
{
    return m_currentPriceHasBeenSet;
}

string DescribeBiddingDetailResponse::GetCurrentNickname() const
{
    return m_currentNickname;
}

bool DescribeBiddingDetailResponse::CurrentNicknameHasBeenSet() const
{
    return m_currentNicknameHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetBiddingBondPrice() const
{
    return m_biddingBondPrice;
}

bool DescribeBiddingDetailResponse::BiddingBondPriceHasBeenSet() const
{
    return m_biddingBondPriceHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBiddingDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetBiddingFlag() const
{
    return m_biddingFlag;
}

bool DescribeBiddingDetailResponse::BiddingFlagHasBeenSet() const
{
    return m_biddingFlagHasBeenSet;
}

string DescribeBiddingDetailResponse::GetBiddingBondRefund() const
{
    return m_biddingBondRefund;
}

bool DescribeBiddingDetailResponse::BiddingBondRefundHasBeenSet() const
{
    return m_biddingBondRefundHasBeenSet;
}

uint64_t DescribeBiddingDetailResponse::GetBiddingPrice() const
{
    return m_biddingPrice;
}

bool DescribeBiddingDetailResponse::BiddingPriceHasBeenSet() const
{
    return m_biddingPriceHasBeenSet;
}


