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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeF.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthenticationTypeF::AdvancedAuthenticationTypeF() :
    m_signParamHasBeenSet(false),
    m_timeParamHasBeenSet(false),
    m_transactionParamHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_backupSecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthenticationTypeF::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignParam") && !value["SignParam"].IsNull())
    {
        if (!value["SignParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeF.SignParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signParam = string(value["SignParam"].GetString());
        m_signParamHasBeenSet = true;
    }

    if (value.HasMember("TimeParam") && !value["TimeParam"].IsNull())
    {
        if (!value["TimeParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeF.TimeParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeParam = string(value["TimeParam"].GetString());
        m_timeParamHasBeenSet = true;
    }

    if (value.HasMember("TransactionParam") && !value["TransactionParam"].IsNull())
    {
        if (!value["TransactionParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeF.TransactionParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionParam = string(value["TransactionParam"].GetString());
        m_transactionParamHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeF.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("BackupSecretKey") && !value["BackupSecretKey"].IsNull())
    {
        if (!value["BackupSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthenticationTypeF.BackupSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSecretKey = string(value["BackupSecretKey"].GetString());
        m_backupSecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthenticationTypeF::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_transactionParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionParam.c_str(), allocator).Move(), allocator);
    }

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

}


string AdvancedAuthenticationTypeF::GetSignParam() const
{
    return m_signParam;
}

void AdvancedAuthenticationTypeF::SetSignParam(const string& _signParam)
{
    m_signParam = _signParam;
    m_signParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeF::SignParamHasBeenSet() const
{
    return m_signParamHasBeenSet;
}

string AdvancedAuthenticationTypeF::GetTimeParam() const
{
    return m_timeParam;
}

void AdvancedAuthenticationTypeF::SetTimeParam(const string& _timeParam)
{
    m_timeParam = _timeParam;
    m_timeParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeF::TimeParamHasBeenSet() const
{
    return m_timeParamHasBeenSet;
}

string AdvancedAuthenticationTypeF::GetTransactionParam() const
{
    return m_transactionParam;
}

void AdvancedAuthenticationTypeF::SetTransactionParam(const string& _transactionParam)
{
    m_transactionParam = _transactionParam;
    m_transactionParamHasBeenSet = true;
}

bool AdvancedAuthenticationTypeF::TransactionParamHasBeenSet() const
{
    return m_transactionParamHasBeenSet;
}

string AdvancedAuthenticationTypeF::GetSecretKey() const
{
    return m_secretKey;
}

void AdvancedAuthenticationTypeF::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeF::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AdvancedAuthenticationTypeF::GetBackupSecretKey() const
{
    return m_backupSecretKey;
}

void AdvancedAuthenticationTypeF::SetBackupSecretKey(const string& _backupSecretKey)
{
    m_backupSecretKey = _backupSecretKey;
    m_backupSecretKeyHasBeenSet = true;
}

bool AdvancedAuthenticationTypeF::BackupSecretKeyHasBeenSet() const
{
    return m_backupSecretKeyHasBeenSet;
}

