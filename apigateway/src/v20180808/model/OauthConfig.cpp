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

#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

OauthConfig::OauthConfig() :
    m_publicKeyHasBeenSet(false),
    m_tokenLocationHasBeenSet(false),
    m_loginRedirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome OauthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OauthConfig.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("TokenLocation") && !value["TokenLocation"].IsNull())
    {
        if (!value["TokenLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OauthConfig.TokenLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenLocation = string(value["TokenLocation"].GetString());
        m_tokenLocationHasBeenSet = true;
    }

    if (value.HasMember("LoginRedirectUrl") && !value["LoginRedirectUrl"].IsNull())
    {
        if (!value["LoginRedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OauthConfig.LoginRedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginRedirectUrl = string(value["LoginRedirectUrl"].GetString());
        m_loginRedirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OauthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_loginRedirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginRedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginRedirectUrl.c_str(), allocator).Move(), allocator);
    }

}


string OauthConfig::GetPublicKey() const
{
    return m_publicKey;
}

void OauthConfig::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool OauthConfig::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string OauthConfig::GetTokenLocation() const
{
    return m_tokenLocation;
}

void OauthConfig::SetTokenLocation(const string& _tokenLocation)
{
    m_tokenLocation = _tokenLocation;
    m_tokenLocationHasBeenSet = true;
}

bool OauthConfig::TokenLocationHasBeenSet() const
{
    return m_tokenLocationHasBeenSet;
}

string OauthConfig::GetLoginRedirectUrl() const
{
    return m_loginRedirectUrl;
}

void OauthConfig::SetLoginRedirectUrl(const string& _loginRedirectUrl)
{
    m_loginRedirectUrl = _loginRedirectUrl;
    m_loginRedirectUrlHasBeenSet = true;
}

bool OauthConfig::LoginRedirectUrlHasBeenSet() const
{
    return m_loginRedirectUrlHasBeenSet;
}

