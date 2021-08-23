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

#include <tencentcloud/cls/v20201016/model/AsyncContextTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AsyncContextTask::AsyncContextTask() :
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_asyncContextTaskIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_asyncSearchTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome AsyncContextTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AsyncContextTaskId") && !value["AsyncContextTaskId"].IsNull())
    {
        if (!value["AsyncContextTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.AsyncContextTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncContextTaskId = string(value["AsyncContextTaskId"].GetString());
        m_asyncContextTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.PkgLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = string(value["PkgLogId"].GetString());
        m_pkgLogIdHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.FinishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = value["FinishTime"].GetInt64();
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("AsyncSearchTaskId") && !value["AsyncSearchTaskId"].IsNull())
    {
        if (!value["AsyncSearchTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncContextTask.AsyncSearchTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncSearchTaskId = string(value["AsyncSearchTaskId"].GetString());
        m_asyncSearchTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncContextTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_asyncContextTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncContextTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncContextTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishTime, allocator);
    }

    if (m_asyncSearchTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncSearchTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncSearchTaskId.c_str(), allocator).Move(), allocator);
    }

}


string AsyncContextTask::GetLogsetId() const
{
    return m_logsetId;
}

void AsyncContextTask::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool AsyncContextTask::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string AsyncContextTask::GetTopicId() const
{
    return m_topicId;
}

void AsyncContextTask::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AsyncContextTask::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t AsyncContextTask::GetCreateTime() const
{
    return m_createTime;
}

void AsyncContextTask::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AsyncContextTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AsyncContextTask::GetStatus() const
{
    return m_status;
}

void AsyncContextTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsyncContextTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AsyncContextTask::GetAsyncContextTaskId() const
{
    return m_asyncContextTaskId;
}

void AsyncContextTask::SetAsyncContextTaskId(const string& _asyncContextTaskId)
{
    m_asyncContextTaskId = _asyncContextTaskId;
    m_asyncContextTaskIdHasBeenSet = true;
}

bool AsyncContextTask::AsyncContextTaskIdHasBeenSet() const
{
    return m_asyncContextTaskIdHasBeenSet;
}

string AsyncContextTask::GetErrorMessage() const
{
    return m_errorMessage;
}

void AsyncContextTask::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool AsyncContextTask::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string AsyncContextTask::GetPkgId() const
{
    return m_pkgId;
}

void AsyncContextTask::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool AsyncContextTask::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string AsyncContextTask::GetPkgLogId() const
{
    return m_pkgLogId;
}

void AsyncContextTask::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool AsyncContextTask::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

int64_t AsyncContextTask::GetTime() const
{
    return m_time;
}

void AsyncContextTask::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool AsyncContextTask::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t AsyncContextTask::GetFinishTime() const
{
    return m_finishTime;
}

void AsyncContextTask::SetFinishTime(const int64_t& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AsyncContextTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string AsyncContextTask::GetAsyncSearchTaskId() const
{
    return m_asyncSearchTaskId;
}

void AsyncContextTask::SetAsyncSearchTaskId(const string& _asyncSearchTaskId)
{
    m_asyncSearchTaskId = _asyncSearchTaskId;
    m_asyncSearchTaskIdHasBeenSet = true;
}

bool AsyncContextTask::AsyncSearchTaskIdHasBeenSet() const
{
    return m_asyncSearchTaskIdHasBeenSet;
}

