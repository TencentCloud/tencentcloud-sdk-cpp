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

#include <tencentcloud/cdb/v20170320/model/DeleteDBAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeleteDBAccount::DeleteDBAccount() :
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_recoveryWindowInDaysHasBeenSet(false),
    m_deleteModeHasBeenSet(false)
{
}

CoreInternalOutcome DeleteDBAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDBAccount.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDBAccount.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDBAccount.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("RecoveryWindowInDays") && !value["RecoveryWindowInDays"].IsNull())
    {
        if (!value["RecoveryWindowInDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDBAccount.RecoveryWindowInDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryWindowInDays = value["RecoveryWindowInDays"].GetInt64();
        m_recoveryWindowInDaysHasBeenSet = true;
    }

    if (value.HasMember("DeleteMode") && !value["DeleteMode"].IsNull())
    {
        if (!value["DeleteMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDBAccount.DeleteMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteMode = value["DeleteMode"].GetInt64();
        m_deleteModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteDBAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryWindowInDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryWindowInDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recoveryWindowInDays, allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteMode, allocator);
    }

}


string DeleteDBAccount::GetUser() const
{
    return m_user;
}

void DeleteDBAccount::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DeleteDBAccount::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DeleteDBAccount::GetHost() const
{
    return m_host;
}

void DeleteDBAccount::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DeleteDBAccount::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DeleteDBAccount::GetSecretName() const
{
    return m_secretName;
}

void DeleteDBAccount::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool DeleteDBAccount::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

int64_t DeleteDBAccount::GetRecoveryWindowInDays() const
{
    return m_recoveryWindowInDays;
}

void DeleteDBAccount::SetRecoveryWindowInDays(const int64_t& _recoveryWindowInDays)
{
    m_recoveryWindowInDays = _recoveryWindowInDays;
    m_recoveryWindowInDaysHasBeenSet = true;
}

bool DeleteDBAccount::RecoveryWindowInDaysHasBeenSet() const
{
    return m_recoveryWindowInDaysHasBeenSet;
}

int64_t DeleteDBAccount::GetDeleteMode() const
{
    return m_deleteMode;
}

void DeleteDBAccount::SetDeleteMode(const int64_t& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool DeleteDBAccount::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}

