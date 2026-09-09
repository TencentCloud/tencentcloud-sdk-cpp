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

#include <tencentcloud/adp/v20260520/model/LineChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LineChannelConfig::LineChannelConfig() :
    m_accessTokenHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_channelSecretHasBeenSet(false)
{
}

CoreInternalOutcome LineChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineChannelConfig.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineChannelConfig.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("ChannelSecret") && !value["ChannelSecret"].IsNull())
    {
        if (!value["ChannelSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineChannelConfig.ChannelSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSecret = string(value["ChannelSecret"].GetString());
        m_channelSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSecret.c_str(), allocator).Move(), allocator);
    }

}


string LineChannelConfig::GetAccessToken() const
{
    return m_accessToken;
}

void LineChannelConfig::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool LineChannelConfig::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string LineChannelConfig::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void LineChannelConfig::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool LineChannelConfig::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string LineChannelConfig::GetChannelSecret() const
{
    return m_channelSecret;
}

void LineChannelConfig::SetChannelSecret(const string& _channelSecret)
{
    m_channelSecret = _channelSecret;
    m_channelSecretHasBeenSet = true;
}

bool LineChannelConfig::ChannelSecretHasBeenSet() const
{
    return m_channelSecretHasBeenSet;
}

