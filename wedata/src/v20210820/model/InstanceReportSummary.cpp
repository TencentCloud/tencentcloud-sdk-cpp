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

#include <tencentcloud/wedata/v20210820/model/InstanceReportSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceReportSummary::InstanceReportSummary() :
    m_totalReadRecordsHasBeenSet(false),
    m_totalReadBytesHasBeenSet(false),
    m_totalWriteRecordsHasBeenSet(false),
    m_totalWriteBytesHasBeenSet(false),
    m_recordSpeedHasBeenSet(false),
    m_byteSpeedHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false),
    m_totalErrorBytesHasBeenSet(false),
    m_totalRunDurationHasBeenSet(false),
    m_beginRunTimeHasBeenSet(false),
    m_endRunTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceReportSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalReadRecords") && !value["TotalReadRecords"].IsNull())
    {
        if (!value["TotalReadRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalReadRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadRecords = value["TotalReadRecords"].GetUint64();
        m_totalReadRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalReadBytes") && !value["TotalReadBytes"].IsNull())
    {
        if (!value["TotalReadBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalReadBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadBytes = value["TotalReadBytes"].GetUint64();
        m_totalReadBytesHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteRecords") && !value["TotalWriteRecords"].IsNull())
    {
        if (!value["TotalWriteRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalWriteRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteRecords = value["TotalWriteRecords"].GetUint64();
        m_totalWriteRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteBytes") && !value["TotalWriteBytes"].IsNull())
    {
        if (!value["TotalWriteBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalWriteBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteBytes = value["TotalWriteBytes"].GetUint64();
        m_totalWriteBytesHasBeenSet = true;
    }

    if (value.HasMember("RecordSpeed") && !value["RecordSpeed"].IsNull())
    {
        if (!value["RecordSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.RecordSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSpeed = value["RecordSpeed"].GetUint64();
        m_recordSpeedHasBeenSet = true;
    }

    if (value.HasMember("ByteSpeed") && !value["ByteSpeed"].IsNull())
    {
        if (!value["ByteSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.ByteSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_byteSpeed = value["ByteSpeed"].GetDouble();
        m_byteSpeedHasBeenSet = true;
    }

    if (value.HasMember("TotalErrorRecords") && !value["TotalErrorRecords"].IsNull())
    {
        if (!value["TotalErrorRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalErrorRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = value["TotalErrorRecords"].GetUint64();
        m_totalErrorRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalErrorBytes") && !value["TotalErrorBytes"].IsNull())
    {
        if (!value["TotalErrorBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalErrorBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorBytes = value["TotalErrorBytes"].GetUint64();
        m_totalErrorBytesHasBeenSet = true;
    }

    if (value.HasMember("TotalRunDuration") && !value["TotalRunDuration"].IsNull())
    {
        if (!value["TotalRunDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.TotalRunDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRunDuration = value["TotalRunDuration"].GetUint64();
        m_totalRunDurationHasBeenSet = true;
    }

    if (value.HasMember("BeginRunTime") && !value["BeginRunTime"].IsNull())
    {
        if (!value["BeginRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.BeginRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginRunTime = string(value["BeginRunTime"].GetString());
        m_beginRunTimeHasBeenSet = true;
    }

    if (value.HasMember("EndRunTime") && !value["EndRunTime"].IsNull())
    {
        if (!value["EndRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceReportSummary.EndRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endRunTime = string(value["EndRunTime"].GetString());
        m_endRunTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceReportSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_recordSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordSpeed, allocator);
    }

    if (m_byteSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_byteSpeed, allocator);
    }

    if (m_totalErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorRecords, allocator);
    }

    if (m_totalErrorBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorBytes, allocator);
    }

    if (m_totalRunDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRunDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRunDuration, allocator);
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

}


uint64_t InstanceReportSummary::GetTotalReadRecords() const
{
    return m_totalReadRecords;
}

void InstanceReportSummary::SetTotalReadRecords(const uint64_t& _totalReadRecords)
{
    m_totalReadRecords = _totalReadRecords;
    m_totalReadRecordsHasBeenSet = true;
}

bool InstanceReportSummary::TotalReadRecordsHasBeenSet() const
{
    return m_totalReadRecordsHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalReadBytes() const
{
    return m_totalReadBytes;
}

void InstanceReportSummary::SetTotalReadBytes(const uint64_t& _totalReadBytes)
{
    m_totalReadBytes = _totalReadBytes;
    m_totalReadBytesHasBeenSet = true;
}

bool InstanceReportSummary::TotalReadBytesHasBeenSet() const
{
    return m_totalReadBytesHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalWriteRecords() const
{
    return m_totalWriteRecords;
}

void InstanceReportSummary::SetTotalWriteRecords(const uint64_t& _totalWriteRecords)
{
    m_totalWriteRecords = _totalWriteRecords;
    m_totalWriteRecordsHasBeenSet = true;
}

bool InstanceReportSummary::TotalWriteRecordsHasBeenSet() const
{
    return m_totalWriteRecordsHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalWriteBytes() const
{
    return m_totalWriteBytes;
}

void InstanceReportSummary::SetTotalWriteBytes(const uint64_t& _totalWriteBytes)
{
    m_totalWriteBytes = _totalWriteBytes;
    m_totalWriteBytesHasBeenSet = true;
}

bool InstanceReportSummary::TotalWriteBytesHasBeenSet() const
{
    return m_totalWriteBytesHasBeenSet;
}

uint64_t InstanceReportSummary::GetRecordSpeed() const
{
    return m_recordSpeed;
}

void InstanceReportSummary::SetRecordSpeed(const uint64_t& _recordSpeed)
{
    m_recordSpeed = _recordSpeed;
    m_recordSpeedHasBeenSet = true;
}

bool InstanceReportSummary::RecordSpeedHasBeenSet() const
{
    return m_recordSpeedHasBeenSet;
}

double InstanceReportSummary::GetByteSpeed() const
{
    return m_byteSpeed;
}

void InstanceReportSummary::SetByteSpeed(const double& _byteSpeed)
{
    m_byteSpeed = _byteSpeed;
    m_byteSpeedHasBeenSet = true;
}

bool InstanceReportSummary::ByteSpeedHasBeenSet() const
{
    return m_byteSpeedHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

void InstanceReportSummary::SetTotalErrorRecords(const uint64_t& _totalErrorRecords)
{
    m_totalErrorRecords = _totalErrorRecords;
    m_totalErrorRecordsHasBeenSet = true;
}

bool InstanceReportSummary::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalErrorBytes() const
{
    return m_totalErrorBytes;
}

void InstanceReportSummary::SetTotalErrorBytes(const uint64_t& _totalErrorBytes)
{
    m_totalErrorBytes = _totalErrorBytes;
    m_totalErrorBytesHasBeenSet = true;
}

bool InstanceReportSummary::TotalErrorBytesHasBeenSet() const
{
    return m_totalErrorBytesHasBeenSet;
}

uint64_t InstanceReportSummary::GetTotalRunDuration() const
{
    return m_totalRunDuration;
}

void InstanceReportSummary::SetTotalRunDuration(const uint64_t& _totalRunDuration)
{
    m_totalRunDuration = _totalRunDuration;
    m_totalRunDurationHasBeenSet = true;
}

bool InstanceReportSummary::TotalRunDurationHasBeenSet() const
{
    return m_totalRunDurationHasBeenSet;
}

string InstanceReportSummary::GetBeginRunTime() const
{
    return m_beginRunTime;
}

void InstanceReportSummary::SetBeginRunTime(const string& _beginRunTime)
{
    m_beginRunTime = _beginRunTime;
    m_beginRunTimeHasBeenSet = true;
}

bool InstanceReportSummary::BeginRunTimeHasBeenSet() const
{
    return m_beginRunTimeHasBeenSet;
}

string InstanceReportSummary::GetEndRunTime() const
{
    return m_endRunTime;
}

void InstanceReportSummary::SetEndRunTime(const string& _endRunTime)
{
    m_endRunTime = _endRunTime;
    m_endRunTimeHasBeenSet = true;
}

bool InstanceReportSummary::EndRunTimeHasBeenSet() const
{
    return m_endRunTimeHasBeenSet;
}

