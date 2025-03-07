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

#include <tencentcloud/es/v20180416/model/ServerlessIndexSettingsField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessIndexSettingsField::ServerlessIndexSettingsField() :
    m_numberOfShardsHasBeenSet(false),
    m_refreshIntervalHasBeenSet(false),
    m_customSettingHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessIndexSettingsField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NumberOfShards") && !value["NumberOfShards"].IsNull())
    {
        if (!value["NumberOfShards"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexSettingsField.NumberOfShards` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfShards = string(value["NumberOfShards"].GetString());
        m_numberOfShardsHasBeenSet = true;
    }

    if (value.HasMember("RefreshInterval") && !value["RefreshInterval"].IsNull())
    {
        if (!value["RefreshInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexSettingsField.RefreshInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refreshInterval = string(value["RefreshInterval"].GetString());
        m_refreshIntervalHasBeenSet = true;
    }

    if (value.HasMember("CustomSetting") && !value["CustomSetting"].IsNull())
    {
        if (!value["CustomSetting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexSettingsField.CustomSetting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customSetting = string(value["CustomSetting"].GetString());
        m_customSettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessIndexSettingsField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_numberOfShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfShards.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refreshInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_customSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customSetting.c_str(), allocator).Move(), allocator);
    }

}


string ServerlessIndexSettingsField::GetNumberOfShards() const
{
    return m_numberOfShards;
}

void ServerlessIndexSettingsField::SetNumberOfShards(const string& _numberOfShards)
{
    m_numberOfShards = _numberOfShards;
    m_numberOfShardsHasBeenSet = true;
}

bool ServerlessIndexSettingsField::NumberOfShardsHasBeenSet() const
{
    return m_numberOfShardsHasBeenSet;
}

string ServerlessIndexSettingsField::GetRefreshInterval() const
{
    return m_refreshInterval;
}

void ServerlessIndexSettingsField::SetRefreshInterval(const string& _refreshInterval)
{
    m_refreshInterval = _refreshInterval;
    m_refreshIntervalHasBeenSet = true;
}

bool ServerlessIndexSettingsField::RefreshIntervalHasBeenSet() const
{
    return m_refreshIntervalHasBeenSet;
}

string ServerlessIndexSettingsField::GetCustomSetting() const
{
    return m_customSetting;
}

void ServerlessIndexSettingsField::SetCustomSetting(const string& _customSetting)
{
    m_customSetting = _customSetting;
    m_customSettingHasBeenSet = true;
}

bool ServerlessIndexSettingsField::CustomSettingHasBeenSet() const
{
    return m_customSettingHasBeenSet;
}

