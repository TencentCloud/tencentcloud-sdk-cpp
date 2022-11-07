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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskReportResponse::DescribeTaskReportResponse() :
    m_totalReadRecordsHasBeenSet(false),
    m_totalReadBytesHasBeenSet(false),
    m_totalWriteRecordsHasBeenSet(false),
    m_totalWriteBytesHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskReportResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalReadRecords") && !rsp["TotalReadRecords"].IsNull())
    {
        if (!rsp["TotalReadRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalReadRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadRecords = rsp["TotalReadRecords"].GetUint64();
        m_totalReadRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalReadBytes") && !rsp["TotalReadBytes"].IsNull())
    {
        if (!rsp["TotalReadBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalReadBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadBytes = rsp["TotalReadBytes"].GetUint64();
        m_totalReadBytesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalWriteRecords") && !rsp["TotalWriteRecords"].IsNull())
    {
        if (!rsp["TotalWriteRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalWriteRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteRecords = rsp["TotalWriteRecords"].GetUint64();
        m_totalWriteRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalWriteBytes") && !rsp["TotalWriteBytes"].IsNull())
    {
        if (!rsp["TotalWriteBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalWriteBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteBytes = rsp["TotalWriteBytes"].GetUint64();
        m_totalWriteBytesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalErrorRecords") && !rsp["TotalErrorRecords"].IsNull())
    {
        if (!rsp["TotalErrorRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalErrorRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = rsp["TotalErrorRecords"].GetUint64();
        m_totalErrorRecordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskReportResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalReadRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadRecords, allocator);
    }

    if (m_totalReadBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadBytes, allocator);
    }

    if (m_totalWriteRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteRecords, allocator);
    }

    if (m_totalWriteBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteBytes, allocator);
    }

    if (m_totalErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorRecords, allocator);
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


uint64_t DescribeTaskReportResponse::GetTotalReadRecords() const
{
    return m_totalReadRecords;
}

bool DescribeTaskReportResponse::TotalReadRecordsHasBeenSet() const
{
    return m_totalReadRecordsHasBeenSet;
}

uint64_t DescribeTaskReportResponse::GetTotalReadBytes() const
{
    return m_totalReadBytes;
}

bool DescribeTaskReportResponse::TotalReadBytesHasBeenSet() const
{
    return m_totalReadBytesHasBeenSet;
}

uint64_t DescribeTaskReportResponse::GetTotalWriteRecords() const
{
    return m_totalWriteRecords;
}

bool DescribeTaskReportResponse::TotalWriteRecordsHasBeenSet() const
{
    return m_totalWriteRecordsHasBeenSet;
}

uint64_t DescribeTaskReportResponse::GetTotalWriteBytes() const
{
    return m_totalWriteBytes;
}

bool DescribeTaskReportResponse::TotalWriteBytesHasBeenSet() const
{
    return m_totalWriteBytesHasBeenSet;
}

uint64_t DescribeTaskReportResponse::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

bool DescribeTaskReportResponse::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}


