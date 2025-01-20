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

#include <tencentcloud/vpc/v20170312/model/SslClientConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SslClientConfig::SslClientConfig() :
    m_sslVpnClientConfigurationHasBeenSet(false),
    m_sslVpnRootCertHasBeenSet(false),
    m_sslVpnKeyHasBeenSet(false),
    m_sslVpnCertHasBeenSet(false),
    m_sslVpnClientIdHasBeenSet(false)
{
}

CoreInternalOutcome SslClientConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SslVpnClientConfiguration") && !value["SslVpnClientConfiguration"].IsNull())
    {
        if (!value["SslVpnClientConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfig.SslVpnClientConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnClientConfiguration = string(value["SslVpnClientConfiguration"].GetString());
        m_sslVpnClientConfigurationHasBeenSet = true;
    }

    if (value.HasMember("SslVpnRootCert") && !value["SslVpnRootCert"].IsNull())
    {
        if (!value["SslVpnRootCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfig.SslVpnRootCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnRootCert = string(value["SslVpnRootCert"].GetString());
        m_sslVpnRootCertHasBeenSet = true;
    }

    if (value.HasMember("SslVpnKey") && !value["SslVpnKey"].IsNull())
    {
        if (!value["SslVpnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfig.SslVpnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnKey = string(value["SslVpnKey"].GetString());
        m_sslVpnKeyHasBeenSet = true;
    }

    if (value.HasMember("SslVpnCert") && !value["SslVpnCert"].IsNull())
    {
        if (!value["SslVpnCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfig.SslVpnCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnCert = string(value["SslVpnCert"].GetString());
        m_sslVpnCertHasBeenSet = true;
    }

    if (value.HasMember("SslVpnClientId") && !value["SslVpnClientId"].IsNull())
    {
        if (!value["SslVpnClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslClientConfig.SslVpnClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnClientId = string(value["SslVpnClientId"].GetString());
        m_sslVpnClientIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SslClientConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sslVpnClientConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnClientConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnRootCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnRootCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnRootCert.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnCert.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnClientId.c_str(), allocator).Move(), allocator);
    }

}


string SslClientConfig::GetSslVpnClientConfiguration() const
{
    return m_sslVpnClientConfiguration;
}

void SslClientConfig::SetSslVpnClientConfiguration(const string& _sslVpnClientConfiguration)
{
    m_sslVpnClientConfiguration = _sslVpnClientConfiguration;
    m_sslVpnClientConfigurationHasBeenSet = true;
}

bool SslClientConfig::SslVpnClientConfigurationHasBeenSet() const
{
    return m_sslVpnClientConfigurationHasBeenSet;
}

string SslClientConfig::GetSslVpnRootCert() const
{
    return m_sslVpnRootCert;
}

void SslClientConfig::SetSslVpnRootCert(const string& _sslVpnRootCert)
{
    m_sslVpnRootCert = _sslVpnRootCert;
    m_sslVpnRootCertHasBeenSet = true;
}

bool SslClientConfig::SslVpnRootCertHasBeenSet() const
{
    return m_sslVpnRootCertHasBeenSet;
}

string SslClientConfig::GetSslVpnKey() const
{
    return m_sslVpnKey;
}

void SslClientConfig::SetSslVpnKey(const string& _sslVpnKey)
{
    m_sslVpnKey = _sslVpnKey;
    m_sslVpnKeyHasBeenSet = true;
}

bool SslClientConfig::SslVpnKeyHasBeenSet() const
{
    return m_sslVpnKeyHasBeenSet;
}

string SslClientConfig::GetSslVpnCert() const
{
    return m_sslVpnCert;
}

void SslClientConfig::SetSslVpnCert(const string& _sslVpnCert)
{
    m_sslVpnCert = _sslVpnCert;
    m_sslVpnCertHasBeenSet = true;
}

bool SslClientConfig::SslVpnCertHasBeenSet() const
{
    return m_sslVpnCertHasBeenSet;
}

string SslClientConfig::GetSslVpnClientId() const
{
    return m_sslVpnClientId;
}

void SslClientConfig::SetSslVpnClientId(const string& _sslVpnClientId)
{
    m_sslVpnClientId = _sslVpnClientId;
    m_sslVpnClientIdHasBeenSet = true;
}

bool SslClientConfig::SslVpnClientIdHasBeenSet() const
{
    return m_sslVpnClientIdHasBeenSet;
}

