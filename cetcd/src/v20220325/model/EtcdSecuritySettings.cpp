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

#include <tencentcloud/cetcd/v20220325/model/EtcdSecuritySettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdSecuritySettings::EtcdSecuritySettings() :
    m_httpsHasBeenSet(false),
    m_clientCertAuthHasBeenSet(false)
{
}

CoreInternalOutcome EtcdSecuritySettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdSecuritySettings.Https` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_https = value["Https"].GetBool();
        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("ClientCertAuth") && !value["ClientCertAuth"].IsNull())
    {
        if (!value["ClientCertAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdSecuritySettings.ClientCertAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertAuth = value["ClientCertAuth"].GetBool();
        m_clientCertAuthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdSecuritySettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_https, allocator);
    }

    if (m_clientCertAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientCertAuth, allocator);
    }

}


bool EtcdSecuritySettings::GetHttps() const
{
    return m_https;
}

void EtcdSecuritySettings::SetHttps(const bool& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool EtcdSecuritySettings::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

bool EtcdSecuritySettings::GetClientCertAuth() const
{
    return m_clientCertAuth;
}

void EtcdSecuritySettings::SetClientCertAuth(const bool& _clientCertAuth)
{
    m_clientCertAuth = _clientCertAuth;
    m_clientCertAuthHasBeenSet = true;
}

bool EtcdSecuritySettings::ClientCertAuthHasBeenSet() const
{
    return m_clientCertAuthHasBeenSet;
}

