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

#include <tencentcloud/dbbrain/v20210527/model/SecLogExportTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SecLogExportTaskInfo::SecLogExportTaskInfo() :
    m_asyncRequestIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_logStartTimeHasBeenSet(false),
    m_logEndTimeHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_dangerLevelsHasBeenSet(false)
{
}

CoreInternalOutcome SecLogExportTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.AsyncRequestId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetUint64();
        m_asyncRequestIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("LogStartTime") && !value["LogStartTime"].IsNull())
    {
        if (!value["LogStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.LogStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logStartTime = string(value["LogStartTime"].GetString());
        m_logStartTimeHasBeenSet = true;
    }

    if (value.HasMember("LogEndTime") && !value["LogEndTime"].IsNull())
    {
        if (!value["LogEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.LogEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logEndTime = string(value["LogEndTime"].GetString());
        m_logEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.TotalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetUint64();
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("DangerLevels") && !value["DangerLevels"].IsNull())
    {
        if (!value["DangerLevels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecLogExportTaskInfo.DangerLevels` is not array type"));

        const rapidjson::Value &tmpValue = value["DangerLevels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dangerLevels.push_back((*itr).GetUint64());
        }
        m_dangerLevelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogExportTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_logStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_dangerLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerLevels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dangerLevels.begin(); itr != m_dangerLevels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t SecLogExportTaskInfo::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void SecLogExportTaskInfo::SetAsyncRequestId(const uint64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool SecLogExportTaskInfo::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

string SecLogExportTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void SecLogExportTaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SecLogExportTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SecLogExportTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void SecLogExportTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SecLogExportTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SecLogExportTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void SecLogExportTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecLogExportTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SecLogExportTaskInfo::GetStatus() const
{
    return m_status;
}

void SecLogExportTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecLogExportTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SecLogExportTaskInfo::GetProgress() const
{
    return m_progress;
}

void SecLogExportTaskInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool SecLogExportTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string SecLogExportTaskInfo::GetLogStartTime() const
{
    return m_logStartTime;
}

void SecLogExportTaskInfo::SetLogStartTime(const string& _logStartTime)
{
    m_logStartTime = _logStartTime;
    m_logStartTimeHasBeenSet = true;
}

bool SecLogExportTaskInfo::LogStartTimeHasBeenSet() const
{
    return m_logStartTimeHasBeenSet;
}

string SecLogExportTaskInfo::GetLogEndTime() const
{
    return m_logEndTime;
}

void SecLogExportTaskInfo::SetLogEndTime(const string& _logEndTime)
{
    m_logEndTime = _logEndTime;
    m_logEndTimeHasBeenSet = true;
}

bool SecLogExportTaskInfo::LogEndTimeHasBeenSet() const
{
    return m_logEndTimeHasBeenSet;
}

uint64_t SecLogExportTaskInfo::GetTotalSize() const
{
    return m_totalSize;
}

void SecLogExportTaskInfo::SetTotalSize(const uint64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool SecLogExportTaskInfo::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

vector<uint64_t> SecLogExportTaskInfo::GetDangerLevels() const
{
    return m_dangerLevels;
}

void SecLogExportTaskInfo::SetDangerLevels(const vector<uint64_t>& _dangerLevels)
{
    m_dangerLevels = _dangerLevels;
    m_dangerLevelsHasBeenSet = true;
}

bool SecLogExportTaskInfo::DangerLevelsHasBeenSet() const
{
    return m_dangerLevelsHasBeenSet;
}

