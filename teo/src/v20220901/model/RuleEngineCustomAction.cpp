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

#include <tencentcloud/teo/v20220901/model/RuleEngineCustomAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleEngineCustomAction::RuleEngineCustomAction() :
    m_actionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_supportedConditionsHasBeenSet(false)
{
}

CoreInternalOutcome RuleEngineCustomAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomAction.ActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = string(value["ActionId"].GetString());
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomAction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomAction.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomAction.Parameters` is not array type"));

        const rapidjson::Value &tmpValue = value["Parameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleEngineCustomActionParameterSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameters.push_back(item);
        }
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("SupportedConditions") && !value["SupportedConditions"].IsNull())
    {
        if (!value["SupportedConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomAction.SupportedConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedConditions.push_back((*itr).GetString());
        }
        m_supportedConditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleEngineCustomAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportedConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedConditions.begin(); itr != m_supportedConditions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RuleEngineCustomAction::GetActionId() const
{
    return m_actionId;
}

void RuleEngineCustomAction::SetActionId(const string& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool RuleEngineCustomAction::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

string RuleEngineCustomAction::GetName() const
{
    return m_name;
}

void RuleEngineCustomAction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleEngineCustomAction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleEngineCustomAction::GetDescription() const
{
    return m_description;
}

void RuleEngineCustomAction::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleEngineCustomAction::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<RuleEngineCustomActionParameterSchema> RuleEngineCustomAction::GetParameters() const
{
    return m_parameters;
}

void RuleEngineCustomAction::SetParameters(const vector<RuleEngineCustomActionParameterSchema>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool RuleEngineCustomAction::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

vector<string> RuleEngineCustomAction::GetSupportedConditions() const
{
    return m_supportedConditions;
}

void RuleEngineCustomAction::SetSupportedConditions(const vector<string>& _supportedConditions)
{
    m_supportedConditions = _supportedConditions;
    m_supportedConditionsHasBeenSet = true;
}

bool RuleEngineCustomAction::SupportedConditionsHasBeenSet() const
{
    return m_supportedConditionsHasBeenSet;
}

