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

#include <tencentcloud/postgres/v20170312/model/EventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

EventInfo::EventInfo() :
    m_paramNameHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_eventLogHasBeenSet(false)
{
}

CoreInternalOutcome EventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("EventLog") && !value["EventLog"].IsNull())
    {
        if (!value["EventLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EventLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventLog = string(value["EventLog"].GetString());
        m_eventLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_eventLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventLog.c_str(), allocator).Move(), allocator);
    }

}


string EventInfo::GetParamName() const
{
    return m_paramName;
}

void EventInfo::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool EventInfo::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string EventInfo::GetOldValue() const
{
    return m_oldValue;
}

void EventInfo::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool EventInfo::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string EventInfo::GetNewValue() const
{
    return m_newValue;
}

void EventInfo::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool EventInfo::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

string EventInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void EventInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool EventInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string EventInfo::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void EventInfo::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool EventInfo::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string EventInfo::GetState() const
{
    return m_state;
}

void EventInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool EventInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string EventInfo::GetOperator() const
{
    return m_operator;
}

void EventInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool EventInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string EventInfo::GetEventLog() const
{
    return m_eventLog;
}

void EventInfo::SetEventLog(const string& _eventLog)
{
    m_eventLog = _eventLog;
    m_eventLogHasBeenSet = true;
}

bool EventInfo::EventLogHasBeenSet() const
{
    return m_eventLogHasBeenSet;
}

