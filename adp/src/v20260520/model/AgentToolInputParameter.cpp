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

#include <tencentcloud/adp/v20260520/model/AgentToolInputParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentToolInputParameter::AgentToolInputParameter() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_subParameterListHasBeenSet(false),
    m_isHiddenHasBeenSet(false),
    m_oneOfListHasBeenSet(false),
    m_anyOfListHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolInputParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("SubParameterList") && !value["SubParameterList"].IsNull())
    {
        if (!value["SubParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.SubParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolInputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParameterList.push_back(item);
        }
        m_subParameterListHasBeenSet = true;
    }

    if (value.HasMember("IsHidden") && !value["IsHidden"].IsNull())
    {
        if (!value["IsHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.IsHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHidden = value["IsHidden"].GetBool();
        m_isHiddenHasBeenSet = true;
    }

    if (value.HasMember("OneOfList") && !value["OneOfList"].IsNull())
    {
        if (!value["OneOfList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.OneOfList` is not array type"));

        const rapidjson::Value &tmpValue = value["OneOfList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolInputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oneOfList.push_back(item);
        }
        m_oneOfListHasBeenSet = true;
    }

    if (value.HasMember("AnyOfList") && !value["AnyOfList"].IsNull())
    {
        if (!value["AnyOfList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.AnyOfList` is not array type"));

        const rapidjson::Value &tmpValue = value["AnyOfList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolInputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_anyOfList.push_back(item);
        }
        m_anyOfListHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInputParameter.Input` is not object type").SetRequestId(requestId));
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

void AgentToolInputParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_subParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParameterList.begin(); itr != m_subParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHidden, allocator);
    }

    if (m_oneOfListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneOfList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oneOfList.begin(); itr != m_oneOfList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_anyOfListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnyOfList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_anyOfList.begin(); itr != m_anyOfList.end(); ++itr, ++i)
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


string AgentToolInputParameter::GetName() const
{
    return m_name;
}

void AgentToolInputParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentToolInputParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentToolInputParameter::GetDescription() const
{
    return m_description;
}

void AgentToolInputParameter::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentToolInputParameter::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t AgentToolInputParameter::GetType() const
{
    return m_type;
}

void AgentToolInputParameter::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentToolInputParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool AgentToolInputParameter::GetIsRequired() const
{
    return m_isRequired;
}

void AgentToolInputParameter::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AgentToolInputParameter::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

vector<AgentToolInputParameter> AgentToolInputParameter::GetSubParameterList() const
{
    return m_subParameterList;
}

void AgentToolInputParameter::SetSubParameterList(const vector<AgentToolInputParameter>& _subParameterList)
{
    m_subParameterList = _subParameterList;
    m_subParameterListHasBeenSet = true;
}

bool AgentToolInputParameter::SubParameterListHasBeenSet() const
{
    return m_subParameterListHasBeenSet;
}

bool AgentToolInputParameter::GetIsHidden() const
{
    return m_isHidden;
}

void AgentToolInputParameter::SetIsHidden(const bool& _isHidden)
{
    m_isHidden = _isHidden;
    m_isHiddenHasBeenSet = true;
}

bool AgentToolInputParameter::IsHiddenHasBeenSet() const
{
    return m_isHiddenHasBeenSet;
}

vector<AgentToolInputParameter> AgentToolInputParameter::GetOneOfList() const
{
    return m_oneOfList;
}

void AgentToolInputParameter::SetOneOfList(const vector<AgentToolInputParameter>& _oneOfList)
{
    m_oneOfList = _oneOfList;
    m_oneOfListHasBeenSet = true;
}

bool AgentToolInputParameter::OneOfListHasBeenSet() const
{
    return m_oneOfListHasBeenSet;
}

vector<AgentToolInputParameter> AgentToolInputParameter::GetAnyOfList() const
{
    return m_anyOfList;
}

void AgentToolInputParameter::SetAnyOfList(const vector<AgentToolInputParameter>& _anyOfList)
{
    m_anyOfList = _anyOfList;
    m_anyOfListHasBeenSet = true;
}

bool AgentToolInputParameter::AnyOfListHasBeenSet() const
{
    return m_anyOfListHasBeenSet;
}

AgentInput AgentToolInputParameter::GetInput() const
{
    return m_input;
}

void AgentToolInputParameter::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentToolInputParameter::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

