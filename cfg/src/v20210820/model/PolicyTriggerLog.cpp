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

#include <tencentcloud/cfg/v20210820/model/PolicyTriggerLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

PolicyTriggerLog::PolicyTriggerLog() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_creatTimeHasBeenSet(false)
{
}

CoreInternalOutcome PolicyTriggerLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyTriggerLog.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyTriggerLog.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyTriggerLog.TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyTriggerLog.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyTriggerLog.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyTriggerLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t PolicyTriggerLog::GetTaskId() const
{
    return m_taskId;
}

void PolicyTriggerLog::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool PolicyTriggerLog::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string PolicyTriggerLog::GetName() const
{
    return m_name;
}

void PolicyTriggerLog::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PolicyTriggerLog::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t PolicyTriggerLog::GetTriggerType() const
{
    return m_triggerType;
}

void PolicyTriggerLog::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool PolicyTriggerLog::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string PolicyTriggerLog::GetContent() const
{
    return m_content;
}

void PolicyTriggerLog::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PolicyTriggerLog::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PolicyTriggerLog::GetCreatTime() const
{
    return m_creatTime;
}

void PolicyTriggerLog::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool PolicyTriggerLog::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

