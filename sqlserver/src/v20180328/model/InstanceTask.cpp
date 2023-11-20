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

#include <tencentcloud/sqlserver/v20180328/model/InstanceTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

InstanceTask::InstanceTask() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
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

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceTask::GetId() const
{
    return m_id;
}

void InstanceTask::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InstanceTask::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t InstanceTask::GetType() const
{
    return m_type;
}

void InstanceTask::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t InstanceTask::GetStatus() const
{
    return m_status;
}

void InstanceTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceTask::GetProgress() const
{
    return m_progress;
}

void InstanceTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool InstanceTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string InstanceTask::GetStartTime() const
{
    return m_startTime;
}

void InstanceTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceTask::GetEndTime() const
{
    return m_endTime;
}

void InstanceTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t InstanceTask::GetErrorCode() const
{
    return m_errorCode;
}

void InstanceTask::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool InstanceTask::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string InstanceTask::GetMessage() const
{
    return m_message;
}

void InstanceTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool InstanceTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

