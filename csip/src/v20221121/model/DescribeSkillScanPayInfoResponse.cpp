/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeSkillScanPayInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSkillScanPayInfoResponse::DescribeSkillScanPayInfoResponse() :
    m_appIDHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_usedCountHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_betaEndTimeHasBeenSet(false),
    m_timeNowHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSkillScanPayInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("OrderStatus") && !rsp["OrderStatus"].IsNull())
    {
        if (!rsp["OrderStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = rsp["OrderStatus"].GetInt64();
        m_orderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TotalQuota") && !rsp["TotalQuota"].IsNull())
    {
        if (!rsp["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = rsp["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("UsedCount") && !rsp["UsedCount"].IsNull())
    {
        if (!rsp["UsedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCount = rsp["UsedCount"].GetInt64();
        m_usedCountHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenew") && !rsp["AutoRenew"].IsNull())
    {
        if (!rsp["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = rsp["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = rsp["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (rsp.HasMember("TimeUnit") && !rsp["TimeUnit"].IsNull())
    {
        if (!rsp["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(rsp["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BetaEndTime") && !rsp["BetaEndTime"].IsNull())
    {
        if (!rsp["BetaEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BetaEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_betaEndTime = string(rsp["BetaEndTime"].GetString());
        m_betaEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TimeNow") && !rsp["TimeNow"].IsNull())
    {
        if (!rsp["TimeNow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeNow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeNow = string(rsp["TimeNow"].GetString());
        m_timeNowHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("NickName") && !rsp["NickName"].IsNull())
    {
        if (!rsp["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(rsp["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSkillScanPayInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_usedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCount, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_betaEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_betaEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeNow.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeSkillScanPayInfoResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeSkillScanPayInfoResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

int64_t DescribeSkillScanPayInfoResponse::GetOrderStatus() const
{
    return m_orderStatus;
}

bool DescribeSkillScanPayInfoResponse::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

int64_t DescribeSkillScanPayInfoResponse::GetTotalQuota() const
{
    return m_totalQuota;
}

bool DescribeSkillScanPayInfoResponse::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

int64_t DescribeSkillScanPayInfoResponse::GetUsedCount() const
{
    return m_usedCount;
}

bool DescribeSkillScanPayInfoResponse::UsedCountHasBeenSet() const
{
    return m_usedCountHasBeenSet;
}

int64_t DescribeSkillScanPayInfoResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeSkillScanPayInfoResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t DescribeSkillScanPayInfoResponse::GetAutoRenew() const
{
    return m_autoRenew;
}

bool DescribeSkillScanPayInfoResponse::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeSkillScanPayInfoResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DescribeSkillScanPayInfoResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool DescribeSkillScanPayInfoResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool DescribeSkillScanPayInfoResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool DescribeSkillScanPayInfoResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeSkillScanPayInfoResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetBetaEndTime() const
{
    return m_betaEndTime;
}

bool DescribeSkillScanPayInfoResponse::BetaEndTimeHasBeenSet() const
{
    return m_betaEndTimeHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetTimeNow() const
{
    return m_timeNow;
}

bool DescribeSkillScanPayInfoResponse::TimeNowHasBeenSet() const
{
    return m_timeNowHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetUin() const
{
    return m_uin;
}

bool DescribeSkillScanPayInfoResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeSkillScanPayInfoResponse::GetNickName() const
{
    return m_nickName;
}

bool DescribeSkillScanPayInfoResponse::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}


