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

#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribeSessionStatisticsResponse::DescribeSessionStatisticsResponse() :
    m_sessionNumHasBeenSet(false),
    m_totalDurationHasBeenSet(false),
    m_activeFieldDeviceNumHasBeenSet(false),
    m_activeRemoteDeviceNumHasBeenSet(false),
    m_notBadSessionRatioHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSessionStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionNum") && !rsp["SessionNum"].IsNull())
    {
        if (!rsp["SessionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionNum = rsp["SessionNum"].GetUint64();
        m_sessionNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDuration") && !rsp["TotalDuration"].IsNull())
    {
        if (!rsp["TotalDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDuration = rsp["TotalDuration"].GetUint64();
        m_totalDurationHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveFieldDeviceNum") && !rsp["ActiveFieldDeviceNum"].IsNull())
    {
        if (!rsp["ActiveFieldDeviceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveFieldDeviceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeFieldDeviceNum = rsp["ActiveFieldDeviceNum"].GetUint64();
        m_activeFieldDeviceNumHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveRemoteDeviceNum") && !rsp["ActiveRemoteDeviceNum"].IsNull())
    {
        if (!rsp["ActiveRemoteDeviceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveRemoteDeviceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeRemoteDeviceNum = rsp["ActiveRemoteDeviceNum"].GetUint64();
        m_activeRemoteDeviceNumHasBeenSet = true;
    }

    if (rsp.HasMember("NotBadSessionRatio") && !rsp["NotBadSessionRatio"].IsNull())
    {
        if (!rsp["NotBadSessionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotBadSessionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notBadSessionRatio = rsp["NotBadSessionRatio"].GetUint64();
        m_notBadSessionRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSessionStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sessionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionNum, allocator);
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
    }

    if (m_activeFieldDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveFieldDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeFieldDeviceNum, allocator);
    }

    if (m_activeRemoteDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveRemoteDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeRemoteDeviceNum, allocator);
    }

    if (m_notBadSessionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBadSessionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBadSessionRatio, allocator);
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


uint64_t DescribeSessionStatisticsResponse::GetSessionNum() const
{
    return m_sessionNum;
}

bool DescribeSessionStatisticsResponse::SessionNumHasBeenSet() const
{
    return m_sessionNumHasBeenSet;
}

uint64_t DescribeSessionStatisticsResponse::GetTotalDuration() const
{
    return m_totalDuration;
}

bool DescribeSessionStatisticsResponse::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

uint64_t DescribeSessionStatisticsResponse::GetActiveFieldDeviceNum() const
{
    return m_activeFieldDeviceNum;
}

bool DescribeSessionStatisticsResponse::ActiveFieldDeviceNumHasBeenSet() const
{
    return m_activeFieldDeviceNumHasBeenSet;
}

uint64_t DescribeSessionStatisticsResponse::GetActiveRemoteDeviceNum() const
{
    return m_activeRemoteDeviceNum;
}

bool DescribeSessionStatisticsResponse::ActiveRemoteDeviceNumHasBeenSet() const
{
    return m_activeRemoteDeviceNumHasBeenSet;
}

uint64_t DescribeSessionStatisticsResponse::GetNotBadSessionRatio() const
{
    return m_notBadSessionRatio;
}

bool DescribeSessionStatisticsResponse::NotBadSessionRatioHasBeenSet() const
{
    return m_notBadSessionRatioHasBeenSet;
}


