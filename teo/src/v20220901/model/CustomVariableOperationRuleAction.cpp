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

#include <tencentcloud/teo/v20220901/model/CustomVariableOperationRuleAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomVariableOperationRuleAction::CustomVariableOperationRuleAction() :
    m_nameHasBeenSet(false),
    m_setParametersHasBeenSet(false)
{
}

CoreInternalOutcome CustomVariableOperationRuleAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomVariableOperationRuleAction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SetParameters") && !value["SetParameters"].IsNull())
    {
        if (!value["SetParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomVariableOperationRuleAction.SetParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setParameters.Deserialize(value["SetParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomVariableOperationRuleAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_setParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CustomVariableOperationRuleAction::GetName() const
{
    return m_name;
}

void CustomVariableOperationRuleAction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomVariableOperationRuleAction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

SetParameters CustomVariableOperationRuleAction::GetSetParameters() const
{
    return m_setParameters;
}

void CustomVariableOperationRuleAction::SetSetParameters(const SetParameters& _setParameters)
{
    m_setParameters = _setParameters;
    m_setParametersHasBeenSet = true;
}

bool CustomVariableOperationRuleAction::SetParametersHasBeenSet() const
{
    return m_setParametersHasBeenSet;
}

