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

#include <tencentcloud/adp/v20260520/model/DingTalkChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DingTalkChannelConfig::DingTalkChannelConfig() :
    m_appKeyHasBeenSet(false),
    m_appSecretHasBeenSet(false)
{
}

CoreInternalOutcome DingTalkChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DingTalkChannelConfig.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("AppSecret") && !value["AppSecret"].IsNull())
    {
        if (!value["AppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DingTalkChannelConfig.AppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSecret = string(value["AppSecret"].GetString());
        m_appSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DingTalkChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSecret.c_str(), allocator).Move(), allocator);
    }

}


string DingTalkChannelConfig::GetAppKey() const
{
    return m_appKey;
}

void DingTalkChannelConfig::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool DingTalkChannelConfig::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string DingTalkChannelConfig::GetAppSecret() const
{
    return m_appSecret;
}

void DingTalkChannelConfig::SetAppSecret(const string& _appSecret)
{
    m_appSecret = _appSecret;
    m_appSecretHasBeenSet = true;
}

bool DingTalkChannelConfig::AppSecretHasBeenSet() const
{
    return m_appSecretHasBeenSet;
}

