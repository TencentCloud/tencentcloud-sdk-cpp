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

#include <tencentcloud/organization/v20210331/model/SCIMCredential.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SCIMCredential::SCIMCredential() :
    m_zoneIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_credentialIdHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome SCIMCredential::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CredentialId") && !value["CredentialId"].IsNull())
    {
        if (!value["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(value["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (value.HasMember("CredentialType") && !value["CredentialType"].IsNull())
    {
        if (!value["CredentialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.CredentialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialType = string(value["CredentialType"].GetString());
        m_credentialTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCIMCredential.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SCIMCredential::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string SCIMCredential::GetZoneId() const
{
    return m_zoneId;
}

void SCIMCredential::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SCIMCredential::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SCIMCredential::GetStatus() const
{
    return m_status;
}

void SCIMCredential::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SCIMCredential::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SCIMCredential::GetCredentialId() const
{
    return m_credentialId;
}

void SCIMCredential::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool SCIMCredential::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

string SCIMCredential::GetCredentialType() const
{
    return m_credentialType;
}

void SCIMCredential::SetCredentialType(const string& _credentialType)
{
    m_credentialType = _credentialType;
    m_credentialTypeHasBeenSet = true;
}

bool SCIMCredential::CredentialTypeHasBeenSet() const
{
    return m_credentialTypeHasBeenSet;
}

string SCIMCredential::GetCreateTime() const
{
    return m_createTime;
}

void SCIMCredential::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SCIMCredential::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SCIMCredential::GetExpireTime() const
{
    return m_expireTime;
}

void SCIMCredential::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SCIMCredential::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

