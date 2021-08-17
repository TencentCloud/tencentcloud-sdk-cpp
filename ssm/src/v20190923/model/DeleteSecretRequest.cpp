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

#include <tencentcloud/ssm/v20190923/model/DeleteSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

DeleteSecretRequest::DeleteSecretRequest() :
    m_secretNameHasBeenSet(false),
    m_recoveryWindowInDaysHasBeenSet(false),
    m_cleanSSHKeyHasBeenSet(false)
{
}

string DeleteSecretRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryWindowInDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryWindowInDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recoveryWindowInDays, allocator);
    }

    if (m_cleanSSHKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanSSHKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cleanSSHKey, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void DeleteSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool DeleteSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

uint64_t DeleteSecretRequest::GetRecoveryWindowInDays() const
{
    return m_recoveryWindowInDays;
}

void DeleteSecretRequest::SetRecoveryWindowInDays(const uint64_t& _recoveryWindowInDays)
{
    m_recoveryWindowInDays = _recoveryWindowInDays;
    m_recoveryWindowInDaysHasBeenSet = true;
}

bool DeleteSecretRequest::RecoveryWindowInDaysHasBeenSet() const
{
    return m_recoveryWindowInDaysHasBeenSet;
}

bool DeleteSecretRequest::GetCleanSSHKey() const
{
    return m_cleanSSHKey;
}

void DeleteSecretRequest::SetCleanSSHKey(const bool& _cleanSSHKey)
{
    m_cleanSSHKey = _cleanSSHKey;
    m_cleanSSHKeyHasBeenSet = true;
}

bool DeleteSecretRequest::CleanSSHKeyHasBeenSet() const
{
    return m_cleanSSHKeyHasBeenSet;
}


