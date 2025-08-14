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

#include <tencentcloud/trocket/v20230308/model/ProducerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ProducerInfo::ProducerInfo() :
    m_clientIdHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_channelProtocolHasBeenSet(false)
{
}

CoreInternalOutcome ProducerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTimestamp") && !value["LastUpdateTimestamp"].IsNull())
    {
        if (!value["LastUpdateTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.LastUpdateTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTimestamp = value["LastUpdateTimestamp"].GetUint64();
        m_lastUpdateTimestampHasBeenSet = true;
    }

    if (value.HasMember("ChannelProtocol") && !value["ChannelProtocol"].IsNull())
    {
        if (!value["ChannelProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerInfo.ChannelProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelProtocol = string(value["ChannelProtocol"].GetString());
        m_channelProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProducerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
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

    if (m_lastUpdateTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTimestamp, allocator);
    }

    if (m_channelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelProtocol.c_str(), allocator).Move(), allocator);
    }

}


string ProducerInfo::GetClientId() const
{
    return m_clientId;
}

void ProducerInfo::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ProducerInfo::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ProducerInfo::GetClientIp() const
{
    return m_clientIp;
}

void ProducerInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool ProducerInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string ProducerInfo::GetLanguage() const
{
    return m_language;
}

void ProducerInfo::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool ProducerInfo::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string ProducerInfo::GetVersion() const
{
    return m_version;
}

void ProducerInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProducerInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t ProducerInfo::GetLastUpdateTimestamp() const
{
    return m_lastUpdateTimestamp;
}

void ProducerInfo::SetLastUpdateTimestamp(const uint64_t& _lastUpdateTimestamp)
{
    m_lastUpdateTimestamp = _lastUpdateTimestamp;
    m_lastUpdateTimestampHasBeenSet = true;
}

bool ProducerInfo::LastUpdateTimestampHasBeenSet() const
{
    return m_lastUpdateTimestampHasBeenSet;
}

string ProducerInfo::GetChannelProtocol() const
{
    return m_channelProtocol;
}

void ProducerInfo::SetChannelProtocol(const string& _channelProtocol)
{
    m_channelProtocol = _channelProtocol;
    m_channelProtocolHasBeenSet = true;
}

bool ProducerInfo::ChannelProtocolHasBeenSet() const
{
    return m_channelProtocolHasBeenSet;
}

