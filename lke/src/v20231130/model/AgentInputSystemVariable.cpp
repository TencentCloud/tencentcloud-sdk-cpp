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

#include <tencentcloud/lke/v20231130/model/AgentInputSystemVariable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentInputSystemVariable::AgentInputSystemVariable() :
    m_nameHasBeenSet(false),
    m_dialogHistoryLimitHasBeenSet(false)
{
}

CoreInternalOutcome AgentInputSystemVariable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInputSystemVariable.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DialogHistoryLimit") && !value["DialogHistoryLimit"].IsNull())
    {
        if (!value["DialogHistoryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInputSystemVariable.DialogHistoryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dialogHistoryLimit = value["DialogHistoryLimit"].GetInt64();
        m_dialogHistoryLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentInputSystemVariable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dialogHistoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogHistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dialogHistoryLimit, allocator);
    }

}


string AgentInputSystemVariable::GetName() const
{
    return m_name;
}

void AgentInputSystemVariable::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentInputSystemVariable::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AgentInputSystemVariable::GetDialogHistoryLimit() const
{
    return m_dialogHistoryLimit;
}

void AgentInputSystemVariable::SetDialogHistoryLimit(const int64_t& _dialogHistoryLimit)
{
    m_dialogHistoryLimit = _dialogHistoryLimit;
    m_dialogHistoryLimitHasBeenSet = true;
}

bool AgentInputSystemVariable::DialogHistoryLimitHasBeenSet() const
{
    return m_dialogHistoryLimitHasBeenSet;
}

