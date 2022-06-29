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

#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeHistoryServiceResponse::DescribeHistoryServiceResponse() :
    m_buyStatusHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isAutoOpenRenewHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHistoryServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BuyStatus") && !rsp["BuyStatus"].IsNull())
    {
        if (!rsp["BuyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BuyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = rsp["BuyStatus"].GetUint64();
        m_buyStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InquireNum") && !rsp["InquireNum"].IsNull())
    {
        if (!rsp["InquireNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InquireNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = rsp["InquireNum"].GetUint64();
        m_inquireNumHasBeenSet = true;
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

    if (rsp.HasMember("IsAutoOpenRenew") && !rsp["IsAutoOpenRenew"].IsNull())
    {
        if (!rsp["IsAutoOpenRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAutoOpenRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoOpenRenew = rsp["IsAutoOpenRenew"].GetUint64();
        m_isAutoOpenRenewHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeHistoryServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyStatus, allocator);
    }

    if (m_inquireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireNum, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoOpenRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoOpenRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoOpenRenew, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeHistoryServiceResponse::GetBuyStatus() const
{
    return m_buyStatus;
}

bool DescribeHistoryServiceResponse::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

uint64_t DescribeHistoryServiceResponse::GetInquireNum() const
{
    return m_inquireNum;
}

bool DescribeHistoryServiceResponse::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

string DescribeHistoryServiceResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeHistoryServiceResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeHistoryServiceResponse::GetIsAutoOpenRenew() const
{
    return m_isAutoOpenRenew;
}

bool DescribeHistoryServiceResponse::IsAutoOpenRenewHasBeenSet() const
{
    return m_isAutoOpenRenewHasBeenSet;
}

string DescribeHistoryServiceResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeHistoryServiceResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t DescribeHistoryServiceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeHistoryServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeHistoryServiceResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeHistoryServiceResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}


