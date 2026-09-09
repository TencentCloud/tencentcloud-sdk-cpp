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

#include <tencentcloud/adp/v20260520/model/WechatClawBotChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WechatClawBotChannelConfig::WechatClawBotChannelConfig() :
    m_botIdHasBeenSet(false),
    m_botTokenHasBeenSet(false),
    m_qrcodeStatusHasBeenSet(false),
    m_qrcodeUrlHasBeenSet(false),
    m_wechatUserIdHasBeenSet(false)
{
}

CoreInternalOutcome WechatClawBotChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BotId") && !value["BotId"].IsNull())
    {
        if (!value["BotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatClawBotChannelConfig.BotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botId = string(value["BotId"].GetString());
        m_botIdHasBeenSet = true;
    }

    if (value.HasMember("BotToken") && !value["BotToken"].IsNull())
    {
        if (!value["BotToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatClawBotChannelConfig.BotToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botToken = string(value["BotToken"].GetString());
        m_botTokenHasBeenSet = true;
    }

    if (value.HasMember("QrcodeStatus") && !value["QrcodeStatus"].IsNull())
    {
        if (!value["QrcodeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatClawBotChannelConfig.QrcodeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrcodeStatus = string(value["QrcodeStatus"].GetString());
        m_qrcodeStatusHasBeenSet = true;
    }

    if (value.HasMember("QrcodeUrl") && !value["QrcodeUrl"].IsNull())
    {
        if (!value["QrcodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatClawBotChannelConfig.QrcodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrcodeUrl = string(value["QrcodeUrl"].GetString());
        m_qrcodeUrlHasBeenSet = true;
    }

    if (value.HasMember("WechatUserId") && !value["WechatUserId"].IsNull())
    {
        if (!value["WechatUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatClawBotChannelConfig.WechatUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatUserId = string(value["WechatUserId"].GetString());
        m_wechatUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatClawBotChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_botTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botToken.c_str(), allocator).Move(), allocator);
    }

    if (m_qrcodeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrcodeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrcodeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_qrcodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrcodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrcodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatUserId.c_str(), allocator).Move(), allocator);
    }

}


string WechatClawBotChannelConfig::GetBotId() const
{
    return m_botId;
}

void WechatClawBotChannelConfig::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool WechatClawBotChannelConfig::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string WechatClawBotChannelConfig::GetBotToken() const
{
    return m_botToken;
}

void WechatClawBotChannelConfig::SetBotToken(const string& _botToken)
{
    m_botToken = _botToken;
    m_botTokenHasBeenSet = true;
}

bool WechatClawBotChannelConfig::BotTokenHasBeenSet() const
{
    return m_botTokenHasBeenSet;
}

string WechatClawBotChannelConfig::GetQrcodeStatus() const
{
    return m_qrcodeStatus;
}

void WechatClawBotChannelConfig::SetQrcodeStatus(const string& _qrcodeStatus)
{
    m_qrcodeStatus = _qrcodeStatus;
    m_qrcodeStatusHasBeenSet = true;
}

bool WechatClawBotChannelConfig::QrcodeStatusHasBeenSet() const
{
    return m_qrcodeStatusHasBeenSet;
}

string WechatClawBotChannelConfig::GetQrcodeUrl() const
{
    return m_qrcodeUrl;
}

void WechatClawBotChannelConfig::SetQrcodeUrl(const string& _qrcodeUrl)
{
    m_qrcodeUrl = _qrcodeUrl;
    m_qrcodeUrlHasBeenSet = true;
}

bool WechatClawBotChannelConfig::QrcodeUrlHasBeenSet() const
{
    return m_qrcodeUrlHasBeenSet;
}

string WechatClawBotChannelConfig::GetWechatUserId() const
{
    return m_wechatUserId;
}

void WechatClawBotChannelConfig::SetWechatUserId(const string& _wechatUserId)
{
    m_wechatUserId = _wechatUserId;
    m_wechatUserIdHasBeenSet = true;
}

bool WechatClawBotChannelConfig::WechatUserIdHasBeenSet() const
{
    return m_wechatUserIdHasBeenSet;
}

