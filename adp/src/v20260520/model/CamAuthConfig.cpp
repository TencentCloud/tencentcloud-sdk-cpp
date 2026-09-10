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
    m_secretKeyNameHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_supportRoleAuthHasBeenSet(false)
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

    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.ParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessKeyParamConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramList.push_back(item);
        }
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("SupportRoleAuth") && !value["SupportRoleAuth"].IsNull())
    {
        if (!value["SupportRoleAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CamAuthConfig.SupportRoleAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportRoleAuth = value["SupportRoleAuth"].GetBool();
        m_supportRoleAuthHasBeenSet = true;
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

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportRoleAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportRoleAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportRoleAuth, allocator);
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

vector<AccessKeyParamConfig> CamAuthConfig::GetParamList() const
{
    return m_paramList;
}

void CamAuthConfig::SetParamList(const vector<AccessKeyParamConfig>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CamAuthConfig::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

bool CamAuthConfig::GetSupportRoleAuth() const
{
    return m_supportRoleAuth;
}

void CamAuthConfig::SetSupportRoleAuth(const bool& _supportRoleAuth)
{
    m_supportRoleAuth = _supportRoleAuth;
    m_supportRoleAuthHasBeenSet = true;
}

bool CamAuthConfig::SupportRoleAuthHasBeenSet() const
{
    return m_supportRoleAuthHasBeenSet;
}

