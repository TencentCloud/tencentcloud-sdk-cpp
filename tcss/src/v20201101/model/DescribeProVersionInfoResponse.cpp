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

#include <tencentcloud/tcss/v20201101/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeProVersionInfoResponse::DescribeProVersionInfoResponse() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_coresCntHasBeenSet(false),
    m_maxPostPayCoresCntHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_buyStatusHasBeenSet(false),
    m_isPurchasedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProVersionInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
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

    if (rsp.HasMember("CoresCnt") && !rsp["CoresCnt"].IsNull())
    {
        if (!rsp["CoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCnt = rsp["CoresCnt"].GetUint64();
        m_coresCntHasBeenSet = true;
    }

    if (rsp.HasMember("MaxPostPayCoresCnt") && !rsp["MaxPostPayCoresCnt"].IsNull())
    {
        if (!rsp["MaxPostPayCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxPostPayCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPostPayCoresCnt = rsp["MaxPostPayCoresCnt"].GetUint64();
        m_maxPostPayCoresCntHasBeenSet = true;
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

    if (rsp.HasMember("BuyStatus") && !rsp["BuyStatus"].IsNull())
    {
        if (!rsp["BuyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = string(rsp["BuyStatus"].GetString());
        m_buyStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsPurchased") && !rsp["IsPurchased"].IsNull())
    {
        if (!rsp["IsPurchased"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPurchased` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPurchased = rsp["IsPurchased"].GetBool();
        m_isPurchasedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeProVersionInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCnt, allocator);
    }

    if (m_maxPostPayCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPostPayCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPostPayCoresCnt, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isPurchasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPurchased";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPurchased, allocator);
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


string DescribeProVersionInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeProVersionInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeProVersionInfoResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeProVersionInfoResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeProVersionInfoResponse::GetCoresCnt() const
{
    return m_coresCnt;
}

bool DescribeProVersionInfoResponse::CoresCntHasBeenSet() const
{
    return m_coresCntHasBeenSet;
}

uint64_t DescribeProVersionInfoResponse::GetMaxPostPayCoresCnt() const
{
    return m_maxPostPayCoresCnt;
}

bool DescribeProVersionInfoResponse::MaxPostPayCoresCntHasBeenSet() const
{
    return m_maxPostPayCoresCntHasBeenSet;
}

string DescribeProVersionInfoResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeProVersionInfoResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeProVersionInfoResponse::GetBuyStatus() const
{
    return m_buyStatus;
}

bool DescribeProVersionInfoResponse::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

bool DescribeProVersionInfoResponse::GetIsPurchased() const
{
    return m_isPurchased;
}

bool DescribeProVersionInfoResponse::IsPurchasedHasBeenSet() const
{
    return m_isPurchasedHasBeenSet;
}


