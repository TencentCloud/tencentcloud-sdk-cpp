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

#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeIntegrationStatisticsResponse::DescribeIntegrationStatisticsResponse() :
    m_totalTaskHasBeenSet(false),
    m_prodTaskHasBeenSet(false),
    m_devTaskHasBeenSet(false),
    m_totalReadRecordsHasBeenSet(false),
    m_totalWriteRecordsHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false),
    m_totalAlarmEventHasBeenSet(false),
    m_increaseReadRecordsHasBeenSet(false),
    m_increaseWriteRecordsHasBeenSet(false),
    m_increaseErrorRecordsHasBeenSet(false),
    m_increaseAlarmEventHasBeenSet(false),
    m_alarmEventHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIntegrationStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalTask") && !rsp["TotalTask"].IsNull())
    {
        if (!rsp["TotalTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTask = rsp["TotalTask"].GetInt64();
        m_totalTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ProdTask") && !rsp["ProdTask"].IsNull())
    {
        if (!rsp["ProdTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProdTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_prodTask = rsp["ProdTask"].GetInt64();
        m_prodTaskHasBeenSet = true;
    }

    if (rsp.HasMember("DevTask") && !rsp["DevTask"].IsNull())
    {
        if (!rsp["DevTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_devTask = rsp["DevTask"].GetInt64();
        m_devTaskHasBeenSet = true;
    }

    if (rsp.HasMember("TotalReadRecords") && !rsp["TotalReadRecords"].IsNull())
    {
        if (!rsp["TotalReadRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalReadRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadRecords = rsp["TotalReadRecords"].GetInt64();
        m_totalReadRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalWriteRecords") && !rsp["TotalWriteRecords"].IsNull())
    {
        if (!rsp["TotalWriteRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalWriteRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteRecords = rsp["TotalWriteRecords"].GetInt64();
        m_totalWriteRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalErrorRecords") && !rsp["TotalErrorRecords"].IsNull())
    {
        if (!rsp["TotalErrorRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalErrorRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = rsp["TotalErrorRecords"].GetInt64();
        m_totalErrorRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAlarmEvent") && !rsp["TotalAlarmEvent"].IsNull())
    {
        if (!rsp["TotalAlarmEvent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAlarmEvent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAlarmEvent = rsp["TotalAlarmEvent"].GetInt64();
        m_totalAlarmEventHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseReadRecords") && !rsp["IncreaseReadRecords"].IsNull())
    {
        if (!rsp["IncreaseReadRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseReadRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseReadRecords = rsp["IncreaseReadRecords"].GetInt64();
        m_increaseReadRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseWriteRecords") && !rsp["IncreaseWriteRecords"].IsNull())
    {
        if (!rsp["IncreaseWriteRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseWriteRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseWriteRecords = rsp["IncreaseWriteRecords"].GetInt64();
        m_increaseWriteRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseErrorRecords") && !rsp["IncreaseErrorRecords"].IsNull())
    {
        if (!rsp["IncreaseErrorRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseErrorRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseErrorRecords = rsp["IncreaseErrorRecords"].GetInt64();
        m_increaseErrorRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseAlarmEvent") && !rsp["IncreaseAlarmEvent"].IsNull())
    {
        if (!rsp["IncreaseAlarmEvent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseAlarmEvent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseAlarmEvent = rsp["IncreaseAlarmEvent"].GetInt64();
        m_increaseAlarmEventHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEvent") && !rsp["AlarmEvent"].IsNull())
    {
        if (!rsp["AlarmEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEvent = string(rsp["AlarmEvent"].GetString());
        m_alarmEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIntegrationStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTask, allocator);
    }

    if (m_prodTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProdTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prodTask, allocator);
    }

    if (m_devTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devTask, allocator);
    }

    if (m_totalReadRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadRecords, allocator);
    }

    if (m_totalWriteRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteRecords, allocator);
    }

    if (m_totalErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorRecords, allocator);
    }

    if (m_totalAlarmEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAlarmEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAlarmEvent, allocator);
    }

    if (m_increaseReadRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseReadRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseReadRecords, allocator);
    }

    if (m_increaseWriteRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseWriteRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseWriteRecords, allocator);
    }

    if (m_increaseErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseErrorRecords, allocator);
    }

    if (m_increaseAlarmEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseAlarmEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseAlarmEvent, allocator);
    }

    if (m_alarmEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmEvent.c_str(), allocator).Move(), allocator);
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


int64_t DescribeIntegrationStatisticsResponse::GetTotalTask() const
{
    return m_totalTask;
}

bool DescribeIntegrationStatisticsResponse::TotalTaskHasBeenSet() const
{
    return m_totalTaskHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetProdTask() const
{
    return m_prodTask;
}

bool DescribeIntegrationStatisticsResponse::ProdTaskHasBeenSet() const
{
    return m_prodTaskHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetDevTask() const
{
    return m_devTask;
}

bool DescribeIntegrationStatisticsResponse::DevTaskHasBeenSet() const
{
    return m_devTaskHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetTotalReadRecords() const
{
    return m_totalReadRecords;
}

bool DescribeIntegrationStatisticsResponse::TotalReadRecordsHasBeenSet() const
{
    return m_totalReadRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetTotalWriteRecords() const
{
    return m_totalWriteRecords;
}

bool DescribeIntegrationStatisticsResponse::TotalWriteRecordsHasBeenSet() const
{
    return m_totalWriteRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

bool DescribeIntegrationStatisticsResponse::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetTotalAlarmEvent() const
{
    return m_totalAlarmEvent;
}

bool DescribeIntegrationStatisticsResponse::TotalAlarmEventHasBeenSet() const
{
    return m_totalAlarmEventHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetIncreaseReadRecords() const
{
    return m_increaseReadRecords;
}

bool DescribeIntegrationStatisticsResponse::IncreaseReadRecordsHasBeenSet() const
{
    return m_increaseReadRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetIncreaseWriteRecords() const
{
    return m_increaseWriteRecords;
}

bool DescribeIntegrationStatisticsResponse::IncreaseWriteRecordsHasBeenSet() const
{
    return m_increaseWriteRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetIncreaseErrorRecords() const
{
    return m_increaseErrorRecords;
}

bool DescribeIntegrationStatisticsResponse::IncreaseErrorRecordsHasBeenSet() const
{
    return m_increaseErrorRecordsHasBeenSet;
}

int64_t DescribeIntegrationStatisticsResponse::GetIncreaseAlarmEvent() const
{
    return m_increaseAlarmEvent;
}

bool DescribeIntegrationStatisticsResponse::IncreaseAlarmEventHasBeenSet() const
{
    return m_increaseAlarmEventHasBeenSet;
}

string DescribeIntegrationStatisticsResponse::GetAlarmEvent() const
{
    return m_alarmEvent;
}

bool DescribeIntegrationStatisticsResponse::AlarmEventHasBeenSet() const
{
    return m_alarmEventHasBeenSet;
}


