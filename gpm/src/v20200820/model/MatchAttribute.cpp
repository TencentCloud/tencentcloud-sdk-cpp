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

#include <tencentcloud/gpm/v20200820/model/MatchAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

MatchAttribute::MatchAttribute() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_numberValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listValueHasBeenSet(false),
    m_mapValueHasBeenSet(false)
{
}

CoreInternalOutcome MatchAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NumberValue") && !value["NumberValue"].IsNull())
    {
        if (!value["NumberValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.NumberValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_numberValue = value["NumberValue"].GetDouble();
        m_numberValueHasBeenSet = true;
    }

    if (value.HasMember("StringValue") && !value["StringValue"].IsNull())
    {
        if (!value["StringValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.StringValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stringValue = string(value["StringValue"].GetString());
        m_stringValueHasBeenSet = true;
    }

    if (value.HasMember("ListValue") && !value["ListValue"].IsNull())
    {
        if (!value["ListValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.ListValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ListValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_listValue.push_back((*itr).GetString());
        }
        m_listValueHasBeenSet = true;
    }

    if (value.HasMember("MapValue") && !value["MapValue"].IsNull())
    {
        if (!value["MapValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MatchAttribute.MapValue` is not array type"));

        const rapidjson::Value &tmpValue = value["MapValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapValue.push_back(item);
        }
        m_mapValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MatchAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_numberValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberValue, allocator);
    }

    if (m_stringValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StringValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stringValue.c_str(), allocator).Move(), allocator);
    }

    if (m_listValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_listValue.begin(); itr != m_listValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mapValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapValue.begin(); itr != m_mapValue.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MatchAttribute::GetName() const
{
    return m_name;
}

void MatchAttribute::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MatchAttribute::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t MatchAttribute::GetType() const
{
    return m_type;
}

void MatchAttribute::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MatchAttribute::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double MatchAttribute::GetNumberValue() const
{
    return m_numberValue;
}

void MatchAttribute::SetNumberValue(const double& _numberValue)
{
    m_numberValue = _numberValue;
    m_numberValueHasBeenSet = true;
}

bool MatchAttribute::NumberValueHasBeenSet() const
{
    return m_numberValueHasBeenSet;
}

string MatchAttribute::GetStringValue() const
{
    return m_stringValue;
}

void MatchAttribute::SetStringValue(const string& _stringValue)
{
    m_stringValue = _stringValue;
    m_stringValueHasBeenSet = true;
}

bool MatchAttribute::StringValueHasBeenSet() const
{
    return m_stringValueHasBeenSet;
}

vector<string> MatchAttribute::GetListValue() const
{
    return m_listValue;
}

void MatchAttribute::SetListValue(const vector<string>& _listValue)
{
    m_listValue = _listValue;
    m_listValueHasBeenSet = true;
}

bool MatchAttribute::ListValueHasBeenSet() const
{
    return m_listValueHasBeenSet;
}

vector<AttributeMap> MatchAttribute::GetMapValue() const
{
    return m_mapValue;
}

void MatchAttribute::SetMapValue(const vector<AttributeMap>& _mapValue)
{
    m_mapValue = _mapValue;
    m_mapValueHasBeenSet = true;
}

bool MatchAttribute::MapValueHasBeenSet() const
{
    return m_mapValueHasBeenSet;
}

