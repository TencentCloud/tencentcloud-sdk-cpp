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

#include <tencentcloud/cdn/v20180606/model/PurgeTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

PurgeTask::PurgeTask() :
    m_taskIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_purgeTypeHasBeenSet(false),
    m_flushTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome PurgeTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PurgeType") && !value["PurgeType"].IsNull())
    {
        if (!value["PurgeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.PurgeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purgeType = string(value["PurgeType"].GetString());
        m_purgeTypeHasBeenSet = true;
    }

    if (value.HasMember("FlushType") && !value["FlushType"].IsNull())
    {
        if (!value["FlushType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.FlushType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flushType = string(value["FlushType"].GetString());
        m_flushTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PurgeTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PurgeTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_purgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purgeType.c_str(), allocator).Move(), allocator);
    }

    if (m_flushTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flushType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string PurgeTask::GetTaskId() const
{
    return m_taskId;
}

void PurgeTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool PurgeTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string PurgeTask::GetUrl() const
{
    return m_url;
}

void PurgeTask::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool PurgeTask::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string PurgeTask::GetStatus() const
{
    return m_status;
}

void PurgeTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PurgeTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PurgeTask::GetPurgeType() const
{
    return m_purgeType;
}

void PurgeTask::SetPurgeType(const string& _purgeType)
{
    m_purgeType = _purgeType;
    m_purgeTypeHasBeenSet = true;
}

bool PurgeTask::PurgeTypeHasBeenSet() const
{
    return m_purgeTypeHasBeenSet;
}

string PurgeTask::GetFlushType() const
{
    return m_flushType;
}

void PurgeTask::SetFlushType(const string& _flushType)
{
    m_flushType = _flushType;
    m_flushTypeHasBeenSet = true;
}

bool PurgeTask::FlushTypeHasBeenSet() const
{
    return m_flushTypeHasBeenSet;
}

string PurgeTask::GetCreateTime() const
{
    return m_createTime;
}

void PurgeTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PurgeTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

