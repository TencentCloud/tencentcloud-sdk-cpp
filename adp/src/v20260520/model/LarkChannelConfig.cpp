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

#include <tencentcloud/adp/v20260520/model/LarkChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LarkChannelConfig::LarkChannelConfig() :
    m_appIdHasBeenSet(false),
    m_appSecretHasBeenSet(false)
{
}

CoreInternalOutcome LarkChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LarkChannelConfig.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppSecret") && !value["AppSecret"].IsNull())
    {
        if (!value["AppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LarkChannelConfig.AppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSecret = string(value["AppSecret"].GetString());
        m_appSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LarkChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSecret.c_str(), allocator).Move(), allocator);
    }

}


string LarkChannelConfig::GetAppId() const
{
    return m_appId;
}

void LarkChannelConfig::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LarkChannelConfig::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LarkChannelConfig::GetAppSecret() const
{
    return m_appSecret;
}

void LarkChannelConfig::SetAppSecret(const string& _appSecret)
{
    m_appSecret = _appSecret;
    m_appSecretHasBeenSet = true;
}

bool LarkChannelConfig::AppSecretHasBeenSet() const
{
    return m_appSecretHasBeenSet;
}

