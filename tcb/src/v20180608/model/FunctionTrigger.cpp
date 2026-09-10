/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/FunctionTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

FunctionTrigger::FunctionTrigger() :
    m_modTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_addTimeHasBeenSet(false)
{
}

CoreInternalOutcome FunctionTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTrigger.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTrigger.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerDesc") && !value["TriggerDesc"].IsNull())
    {
        if (!value["TriggerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTrigger.TriggerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerDesc = string(value["TriggerDesc"].GetString());
        m_triggerDescHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTrigger.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionTrigger.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

}


string FunctionTrigger::GetModTime() const
{
    return m_modTime;
}

void FunctionTrigger::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool FunctionTrigger::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string FunctionTrigger::GetType() const
{
    return m_type;
}

void FunctionTrigger::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FunctionTrigger::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FunctionTrigger::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void FunctionTrigger::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool FunctionTrigger::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string FunctionTrigger::GetTriggerName() const
{
    return m_triggerName;
}

void FunctionTrigger::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool FunctionTrigger::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string FunctionTrigger::GetAddTime() const
{
    return m_addTime;
}

void FunctionTrigger::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool FunctionTrigger::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

