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
using namespace rapidjson;
using namespace std;

DescribeHistoryServiceResponse::DescribeHistoryServiceResponse() :
    m_buyStatusHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isAutoOpenRenewHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHistoryServiceResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BuyStatus") && !rsp["BuyStatus"].IsNull())
    {
        if (!rsp["BuyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BuyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = rsp["BuyStatus"].GetUint64();
        m_buyStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InquireNum") && !rsp["InquireNum"].IsNull())
    {
        if (!rsp["InquireNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InquireNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = rsp["InquireNum"].GetUint64();
        m_inquireNumHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsAutoOpenRenew") && !rsp["IsAutoOpenRenew"].IsNull())
    {
        if (!rsp["IsAutoOpenRenew"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `IsAutoOpenRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoOpenRenew = rsp["IsAutoOpenRenew"].GetUint64();
        m_isAutoOpenRenewHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


