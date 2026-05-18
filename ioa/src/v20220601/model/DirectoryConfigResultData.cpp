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

#include <tencentcloud/ioa/v20220601/model/DirectoryConfigResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DirectoryConfigResultData::DirectoryConfigResultData() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_identifySourceIdHasBeenSet(false),
    m_createAuthConfigHasBeenSet(false),
    m_authSourceIdHasBeenSet(false),
    m_authConfigIdHasBeenSet(false),
    m_authPolicyIdHasBeenSet(false),
    m_authSupportPlatformsHasBeenSet(false),
    m_authMethodsHasBeenSet(false)
{
}

CoreInternalOutcome DirectoryConfigResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdentifySourceId") && !value["IdentifySourceId"].IsNull())
    {
        if (!value["IdentifySourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.IdentifySourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifySourceId = string(value["IdentifySourceId"].GetString());
        m_identifySourceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateAuthConfig") && !value["CreateAuthConfig"].IsNull())
    {
        if (!value["CreateAuthConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.CreateAuthConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_createAuthConfig = value["CreateAuthConfig"].GetBool();
        m_createAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("AuthSourceId") && !value["AuthSourceId"].IsNull())
    {
        if (!value["AuthSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.AuthSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSourceId = string(value["AuthSourceId"].GetString());
        m_authSourceIdHasBeenSet = true;
    }

    if (value.HasMember("AuthConfigId") && !value["AuthConfigId"].IsNull())
    {
        if (!value["AuthConfigId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.AuthConfigId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authConfigId = value["AuthConfigId"].GetInt64();
        m_authConfigIdHasBeenSet = true;
    }

    if (value.HasMember("AuthPolicyId") && !value["AuthPolicyId"].IsNull())
    {
        if (!value["AuthPolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.AuthPolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authPolicyId = value["AuthPolicyId"].GetInt64();
        m_authPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("AuthSupportPlatforms") && !value["AuthSupportPlatforms"].IsNull())
    {
        if (!value["AuthSupportPlatforms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.AuthSupportPlatforms` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthSupportPlatforms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authSupportPlatforms.push_back((*itr).GetString());
        }
        m_authSupportPlatformsHasBeenSet = true;
    }

    if (value.HasMember("AuthMethods") && !value["AuthMethods"].IsNull())
    {
        if (!value["AuthMethods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigResultData.AuthMethods` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthMethods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authMethods.push_back((*itr).GetString());
        }
        m_authMethodsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectoryConfigResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_identifySourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifySourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifySourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAuthConfig, allocator);
    }

    if (m_authSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_authConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authConfigId, allocator);
    }

    if (m_authPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authPolicyId, allocator);
    }

    if (m_authSupportPlatformsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSupportPlatforms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authSupportPlatforms.begin(); itr != m_authSupportPlatforms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authMethodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMethods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authMethods.begin(); itr != m_authMethods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t DirectoryConfigResultData::GetId() const
{
    return m_id;
}

void DirectoryConfigResultData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DirectoryConfigResultData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DirectoryConfigResultData::GetName() const
{
    return m_name;
}

void DirectoryConfigResultData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DirectoryConfigResultData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DirectoryConfigResultData::GetIdentifySourceId() const
{
    return m_identifySourceId;
}

void DirectoryConfigResultData::SetIdentifySourceId(const string& _identifySourceId)
{
    m_identifySourceId = _identifySourceId;
    m_identifySourceIdHasBeenSet = true;
}

bool DirectoryConfigResultData::IdentifySourceIdHasBeenSet() const
{
    return m_identifySourceIdHasBeenSet;
}

bool DirectoryConfigResultData::GetCreateAuthConfig() const
{
    return m_createAuthConfig;
}

void DirectoryConfigResultData::SetCreateAuthConfig(const bool& _createAuthConfig)
{
    m_createAuthConfig = _createAuthConfig;
    m_createAuthConfigHasBeenSet = true;
}

bool DirectoryConfigResultData::CreateAuthConfigHasBeenSet() const
{
    return m_createAuthConfigHasBeenSet;
}

string DirectoryConfigResultData::GetAuthSourceId() const
{
    return m_authSourceId;
}

void DirectoryConfigResultData::SetAuthSourceId(const string& _authSourceId)
{
    m_authSourceId = _authSourceId;
    m_authSourceIdHasBeenSet = true;
}

bool DirectoryConfigResultData::AuthSourceIdHasBeenSet() const
{
    return m_authSourceIdHasBeenSet;
}

int64_t DirectoryConfigResultData::GetAuthConfigId() const
{
    return m_authConfigId;
}

void DirectoryConfigResultData::SetAuthConfigId(const int64_t& _authConfigId)
{
    m_authConfigId = _authConfigId;
    m_authConfigIdHasBeenSet = true;
}

bool DirectoryConfigResultData::AuthConfigIdHasBeenSet() const
{
    return m_authConfigIdHasBeenSet;
}

int64_t DirectoryConfigResultData::GetAuthPolicyId() const
{
    return m_authPolicyId;
}

void DirectoryConfigResultData::SetAuthPolicyId(const int64_t& _authPolicyId)
{
    m_authPolicyId = _authPolicyId;
    m_authPolicyIdHasBeenSet = true;
}

bool DirectoryConfigResultData::AuthPolicyIdHasBeenSet() const
{
    return m_authPolicyIdHasBeenSet;
}

vector<string> DirectoryConfigResultData::GetAuthSupportPlatforms() const
{
    return m_authSupportPlatforms;
}

void DirectoryConfigResultData::SetAuthSupportPlatforms(const vector<string>& _authSupportPlatforms)
{
    m_authSupportPlatforms = _authSupportPlatforms;
    m_authSupportPlatformsHasBeenSet = true;
}

bool DirectoryConfigResultData::AuthSupportPlatformsHasBeenSet() const
{
    return m_authSupportPlatformsHasBeenSet;
}

vector<string> DirectoryConfigResultData::GetAuthMethods() const
{
    return m_authMethods;
}

void DirectoryConfigResultData::SetAuthMethods(const vector<string>& _authMethods)
{
    m_authMethods = _authMethods;
    m_authMethodsHasBeenSet = true;
}

bool DirectoryConfigResultData::AuthMethodsHasBeenSet() const
{
    return m_authMethodsHasBeenSet;
}

