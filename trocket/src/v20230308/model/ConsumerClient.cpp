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

#include <tencentcloud/trocket/v20230308/model/ConsumerClient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ConsumerClient::ConsumerClient() :
    m_clientIdHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_consumerLagHasBeenSet(false),
    m_channelProtocolHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerClient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLag") && !value["ConsumerLag"].IsNull())
    {
        if (!value["ConsumerLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.ConsumerLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLag = value["ConsumerLag"].GetInt64();
        m_consumerLagHasBeenSet = true;
    }

    if (value.HasMember("ChannelProtocol") && !value["ChannelProtocol"].IsNull())
    {
        if (!value["ChannelProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerClient.ChannelProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelProtocol = string(value["ChannelProtocol"].GetString());
        m_channelProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerClient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerLag, allocator);
    }

    if (m_channelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelProtocol.c_str(), allocator).Move(), allocator);
    }

}


string ConsumerClient::GetClientId() const
{
    return m_clientId;
}

void ConsumerClient::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ConsumerClient::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ConsumerClient::GetClientAddr() const
{
    return m_clientAddr;
}

void ConsumerClient::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool ConsumerClient::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string ConsumerClient::GetLanguage() const
{
    return m_language;
}

void ConsumerClient::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool ConsumerClient::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string ConsumerClient::GetVersion() const
{
    return m_version;
}

void ConsumerClient::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ConsumerClient::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t ConsumerClient::GetConsumerLag() const
{
    return m_consumerLag;
}

void ConsumerClient::SetConsumerLag(const int64_t& _consumerLag)
{
    m_consumerLag = _consumerLag;
    m_consumerLagHasBeenSet = true;
}

bool ConsumerClient::ConsumerLagHasBeenSet() const
{
    return m_consumerLagHasBeenSet;
}

string ConsumerClient::GetChannelProtocol() const
{
    return m_channelProtocol;
}

void ConsumerClient::SetChannelProtocol(const string& _channelProtocol)
{
    m_channelProtocol = _channelProtocol;
    m_channelProtocolHasBeenSet = true;
}

bool ConsumerClient::ChannelProtocolHasBeenSet() const
{
    return m_channelProtocolHasBeenSet;
}

