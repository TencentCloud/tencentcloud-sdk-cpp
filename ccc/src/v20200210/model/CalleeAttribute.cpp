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

#include <tencentcloud/ccc/v20200210/model/CalleeAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CalleeAttribute::CalleeAttribute() :
    m_calleeHasBeenSet(false),
    m_uUIHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

CoreInternalOutcome CalleeAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CalleeAttribute.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("UUI") && !value["UUI"].IsNull())
    {
        if (!value["UUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CalleeAttribute.UUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUI = string(value["UUI"].GetString());
        m_uUIHasBeenSet = true;
    }

    if (value.HasMember("Variables") && !value["Variables"].IsNull())
    {
        if (!value["Variables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CalleeAttribute.Variables` is not array type"));

        const rapidjson::Value &tmpValue = value["Variables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Variable item;
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


    return CoreInternalOutcome(true);
}

void CalleeAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
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

}


string CalleeAttribute::GetCallee() const
{
    return m_callee;
}

void CalleeAttribute::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool CalleeAttribute::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

string CalleeAttribute::GetUUI() const
{
    return m_uUI;
}

void CalleeAttribute::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool CalleeAttribute::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}

vector<Variable> CalleeAttribute::GetVariables() const
{
    return m_variables;
}

void CalleeAttribute::SetVariables(const vector<Variable>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool CalleeAttribute::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}

