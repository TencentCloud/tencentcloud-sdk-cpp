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

#include <tencentcloud/ccc/v20200210/model/AutoCalloutTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AutoCalloutTaskInfo::AutoCalloutTaskInfo() :
    m_nameHasBeenSet(false),
    m_calleeCountHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_ivrIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome AutoCalloutTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CalleeCount") && !value["CalleeCount"].IsNull())
    {
        if (!value["CalleeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.CalleeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_calleeCount = value["CalleeCount"].GetUint64();
        m_calleeCountHasBeenSet = true;
    }

    if (value.HasMember("Callers") && !value["Callers"].IsNull())
    {
        if (!value["Callers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.Callers` is not array type"));

        const rapidjson::Value &tmpValue = value["Callers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callers.push_back((*itr).GetString());
        }
        m_callersHasBeenSet = true;
    }

    if (value.HasMember("NotBefore") && !value["NotBefore"].IsNull())
    {
        if (!value["NotBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.NotBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBefore = value["NotBefore"].GetInt64();
        m_notBeforeHasBeenSet = true;
    }

    if (value.HasMember("NotAfter") && !value["NotAfter"].IsNull())
    {
        if (!value["NotAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.NotAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfter = value["NotAfter"].GetInt64();
        m_notAfterHasBeenSet = true;
    }

    if (value.HasMember("IvrId") && !value["IvrId"].IsNull())
    {
        if (!value["IvrId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.IvrId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ivrId = value["IvrId"].GetUint64();
        m_ivrIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskInfo.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoCalloutTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calleeCount, allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBefore, allocator);
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfter, allocator);
    }

    if (m_ivrIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IvrId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ivrId, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


string AutoCalloutTaskInfo::GetName() const
{
    return m_name;
}

void AutoCalloutTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AutoCalloutTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AutoCalloutTaskInfo::GetCalleeCount() const
{
    return m_calleeCount;
}

void AutoCalloutTaskInfo::SetCalleeCount(const uint64_t& _calleeCount)
{
    m_calleeCount = _calleeCount;
    m_calleeCountHasBeenSet = true;
}

bool AutoCalloutTaskInfo::CalleeCountHasBeenSet() const
{
    return m_calleeCountHasBeenSet;
}

vector<string> AutoCalloutTaskInfo::GetCallers() const
{
    return m_callers;
}

void AutoCalloutTaskInfo::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool AutoCalloutTaskInfo::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

int64_t AutoCalloutTaskInfo::GetNotBefore() const
{
    return m_notBefore;
}

void AutoCalloutTaskInfo::SetNotBefore(const int64_t& _notBefore)
{
    m_notBefore = _notBefore;
    m_notBeforeHasBeenSet = true;
}

bool AutoCalloutTaskInfo::NotBeforeHasBeenSet() const
{
    return m_notBeforeHasBeenSet;
}

int64_t AutoCalloutTaskInfo::GetNotAfter() const
{
    return m_notAfter;
}

void AutoCalloutTaskInfo::SetNotAfter(const int64_t& _notAfter)
{
    m_notAfter = _notAfter;
    m_notAfterHasBeenSet = true;
}

bool AutoCalloutTaskInfo::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

uint64_t AutoCalloutTaskInfo::GetIvrId() const
{
    return m_ivrId;
}

void AutoCalloutTaskInfo::SetIvrId(const uint64_t& _ivrId)
{
    m_ivrId = _ivrId;
    m_ivrIdHasBeenSet = true;
}

bool AutoCalloutTaskInfo::IvrIdHasBeenSet() const
{
    return m_ivrIdHasBeenSet;
}

uint64_t AutoCalloutTaskInfo::GetState() const
{
    return m_state;
}

void AutoCalloutTaskInfo::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AutoCalloutTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t AutoCalloutTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void AutoCalloutTaskInfo::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AutoCalloutTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

