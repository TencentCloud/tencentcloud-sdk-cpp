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

#include <tencentcloud/wedata/v20210820/model/AiOpsEventListenerDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AiOpsEventListenerDTO::AiOpsEventListenerDTO() :
    m_eventNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_propertiesListHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false)
{
}

CoreInternalOutcome AiOpsEventListenerDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PropertiesList") && !value["PropertiesList"].IsNull())
    {
        if (!value["PropertiesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.PropertiesList` is not array type"));

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

    if (value.HasMember("EventBroadcastType") && !value["EventBroadcastType"].IsNull())
    {
        if (!value["EventBroadcastType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiOpsEventListenerDTO.EventBroadcastType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBroadcastType = string(value["EventBroadcastType"].GetString());
        m_eventBroadcastTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiOpsEventListenerDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_eventBroadcastTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBroadcastType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBroadcastType.c_str(), allocator).Move(), allocator);
    }

}


string AiOpsEventListenerDTO::GetEventName() const
{
    return m_eventName;
}

void AiOpsEventListenerDTO::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool AiOpsEventListenerDTO::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string AiOpsEventListenerDTO::GetCreateTime() const
{
    return m_createTime;
}

void AiOpsEventListenerDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AiOpsEventListenerDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AiOpsEventListenerDTO::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void AiOpsEventListenerDTO::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool AiOpsEventListenerDTO::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string AiOpsEventListenerDTO::GetEventSubType() const
{
    return m_eventSubType;
}

void AiOpsEventListenerDTO::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool AiOpsEventListenerDTO::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string AiOpsEventListenerDTO::GetProjectId() const
{
    return m_projectId;
}

void AiOpsEventListenerDTO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AiOpsEventListenerDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<ParamInfoDs> AiOpsEventListenerDTO::GetPropertiesList() const
{
    return m_propertiesList;
}

void AiOpsEventListenerDTO::SetPropertiesList(const vector<ParamInfoDs>& _propertiesList)
{
    m_propertiesList = _propertiesList;
    m_propertiesListHasBeenSet = true;
}

bool AiOpsEventListenerDTO::PropertiesListHasBeenSet() const
{
    return m_propertiesListHasBeenSet;
}

string AiOpsEventListenerDTO::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void AiOpsEventListenerDTO::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool AiOpsEventListenerDTO::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

