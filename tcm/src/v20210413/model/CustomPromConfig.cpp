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

#include <tencentcloud/tcm/v20210413/model/CustomPromConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

CustomPromConfig::CustomPromConfig() :
    m_urlHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_isPublicAddrHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome CustomPromConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("IsPublicAddr") && !value["IsPublicAddr"].IsNull())
    {
        if (!value["IsPublicAddr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.IsPublicAddr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublicAddr = value["IsPublicAddr"].GetBool();
        m_isPublicAddrHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPromConfig.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomPromConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublicAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublicAddr, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string CustomPromConfig::GetUrl() const
{
    return m_url;
}

void CustomPromConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CustomPromConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CustomPromConfig::GetAuthType() const
{
    return m_authType;
}

void CustomPromConfig::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CustomPromConfig::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

bool CustomPromConfig::GetIsPublicAddr() const
{
    return m_isPublicAddr;
}

void CustomPromConfig::SetIsPublicAddr(const bool& _isPublicAddr)
{
    m_isPublicAddr = _isPublicAddr;
    m_isPublicAddrHasBeenSet = true;
}

bool CustomPromConfig::IsPublicAddrHasBeenSet() const
{
    return m_isPublicAddrHasBeenSet;
}

string CustomPromConfig::GetVpcId() const
{
    return m_vpcId;
}

void CustomPromConfig::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CustomPromConfig::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CustomPromConfig::GetUsername() const
{
    return m_username;
}

void CustomPromConfig::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CustomPromConfig::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CustomPromConfig::GetPassword() const
{
    return m_password;
}

void CustomPromConfig::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CustomPromConfig::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

