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

#include <tencentcloud/databuddy/v20260715/model/Index.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Index::Index() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fieldNamesHasBeenSet(false),
    m_indexTypeHasBeenSet(false)
{
}

CoreInternalOutcome Index::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Index.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Index.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("FieldNames") && !value["FieldNames"].IsNull())
    {
        if (!value["FieldNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Index.FieldNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldNames.push_back((*itr).GetString());
        }
        m_fieldNamesHasBeenSet = true;
    }

    if (value.HasMember("IndexType") && !value["IndexType"].IsNull())
    {
        if (!value["IndexType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Index.IndexType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexType = string(value["IndexType"].GetString());
        m_indexTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Index::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldNames.begin(); itr != m_fieldNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

}


string Index::GetType() const
{
    return m_type;
}

void Index::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Index::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Index::GetName() const
{
    return m_name;
}

void Index::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Index::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> Index::GetFieldNames() const
{
    return m_fieldNames;
}

void Index::SetFieldNames(const vector<string>& _fieldNames)
{
    m_fieldNames = _fieldNames;
    m_fieldNamesHasBeenSet = true;
}

bool Index::FieldNamesHasBeenSet() const
{
    return m_fieldNamesHasBeenSet;
}

string Index::GetIndexType() const
{
    return m_indexType;
}

void Index::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool Index::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

