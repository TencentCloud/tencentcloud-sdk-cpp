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

#include <tencentcloud/cls/v20201016/model/AsyncSearchTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AsyncSearchTask::AsyncSearchTask() :
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_asyncSearchTaskIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logCountHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome AsyncSearchTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AsyncSearchTaskId") && !value["AsyncSearchTaskId"].IsNull())
    {
        if (!value["AsyncSearchTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.AsyncSearchTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncSearchTaskId = string(value["AsyncSearchTaskId"].GetString());
        m_asyncSearchTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.From` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_from = value["From"].GetInt64();
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("To") && !value["To"].IsNull())
    {
        if (!value["To"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.To` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_to = value["To"].GetInt64();
        m_toHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.Sort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sort = string(value["Sort"].GetString());
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("LogCount") && !value["LogCount"].IsNull())
    {
        if (!value["LogCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.LogCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logCount = value["LogCount"].GetInt64();
        m_logCountHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncSearchTask.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncSearchTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_asyncSearchTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncSearchTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncSearchTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_to, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_logCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logCount, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

}


string AsyncSearchTask::GetLogsetId() const
{
    return m_logsetId;
}

void AsyncSearchTask::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool AsyncSearchTask::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string AsyncSearchTask::GetTopicId() const
{
    return m_topicId;
}

void AsyncSearchTask::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AsyncSearchTask::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string AsyncSearchTask::GetCreateTime() const
{
    return m_createTime;
}

void AsyncSearchTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AsyncSearchTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AsyncSearchTask::GetStatus() const
{
    return m_status;
}

void AsyncSearchTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsyncSearchTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AsyncSearchTask::GetAsyncSearchTaskId() const
{
    return m_asyncSearchTaskId;
}

void AsyncSearchTask::SetAsyncSearchTaskId(const string& _asyncSearchTaskId)
{
    m_asyncSearchTaskId = _asyncSearchTaskId;
    m_asyncSearchTaskIdHasBeenSet = true;
}

bool AsyncSearchTask::AsyncSearchTaskIdHasBeenSet() const
{
    return m_asyncSearchTaskIdHasBeenSet;
}

string AsyncSearchTask::GetQuery() const
{
    return m_query;
}

void AsyncSearchTask::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool AsyncSearchTask::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t AsyncSearchTask::GetFrom() const
{
    return m_from;
}

void AsyncSearchTask::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AsyncSearchTask::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t AsyncSearchTask::GetTo() const
{
    return m_to;
}

void AsyncSearchTask::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool AsyncSearchTask::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string AsyncSearchTask::GetSort() const
{
    return m_sort;
}

void AsyncSearchTask::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool AsyncSearchTask::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string AsyncSearchTask::GetErrorMessage() const
{
    return m_errorMessage;
}

void AsyncSearchTask::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool AsyncSearchTask::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

int64_t AsyncSearchTask::GetLogCount() const
{
    return m_logCount;
}

void AsyncSearchTask::SetLogCount(const int64_t& _logCount)
{
    m_logCount = _logCount;
    m_logCountHasBeenSet = true;
}

bool AsyncSearchTask::LogCountHasBeenSet() const
{
    return m_logCountHasBeenSet;
}

string AsyncSearchTask::GetFinishTime() const
{
    return m_finishTime;
}

void AsyncSearchTask::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AsyncSearchTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

