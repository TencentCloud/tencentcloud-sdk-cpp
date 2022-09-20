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

#include <tencentcloud/teo/v20220901/model/RuleExtraParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleExtraParameter::RuleExtraParameter() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_choicesHasBeenSet(false)
{
}

CoreInternalOutcome RuleExtraParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExtraParameter.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExtraParameter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Choices") && !value["Choices"].IsNull())
    {
        if (!value["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleExtraParameter.Choices` is not array type"));

        const rapidjson::Value &tmpValue = value["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_choices.push_back((*itr).GetString());
        }
        m_choicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExtraParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RuleExtraParameter::GetId() const
{
    return m_id;
}

void RuleExtraParameter::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RuleExtraParameter::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RuleExtraParameter::GetType() const
{
    return m_type;
}

void RuleExtraParameter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleExtraParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> RuleExtraParameter::GetChoices() const
{
    return m_choices;
}

void RuleExtraParameter::SetChoices(const vector<string>& _choices)
{
    m_choices = _choices;
    m_choicesHasBeenSet = true;
}

bool RuleExtraParameter::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

