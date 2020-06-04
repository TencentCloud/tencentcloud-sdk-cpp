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

#include <tencentcloud/apigateway/v20180808/model/ApiKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

ApiKey::ApiKey() :
    m_accessKeyIdHasBeenSet(false),
    m_accessKeySecretHasBeenSet(false),
    m_accessKeyTypeHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome ApiKey::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKeyId") && !value["AccessKeyId"].IsNull())
    {
        if (!value["AccessKeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.AccessKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyId = string(value["AccessKeyId"].GetString());
        m_accessKeyIdHasBeenSet = true;
    }

    if (value.HasMember("AccessKeySecret") && !value["AccessKeySecret"].IsNull())
    {
        if (!value["AccessKeySecret"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.AccessKeySecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeySecret = string(value["AccessKeySecret"].GetString());
        m_accessKeySecretHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyType") && !value["AccessKeyType"].IsNull())
    {
        if (!value["AccessKeyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.AccessKeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyType = string(value["AccessKeyType"].GetString());
        m_accessKeyTypeHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ApiKey.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiKey.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKey::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_accessKeyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeySecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeySecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessKeySecret.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessKeyType.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string ApiKey::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void ApiKey::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool ApiKey::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string ApiKey::GetAccessKeySecret() const
{
    return m_accessKeySecret;
}

void ApiKey::SetAccessKeySecret(const string& _accessKeySecret)
{
    m_accessKeySecret = _accessKeySecret;
    m_accessKeySecretHasBeenSet = true;
}

bool ApiKey::AccessKeySecretHasBeenSet() const
{
    return m_accessKeySecretHasBeenSet;
}

string ApiKey::GetAccessKeyType() const
{
    return m_accessKeyType;
}

void ApiKey::SetAccessKeyType(const string& _accessKeyType)
{
    m_accessKeyType = _accessKeyType;
    m_accessKeyTypeHasBeenSet = true;
}

bool ApiKey::AccessKeyTypeHasBeenSet() const
{
    return m_accessKeyTypeHasBeenSet;
}

string ApiKey::GetSecretName() const
{
    return m_secretName;
}

void ApiKey::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool ApiKey::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string ApiKey::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ApiKey::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ApiKey::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

int64_t ApiKey::GetStatus() const
{
    return m_status;
}

void ApiKey::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiKey::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiKey::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiKey::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiKey::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

