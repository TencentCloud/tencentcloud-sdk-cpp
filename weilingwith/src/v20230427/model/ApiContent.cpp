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

#include <tencentcloud/weilingwith/v20230427/model/ApiContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ApiContent::ApiContent() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dynamicHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

CoreInternalOutcome ApiContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Dynamic") && !value["Dynamic"].IsNull())
    {
        if (!value["Dynamic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Dynamic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dynamic = value["Dynamic"].GetBool();
        m_dynamicHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiContent.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dynamic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dynamic, allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

}


string ApiContent::GetId() const
{
    return m_id;
}

void ApiContent::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApiContent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ApiContent::GetName() const
{
    return m_name;
}

void ApiContent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiContent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiContent::GetType() const
{
    return m_type;
}

void ApiContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApiContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ApiContent::GetDynamic() const
{
    return m_dynamic;
}

void ApiContent::SetDynamic(const bool& _dynamic)
{
    m_dynamic = _dynamic;
    m_dynamicHasBeenSet = true;
}

bool ApiContent::DynamicHasBeenSet() const
{
    return m_dynamicHasBeenSet;
}

bool ApiContent::GetRequired() const
{
    return m_required;
}

void ApiContent::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool ApiContent::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string ApiContent::GetValue() const
{
    return m_value;
}

void ApiContent::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ApiContent::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ApiContent::GetDefaultValue() const
{
    return m_defaultValue;
}

void ApiContent::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ApiContent::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

