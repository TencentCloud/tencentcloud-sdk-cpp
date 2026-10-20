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

#include <tencentcloud/ioa/v20220601/model/DeliveryStrategyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeliveryStrategyItem::DeliveryStrategyItem() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_logTypesHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_configIdHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryStrategyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LogTypes") && !value["LogTypes"].IsNull())
    {
        if (!value["LogTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.LogTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["LogTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logTypes.push_back((*itr).GetString());
        }
        m_logTypesHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryStrategyItem.ConfigId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configId = value["ConfigId"].GetUint64();
        m_configIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryStrategyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_logTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logTypes.begin(); itr != m_logTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configId, allocator);
    }

}


string DeliveryStrategyItem::GetName() const
{
    return m_name;
}

void DeliveryStrategyItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeliveryStrategyItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DeliveryStrategyItem::GetType() const
{
    return m_type;
}

void DeliveryStrategyItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeliveryStrategyItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DeliveryStrategyItem::GetLogTypes() const
{
    return m_logTypes;
}

void DeliveryStrategyItem::SetLogTypes(const vector<string>& _logTypes)
{
    m_logTypes = _logTypes;
    m_logTypesHasBeenSet = true;
}

bool DeliveryStrategyItem::LogTypesHasBeenSet() const
{
    return m_logTypesHasBeenSet;
}

string DeliveryStrategyItem::GetConfigName() const
{
    return m_configName;
}

void DeliveryStrategyItem::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool DeliveryStrategyItem::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string DeliveryStrategyItem::GetDescription() const
{
    return m_description;
}

void DeliveryStrategyItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeliveryStrategyItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DeliveryStrategyItem::GetID() const
{
    return m_iD;
}

void DeliveryStrategyItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DeliveryStrategyItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t DeliveryStrategyItem::GetConfigId() const
{
    return m_configId;
}

void DeliveryStrategyItem::SetConfigId(const uint64_t& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool DeliveryStrategyItem::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

