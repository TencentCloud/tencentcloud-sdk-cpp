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

#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeD.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AuthenticationTypeD::AuthenticationTypeD() :
    m_secretKeyHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fileExtensionsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_signParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_backupSecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome AuthenticationTypeD::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FileExtensions") && !value["FileExtensions"].IsNull())
    {
        if (!value["FileExtensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.FileExtensions` is not array type"));

        const rapidjson::Value &tmpValue = value["FileExtensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileExtensions.push_back((*itr).GetString());
        }
        m_fileExtensionsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("BackupSecretKey") && !value["BackupSecretKey"].IsNull())
    {
        if (!value["BackupSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeD.BackupSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSecretKey = string(value["BackupSecretKey"].GetString());
        m_backupSecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthenticationTypeD::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_fileExtensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileExtensions.begin(); itr != m_fileExtensions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
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

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSecretKey.c_str(), allocator).Move(), allocator);
    }

}


string AuthenticationTypeD::GetSecretKey() const
{
    return m_secretKey;
}

void AuthenticationTypeD::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AuthenticationTypeD::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

int64_t AuthenticationTypeD::GetExpireTime() const
{
    return m_expireTime;
}

void AuthenticationTypeD::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AuthenticationTypeD::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> AuthenticationTypeD::GetFileExtensions() const
{
    return m_fileExtensions;
}

void AuthenticationTypeD::SetFileExtensions(const vector<string>& _fileExtensions)
{
    m_fileExtensions = _fileExtensions;
    m_fileExtensionsHasBeenSet = true;
}

bool AuthenticationTypeD::FileExtensionsHasBeenSet() const
{
    return m_fileExtensionsHasBeenSet;
}

string AuthenticationTypeD::GetFilterType() const
{
    return m_filterType;
}

void AuthenticationTypeD::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool AuthenticationTypeD::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string AuthenticationTypeD::GetSignParam() const
{
    return m_signParam;
}

void AuthenticationTypeD::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AuthenticationTypeD::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AuthenticationTypeD::GetTimeParam() const
{
    return m_timeParam;
}

void AuthenticationTypeD::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AuthenticationTypeD::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

string AuthenticationTypeD::GetTimeFormat() const
{
    return m_timeFormat;
}

void AuthenticationTypeD::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AuthenticationTypeD::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string AuthenticationTypeD::GetBackupSecretKey() const
{
    return m_backupSecretKey;
}

void AuthenticationTypeD::SetBackupSecretKey(const string& _backupSecretKey)
{
    m_backupSecretKey = _backupSecretKey;
    m_backupSecretKeyHasBeenSet = true;
}

bool AuthenticationTypeD::BackupSecretKeyHasBeenSet() const
{
    return m_backupSecretKeyHasBeenSet;
}

