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

#include <tencentcloud/live/v20180801/model/PushAuthKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PushAuthKeyInfo::PushAuthKeyInfo() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_masterAuthKeyHasBeenSet(false),
    m_backupAuthKeyHasBeenSet(false),
    m_authDeltaHasBeenSet(false)
{
}

CoreInternalOutcome PushAuthKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushAuthKeyInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PushAuthKeyInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("MasterAuthKey") && !value["MasterAuthKey"].IsNull())
    {
        if (!value["MasterAuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushAuthKeyInfo.MasterAuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterAuthKey = string(value["MasterAuthKey"].GetString());
        m_masterAuthKeyHasBeenSet = true;
    }

    if (value.HasMember("BackupAuthKey") && !value["BackupAuthKey"].IsNull())
    {
        if (!value["BackupAuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushAuthKeyInfo.BackupAuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupAuthKey = string(value["BackupAuthKey"].GetString());
        m_backupAuthKeyHasBeenSet = true;
    }

    if (value.HasMember("AuthDelta") && !value["AuthDelta"].IsNull())
    {
        if (!value["AuthDelta"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushAuthKeyInfo.AuthDelta` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authDelta = value["AuthDelta"].GetUint64();
        m_authDeltaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushAuthKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_masterAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterAuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backupAuthKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupAuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupAuthKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authDelta, allocator);
    }

}


string PushAuthKeyInfo::GetDomainName() const
{
    return m_domainName;
}

void PushAuthKeyInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PushAuthKeyInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t PushAuthKeyInfo::GetEnable() const
{
    return m_enable;
}

void PushAuthKeyInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool PushAuthKeyInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string PushAuthKeyInfo::GetMasterAuthKey() const
{
    return m_masterAuthKey;
}

void PushAuthKeyInfo::SetMasterAuthKey(const string& _masterAuthKey)
{
    m_masterAuthKey = _masterAuthKey;
    m_masterAuthKeyHasBeenSet = true;
}

bool PushAuthKeyInfo::MasterAuthKeyHasBeenSet() const
{
    return m_masterAuthKeyHasBeenSet;
}

string PushAuthKeyInfo::GetBackupAuthKey() const
{
    return m_backupAuthKey;
}

void PushAuthKeyInfo::SetBackupAuthKey(const string& _backupAuthKey)
{
    m_backupAuthKey = _backupAuthKey;
    m_backupAuthKeyHasBeenSet = true;
}

bool PushAuthKeyInfo::BackupAuthKeyHasBeenSet() const
{
    return m_backupAuthKeyHasBeenSet;
}

uint64_t PushAuthKeyInfo::GetAuthDelta() const
{
    return m_authDelta;
}

void PushAuthKeyInfo::SetAuthDelta(const uint64_t& _authDelta)
{
    m_authDelta = _authDelta;
    m_authDeltaHasBeenSet = true;
}

bool PushAuthKeyInfo::AuthDeltaHasBeenSet() const
{
    return m_authDeltaHasBeenSet;
}

