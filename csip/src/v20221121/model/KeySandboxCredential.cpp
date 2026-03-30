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

#include <tencentcloud/csip/v20221121/model/KeySandboxCredential.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

KeySandboxCredential::KeySandboxCredential() :
    m_credentialIdHasBeenSet(false),
    m_credentialNameHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_credentialEffectScopeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome KeySandboxCredential::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CredentialId") && !value["CredentialId"].IsNull())
    {
        if (!value["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(value["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (value.HasMember("CredentialName") && !value["CredentialName"].IsNull())
    {
        if (!value["CredentialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.CredentialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialName = string(value["CredentialName"].GetString());
        m_credentialNameHasBeenSet = true;
    }

    if (value.HasMember("CredentialType") && !value["CredentialType"].IsNull())
    {
        if (!value["CredentialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.CredentialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialType = string(value["CredentialType"].GetString());
        m_credentialTypeHasBeenSet = true;
    }

    if (value.HasMember("CredentialEffectScope") && !value["CredentialEffectScope"].IsNull())
    {
        if (!value["CredentialEffectScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.CredentialEffectScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credentialEffectScope.Deserialize(value["CredentialEffectScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialEffectScopeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeySandboxCredential.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeySandboxCredential::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialName.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialType.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialEffectScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialEffectScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentialEffectScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string KeySandboxCredential::GetCredentialId() const
{
    return m_credentialId;
}

void KeySandboxCredential::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool KeySandboxCredential::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

string KeySandboxCredential::GetCredentialName() const
{
    return m_credentialName;
}

void KeySandboxCredential::SetCredentialName(const string& _credentialName)
{
    m_credentialName = _credentialName;
    m_credentialNameHasBeenSet = true;
}

bool KeySandboxCredential::CredentialNameHasBeenSet() const
{
    return m_credentialNameHasBeenSet;
}

string KeySandboxCredential::GetCredentialType() const
{
    return m_credentialType;
}

void KeySandboxCredential::SetCredentialType(const string& _credentialType)
{
    m_credentialType = _credentialType;
    m_credentialTypeHasBeenSet = true;
}

bool KeySandboxCredential::CredentialTypeHasBeenSet() const
{
    return m_credentialTypeHasBeenSet;
}

CredentialEffectScope KeySandboxCredential::GetCredentialEffectScope() const
{
    return m_credentialEffectScope;
}

void KeySandboxCredential::SetCredentialEffectScope(const CredentialEffectScope& _credentialEffectScope)
{
    m_credentialEffectScope = _credentialEffectScope;
    m_credentialEffectScopeHasBeenSet = true;
}

bool KeySandboxCredential::CredentialEffectScopeHasBeenSet() const
{
    return m_credentialEffectScopeHasBeenSet;
}

string KeySandboxCredential::GetCreateTime() const
{
    return m_createTime;
}

void KeySandboxCredential::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KeySandboxCredential::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KeySandboxCredential::GetUpdateTime() const
{
    return m_updateTime;
}

void KeySandboxCredential::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KeySandboxCredential::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

