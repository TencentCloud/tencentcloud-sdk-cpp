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

#include <tencentcloud/teo/v20220901/model/AuthenticationParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AuthenticationParameters::AuthenticationParameters() :
    m_authTypeHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_backupSecretKeyHasBeenSet(false),
    m_authParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_timeFormatHasBeenSet(false)
{
}

CoreInternalOutcome AuthenticationParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("BackupSecretKey") && !value["BackupSecretKey"].IsNull())
    {
        if (!value["BackupSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.BackupSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSecretKey = string(value["BackupSecretKey"].GetString());
        m_backupSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("AuthParam") && !value["AuthParam"].IsNull())
    {
        if (!value["AuthParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.AuthParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authParam = string(value["AuthParam"].GetString());
        m_authParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationParameters.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthenticationParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_backupSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

}


string AuthenticationParameters::GetAuthType() const
{
    return m_authType;
}

void AuthenticationParameters::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AuthenticationParameters::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string AuthenticationParameters::GetSecretKey() const
{
    return m_secretKey;
}

void AuthenticationParameters::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AuthenticationParameters::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

int64_t AuthenticationParameters::GetTimeout() const
{
    return m_timeout;
}

void AuthenticationParameters::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool AuthenticationParameters::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string AuthenticationParameters::GetBackupSecretKey() const
{
    return m_backupSecretKey;
}

void AuthenticationParameters::SetBackupSecretKey(const string& _backupSecretKey)
{
    m_backupSecretKey = _backupSecretKey;
    m_backupSecretKeyHasBeenSet = true;
}

bool AuthenticationParameters::BackupSecretKeyHasBeenSet() const
{
    return m_backupSecretKeyHasBeenSet;
}

string AuthenticationParameters::GetAuthParam() const
{
    return m_authParam;
}

void AuthenticationParameters::SetAuthParam(const string& _authParam)
{
    m_authParam = _authParam;
    m_authParamHasBeenSet = true;
}

bool AuthenticationParameters::AuthParamHasBeenSet() const
{
    return m_authParamHasBeenSet;
}

string AuthenticationParameters::GetTimeParam() const
{
    return m_timeParam;
}

void AuthenticationParameters::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AuthenticationParameters::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

string AuthenticationParameters::GetTimeFormat() const
{
    return m_timeFormat;
}

void AuthenticationParameters::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AuthenticationParameters::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

