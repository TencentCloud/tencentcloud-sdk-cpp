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

#include <tencentcloud/adp/v20260520/model/Variable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Variable::Variable() :
    m_defaultFileNameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_moduleTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_variableIdHasBeenSet(false),
    m_enableEndpointsHasBeenSet(false),
    m_endpointListHasBeenSet(false)
{
}

CoreInternalOutcome Variable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultFileName") && !value["DefaultFileName"].IsNull())
    {
        if (!value["DefaultFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.DefaultFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultFileName = string(value["DefaultFileName"].GetString());
        m_defaultFileNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModuleType") && !value["ModuleType"].IsNull())
    {
        if (!value["ModuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.ModuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moduleType = value["ModuleType"].GetInt64();
        m_moduleTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VariableId") && !value["VariableId"].IsNull())
    {
        if (!value["VariableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.VariableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_variableId = string(value["VariableId"].GetString());
        m_variableIdHasBeenSet = true;
    }

    if (value.HasMember("EnableEndpoints") && !value["EnableEndpoints"].IsNull())
    {
        if (!value["EnableEndpoints"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Variable.EnableEndpoints` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableEndpoints = value["EnableEndpoints"].GetBool();
        m_enableEndpointsHasBeenSet = true;
    }

    if (value.HasMember("EndpointList") && !value["EndpointList"].IsNull())
    {
        if (!value["EndpointList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Variable.EndpointList` is not array type"));

        const rapidjson::Value &tmpValue = value["EndpointList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endpointList.push_back((*itr).GetString());
        }
        m_endpointListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Variable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moduleType, allocator);
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
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_variableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_variableId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableEndpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEndpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableEndpoints, allocator);
    }

    if (m_endpointListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endpointList.begin(); itr != m_endpointList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Variable::GetDefaultFileName() const
{
    return m_defaultFileName;
}

void Variable::SetDefaultFileName(const string& _defaultFileName)
{
    m_defaultFileName = _defaultFileName;
    m_defaultFileNameHasBeenSet = true;
}

bool Variable::DefaultFileNameHasBeenSet() const
{
    return m_defaultFileNameHasBeenSet;
}

string Variable::GetDefaultValue() const
{
    return m_defaultValue;
}

void Variable::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool Variable::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string Variable::GetDescription() const
{
    return m_description;
}

void Variable::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Variable::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t Variable::GetModuleType() const
{
    return m_moduleType;
}

void Variable::SetModuleType(const int64_t& _moduleType)
{
    m_moduleType = _moduleType;
    m_moduleTypeHasBeenSet = true;
}

bool Variable::ModuleTypeHasBeenSet() const
{
    return m_moduleTypeHasBeenSet;
}

string Variable::GetName() const
{
    return m_name;
}

void Variable::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Variable::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Variable::GetType() const
{
    return m_type;
}

void Variable::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Variable::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Variable::GetVariableId() const
{
    return m_variableId;
}

void Variable::SetVariableId(const string& _variableId)
{
    m_variableId = _variableId;
    m_variableIdHasBeenSet = true;
}

bool Variable::VariableIdHasBeenSet() const
{
    return m_variableIdHasBeenSet;
}

bool Variable::GetEnableEndpoints() const
{
    return m_enableEndpoints;
}

void Variable::SetEnableEndpoints(const bool& _enableEndpoints)
{
    m_enableEndpoints = _enableEndpoints;
    m_enableEndpointsHasBeenSet = true;
}

bool Variable::EnableEndpointsHasBeenSet() const
{
    return m_enableEndpointsHasBeenSet;
}

vector<string> Variable::GetEndpointList() const
{
    return m_endpointList;
}

void Variable::SetEndpointList(const vector<string>& _endpointList)
{
    m_endpointList = _endpointList;
    m_endpointListHasBeenSet = true;
}

bool Variable::EndpointListHasBeenSet() const
{
    return m_endpointListHasBeenSet;
}

