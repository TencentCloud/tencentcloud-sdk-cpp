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

#include <tencentcloud/csip/v20221121/model/TaskLogURL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskLogURL::TaskLogURL() :
    m_uRLHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_taskLogNameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskLogURL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogURL.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogURL.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("TaskLogName") && !value["TaskLogName"].IsNull())
    {
        if (!value["TaskLogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogURL.TaskLogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLogName = string(value["TaskLogName"].GetString());
        m_taskLogNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogURL.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLogURL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string TaskLogURL::GetURL() const
{
    return m_uRL;
}

void TaskLogURL::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool TaskLogURL::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string TaskLogURL::GetLogId() const
{
    return m_logId;
}

void TaskLogURL::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool TaskLogURL::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string TaskLogURL::GetTaskLogName() const
{
    return m_taskLogName;
}

void TaskLogURL::SetTaskLogName(const string& _taskLogName)
{
    m_taskLogName = _taskLogName;
    m_taskLogNameHasBeenSet = true;
}

bool TaskLogURL::TaskLogNameHasBeenSet() const
{
    return m_taskLogNameHasBeenSet;
}

string TaskLogURL::GetAppId() const
{
    return m_appId;
}

void TaskLogURL::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TaskLogURL::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

