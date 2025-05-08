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

#include <tencentcloud/wedata/v20210820/model/EventListenerDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventListenerDTO::EventListenerDTO() :
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_creationTsHasBeenSet(false),
    m_propertiesListHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_taskInfoHasBeenSet(false),
    m_eventProjectIdHasBeenSet(false)
{
}

CoreInternalOutcome EventListenerDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreationTs") && !value["CreationTs"].IsNull())
    {
        if (!value["CreationTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.CreationTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTs = string(value["CreationTs"].GetString());
        m_creationTsHasBeenSet = true;
    }

    if (value.HasMember("PropertiesList") && !value["PropertiesList"].IsNull())
    {
        if (!value["PropertiesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.PropertiesList` is not array type"));

        const rapidjson::Value &tmpValue = value["PropertiesList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfoDs item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propertiesList.push_back(item);
        }
        m_propertiesListHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("TaskInfo") && !value["TaskInfo"].IsNull())
    {
        if (!value["TaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.TaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInfo.Deserialize(value["TaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInfoHasBeenSet = true;
    }

    if (value.HasMember("EventProjectId") && !value["EventProjectId"].IsNull())
    {
        if (!value["EventProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerDTO.EventProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventProjectId = string(value["EventProjectId"].GetString());
        m_eventProjectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventListenerDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTs.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertiesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propertiesList.begin(); itr != m_propertiesList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventProjectId.c_str(), allocator).Move(), allocator);
    }

}


string EventListenerDTO::GetKey() const
{
    return m_key;
}

void EventListenerDTO::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EventListenerDTO::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EventListenerDTO::GetType() const
{
    return m_type;
}

void EventListenerDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventListenerDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EventListenerDTO::GetCreationTs() const
{
    return m_creationTs;
}

void EventListenerDTO::SetCreationTs(const string& _creationTs)
{
    m_creationTs = _creationTs;
    m_creationTsHasBeenSet = true;
}

bool EventListenerDTO::CreationTsHasBeenSet() const
{
    return m_creationTsHasBeenSet;
}

vector<ParamInfoDs> EventListenerDTO::GetPropertiesList() const
{
    return m_propertiesList;
}

void EventListenerDTO::SetPropertiesList(const vector<ParamInfoDs>& _propertiesList)
{
    m_propertiesList = _propertiesList;
    m_propertiesListHasBeenSet = true;
}

bool EventListenerDTO::PropertiesListHasBeenSet() const
{
    return m_propertiesListHasBeenSet;
}

string EventListenerDTO::GetEventName() const
{
    return m_eventName;
}

void EventListenerDTO::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventListenerDTO::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

EventListenerTaskInfo EventListenerDTO::GetTaskInfo() const
{
    return m_taskInfo;
}

void EventListenerDTO::SetTaskInfo(const EventListenerTaskInfo& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool EventListenerDTO::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

string EventListenerDTO::GetEventProjectId() const
{
    return m_eventProjectId;
}

void EventListenerDTO::SetEventProjectId(const string& _eventProjectId)
{
    m_eventProjectId = _eventProjectId;
    m_eventProjectIdHasBeenSet = true;
}

bool EventListenerDTO::EventProjectIdHasBeenSet() const
{
    return m_eventProjectIdHasBeenSet;
}

