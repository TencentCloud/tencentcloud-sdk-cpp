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

#include <tencentcloud/wedata/v20210820/model/ExtResourceFlagDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExtResourceFlagDto::ExtResourceFlagDto() :
    m_parentTaskHasBeenSet(false),
    m_eventListenerHasBeenSet(false),
    m_dlcResourceConfigHasBeenSet(false),
    m_scriptHasBeenSet(false),
    m_offlineSyncTaskHasBeenSet(false)
{
}

CoreInternalOutcome ExtResourceFlagDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentTask") && !value["ParentTask"].IsNull())
    {
        if (!value["ParentTask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtResourceFlagDto.ParentTask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_parentTask = value["ParentTask"].GetBool();
        m_parentTaskHasBeenSet = true;
    }

    if (value.HasMember("EventListener") && !value["EventListener"].IsNull())
    {
        if (!value["EventListener"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtResourceFlagDto.EventListener` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventListener = string(value["EventListener"].GetString());
        m_eventListenerHasBeenSet = true;
    }

    if (value.HasMember("DlcResourceConfig") && !value["DlcResourceConfig"].IsNull())
    {
        if (!value["DlcResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtResourceFlagDto.DlcResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcResourceConfig = string(value["DlcResourceConfig"].GetString());
        m_dlcResourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Script") && !value["Script"].IsNull())
    {
        if (!value["Script"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtResourceFlagDto.Script` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_script = string(value["Script"].GetString());
        m_scriptHasBeenSet = true;
    }

    if (value.HasMember("OfflineSyncTask") && !value["OfflineSyncTask"].IsNull())
    {
        if (!value["OfflineSyncTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtResourceFlagDto.OfflineSyncTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineSyncTask = string(value["OfflineSyncTask"].GetString());
        m_offlineSyncTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtResourceFlagDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentTask, allocator);
    }

    if (m_eventListenerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventListener";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventListener.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcResourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcResourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Script";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_script.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineSyncTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineSyncTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineSyncTask.c_str(), allocator).Move(), allocator);
    }

}


bool ExtResourceFlagDto::GetParentTask() const
{
    return m_parentTask;
}

void ExtResourceFlagDto::SetParentTask(const bool& _parentTask)
{
    m_parentTask = _parentTask;
    m_parentTaskHasBeenSet = true;
}

bool ExtResourceFlagDto::ParentTaskHasBeenSet() const
{
    return m_parentTaskHasBeenSet;
}

string ExtResourceFlagDto::GetEventListener() const
{
    return m_eventListener;
}

void ExtResourceFlagDto::SetEventListener(const string& _eventListener)
{
    m_eventListener = _eventListener;
    m_eventListenerHasBeenSet = true;
}

bool ExtResourceFlagDto::EventListenerHasBeenSet() const
{
    return m_eventListenerHasBeenSet;
}

string ExtResourceFlagDto::GetDlcResourceConfig() const
{
    return m_dlcResourceConfig;
}

void ExtResourceFlagDto::SetDlcResourceConfig(const string& _dlcResourceConfig)
{
    m_dlcResourceConfig = _dlcResourceConfig;
    m_dlcResourceConfigHasBeenSet = true;
}

bool ExtResourceFlagDto::DlcResourceConfigHasBeenSet() const
{
    return m_dlcResourceConfigHasBeenSet;
}

string ExtResourceFlagDto::GetScript() const
{
    return m_script;
}

void ExtResourceFlagDto::SetScript(const string& _script)
{
    m_script = _script;
    m_scriptHasBeenSet = true;
}

bool ExtResourceFlagDto::ScriptHasBeenSet() const
{
    return m_scriptHasBeenSet;
}

string ExtResourceFlagDto::GetOfflineSyncTask() const
{
    return m_offlineSyncTask;
}

void ExtResourceFlagDto::SetOfflineSyncTask(const string& _offlineSyncTask)
{
    m_offlineSyncTask = _offlineSyncTask;
    m_offlineSyncTaskHasBeenSet = true;
}

bool ExtResourceFlagDto::OfflineSyncTaskHasBeenSet() const
{
    return m_offlineSyncTaskHasBeenSet;
}

