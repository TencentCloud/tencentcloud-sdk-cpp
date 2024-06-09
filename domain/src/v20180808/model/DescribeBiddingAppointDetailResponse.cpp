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

#include <tencentcloud/domain/v20180808/model/DescribeBiddingAppointDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeBiddingAppointDetailResponse::DescribeBiddingAppointDetailResponse() :
    m_domainHasBeenSet(false),
    m_appointNumHasBeenSet(false),
    m_appointStartTimeHasBeenSet(false),
    m_appointEndTimeHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_appointPriceHasBeenSet(false),
    m_appointBondPriceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_biddingBondRefundHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBiddingAppointDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("AppointNum") && !rsp["AppointNum"].IsNull())
    {
        if (!rsp["AppointNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppointNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointNum = rsp["AppointNum"].GetUint64();
        m_appointNumHasBeenSet = true;
    }

    if (rsp.HasMember("AppointStartTime") && !rsp["AppointStartTime"].IsNull())
    {
        if (!rsp["AppointStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppointStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appointStartTime = string(rsp["AppointStartTime"].GetString());
        m_appointStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AppointEndTime") && !rsp["AppointEndTime"].IsNull())
    {
        if (!rsp["AppointEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppointEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appointEndTime = string(rsp["AppointEndTime"].GetString());
        m_appointEndTimeHasBeenSet = true;
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

    if (rsp.HasMember("AppointPrice") && !rsp["AppointPrice"].IsNull())
    {
        if (!rsp["AppointPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppointPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointPrice = rsp["AppointPrice"].GetUint64();
        m_appointPriceHasBeenSet = true;
    }

    if (rsp.HasMember("AppointBondPrice") && !rsp["AppointBondPrice"].IsNull())
    {
        if (!rsp["AppointBondPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppointBondPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appointBondPrice = rsp["AppointBondPrice"].GetUint64();
        m_appointBondPriceHasBeenSet = true;
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

    if (rsp.HasMember("BiddingBondRefund") && !rsp["BiddingBondRefund"].IsNull())
    {
        if (!rsp["BiddingBondRefund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingBondRefund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondRefund = string(rsp["BiddingBondRefund"].GetString());
        m_biddingBondRefundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBiddingAppointDetailResponse::ToJsonString() const
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

    if (m_appointNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointNum, allocator);
    }

    if (m_appointStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appointStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appointEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appointEndTime.c_str(), allocator).Move(), allocator);
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

    if (m_appointPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointPrice, allocator);
    }

    if (m_appointBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointBondPrice, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_biddingBondRefundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondRefund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingBondRefund.c_str(), allocator).Move(), allocator);
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


string DescribeBiddingAppointDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeBiddingAppointDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeBiddingAppointDetailResponse::GetAppointNum() const
{
    return m_appointNum;
}

bool DescribeBiddingAppointDetailResponse::AppointNumHasBeenSet() const
{
    return m_appointNumHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetAppointStartTime() const
{
    return m_appointStartTime;
}

bool DescribeBiddingAppointDetailResponse::AppointStartTimeHasBeenSet() const
{
    return m_appointStartTimeHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetAppointEndTime() const
{
    return m_appointEndTime;
}

bool DescribeBiddingAppointDetailResponse::AppointEndTimeHasBeenSet() const
{
    return m_appointEndTimeHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetRegTime() const
{
    return m_regTime;
}

bool DescribeBiddingAppointDetailResponse::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeBiddingAppointDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool DescribeBiddingAppointDetailResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

uint64_t DescribeBiddingAppointDetailResponse::GetAppointPrice() const
{
    return m_appointPrice;
}

bool DescribeBiddingAppointDetailResponse::AppointPriceHasBeenSet() const
{
    return m_appointPriceHasBeenSet;
}

uint64_t DescribeBiddingAppointDetailResponse::GetAppointBondPrice() const
{
    return m_appointBondPrice;
}

bool DescribeBiddingAppointDetailResponse::AppointBondPriceHasBeenSet() const
{
    return m_appointBondPriceHasBeenSet;
}

uint64_t DescribeBiddingAppointDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBiddingAppointDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeBiddingAppointDetailResponse::GetBiddingBondRefund() const
{
    return m_biddingBondRefund;
}

bool DescribeBiddingAppointDetailResponse::BiddingBondRefundHasBeenSet() const
{
    return m_biddingBondRefundHasBeenSet;
}


