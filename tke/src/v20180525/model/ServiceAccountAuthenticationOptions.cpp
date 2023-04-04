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

#include <tencentcloud/tke/v20180525/model/ServiceAccountAuthenticationOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ServiceAccountAuthenticationOptions::ServiceAccountAuthenticationOptions() :
    m_useTKEDefaultHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_jWKSURIHasBeenSet(false),
    m_autoCreateDiscoveryAnonymousAuthHasBeenSet(false)
{
}

CoreInternalOutcome ServiceAccountAuthenticationOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UseTKEDefault") && !value["UseTKEDefault"].IsNull())
    {
        if (!value["UseTKEDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccountAuthenticationOptions.UseTKEDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useTKEDefault = value["UseTKEDefault"].GetBool();
        m_useTKEDefaultHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccountAuthenticationOptions.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("JWKSURI") && !value["JWKSURI"].IsNull())
    {
        if (!value["JWKSURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccountAuthenticationOptions.JWKSURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jWKSURI = string(value["JWKSURI"].GetString());
        m_jWKSURIHasBeenSet = true;
    }

    if (value.HasMember("AutoCreateDiscoveryAnonymousAuth") && !value["AutoCreateDiscoveryAnonymousAuth"].IsNull())
    {
        if (!value["AutoCreateDiscoveryAnonymousAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceAccountAuthenticationOptions.AutoCreateDiscoveryAnonymousAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoCreateDiscoveryAnonymousAuth = value["AutoCreateDiscoveryAnonymousAuth"].GetBool();
        m_autoCreateDiscoveryAnonymousAuthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceAccountAuthenticationOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_useTKEDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseTKEDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useTKEDefault, allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_jWKSURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWKSURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jWKSURI.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCreateDiscoveryAnonymousAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateDiscoveryAnonymousAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCreateDiscoveryAnonymousAuth, allocator);
    }

}


bool ServiceAccountAuthenticationOptions::GetUseTKEDefault() const
{
    return m_useTKEDefault;
}

void ServiceAccountAuthenticationOptions::SetUseTKEDefault(const bool& _useTKEDefault)
{
    m_useTKEDefault = _useTKEDefault;
    m_useTKEDefaultHasBeenSet = true;
}

bool ServiceAccountAuthenticationOptions::UseTKEDefaultHasBeenSet() const
{
    return m_useTKEDefaultHasBeenSet;
}

string ServiceAccountAuthenticationOptions::GetIssuer() const
{
    return m_issuer;
}

void ServiceAccountAuthenticationOptions::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool ServiceAccountAuthenticationOptions::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string ServiceAccountAuthenticationOptions::GetJWKSURI() const
{
    return m_jWKSURI;
}

void ServiceAccountAuthenticationOptions::SetJWKSURI(const string& _jWKSURI)
{
    m_jWKSURI = _jWKSURI;
    m_jWKSURIHasBeenSet = true;
}

bool ServiceAccountAuthenticationOptions::JWKSURIHasBeenSet() const
{
    return m_jWKSURIHasBeenSet;
}

bool ServiceAccountAuthenticationOptions::GetAutoCreateDiscoveryAnonymousAuth() const
{
    return m_autoCreateDiscoveryAnonymousAuth;
}

void ServiceAccountAuthenticationOptions::SetAutoCreateDiscoveryAnonymousAuth(const bool& _autoCreateDiscoveryAnonymousAuth)
{
    m_autoCreateDiscoveryAnonymousAuth = _autoCreateDiscoveryAnonymousAuth;
    m_autoCreateDiscoveryAnonymousAuthHasBeenSet = true;
}

bool ServiceAccountAuthenticationOptions::AutoCreateDiscoveryAnonymousAuthHasBeenSet() const
{
    return m_autoCreateDiscoveryAnonymousAuthHasBeenSet;
}

