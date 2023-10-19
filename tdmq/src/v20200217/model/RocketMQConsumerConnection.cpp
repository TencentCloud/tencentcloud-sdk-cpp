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

#include <tencentcloud/tdmq/v20200217/model/RocketMQConsumerConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQConsumerConnection::RocketMQConsumerConnection() :
    m_clientIdHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_accumulativeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQConsumerConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerConnection.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerConnection.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerConnection.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Accumulative") && !value["Accumulative"].IsNull())
    {
        if (!value["Accumulative"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerConnection.Accumulative` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accumulative = value["Accumulative"].GetInt64();
        m_accumulativeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQConsumerConnection.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQConsumerConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accumulativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accumulative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accumulative, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQConsumerConnection::GetClientId() const
{
    return m_clientId;
}

void RocketMQConsumerConnection::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool RocketMQConsumerConnection::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string RocketMQConsumerConnection::GetClientAddr() const
{
    return m_clientAddr;
}

void RocketMQConsumerConnection::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool RocketMQConsumerConnection::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string RocketMQConsumerConnection::GetLanguage() const
{
    return m_language;
}

void RocketMQConsumerConnection::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool RocketMQConsumerConnection::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

int64_t RocketMQConsumerConnection::GetAccumulative() const
{
    return m_accumulative;
}

void RocketMQConsumerConnection::SetAccumulative(const int64_t& _accumulative)
{
    m_accumulative = _accumulative;
    m_accumulativeHasBeenSet = true;
}

bool RocketMQConsumerConnection::AccumulativeHasBeenSet() const
{
    return m_accumulativeHasBeenSet;
}

string RocketMQConsumerConnection::GetVersion() const
{
    return m_version;
}

void RocketMQConsumerConnection::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool RocketMQConsumerConnection::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

