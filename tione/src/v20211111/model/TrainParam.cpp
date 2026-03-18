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

#include <tencentcloud/tione/v20211111/model/TrainParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainParam::TrainParam() :
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_enumHasBeenSet(false)
{
}

CoreInternalOutcome TrainParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainParam.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainParam.Range` is not array type"));

        const rapidjson::Value &tmpValue = value["Range"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_range.push_back((*itr).GetString());
        }
        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("Enum") && !value["Enum"].IsNull())
    {
        if (!value["Enum"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainParam.Enum` is not array type"));

        const rapidjson::Value &tmpValue = value["Enum"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enum.push_back((*itr).GetString());
        }
        m_enumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_range.begin(); itr != m_range.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enum.begin(); itr != m_enum.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TrainParam::GetName() const
{
    return m_name;
}

void TrainParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TrainParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TrainParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void TrainParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool TrainParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string TrainParam::GetComment() const
{
    return m_comment;
}

void TrainParam::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool TrainParam::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string TrainParam::GetType() const
{
    return m_type;
}

void TrainParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TrainParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool TrainParam::GetRequired() const
{
    return m_required;
}

void TrainParam::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool TrainParam::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string TrainParam::GetValue() const
{
    return m_value;
}

void TrainParam::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TrainParam::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<string> TrainParam::GetRange() const
{
    return m_range;
}

void TrainParam::SetRange(const vector<string>& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool TrainParam::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

vector<string> TrainParam::GetEnum() const
{
    return m_enum;
}

void TrainParam::SetEnum(const vector<string>& _enum)
{
    m_enum = _enum;
    m_enumHasBeenSet = true;
}

bool TrainParam::EnumHasBeenSet() const
{
    return m_enumHasBeenSet;
}

