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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeD.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthenticationTypeD::AdvancedAuthenticationTypeD() :
    m_secretKeyHasBeenSet(false),
    m_backupSecretKeyHasBeenSet(false),
    m_signParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_timeFormatHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthenticationTypeD::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("BackupSecretKey") && !value["BackupSecretKey"].IsNull())
    {
        if (!value["BackupSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.BackupSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSecretKey = string(value["BackupSecretKey"].GetString());
        m_backupSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeD.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthenticationTypeD::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_signParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeParam.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedAuthenticationTypeD::GetSecretKey() const
{
    return m_secretKey;
}

void AdvancedAuthenticationTypeD::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AdvancedAuthenticationTypeD::GetBackupSecretKey() const
{
    return m_backupSecretKey;
}

void AdvancedAuthenticationTypeD::SetBackupSecretKey(const string& _backupSecretKey)
{
    m_backupSecretKey = _backupSecretKey;
    m_backupSecretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::BackupSecretKeyHasBeenSet() const
{
    return m_backupSecretKeyHasBeenSet;
}

string AdvancedAuthenticationTypeD::GetSignParam() const
{
    return m_signParam;
}

void AdvancedAuthenticationTypeD::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AdvancedAuthenticationTypeD::GetTimeParam() const
{
    return m_timeParam;
}

void AdvancedAuthenticationTypeD::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

int64_t AdvancedAuthenticationTypeD::GetExpireTime() const
{
    return m_expireTime;
}

void AdvancedAuthenticationTypeD::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string AdvancedAuthenticationTypeD::GetTimeFormat() const
{
    return m_timeFormat;
}

void AdvancedAuthenticationTypeD::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AdvancedAuthenticationTypeD::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

