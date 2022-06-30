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

#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

UserInfo::UserInfo() :
    m_openIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_customUserIdHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_proxyIpHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("CustomUserId") && !value["CustomUserId"].IsNull())
    {
        if (!value["CustomUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.CustomUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customUserId = string(value["CustomUserId"].GetString());
        m_customUserIdHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ProxyIp") && !value["ProxyIp"].IsNull())
    {
        if (!value["ProxyIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.ProxyIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyIp = string(value["ProxyIp"].GetString());
        m_proxyIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_customUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyIp.c_str(), allocator).Move(), allocator);
    }

}


string UserInfo::GetOpenId() const
{
    return m_openId;
}

void UserInfo::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool UserInfo::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string UserInfo::GetChannel() const
{
    return m_channel;
}

void UserInfo::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool UserInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string UserInfo::GetCustomUserId() const
{
    return m_customUserId;
}

void UserInfo::SetCustomUserId(const string& _customUserId)
{
    m_customUserId = _customUserId;
    m_customUserIdHasBeenSet = true;
}

bool UserInfo::CustomUserIdHasBeenSet() const
{
    return m_customUserIdHasBeenSet;
}

string UserInfo::GetClientIp() const
{
    return m_clientIp;
}

void UserInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool UserInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string UserInfo::GetProxyIp() const
{
    return m_proxyIp;
}

void UserInfo::SetProxyIp(const string& _proxyIp)
{
    m_proxyIp = _proxyIp;
    m_proxyIpHasBeenSet = true;
}

bool UserInfo::ProxyIpHasBeenSet() const
{
    return m_proxyIpHasBeenSet;
}

