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

#include <tencentcloud/tsf/v20180326/model/ApiRequestDescr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiRequestDescr::ApiRequestDescr() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_inHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

CoreInternalOutcome ApiRequestDescr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("In") && !value["In"].IsNull())
    {
        if (!value["In"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.In` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_in = string(value["In"].GetString());
        m_inHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRequestDescr.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiRequestDescr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "In";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_in.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

}


string ApiRequestDescr::GetName() const
{
    return m_name;
}

void ApiRequestDescr::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiRequestDescr::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiRequestDescr::GetType() const
{
    return m_type;
}

void ApiRequestDescr::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApiRequestDescr::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApiRequestDescr::GetIn() const
{
    return m_in;
}

void ApiRequestDescr::SetIn(const string& _in)
{
    m_in = _in;
    m_inHasBeenSet = true;
}

bool ApiRequestDescr::InHasBeenSet() const
{
    return m_inHasBeenSet;
}

string ApiRequestDescr::GetDescription() const
{
    return m_description;
}

void ApiRequestDescr::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiRequestDescr::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ApiRequestDescr::GetRequired() const
{
    return m_required;
}

void ApiRequestDescr::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool ApiRequestDescr::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string ApiRequestDescr::GetDefaultValue() const
{
    return m_defaultValue;
}

void ApiRequestDescr::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ApiRequestDescr::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

