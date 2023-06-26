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

#include <tencentcloud/trp/v20210515/model/TraceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

TraceItem::TraceItem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_hiddenHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_extHasBeenSet(false),
    m_attrsHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome TraceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceItem.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("Hidden") && !value["Hidden"].IsNull())
    {
        if (!value["Hidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Hidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hidden = value["Hidden"].GetBool();
        m_hiddenHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceItem.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }

    if (value.HasMember("Attrs") && !value["Attrs"].IsNull())
    {
        if (!value["Attrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceItem.Attrs` is not array type"));

        const rapidjson::Value &tmpValue = value["Attrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TraceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrs.push_back(item);
        }
        m_attrsHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceItem.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TraceData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_attrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrs.begin(); itr != m_attrs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TraceItem::GetName() const
{
    return m_name;
}

void TraceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TraceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TraceItem::GetValue() const
{
    return m_value;
}

void TraceItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TraceItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string TraceItem::GetType() const
{
    return m_type;
}

void TraceItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TraceItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> TraceItem::GetValues() const
{
    return m_values;
}

void TraceItem::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool TraceItem::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool TraceItem::GetReadOnly() const
{
    return m_readOnly;
}

void TraceItem::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool TraceItem::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

bool TraceItem::GetHidden() const
{
    return m_hidden;
}

void TraceItem::SetHidden(const bool& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool TraceItem::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}

string TraceItem::GetKey() const
{
    return m_key;
}

void TraceItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool TraceItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string TraceItem::GetExt() const
{
    return m_ext;
}

void TraceItem::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool TraceItem::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

vector<TraceItem> TraceItem::GetAttrs() const
{
    return m_attrs;
}

void TraceItem::SetAttrs(const vector<TraceItem>& _attrs)
{
    m_attrs = _attrs;
    m_attrsHasBeenSet = true;
}

bool TraceItem::AttrsHasBeenSet() const
{
    return m_attrsHasBeenSet;
}

vector<TraceData> TraceItem::GetList() const
{
    return m_list;
}

void TraceItem::SetList(const vector<TraceData>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool TraceItem::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

