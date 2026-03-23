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

#include <tencentcloud/apis/v20240801/model/McpInputOutSchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpInputOutSchema::McpInputOutSchema() :
    m_typeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome McpInputOutSchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpInputOutSchema.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpInputOutSchema.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McpInputOutSchema.Required` is not array type"));

        const rapidjson::Value &tmpValue = value["Required"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_required.push_back((*itr).GetString());
        }
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpInputOutSchema.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpInputOutSchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_required.begin(); itr != m_required.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string McpInputOutSchema::GetType() const
{
    return m_type;
}

void McpInputOutSchema::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool McpInputOutSchema::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string McpInputOutSchema::GetProperties() const
{
    return m_properties;
}

void McpInputOutSchema::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool McpInputOutSchema::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<string> McpInputOutSchema::GetRequired() const
{
    return m_required;
}

void McpInputOutSchema::SetRequired(const vector<string>& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool McpInputOutSchema::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string McpInputOutSchema::GetDescription() const
{
    return m_description;
}

void McpInputOutSchema::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool McpInputOutSchema::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

