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

#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLivePushAuthKeyRequest::ModifyLivePushAuthKeyRequest() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_masterAuthKeyHasBeenSet(false),
    m_backupAuthKeyHasBeenSet(false),
    m_authDeltaHasBeenSet(false)
{
}

string ModifyLivePushAuthKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_masterAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterAuthKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backupAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupAuthKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthDelta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authDelta, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLivePushAuthKeyRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyLivePushAuthKeyRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyLivePushAuthKeyRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t ModifyLivePushAuthKeyRequest::GetEnable() const
{
    return m_enable;
}

void ModifyLivePushAuthKeyRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyLivePushAuthKeyRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyLivePushAuthKeyRequest::GetMasterAuthKey() const
{
    return m_masterAuthKey;
}

void ModifyLivePushAuthKeyRequest::SetMasterAuthKey(const string& _masterAuthKey)
{
    m_masterAuthKey = _masterAuthKey;
    m_masterAuthKeyHasBeenSet = true;
}

bool ModifyLivePushAuthKeyRequest::MasterAuthKeyHasBeenSet() const
{
    return m_masterAuthKeyHasBeenSet;
}

string ModifyLivePushAuthKeyRequest::GetBackupAuthKey() const
{
    return m_backupAuthKey;
}

void ModifyLivePushAuthKeyRequest::SetBackupAuthKey(const string& _backupAuthKey)
{
    m_backupAuthKey = _backupAuthKey;
    m_backupAuthKeyHasBeenSet = true;
}

bool ModifyLivePushAuthKeyRequest::BackupAuthKeyHasBeenSet() const
{
    return m_backupAuthKeyHasBeenSet;
}

uint64_t ModifyLivePushAuthKeyRequest::GetAuthDelta() const
{
    return m_authDelta;
}

void ModifyLivePushAuthKeyRequest::SetAuthDelta(const uint64_t& _authDelta)
{
    m_authDelta = _authDelta;
    m_authDeltaHasBeenSet = true;
}

bool ModifyLivePushAuthKeyRequest::AuthDeltaHasBeenSet() const
{
    return m_authDeltaHasBeenSet;
}


