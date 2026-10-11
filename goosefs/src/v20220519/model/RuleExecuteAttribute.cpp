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

#include <tencentcloud/goosefs/v20220519/model/RuleExecuteAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

RuleExecuteAttribute::RuleExecuteAttribute() :
    m_recordIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_fileCountHasBeenSet(false),
    m_manifestUrlHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecuteAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("FileCount") && !value["FileCount"].IsNull())
    {
        if (!value["FileCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.FileCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileCount = value["FileCount"].GetUint64();
        m_fileCountHasBeenSet = true;
    }

    if (value.HasMember("ManifestUrl") && !value["ManifestUrl"].IsNull())
    {
        if (!value["ManifestUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecuteAttribute.ManifestUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifestUrl = string(value["ManifestUrl"].GetString());
        m_manifestUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecuteAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_fileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileCount, allocator);
    }

    if (m_manifestUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManifestUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifestUrl.c_str(), allocator).Move(), allocator);
    }

}


string RuleExecuteAttribute::GetRecordId() const
{
    return m_recordId;
}

void RuleExecuteAttribute::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool RuleExecuteAttribute::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string RuleExecuteAttribute::GetStartTime() const
{
    return m_startTime;
}

void RuleExecuteAttribute::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RuleExecuteAttribute::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RuleExecuteAttribute::GetEndTime() const
{
    return m_endTime;
}

void RuleExecuteAttribute::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RuleExecuteAttribute::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t RuleExecuteAttribute::GetStatus() const
{
    return m_status;
}

void RuleExecuteAttribute::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuleExecuteAttribute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RuleExecuteAttribute::GetCapacity() const
{
    return m_capacity;
}

void RuleExecuteAttribute::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool RuleExecuteAttribute::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

uint64_t RuleExecuteAttribute::GetFileCount() const
{
    return m_fileCount;
}

void RuleExecuteAttribute::SetFileCount(const uint64_t& _fileCount)
{
    m_fileCount = _fileCount;
    m_fileCountHasBeenSet = true;
}

bool RuleExecuteAttribute::FileCountHasBeenSet() const
{
    return m_fileCountHasBeenSet;
}

string RuleExecuteAttribute::GetManifestUrl() const
{
    return m_manifestUrl;
}

void RuleExecuteAttribute::SetManifestUrl(const string& _manifestUrl)
{
    m_manifestUrl = _manifestUrl;
    m_manifestUrlHasBeenSet = true;
}

bool RuleExecuteAttribute::ManifestUrlHasBeenSet() const
{
    return m_manifestUrlHasBeenSet;
}

