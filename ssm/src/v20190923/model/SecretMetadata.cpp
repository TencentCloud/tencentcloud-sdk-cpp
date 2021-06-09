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

#include <tencentcloud/ssm/v20190923/model/SecretMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

SecretMetadata::SecretMetadata() :
    m_secretNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_kmsKeyTypeHasBeenSet(false)
{
}

CoreInternalOutcome SecretMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = value["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyType") && !value["KmsKeyType"].IsNull())
    {
        if (!value["KmsKeyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretMetadata.KmsKeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyType = string(value["KmsKeyType"].GetString());
        m_kmsKeyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecretMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_kmsKeyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyType.c_str(), allocator).Move(), allocator);
    }

}


string SecretMetadata::GetSecretName() const
{
    return m_secretName;
}

void SecretMetadata::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool SecretMetadata::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string SecretMetadata::GetDescription() const
{
    return m_description;
}

void SecretMetadata::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecretMetadata::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SecretMetadata::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void SecretMetadata::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool SecretMetadata::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

uint64_t SecretMetadata::GetCreateUin() const
{
    return m_createUin;
}

void SecretMetadata::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool SecretMetadata::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string SecretMetadata::GetStatus() const
{
    return m_status;
}

void SecretMetadata::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SecretMetadata::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SecretMetadata::GetDeleteTime() const
{
    return m_deleteTime;
}

void SecretMetadata::SetDeleteTime(const uint64_t& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool SecretMetadata::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

uint64_t SecretMetadata::GetCreateTime() const
{
    return m_createTime;
}

void SecretMetadata::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecretMetadata::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SecretMetadata::GetKmsKeyType() const
{
    return m_kmsKeyType;
}

void SecretMetadata::SetKmsKeyType(const string& _kmsKeyType)
{
    m_kmsKeyType = _kmsKeyType;
    m_kmsKeyTypeHasBeenSet = true;
}

bool SecretMetadata::KmsKeyTypeHasBeenSet() const
{
    return m_kmsKeyTypeHasBeenSet;
}

