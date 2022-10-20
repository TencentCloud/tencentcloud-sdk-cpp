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

#include <tencentcloud/tcss/v20201101/model/ImageAutoAuthorizedTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageAutoAuthorizedTask::ImageAutoAuthorizedTask() :
    m_taskIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_authorizedDateHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_lastAuthorizedTimeHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_latestFailCodeHasBeenSet(false)
{
}

CoreInternalOutcome ImageAutoAuthorizedTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedDate") && !value["AuthorizedDate"].IsNull())
    {
        if (!value["AuthorizedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.AuthorizedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedDate = string(value["AuthorizedDate"].GetString());
        m_authorizedDateHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("LastAuthorizedTime") && !value["LastAuthorizedTime"].IsNull())
    {
        if (!value["LastAuthorizedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.LastAuthorizedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAuthorizedTime = string(value["LastAuthorizedTime"].GetString());
        m_lastAuthorizedTimeHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("LatestFailCode") && !value["LatestFailCode"].IsNull())
    {
        if (!value["LatestFailCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAutoAuthorizedTask.LatestFailCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFailCode = string(value["LatestFailCode"].GetString());
        m_latestFailCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAutoAuthorizedTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAuthorizedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAuthorizedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAuthorizedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_latestFailCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFailCode.c_str(), allocator).Move(), allocator);
    }

}


int64_t ImageAutoAuthorizedTask::GetTaskId() const
{
    return m_taskId;
}

void ImageAutoAuthorizedTask::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ImageAutoAuthorizedTask::GetType() const
{
    return m_type;
}

void ImageAutoAuthorizedTask::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageAutoAuthorizedTask::GetAuthorizedDate() const
{
    return m_authorizedDate;
}

void ImageAutoAuthorizedTask::SetAuthorizedDate(const string& _authorizedDate)
{
    m_authorizedDate = _authorizedDate;
    m_authorizedDateHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::AuthorizedDateHasBeenSet() const
{
    return m_authorizedDateHasBeenSet;
}

string ImageAutoAuthorizedTask::GetSource() const
{
    return m_source;
}

void ImageAutoAuthorizedTask::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ImageAutoAuthorizedTask::GetLastAuthorizedTime() const
{
    return m_lastAuthorizedTime;
}

void ImageAutoAuthorizedTask::SetLastAuthorizedTime(const string& _lastAuthorizedTime)
{
    m_lastAuthorizedTime = _lastAuthorizedTime;
    m_lastAuthorizedTimeHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::LastAuthorizedTimeHasBeenSet() const
{
    return m_lastAuthorizedTimeHasBeenSet;
}

int64_t ImageAutoAuthorizedTask::GetSuccessCount() const
{
    return m_successCount;
}

void ImageAutoAuthorizedTask::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t ImageAutoAuthorizedTask::GetFailCount() const
{
    return m_failCount;
}

void ImageAutoAuthorizedTask::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

string ImageAutoAuthorizedTask::GetLatestFailCode() const
{
    return m_latestFailCode;
}

void ImageAutoAuthorizedTask::SetLatestFailCode(const string& _latestFailCode)
{
    m_latestFailCode = _latestFailCode;
    m_latestFailCodeHasBeenSet = true;
}

bool ImageAutoAuthorizedTask::LatestFailCodeHasBeenSet() const
{
    return m_latestFailCodeHasBeenSet;
}

