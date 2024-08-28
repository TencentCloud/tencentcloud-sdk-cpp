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

#include <tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

BaselineConfigItem::BaselineConfigItem() :
    m_identifierHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

CoreInternalOutcome BaselineConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineConfigItem.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Configuration") && !value["Configuration"].IsNull())
    {
        if (!value["Configuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineConfigItem.Configuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuration = string(value["Configuration"].GetString());
        m_configurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configuration.c_str(), allocator).Move(), allocator);
    }

}


string BaselineConfigItem::GetIdentifier() const
{
    return m_identifier;
}

void BaselineConfigItem::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool BaselineConfigItem::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string BaselineConfigItem::GetConfiguration() const
{
    return m_configuration;
}

void BaselineConfigItem::SetConfiguration(const string& _configuration)
{
    m_configuration = _configuration;
    m_configurationHasBeenSet = true;
}

bool BaselineConfigItem::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

