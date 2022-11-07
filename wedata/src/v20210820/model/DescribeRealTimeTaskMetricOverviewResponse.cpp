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

#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskMetricOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRealTimeTaskMetricOverviewResponse::DescribeRealTimeTaskMetricOverviewResponse() :
    m_totalRecordNumOfReadHasBeenSet(false),
    m_totalRecordByteNumOfReadHasBeenSet(false),
    m_totalRecordNumOfWriteHasBeenSet(false),
    m_totalRecordByteNumOfWriteHasBeenSet(false),
    m_totalDirtyRecordNumHasBeenSet(false),
    m_totalDirtyRecordByteHasBeenSet(false),
    m_totalDurationHasBeenSet(false),
    m_beginRunTimeHasBeenSet(false),
    m_endRunTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRealTimeTaskMetricOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalRecordNumOfRead") && !rsp["TotalRecordNumOfRead"].IsNull())
    {
        if (!rsp["TotalRecordNumOfRead"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRecordNumOfRead` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordNumOfRead = rsp["TotalRecordNumOfRead"].GetUint64();
        m_totalRecordNumOfReadHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRecordByteNumOfRead") && !rsp["TotalRecordByteNumOfRead"].IsNull())
    {
        if (!rsp["TotalRecordByteNumOfRead"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRecordByteNumOfRead` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordByteNumOfRead = rsp["TotalRecordByteNumOfRead"].GetUint64();
        m_totalRecordByteNumOfReadHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRecordNumOfWrite") && !rsp["TotalRecordNumOfWrite"].IsNull())
    {
        if (!rsp["TotalRecordNumOfWrite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRecordNumOfWrite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordNumOfWrite = rsp["TotalRecordNumOfWrite"].GetUint64();
        m_totalRecordNumOfWriteHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRecordByteNumOfWrite") && !rsp["TotalRecordByteNumOfWrite"].IsNull())
    {
        if (!rsp["TotalRecordByteNumOfWrite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRecordByteNumOfWrite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordByteNumOfWrite = rsp["TotalRecordByteNumOfWrite"].GetUint64();
        m_totalRecordByteNumOfWriteHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDirtyRecordNum") && !rsp["TotalDirtyRecordNum"].IsNull())
    {
        if (!rsp["TotalDirtyRecordNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDirtyRecordNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDirtyRecordNum = rsp["TotalDirtyRecordNum"].GetUint64();
        m_totalDirtyRecordNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDirtyRecordByte") && !rsp["TotalDirtyRecordByte"].IsNull())
    {
        if (!rsp["TotalDirtyRecordByte"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalDirtyRecordByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDirtyRecordByte = rsp["TotalDirtyRecordByte"].GetUint64();
        m_totalDirtyRecordByteHasBeenSet = true;
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

    if (rsp.HasMember("BeginRunTime") && !rsp["BeginRunTime"].IsNull())
    {
        if (!rsp["BeginRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginRunTime = string(rsp["BeginRunTime"].GetString());
        m_beginRunTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndRunTime") && !rsp["EndRunTime"].IsNull())
    {
        if (!rsp["EndRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endRunTime = string(rsp["EndRunTime"].GetString());
        m_endRunTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRealTimeTaskMetricOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalRecordNumOfReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordNumOfRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordNumOfRead, allocator);
    }

    if (m_totalRecordByteNumOfReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordByteNumOfRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordByteNumOfRead, allocator);
    }

    if (m_totalRecordNumOfWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordNumOfWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordNumOfWrite, allocator);
    }

    if (m_totalRecordByteNumOfWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordByteNumOfWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordByteNumOfWrite, allocator);
    }

    if (m_totalDirtyRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDirtyRecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDirtyRecordNum, allocator);
    }

    if (m_totalDirtyRecordByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDirtyRecordByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDirtyRecordByte, allocator);
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
    }

    if (m_beginRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endRunTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalRecordNumOfRead() const
{
    return m_totalRecordNumOfRead;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalRecordNumOfReadHasBeenSet() const
{
    return m_totalRecordNumOfReadHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalRecordByteNumOfRead() const
{
    return m_totalRecordByteNumOfRead;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalRecordByteNumOfReadHasBeenSet() const
{
    return m_totalRecordByteNumOfReadHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalRecordNumOfWrite() const
{
    return m_totalRecordNumOfWrite;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalRecordNumOfWriteHasBeenSet() const
{
    return m_totalRecordNumOfWriteHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalRecordByteNumOfWrite() const
{
    return m_totalRecordByteNumOfWrite;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalRecordByteNumOfWriteHasBeenSet() const
{
    return m_totalRecordByteNumOfWriteHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalDirtyRecordNum() const
{
    return m_totalDirtyRecordNum;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalDirtyRecordNumHasBeenSet() const
{
    return m_totalDirtyRecordNumHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalDirtyRecordByte() const
{
    return m_totalDirtyRecordByte;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalDirtyRecordByteHasBeenSet() const
{
    return m_totalDirtyRecordByteHasBeenSet;
}

uint64_t DescribeRealTimeTaskMetricOverviewResponse::GetTotalDuration() const
{
    return m_totalDuration;
}

bool DescribeRealTimeTaskMetricOverviewResponse::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

string DescribeRealTimeTaskMetricOverviewResponse::GetBeginRunTime() const
{
    return m_beginRunTime;
}

bool DescribeRealTimeTaskMetricOverviewResponse::BeginRunTimeHasBeenSet() const
{
    return m_beginRunTimeHasBeenSet;
}

string DescribeRealTimeTaskMetricOverviewResponse::GetEndRunTime() const
{
    return m_endRunTime;
}

bool DescribeRealTimeTaskMetricOverviewResponse::EndRunTimeHasBeenSet() const
{
    return m_endRunTimeHasBeenSet;
}


