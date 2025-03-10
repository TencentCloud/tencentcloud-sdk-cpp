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

#include <tencentcloud/controlcenter/v20230110/model/BaselineInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

BaselineInfoItem::BaselineInfoItem() :
    m_identifierHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_applyCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfoItem.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Configuration") && !value["Configuration"].IsNull())
    {
        if (!value["Configuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfoItem.Configuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuration = string(value["Configuration"].GetString());
        m_configurationHasBeenSet = true;
    }

    if (value.HasMember("ApplyCount") && !value["ApplyCount"].IsNull())
    {
        if (!value["ApplyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfoItem.ApplyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyCount = value["ApplyCount"].GetInt64();
        m_applyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_applyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyCount, allocator);
    }

}


string BaselineInfoItem::GetIdentifier() const
{
    return m_identifier;
}

void BaselineInfoItem::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool BaselineInfoItem::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string BaselineInfoItem::GetConfiguration() const
{
    return m_configuration;
}

void BaselineInfoItem::SetConfiguration(const string& _configuration)
{
    m_configuration = _configuration;
    m_configurationHasBeenSet = true;
}

bool BaselineInfoItem::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

int64_t BaselineInfoItem::GetApplyCount() const
{
    return m_applyCount;
}

void BaselineInfoItem::SetApplyCount(const int64_t& _applyCount)
{
    m_applyCount = _applyCount;
    m_applyCountHasBeenSet = true;
}

bool BaselineInfoItem::ApplyCountHasBeenSet() const
{
    return m_applyCountHasBeenSet;
}

