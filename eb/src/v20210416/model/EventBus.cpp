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

#include <tencentcloud/eb/v20210416/model/EventBus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

EventBus::EventBus() :
    m_modTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_eventBusNameHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_connectionBriefsHasBeenSet(false),
    m_targetBriefsHasBeenSet(false)
{
}

CoreInternalOutcome EventBus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("EventBusName") && !value["EventBusName"].IsNull())
    {
        if (!value["EventBusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.EventBusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusName = string(value["EventBusName"].GetString());
        m_eventBusNameHasBeenSet = true;
    }

    if (value.HasMember("EventBusId") && !value["EventBusId"].IsNull())
    {
        if (!value["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(value["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBus.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ConnectionBriefs") && !value["ConnectionBriefs"].IsNull())
    {
        if (!value["ConnectionBriefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventBus.ConnectionBriefs` is not array type"));

        const rapidjson::Value &tmpValue = value["ConnectionBriefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConnectionBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_connectionBriefs.push_back(item);
        }
        m_connectionBriefsHasBeenSet = true;
    }

    if (value.HasMember("TargetBriefs") && !value["TargetBriefs"].IsNull())
    {
        if (!value["TargetBriefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventBus.TargetBriefs` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetBriefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetBriefs.push_back(item);
        }
        m_targetBriefsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventBus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionBriefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionBriefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connectionBriefs.begin(); itr != m_connectionBriefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetBriefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetBriefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetBriefs.begin(); itr != m_targetBriefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventBus::GetModTime() const
{
    return m_modTime;
}

void EventBus::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool EventBus::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string EventBus::GetDescription() const
{
    return m_description;
}

void EventBus::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventBus::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EventBus::GetAddTime() const
{
    return m_addTime;
}

void EventBus::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool EventBus::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string EventBus::GetEventBusName() const
{
    return m_eventBusName;
}

void EventBus::SetEventBusName(const string& _eventBusName)
{
    m_eventBusName = _eventBusName;
    m_eventBusNameHasBeenSet = true;
}

bool EventBus::EventBusNameHasBeenSet() const
{
    return m_eventBusNameHasBeenSet;
}

string EventBus::GetEventBusId() const
{
    return m_eventBusId;
}

void EventBus::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool EventBus::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string EventBus::GetType() const
{
    return m_type;
}

void EventBus::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventBus::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EventBus::GetPayMode() const
{
    return m_payMode;
}

void EventBus::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool EventBus::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<ConnectionBrief> EventBus::GetConnectionBriefs() const
{
    return m_connectionBriefs;
}

void EventBus::SetConnectionBriefs(const vector<ConnectionBrief>& _connectionBriefs)
{
    m_connectionBriefs = _connectionBriefs;
    m_connectionBriefsHasBeenSet = true;
}

bool EventBus::ConnectionBriefsHasBeenSet() const
{
    return m_connectionBriefsHasBeenSet;
}

vector<TargetBrief> EventBus::GetTargetBriefs() const
{
    return m_targetBriefs;
}

void EventBus::SetTargetBriefs(const vector<TargetBrief>& _targetBriefs)
{
    m_targetBriefs = _targetBriefs;
    m_targetBriefsHasBeenSet = true;
}

bool EventBus::TargetBriefsHasBeenSet() const
{
    return m_targetBriefsHasBeenSet;
}

