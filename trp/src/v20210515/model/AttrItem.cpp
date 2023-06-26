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

#include <tencentcloud/trp/v20210515/model/AttrItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

AttrItem::AttrItem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_hiddenHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

CoreInternalOutcome AttrItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("Hidden") && !value["Hidden"].IsNull())
    {
        if (!value["Hidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Hidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hidden = value["Hidden"].GetBool();
        m_hiddenHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttrItem.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrItem.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttrItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_hiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hidden, allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

}


string AttrItem::GetName() const
{
    return m_name;
}

void AttrItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AttrItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AttrItem::GetValue() const
{
    return m_value;
}

void AttrItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AttrItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AttrItem::GetType() const
{
    return m_type;
}

void AttrItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AttrItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool AttrItem::GetReadOnly() const
{
    return m_readOnly;
}

void AttrItem::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool AttrItem::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

bool AttrItem::GetHidden() const
{
    return m_hidden;
}

void AttrItem::SetHidden(const bool& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool AttrItem::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}

vector<string> AttrItem::GetValues() const
{
    return m_values;
}

void AttrItem::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool AttrItem::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string AttrItem::GetKey() const
{
    return m_key;
}

void AttrItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AttrItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string AttrItem::GetExt() const
{
    return m_ext;
}

void AttrItem::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool AttrItem::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

