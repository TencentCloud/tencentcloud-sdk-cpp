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

#include <tencentcloud/weilingwith/v20230427/model/LinkRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

LinkRuleInfo::LinkRuleInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_eventSetHasBeenSet(false),
    m_actionSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_validPeriodHasBeenSet(false)
{
}

CoreInternalOutcome LinkRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EventSet") && !value["EventSet"].IsNull())
    {
        if (!value["EventSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.EventSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EventSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Event item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventSet.push_back(item);
        }
        m_eventSetHasBeenSet = true;
    }

    if (value.HasMember("ActionSet") && !value["ActionSet"].IsNull())
    {
        if (!value["ActionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.ActionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Action item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionSet.push_back(item);
        }
        m_actionSetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BeginDate") && !value["BeginDate"].IsNull())
    {
        if (!value["BeginDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.BeginDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginDate = string(value["BeginDate"].GetString());
        m_beginDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("ValidPeriod") && !value["ValidPeriod"].IsNull())
    {
        if (!value["ValidPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkRuleInfo.ValidPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validPeriod = string(value["ValidPeriod"].GetString());
        m_validPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventSet.begin(); itr != m_eventSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionSet.begin(); itr != m_actionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validPeriod.c_str(), allocator).Move(), allocator);
    }

}


int64_t LinkRuleInfo::GetId() const
{
    return m_id;
}

void LinkRuleInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LinkRuleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LinkRuleInfo::GetName() const
{
    return m_name;
}

void LinkRuleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LinkRuleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Event> LinkRuleInfo::GetEventSet() const
{
    return m_eventSet;
}

void LinkRuleInfo::SetEventSet(const vector<Event>& _eventSet)
{
    m_eventSet = _eventSet;
    m_eventSetHasBeenSet = true;
}

bool LinkRuleInfo::EventSetHasBeenSet() const
{
    return m_eventSetHasBeenSet;
}

vector<Action> LinkRuleInfo::GetActionSet() const
{
    return m_actionSet;
}

void LinkRuleInfo::SetActionSet(const vector<Action>& _actionSet)
{
    m_actionSet = _actionSet;
    m_actionSetHasBeenSet = true;
}

bool LinkRuleInfo::ActionSetHasBeenSet() const
{
    return m_actionSetHasBeenSet;
}

int64_t LinkRuleInfo::GetStatus() const
{
    return m_status;
}

void LinkRuleInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LinkRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LinkRuleInfo::GetBeginDate() const
{
    return m_beginDate;
}

void LinkRuleInfo::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool LinkRuleInfo::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string LinkRuleInfo::GetEndDate() const
{
    return m_endDate;
}

void LinkRuleInfo::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool LinkRuleInfo::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string LinkRuleInfo::GetValidPeriod() const
{
    return m_validPeriod;
}

void LinkRuleInfo::SetValidPeriod(const string& _validPeriod)
{
    m_validPeriod = _validPeriod;
    m_validPeriodHasBeenSet = true;
}

bool LinkRuleInfo::ValidPeriodHasBeenSet() const
{
    return m_validPeriodHasBeenSet;
}

