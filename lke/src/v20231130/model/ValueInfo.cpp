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

#include <tencentcloud/lke/v20231130/model/ValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ValueInfo::ValueInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_valueStrHasBeenSet(false),
    m_valueIntHasBeenSet(false),
    m_valueFloatHasBeenSet(false),
    m_valueBoolHasBeenSet(false),
    m_valueStrArrayHasBeenSet(false)
{
}

CoreInternalOutcome ValueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = value["ValueType"].GetInt64();
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueStr") && !value["ValueStr"].IsNull())
    {
        if (!value["ValueStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueStr = string(value["ValueStr"].GetString());
        m_valueStrHasBeenSet = true;
    }

    if (value.HasMember("ValueInt") && !value["ValueInt"].IsNull())
    {
        if (!value["ValueInt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueInt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueInt = string(value["ValueInt"].GetString());
        m_valueIntHasBeenSet = true;
    }

    if (value.HasMember("ValueFloat") && !value["ValueFloat"].IsNull())
    {
        if (!value["ValueFloat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueFloat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_valueFloat = value["ValueFloat"].GetDouble();
        m_valueFloatHasBeenSet = true;
    }

    if (value.HasMember("ValueBool") && !value["ValueBool"].IsNull())
    {
        if (!value["ValueBool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueBool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_valueBool = value["ValueBool"].GetBool();
        m_valueBoolHasBeenSet = true;
    }

    if (value.HasMember("ValueStrArray") && !value["ValueStrArray"].IsNull())
    {
        if (!value["ValueStrArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ValueStrArray` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueStrArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_valueStrArray.push_back((*itr).GetString());
        }
        m_valueStrArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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
        value.AddMember(iKey, m_valueType, allocator);
    }

    if (m_valueStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueStr.c_str(), allocator).Move(), allocator);
    }

    if (m_valueIntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueInt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueInt.c_str(), allocator).Move(), allocator);
    }

    if (m_valueFloatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueFloat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueFloat, allocator);
    }

    if (m_valueBoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueBool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueBool, allocator);
    }

    if (m_valueStrArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueStrArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_valueStrArray.begin(); itr != m_valueStrArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ValueInfo::GetId() const
{
    return m_id;
}

void ValueInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ValueInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ValueInfo::GetName() const
{
    return m_name;
}

void ValueInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ValueInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ValueInfo::GetValueType() const
{
    return m_valueType;
}

void ValueInfo::SetValueType(const int64_t& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool ValueInfo::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string ValueInfo::GetValueStr() const
{
    return m_valueStr;
}

void ValueInfo::SetValueStr(const string& _valueStr)
{
    m_valueStr = _valueStr;
    m_valueStrHasBeenSet = true;
}

bool ValueInfo::ValueStrHasBeenSet() const
{
    return m_valueStrHasBeenSet;
}

string ValueInfo::GetValueInt() const
{
    return m_valueInt;
}

void ValueInfo::SetValueInt(const string& _valueInt)
{
    m_valueInt = _valueInt;
    m_valueIntHasBeenSet = true;
}

bool ValueInfo::ValueIntHasBeenSet() const
{
    return m_valueIntHasBeenSet;
}

double ValueInfo::GetValueFloat() const
{
    return m_valueFloat;
}

void ValueInfo::SetValueFloat(const double& _valueFloat)
{
    m_valueFloat = _valueFloat;
    m_valueFloatHasBeenSet = true;
}

bool ValueInfo::ValueFloatHasBeenSet() const
{
    return m_valueFloatHasBeenSet;
}

bool ValueInfo::GetValueBool() const
{
    return m_valueBool;
}

void ValueInfo::SetValueBool(const bool& _valueBool)
{
    m_valueBool = _valueBool;
    m_valueBoolHasBeenSet = true;
}

bool ValueInfo::ValueBoolHasBeenSet() const
{
    return m_valueBoolHasBeenSet;
}

vector<string> ValueInfo::GetValueStrArray() const
{
    return m_valueStrArray;
}

void ValueInfo::SetValueStrArray(const vector<string>& _valueStrArray)
{
    m_valueStrArray = _valueStrArray;
    m_valueStrArrayHasBeenSet = true;
}

bool ValueInfo::ValueStrArrayHasBeenSet() const
{
    return m_valueStrArrayHasBeenSet;
}

