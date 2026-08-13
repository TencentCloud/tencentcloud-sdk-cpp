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

#include <tencentcloud/teo/v20220901/model/CustomActionParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomActionParameter::CustomActionParameter() :
    m_nameHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_integerValueHasBeenSet(false),
    m_floatValueHasBeenSet(false),
    m_booleanValueHasBeenSet(false),
    m_stringArrayValueHasBeenSet(false),
    m_integerArrayValueHasBeenSet(false),
    m_floatArrayValueHasBeenSet(false)
{
}

CoreInternalOutcome CustomActionParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("StringValue") && !value["StringValue"].IsNull())
    {
        if (!value["StringValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.StringValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stringValue = string(value["StringValue"].GetString());
        m_stringValueHasBeenSet = true;
    }

    if (value.HasMember("IntegerValue") && !value["IntegerValue"].IsNull())
    {
        if (!value["IntegerValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.IntegerValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_integerValue = value["IntegerValue"].GetInt64();
        m_integerValueHasBeenSet = true;
    }

    if (value.HasMember("FloatValue") && !value["FloatValue"].IsNull())
    {
        if (!value["FloatValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.FloatValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_floatValue = value["FloatValue"].GetDouble();
        m_floatValueHasBeenSet = true;
    }

    if (value.HasMember("BooleanValue") && !value["BooleanValue"].IsNull())
    {
        if (!value["BooleanValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.BooleanValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_booleanValue = value["BooleanValue"].GetBool();
        m_booleanValueHasBeenSet = true;
    }

    if (value.HasMember("StringArrayValue") && !value["StringArrayValue"].IsNull())
    {
        if (!value["StringArrayValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.StringArrayValue` is not array type"));

        const rapidjson::Value &tmpValue = value["StringArrayValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stringArrayValue.push_back((*itr).GetString());
        }
        m_stringArrayValueHasBeenSet = true;
    }

    if (value.HasMember("IntegerArrayValue") && !value["IntegerArrayValue"].IsNull())
    {
        if (!value["IntegerArrayValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.IntegerArrayValue` is not array type"));

        const rapidjson::Value &tmpValue = value["IntegerArrayValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_integerArrayValue.push_back((*itr).GetInt64());
        }
        m_integerArrayValueHasBeenSet = true;
    }

    if (value.HasMember("FloatArrayValue") && !value["FloatArrayValue"].IsNull())
    {
        if (!value["FloatArrayValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomActionParameter.FloatArrayValue` is not array type"));

        const rapidjson::Value &tmpValue = value["FloatArrayValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_floatArrayValue.push_back((*itr).GetDouble());
        }
        m_floatArrayValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomActionParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_stringValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StringValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stringValue.c_str(), allocator).Move(), allocator);
    }

    if (m_integerValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegerValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_integerValue, allocator);
    }

    if (m_floatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floatValue, allocator);
    }

    if (m_booleanValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BooleanValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_booleanValue, allocator);
    }

    if (m_stringArrayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StringArrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stringArrayValue.begin(); itr != m_stringArrayValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_integerArrayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegerArrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_integerArrayValue.begin(); itr != m_integerArrayValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_floatArrayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatArrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_floatArrayValue.begin(); itr != m_floatArrayValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string CustomActionParameter::GetName() const
{
    return m_name;
}

void CustomActionParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomActionParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomActionParameter::GetValueType() const
{
    return m_valueType;
}

void CustomActionParameter::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool CustomActionParameter::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string CustomActionParameter::GetStringValue() const
{
    return m_stringValue;
}

void CustomActionParameter::SetStringValue(const string& _stringValue)
{
    m_stringValue = _stringValue;
    m_stringValueHasBeenSet = true;
}

bool CustomActionParameter::StringValueHasBeenSet() const
{
    return m_stringValueHasBeenSet;
}

int64_t CustomActionParameter::GetIntegerValue() const
{
    return m_integerValue;
}

void CustomActionParameter::SetIntegerValue(const int64_t& _integerValue)
{
    m_integerValue = _integerValue;
    m_integerValueHasBeenSet = true;
}

bool CustomActionParameter::IntegerValueHasBeenSet() const
{
    return m_integerValueHasBeenSet;
}

double CustomActionParameter::GetFloatValue() const
{
    return m_floatValue;
}

void CustomActionParameter::SetFloatValue(const double& _floatValue)
{
    m_floatValue = _floatValue;
    m_floatValueHasBeenSet = true;
}

bool CustomActionParameter::FloatValueHasBeenSet() const
{
    return m_floatValueHasBeenSet;
}

bool CustomActionParameter::GetBooleanValue() const
{
    return m_booleanValue;
}

void CustomActionParameter::SetBooleanValue(const bool& _booleanValue)
{
    m_booleanValue = _booleanValue;
    m_booleanValueHasBeenSet = true;
}

bool CustomActionParameter::BooleanValueHasBeenSet() const
{
    return m_booleanValueHasBeenSet;
}

vector<string> CustomActionParameter::GetStringArrayValue() const
{
    return m_stringArrayValue;
}

void CustomActionParameter::SetStringArrayValue(const vector<string>& _stringArrayValue)
{
    m_stringArrayValue = _stringArrayValue;
    m_stringArrayValueHasBeenSet = true;
}

bool CustomActionParameter::StringArrayValueHasBeenSet() const
{
    return m_stringArrayValueHasBeenSet;
}

vector<int64_t> CustomActionParameter::GetIntegerArrayValue() const
{
    return m_integerArrayValue;
}

void CustomActionParameter::SetIntegerArrayValue(const vector<int64_t>& _integerArrayValue)
{
    m_integerArrayValue = _integerArrayValue;
    m_integerArrayValueHasBeenSet = true;
}

bool CustomActionParameter::IntegerArrayValueHasBeenSet() const
{
    return m_integerArrayValueHasBeenSet;
}

vector<double> CustomActionParameter::GetFloatArrayValue() const
{
    return m_floatArrayValue;
}

void CustomActionParameter::SetFloatArrayValue(const vector<double>& _floatArrayValue)
{
    m_floatArrayValue = _floatArrayValue;
    m_floatArrayValueHasBeenSet = true;
}

bool CustomActionParameter::FloatArrayValueHasBeenSet() const
{
    return m_floatArrayValueHasBeenSet;
}

