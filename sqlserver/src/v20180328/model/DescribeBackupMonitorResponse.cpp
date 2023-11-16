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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMonitorResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeBackupMonitorResponse::DescribeBackupMonitorResponse() :
    m_timeStampHasBeenSet(false),
    m_freeSpaceHasBeenSet(false),
    m_actualUsedSpaceHasBeenSet(false),
    m_logBackupSpaceHasBeenSet(false),
    m_dataBackupSpaceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupMonitorResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TimeStamp") && !rsp["TimeStamp"].IsNull())
    {
        if (!rsp["TimeStamp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeStamp` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TimeStamp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeStamp.push_back((*itr).GetString());
        }
        m_timeStampHasBeenSet = true;
    }

    if (rsp.HasMember("FreeSpace") && !rsp["FreeSpace"].IsNull())
    {
        if (!rsp["FreeSpace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FreeSpace` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FreeSpace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_freeSpace.push_back((*itr).GetDouble());
        }
        m_freeSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("ActualUsedSpace") && !rsp["ActualUsedSpace"].IsNull())
    {
        if (!rsp["ActualUsedSpace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActualUsedSpace` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ActualUsedSpace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actualUsedSpace.push_back((*itr).GetDouble());
        }
        m_actualUsedSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupSpace") && !rsp["LogBackupSpace"].IsNull())
    {
        if (!rsp["LogBackupSpace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogBackupSpace` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogBackupSpace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logBackupSpace.push_back((*itr).GetDouble());
        }
        m_logBackupSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("DataBackupSpace") && !rsp["DataBackupSpace"].IsNull())
    {
        if (!rsp["DataBackupSpace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataBackupSpace` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataBackupSpace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataBackupSpace.push_back((*itr).GetDouble());
        }
        m_dataBackupSpaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupMonitorResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeStamp.begin(); itr != m_timeStamp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_freeSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_freeSpace.begin(); itr != m_freeSpace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_actualUsedSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualUsedSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actualUsedSpace.begin(); itr != m_actualUsedSpace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_logBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logBackupSpace.begin(); itr != m_logBackupSpace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_dataBackupSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackupSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataBackupSpace.begin(); itr != m_dataBackupSpace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
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


vector<string> DescribeBackupMonitorResponse::GetTimeStamp() const
{
    return m_timeStamp;
}

bool DescribeBackupMonitorResponse::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

vector<double> DescribeBackupMonitorResponse::GetFreeSpace() const
{
    return m_freeSpace;
}

bool DescribeBackupMonitorResponse::FreeSpaceHasBeenSet() const
{
    return m_freeSpaceHasBeenSet;
}

vector<double> DescribeBackupMonitorResponse::GetActualUsedSpace() const
{
    return m_actualUsedSpace;
}

bool DescribeBackupMonitorResponse::ActualUsedSpaceHasBeenSet() const
{
    return m_actualUsedSpaceHasBeenSet;
}

vector<double> DescribeBackupMonitorResponse::GetLogBackupSpace() const
{
    return m_logBackupSpace;
}

bool DescribeBackupMonitorResponse::LogBackupSpaceHasBeenSet() const
{
    return m_logBackupSpaceHasBeenSet;
}

vector<double> DescribeBackupMonitorResponse::GetDataBackupSpace() const
{
    return m_dataBackupSpace;
}

bool DescribeBackupMonitorResponse::DataBackupSpaceHasBeenSet() const
{
    return m_dataBackupSpaceHasBeenSet;
}


