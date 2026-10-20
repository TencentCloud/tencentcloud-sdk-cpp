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

#include <tencentcloud/ioa/v20220601/model/ModifyDeliveryStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyDeliveryStrategyRequest::ModifyDeliveryStrategyRequest() :
    m_nameHasBeenSet(false),
    m_logTypesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string ModifyDeliveryStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logTypes.begin(); itr != m_logTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDeliveryStrategyRequest::GetName() const
{
    return m_name;
}

void ModifyDeliveryStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyDeliveryStrategyRequest::GetLogTypes() const
{
    return m_logTypes;
}

void ModifyDeliveryStrategyRequest::SetLogTypes(const vector<string>& _logTypes)
{
    m_logTypes = _logTypes;
    m_logTypesHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::LogTypesHasBeenSet() const
{
    return m_logTypesHasBeenSet;
}

int64_t ModifyDeliveryStrategyRequest::GetType() const
{
    return m_type;
}

void ModifyDeliveryStrategyRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyDeliveryStrategyRequest::GetConfigId() const
{
    return m_configId;
}

void ModifyDeliveryStrategyRequest::SetConfigId(const int64_t& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ModifyDeliveryStrategyRequest::GetDescription() const
{
    return m_description;
}

void ModifyDeliveryStrategyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyDeliveryStrategyRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyDeliveryStrategyRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t ModifyDeliveryStrategyRequest::GetID() const
{
    return m_iD;
}

void ModifyDeliveryStrategyRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyDeliveryStrategyRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


