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

#include <tencentcloud/adp/v20260520/model/WechatChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WechatChannelConfig::WechatChannelConfig() :
    m_qrcodeUrlHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatRefreshTokenHasBeenSet(false)
{
}

CoreInternalOutcome WechatChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QrcodeUrl") && !value["QrcodeUrl"].IsNull())
    {
        if (!value["QrcodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatChannelConfig.QrcodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrcodeUrl = string(value["QrcodeUrl"].GetString());
        m_qrcodeUrlHasBeenSet = true;
    }

    if (value.HasMember("WechatAppId") && !value["WechatAppId"].IsNull())
    {
        if (!value["WechatAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatChannelConfig.WechatAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatAppId = string(value["WechatAppId"].GetString());
        m_wechatAppIdHasBeenSet = true;
    }

    if (value.HasMember("WechatRefreshToken") && !value["WechatRefreshToken"].IsNull())
    {
        if (!value["WechatRefreshToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatChannelConfig.WechatRefreshToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatRefreshToken = string(value["WechatRefreshToken"].GetString());
        m_wechatRefreshTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qrcodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrcodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrcodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatRefreshTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatRefreshToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatRefreshToken.c_str(), allocator).Move(), allocator);
    }

}


string WechatChannelConfig::GetQrcodeUrl() const
{
    return m_qrcodeUrl;
}

void WechatChannelConfig::SetQrcodeUrl(const string& _qrcodeUrl)
{
    m_qrcodeUrl = _qrcodeUrl;
    m_qrcodeUrlHasBeenSet = true;
}

bool WechatChannelConfig::QrcodeUrlHasBeenSet() const
{
    return m_qrcodeUrlHasBeenSet;
}

string WechatChannelConfig::GetWechatAppId() const
{
    return m_wechatAppId;
}

void WechatChannelConfig::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool WechatChannelConfig::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string WechatChannelConfig::GetWechatRefreshToken() const
{
    return m_wechatRefreshToken;
}

void WechatChannelConfig::SetWechatRefreshToken(const string& _wechatRefreshToken)
{
    m_wechatRefreshToken = _wechatRefreshToken;
    m_wechatRefreshTokenHasBeenSet = true;
}

bool WechatChannelConfig::WechatRefreshTokenHasBeenSet() const
{
    return m_wechatRefreshTokenHasBeenSet;
}

