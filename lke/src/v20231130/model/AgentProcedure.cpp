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

#include <tencentcloud/lke/v20231130/model/AgentProcedure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentProcedure::AgentProcedure() :
    m_indexHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_debuggingHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_elapsedHasBeenSet(false)
{
}

CoreInternalOutcome AgentProcedure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Index` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetUint64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Debugging") && !value["Debugging"].IsNull())
    {
        if (!value["Debugging"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Debugging` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_debugging.Deserialize(value["Debugging"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_debuggingHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Elapsed") && !value["Elapsed"].IsNull())
    {
        if (!value["Elapsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedure.Elapsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elapsed = value["Elapsed"].GetUint64();
        m_elapsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentProcedure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_debuggingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debugging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_debugging.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_elapsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elapsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elapsed, allocator);
    }

}


uint64_t AgentProcedure::GetIndex() const
{
    return m_index;
}

void AgentProcedure::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AgentProcedure::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AgentProcedure::GetName() const
{
    return m_name;
}

void AgentProcedure::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentProcedure::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentProcedure::GetTitle() const
{
    return m_title;
}

void AgentProcedure::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool AgentProcedure::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string AgentProcedure::GetStatus() const
{
    return m_status;
}

void AgentProcedure::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentProcedure::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AgentProcedure::GetIcon() const
{
    return m_icon;
}

void AgentProcedure::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool AgentProcedure::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

AgentProcedureDebugging AgentProcedure::GetDebugging() const
{
    return m_debugging;
}

void AgentProcedure::SetDebugging(const AgentProcedureDebugging& _debugging)
{
    m_debugging = _debugging;
    m_debuggingHasBeenSet = true;
}

bool AgentProcedure::DebuggingHasBeenSet() const
{
    return m_debuggingHasBeenSet;
}

string AgentProcedure::GetSwitch() const
{
    return m_switch;
}

void AgentProcedure::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AgentProcedure::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AgentProcedure::GetWorkflowName() const
{
    return m_workflowName;
}

void AgentProcedure::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool AgentProcedure::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

uint64_t AgentProcedure::GetElapsed() const
{
    return m_elapsed;
}

void AgentProcedure::SetElapsed(const uint64_t& _elapsed)
{
    m_elapsed = _elapsed;
    m_elapsedHasBeenSet = true;
}

bool AgentProcedure::ElapsedHasBeenSet() const
{
    return m_elapsedHasBeenSet;
}

