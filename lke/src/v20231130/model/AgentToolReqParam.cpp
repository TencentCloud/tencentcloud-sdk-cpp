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

#include <tencentcloud/lke/v20231130/model/AgentToolReqParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentToolReqParam::AgentToolReqParam() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_globalHiddenHasBeenSet(false),
    m_agentHiddenHasBeenSet(false),
    m_anyOfHasBeenSet(false),
    m_oneOfHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolReqParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParams.push_back(item);
        }
        m_subParamsHasBeenSet = true;
    }

    if (value.HasMember("GlobalHidden") && !value["GlobalHidden"].IsNull())
    {
        if (!value["GlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.GlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_globalHidden = value["GlobalHidden"].GetBool();
        m_globalHiddenHasBeenSet = true;
    }

    if (value.HasMember("AgentHidden") && !value["AgentHidden"].IsNull())
    {
        if (!value["AgentHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.AgentHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_agentHidden = value["AgentHidden"].GetBool();
        m_agentHiddenHasBeenSet = true;
    }

    if (value.HasMember("AnyOf") && !value["AnyOf"].IsNull())
    {
        if (!value["AnyOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.AnyOf` is not array type"));

        const rapidjson::Value &tmpValue = value["AnyOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_anyOf.push_back(item);
        }
        m_anyOfHasBeenSet = true;
    }

    if (value.HasMember("OneOf") && !value["OneOf"].IsNull())
    {
        if (!value["OneOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.OneOf` is not array type"));

        const rapidjson::Value &tmpValue = value["OneOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oneOf.push_back(item);
        }
        m_oneOfHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolReqParam.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolReqParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_subParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParams.begin(); itr != m_subParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_globalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalHidden, allocator);
    }

    if (m_agentHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentHidden, allocator);
    }

    if (m_anyOfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnyOf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_anyOf.begin(); itr != m_anyOf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oneOfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneOf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oneOf.begin(); itr != m_oneOf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentToolReqParam::GetName() const
{
    return m_name;
}

void AgentToolReqParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentToolReqParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentToolReqParam::GetDesc() const
{
    return m_desc;
}

void AgentToolReqParam::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AgentToolReqParam::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t AgentToolReqParam::GetType() const
{
    return m_type;
}

void AgentToolReqParam::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentToolReqParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool AgentToolReqParam::GetIsRequired() const
{
    return m_isRequired;
}

void AgentToolReqParam::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AgentToolReqParam::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

string AgentToolReqParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void AgentToolReqParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool AgentToolReqParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<AgentToolReqParam> AgentToolReqParam::GetSubParams() const
{
    return m_subParams;
}

void AgentToolReqParam::SetSubParams(const vector<AgentToolReqParam>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool AgentToolReqParam::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

bool AgentToolReqParam::GetGlobalHidden() const
{
    return m_globalHidden;
}

void AgentToolReqParam::SetGlobalHidden(const bool& _globalHidden)
{
    m_globalHidden = _globalHidden;
    m_globalHiddenHasBeenSet = true;
}

bool AgentToolReqParam::GlobalHiddenHasBeenSet() const
{
    return m_globalHiddenHasBeenSet;
}

bool AgentToolReqParam::GetAgentHidden() const
{
    return m_agentHidden;
}

void AgentToolReqParam::SetAgentHidden(const bool& _agentHidden)
{
    m_agentHidden = _agentHidden;
    m_agentHiddenHasBeenSet = true;
}

bool AgentToolReqParam::AgentHiddenHasBeenSet() const
{
    return m_agentHiddenHasBeenSet;
}

vector<AgentToolReqParam> AgentToolReqParam::GetAnyOf() const
{
    return m_anyOf;
}

void AgentToolReqParam::SetAnyOf(const vector<AgentToolReqParam>& _anyOf)
{
    m_anyOf = _anyOf;
    m_anyOfHasBeenSet = true;
}

bool AgentToolReqParam::AnyOfHasBeenSet() const
{
    return m_anyOfHasBeenSet;
}

vector<AgentToolReqParam> AgentToolReqParam::GetOneOf() const
{
    return m_oneOf;
}

void AgentToolReqParam::SetOneOf(const vector<AgentToolReqParam>& _oneOf)
{
    m_oneOf = _oneOf;
    m_oneOfHasBeenSet = true;
}

bool AgentToolReqParam::OneOfHasBeenSet() const
{
    return m_oneOfHasBeenSet;
}

AgentInput AgentToolReqParam::GetInput() const
{
    return m_input;
}

void AgentToolReqParam::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentToolReqParam::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

