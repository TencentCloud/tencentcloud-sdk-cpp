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

#include <tencentcloud/cetcd/v20220325/model/EtcdBackupSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdBackupSettings::EtcdBackupSettings() :
    m_backupIntervalHasBeenSet(false),
    m_maxBackupCountHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false)
{
}

CoreInternalOutcome EtcdBackupSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupInterval") && !value["BackupInterval"].IsNull())
    {
        if (!value["BackupInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdBackupSettings.BackupInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupInterval = value["BackupInterval"].GetInt64();
        m_backupIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxBackupCount") && !value["MaxBackupCount"].IsNull())
    {
        if (!value["MaxBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdBackupSettings.MaxBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBackupCount = value["MaxBackupCount"].GetInt64();
        m_maxBackupCountHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdBackupSettings.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdBackupSettings.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdBackupSettings.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdBackupSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupInterval, allocator);
    }

    if (m_maxBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBackupCount, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

}


int64_t EtcdBackupSettings::GetBackupInterval() const
{
    return m_backupInterval;
}

void EtcdBackupSettings::SetBackupInterval(const int64_t& _backupInterval)
{
    m_backupInterval = _backupInterval;
    m_backupIntervalHasBeenSet = true;
}

bool EtcdBackupSettings::BackupIntervalHasBeenSet() const
{
    return m_backupIntervalHasBeenSet;
}

int64_t EtcdBackupSettings::GetMaxBackupCount() const
{
    return m_maxBackupCount;
}

void EtcdBackupSettings::SetMaxBackupCount(const int64_t& _maxBackupCount)
{
    m_maxBackupCount = _maxBackupCount;
    m_maxBackupCountHasBeenSet = true;
}

bool EtcdBackupSettings::MaxBackupCountHasBeenSet() const
{
    return m_maxBackupCountHasBeenSet;
}

string EtcdBackupSettings::GetUser() const
{
    return m_user;
}

void EtcdBackupSettings::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool EtcdBackupSettings::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string EtcdBackupSettings::GetPassword() const
{
    return m_password;
}

void EtcdBackupSettings::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EtcdBackupSettings::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string EtcdBackupSettings::GetCosBucketName() const
{
    return m_cosBucketName;
}

void EtcdBackupSettings::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool EtcdBackupSettings::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

