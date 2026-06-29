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

#include <tencentcloud/adp/v20260520/model/CamAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CamAuthConfig::CamAuthConfig() :
    m_roleNameHasBeenSet(false),
    m_keyLocationHasBeenSet(false),
    m_secretIdNameHasBeenSet(false),
    m_secretKeyNameHasBeenSet(false)
{
}

CoreInternalOutcome CamAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("KeyLocation") && !value["KeyLocation"].IsNull())
    {
        if (!value["KeyLocation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.KeyLocation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyLocation = value["KeyLocation"].GetInt64();
        m_keyLocationHasBeenSet = true;
    }

    if (value.HasMember("SecretIdName") && !value["SecretIdName"].IsNull())
    {
        if (!value["SecretIdName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.SecretIdName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretIdName = string(value["SecretIdName"].GetString());
        m_secretIdNameHasBeenSet = true;
    }

    if (value.HasMember("SecretKeyName") && !value["SecretKeyName"].IsNull())
    {
        if (!value["SecretKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.SecretKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKeyName = string(value["SecretKeyName"].GetString());
        m_secretKeyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CamAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyLocation, allocator);
    }

    if (m_secretIdNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretIdName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretIdName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKeyName.c_str(), allocator).Move(), allocator);
    }

}


string CamAuthConfig::GetRoleName() const
{
    return m_roleName;
}

void CamAuthConfig::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CamAuthConfig::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

int64_t CamAuthConfig::GetKeyLocation() const
{
    return m_keyLocation;
}

void CamAuthConfig::SetKeyLocation(const int64_t& _keyLocation)
{
    m_keyLocation = _keyLocation;
    m_keyLocationHasBeenSet = true;
}

bool CamAuthConfig::KeyLocationHasBeenSet() const
{
    return m_keyLocationHasBeenSet;
}

string CamAuthConfig::GetSecretIdName() const
{
    return m_secretIdName;
}

void CamAuthConfig::SetSecretIdName(const string& _secretIdName)
{
    m_secretIdName = _secretIdName;
    m_secretIdNameHasBeenSet = true;
}

bool CamAuthConfig::SecretIdNameHasBeenSet() const
{
    return m_secretIdNameHasBeenSet;
}

string CamAuthConfig::GetSecretKeyName() const
{
    return m_secretKeyName;
}

void CamAuthConfig::SetSecretKeyName(const string& _secretKeyName)
{
    m_secretKeyName = _secretKeyName;
    m_secretKeyNameHasBeenSet = true;
}

bool CamAuthConfig::SecretKeyNameHasBeenSet() const
{
    return m_secretKeyNameHasBeenSet;
}

