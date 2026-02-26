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

#include <tencentcloud/monitor/v20180724/model/NotificationContentTemplateSupport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

NotificationContentTemplateSupport::NotificationContentTemplateSupport() :
    m_monitorTypeHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_functionsHasBeenSet(false)
{
}

CoreInternalOutcome NotificationContentTemplateSupport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupport.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Variables") && !value["Variables"].IsNull())
    {
        if (!value["Variables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupport.Variables` is not array type"));

        const rapidjson::Value &tmpValue = value["Variables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotificationContentTemplateSupportDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_variables.push_back(item);
        }
        m_variablesHasBeenSet = true;
    }

    if (value.HasMember("Functions") && !value["Functions"].IsNull())
    {
        if (!value["Functions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotificationContentTemplateSupport.Functions` is not array type"));

        const rapidjson::Value &tmpValue = value["Functions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotificationContentTemplateSupportDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_functions.push_back(item);
        }
        m_functionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotificationContentTemplateSupport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_variablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Variables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_variables.begin(); itr != m_variables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functions.begin(); itr != m_functions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NotificationContentTemplateSupport::GetMonitorType() const
{
    return m_monitorType;
}

void NotificationContentTemplateSupport::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool NotificationContentTemplateSupport::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

vector<NotificationContentTemplateSupportDetail> NotificationContentTemplateSupport::GetVariables() const
{
    return m_variables;
}

void NotificationContentTemplateSupport::SetVariables(const vector<NotificationContentTemplateSupportDetail>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool NotificationContentTemplateSupport::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}

vector<NotificationContentTemplateSupportDetail> NotificationContentTemplateSupport::GetFunctions() const
{
    return m_functions;
}

void NotificationContentTemplateSupport::SetFunctions(const vector<NotificationContentTemplateSupportDetail>& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool NotificationContentTemplateSupport::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

