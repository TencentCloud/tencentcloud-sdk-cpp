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

#include <tencentcloud/clb/v20180317/model/ConfigListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ConfigListItem::ConfigListItem() :
    m_uconfigIdHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false)
{
}

CoreInternalOutcome ConfigListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UconfigId") && !value["UconfigId"].IsNull())
    {
        if (!value["UconfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.UconfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uconfigId = string(value["UconfigId"].GetString());
        m_uconfigIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configType = string(value["ConfigType"].GetString());
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigContent") && !value["ConfigContent"].IsNull())
    {
        if (!value["ConfigContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.ConfigContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configContent = string(value["ConfigContent"].GetString());
        m_configContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTimestamp") && !value["CreateTimestamp"].IsNull())
    {
        if (!value["CreateTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.CreateTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimestamp = string(value["CreateTimestamp"].GetString());
        m_createTimestampHasBeenSet = true;
    }

    if (value.HasMember("UpdateTimestamp") && !value["UpdateTimestamp"].IsNull())
    {
        if (!value["UpdateTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigListItem.UpdateTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTimestamp = string(value["UpdateTimestamp"].GetString());
        m_updateTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uconfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uconfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string ConfigListItem::GetUconfigId() const
{
    return m_uconfigId;
}

void ConfigListItem::SetUconfigId(const string& _uconfigId)
{
    m_uconfigId = _uconfigId;
    m_uconfigIdHasBeenSet = true;
}

bool ConfigListItem::UconfigIdHasBeenSet() const
{
    return m_uconfigIdHasBeenSet;
}

string ConfigListItem::GetConfigType() const
{
    return m_configType;
}

void ConfigListItem::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool ConfigListItem::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string ConfigListItem::GetConfigName() const
{
    return m_configName;
}

void ConfigListItem::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ConfigListItem::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string ConfigListItem::GetConfigContent() const
{
    return m_configContent;
}

void ConfigListItem::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool ConfigListItem::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

string ConfigListItem::GetCreateTimestamp() const
{
    return m_createTimestamp;
}

void ConfigListItem::SetCreateTimestamp(const string& _createTimestamp)
{
    m_createTimestamp = _createTimestamp;
    m_createTimestampHasBeenSet = true;
}

bool ConfigListItem::CreateTimestampHasBeenSet() const
{
    return m_createTimestampHasBeenSet;
}

string ConfigListItem::GetUpdateTimestamp() const
{
    return m_updateTimestamp;
}

void ConfigListItem::SetUpdateTimestamp(const string& _updateTimestamp)
{
    m_updateTimestamp = _updateTimestamp;
    m_updateTimestampHasBeenSet = true;
}

bool ConfigListItem::UpdateTimestampHasBeenSet() const
{
    return m_updateTimestampHasBeenSet;
}

