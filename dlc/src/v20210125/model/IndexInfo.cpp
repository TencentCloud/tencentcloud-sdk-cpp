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

#include <tencentcloud/dlc/v20210125/model/IndexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

IndexInfo::IndexInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fieldNamesHasBeenSet(false)
{
}

CoreInternalOutcome IndexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FieldNames") && !value["FieldNames"].IsNull())
    {
        if (!value["FieldNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexInfo.FieldNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldNames.push_back((*itr).GetString());
        }
        m_fieldNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

}


string IndexInfo::GetName() const
{
    return m_name;
}

void IndexInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IndexInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IndexInfo::GetType() const
{
    return m_type;
}

void IndexInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool IndexInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> IndexInfo::GetFieldNames() const
{
    return m_fieldNames;
}

void IndexInfo::SetFieldNames(const vector<string>& _fieldNames)
{
    m_fieldNames = _fieldNames;
    m_fieldNamesHasBeenSet = true;
}

bool IndexInfo::FieldNamesHasBeenSet() const
{
    return m_fieldNamesHasBeenSet;
}

