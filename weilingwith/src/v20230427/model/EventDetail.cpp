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

#include <tencentcloud/weilingwith/v20230427/model/EventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

EventDetail::EventDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_triggerConditionHasBeenSet(false),
    m_validPeriodHasBeenSet(false),
    m_linkRuleSetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_wIDHasBeenSet(false)
{
}

CoreInternalOutcome EventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("TriggerCondition") && !value["TriggerCondition"].IsNull())
    {
        if (!value["TriggerCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.TriggerCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCondition = string(value["TriggerCondition"].GetString());
        m_triggerConditionHasBeenSet = true;
    }

    if (value.HasMember("ValidPeriod") && !value["ValidPeriod"].IsNull())
    {
        if (!value["ValidPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ValidPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validPeriod = string(value["ValidPeriod"].GetString());
        m_validPeriodHasBeenSet = true;
    }

    if (value.HasMember("LinkRuleSet") && !value["LinkRuleSet"].IsNull())
    {
        if (!value["LinkRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventDetail.LinkRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LinkRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LinkRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_linkRuleSet.push_back(item);
        }
        m_linkRuleSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_validPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_linkRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_linkRuleSet.begin(); itr != m_linkRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

}


int64_t EventDetail::GetId() const
{
    return m_id;
}

void EventDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EventDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EventDetail::GetName() const
{
    return m_name;
}

void EventDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventDetail::GetTriggerType() const
{
    return m_triggerType;
}

void EventDetail::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool EventDetail::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string EventDetail::GetTriggerCondition() const
{
    return m_triggerCondition;
}

void EventDetail::SetTriggerCondition(const string& _triggerCondition)
{
    m_triggerCondition = _triggerCondition;
    m_triggerConditionHasBeenSet = true;
}

bool EventDetail::TriggerConditionHasBeenSet() const
{
    return m_triggerConditionHasBeenSet;
}

string EventDetail::GetValidPeriod() const
{
    return m_validPeriod;
}

void EventDetail::SetValidPeriod(const string& _validPeriod)
{
    m_validPeriod = _validPeriod;
    m_validPeriodHasBeenSet = true;
}

bool EventDetail::ValidPeriodHasBeenSet() const
{
    return m_validPeriodHasBeenSet;
}

vector<LinkRule> EventDetail::GetLinkRuleSet() const
{
    return m_linkRuleSet;
}

void EventDetail::SetLinkRuleSet(const vector<LinkRule>& _linkRuleSet)
{
    m_linkRuleSet = _linkRuleSet;
    m_linkRuleSetHasBeenSet = true;
}

bool EventDetail::LinkRuleSetHasBeenSet() const
{
    return m_linkRuleSetHasBeenSet;
}

string EventDetail::GetCreateTime() const
{
    return m_createTime;
}

void EventDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EventDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EventDetail::GetDeviceType() const
{
    return m_deviceType;
}

void EventDetail::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool EventDetail::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string EventDetail::GetWID() const
{
    return m_wID;
}

void EventDetail::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool EventDetail::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

