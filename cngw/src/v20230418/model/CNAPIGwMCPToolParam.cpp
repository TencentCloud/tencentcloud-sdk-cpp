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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwMCPToolParam::CNAPIGwMCPToolParam() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_backendNameHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwMCPToolParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Items` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_items.Deserialize(value["Items"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CNAPIGwMCPToolParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("BackendName") && !value["BackendName"].IsNull())
    {
        if (!value["BackendName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolParam.BackendName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backendName = string(value["BackendName"].GetString());
        m_backendNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwMCPToolParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_items.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backendNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backendName.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwMCPToolParam::GetName() const
{
    return m_name;
}

void CNAPIGwMCPToolParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwMCPToolParam::GetType() const
{
    return m_type;
}

void CNAPIGwMCPToolParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CNAPIGwMCPToolParam::GetRequired() const
{
    return m_required;
}

void CNAPIGwMCPToolParam::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string CNAPIGwMCPToolParam::GetPosition() const
{
    return m_position;
}

void CNAPIGwMCPToolParam::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string CNAPIGwMCPToolParam::GetDescription() const
{
    return m_description;
}

void CNAPIGwMCPToolParam::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CNAPIGwMCPToolParam::GetDefault() const
{
    return m_default;
}

void CNAPIGwMCPToolParam::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

CNAPIGwMCPToolParam CNAPIGwMCPToolParam::GetItems() const
{
    return m_items;
}

void CNAPIGwMCPToolParam::SetItems(const CNAPIGwMCPToolParam& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

vector<CNAPIGwMCPToolParam> CNAPIGwMCPToolParam::GetProperties() const
{
    return m_properties;
}

void CNAPIGwMCPToolParam::SetProperties(const vector<CNAPIGwMCPToolParam>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string CNAPIGwMCPToolParam::GetBackendName() const
{
    return m_backendName;
}

void CNAPIGwMCPToolParam::SetBackendName(const string& _backendName)
{
    m_backendName = _backendName;
    m_backendNameHasBeenSet = true;
}

bool CNAPIGwMCPToolParam::BackendNameHasBeenSet() const
{
    return m_backendNameHasBeenSet;
}

