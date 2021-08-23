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

#include <tencentcloud/monitor/v20180724/model/ConditionsTemp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ConditionsTemp::ConditionsTemp() :
    m_templateNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_eventConditionHasBeenSet(false)
{
}

CoreInternalOutcome ConditionsTemp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionsTemp.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionsTemp.Condition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_condition.Deserialize(value["Condition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("EventCondition") && !value["EventCondition"].IsNull())
    {
        if (!value["EventCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionsTemp.EventCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventCondition.Deserialize(value["EventCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConditionsTemp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventCondition.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ConditionsTemp::GetTemplateName() const
{
    return m_templateName;
}

void ConditionsTemp::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ConditionsTemp::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

AlarmPolicyCondition ConditionsTemp::GetCondition() const
{
    return m_condition;
}

void ConditionsTemp::SetCondition(const AlarmPolicyCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ConditionsTemp::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

AlarmPolicyEventCondition ConditionsTemp::GetEventCondition() const
{
    return m_eventCondition;
}

void ConditionsTemp::SetEventCondition(const AlarmPolicyEventCondition& _eventCondition)
{
    m_eventCondition = _eventCondition;
    m_eventConditionHasBeenSet = true;
}

bool ConditionsTemp::EventConditionHasBeenSet() const
{
    return m_eventConditionHasBeenSet;
}

