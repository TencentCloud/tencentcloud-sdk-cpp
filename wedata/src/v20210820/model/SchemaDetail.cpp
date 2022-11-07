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

#include <tencentcloud/wedata/v20210820/model/SchemaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SchemaDetail::SchemaDetail() :
    m_columnKeyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SchemaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnKey") && !value["ColumnKey"].IsNull())
    {
        if (!value["ColumnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDetail.ColumnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnKey = string(value["ColumnKey"].GetString());
        m_columnKeyHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnKey.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string SchemaDetail::GetColumnKey() const
{
    return m_columnKey;
}

void SchemaDetail::SetColumnKey(const string& _columnKey)
{
    m_columnKey = _columnKey;
    m_columnKeyHasBeenSet = true;
}

bool SchemaDetail::ColumnKeyHasBeenSet() const
{
    return m_columnKeyHasBeenSet;
}

string SchemaDetail::GetDescription() const
{
    return m_description;
}

void SchemaDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SchemaDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SchemaDetail::GetName() const
{
    return m_name;
}

void SchemaDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SchemaDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SchemaDetail::GetType() const
{
    return m_type;
}

void SchemaDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SchemaDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

