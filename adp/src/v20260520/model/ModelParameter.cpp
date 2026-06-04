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

#include <tencentcloud/adp/v20260520/model/ModelParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelParameter::ModelParameter() :
    m_defaultValueHasBeenSet(false),
    m_enumValueListHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ModelParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("EnumValueList") && !value["EnumValueList"].IsNull())
    {
        if (!value["EnumValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelParameter.EnumValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValueList.push_back((*itr).GetString());
        }
        m_enumValueListHasBeenSet = true;
    }

    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.MaxValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = value["MaxValue"].GetDouble();
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("MinValue") && !value["MinValue"].IsNull())
    {
        if (!value["MinValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.MinValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minValue = value["MinValue"].GetDouble();
        m_minValueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValueList.begin(); itr != m_enumValueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_minValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minValue, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string ModelParameter::GetDefaultValue() const
{
    return m_defaultValue;
}

void ModelParameter::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ModelParameter::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<string> ModelParameter::GetEnumValueList() const
{
    return m_enumValueList;
}

void ModelParameter::SetEnumValueList(const vector<string>& _enumValueList)
{
    m_enumValueList = _enumValueList;
    m_enumValueListHasBeenSet = true;
}

bool ModelParameter::EnumValueListHasBeenSet() const
{
    return m_enumValueListHasBeenSet;
}

double ModelParameter::GetMaxValue() const
{
    return m_maxValue;
}

void ModelParameter::SetMaxValue(const double& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool ModelParameter::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

double ModelParameter::GetMinValue() const
{
    return m_minValue;
}

void ModelParameter::SetMinValue(const double& _minValue)
{
    m_minValue = _minValue;
    m_minValueHasBeenSet = true;
}

bool ModelParameter::MinValueHasBeenSet() const
{
    return m_minValueHasBeenSet;
}

string ModelParameter::GetName() const
{
    return m_name;
}

void ModelParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModelParameter::GetType() const
{
    return m_type;
}

void ModelParameter::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

