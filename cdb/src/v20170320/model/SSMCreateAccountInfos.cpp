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

#include <tencentcloud/cdb/v20170320/model/SSMCreateAccountInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SSMCreateAccountInfos::SSMCreateAccountInfos() :
    m_isOpenSSMHasBeenSet(false),
    m_isRotationAccountHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_enableRotationHasBeenSet(false),
    m_rotationFrequencyHasBeenSet(false),
    m_privilegesListHasBeenSet(false),
    m_kmsHsmClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome SSMCreateAccountInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsOpenSSM") && !value["IsOpenSSM"].IsNull())
    {
        if (!value["IsOpenSSM"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.IsOpenSSM` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenSSM = value["IsOpenSSM"].GetBool();
        m_isOpenSSMHasBeenSet = true;
    }

    if (value.HasMember("IsRotationAccount") && !value["IsRotationAccount"].IsNull())
    {
        if (!value["IsRotationAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.IsRotationAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRotationAccount = value["IsRotationAccount"].GetBool();
        m_isRotationAccountHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.EncryptType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = value["EncryptType"].GetInt64();
        m_encryptTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableRotation") && !value["EnableRotation"].IsNull())
    {
        if (!value["EnableRotation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.EnableRotation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRotation = value["EnableRotation"].GetBool();
        m_enableRotationHasBeenSet = true;
    }

    if (value.HasMember("RotationFrequency") && !value["RotationFrequency"].IsNull())
    {
        if (!value["RotationFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.RotationFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotationFrequency = value["RotationFrequency"].GetInt64();
        m_rotationFrequencyHasBeenSet = true;
    }

    if (value.HasMember("PrivilegesList") && !value["PrivilegesList"].IsNull())
    {
        if (!value["PrivilegesList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.PrivilegesList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilegesList.Deserialize(value["PrivilegesList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegesListHasBeenSet = true;
    }

    if (value.HasMember("KmsHsmClusterId") && !value["KmsHsmClusterId"].IsNull())
    {
        if (!value["KmsHsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSMCreateAccountInfos.KmsHsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsHsmClusterId = string(value["KmsHsmClusterId"].GetString());
        m_kmsHsmClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSMCreateAccountInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isOpenSSMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenSSM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpenSSM, allocator);
    }

    if (m_isRotationAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRotationAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRotationAccount, allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptType, allocator);
    }

    if (m_enableRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRotation, allocator);
    }

    if (m_rotationFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotationFrequency, allocator);
    }

    if (m_privilegesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilegesList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kmsHsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsHsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsHsmClusterId.c_str(), allocator).Move(), allocator);
    }

}


bool SSMCreateAccountInfos::GetIsOpenSSM() const
{
    return m_isOpenSSM;
}

void SSMCreateAccountInfos::SetIsOpenSSM(const bool& _isOpenSSM)
{
    m_isOpenSSM = _isOpenSSM;
    m_isOpenSSMHasBeenSet = true;
}

bool SSMCreateAccountInfos::IsOpenSSMHasBeenSet() const
{
    return m_isOpenSSMHasBeenSet;
}

bool SSMCreateAccountInfos::GetIsRotationAccount() const
{
    return m_isRotationAccount;
}

void SSMCreateAccountInfos::SetIsRotationAccount(const bool& _isRotationAccount)
{
    m_isRotationAccount = _isRotationAccount;
    m_isRotationAccountHasBeenSet = true;
}

bool SSMCreateAccountInfos::IsRotationAccountHasBeenSet() const
{
    return m_isRotationAccountHasBeenSet;
}

string SSMCreateAccountInfos::GetSecretName() const
{
    return m_secretName;
}

void SSMCreateAccountInfos::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool SSMCreateAccountInfos::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string SSMCreateAccountInfos::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void SSMCreateAccountInfos::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool SSMCreateAccountInfos::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

int64_t SSMCreateAccountInfos::GetEncryptType() const
{
    return m_encryptType;
}

void SSMCreateAccountInfos::SetEncryptType(const int64_t& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool SSMCreateAccountInfos::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

bool SSMCreateAccountInfos::GetEnableRotation() const
{
    return m_enableRotation;
}

void SSMCreateAccountInfos::SetEnableRotation(const bool& _enableRotation)
{
    m_enableRotation = _enableRotation;
    m_enableRotationHasBeenSet = true;
}

bool SSMCreateAccountInfos::EnableRotationHasBeenSet() const
{
    return m_enableRotationHasBeenSet;
}

int64_t SSMCreateAccountInfos::GetRotationFrequency() const
{
    return m_rotationFrequency;
}

void SSMCreateAccountInfos::SetRotationFrequency(const int64_t& _rotationFrequency)
{
    m_rotationFrequency = _rotationFrequency;
    m_rotationFrequencyHasBeenSet = true;
}

bool SSMCreateAccountInfos::RotationFrequencyHasBeenSet() const
{
    return m_rotationFrequencyHasBeenSet;
}

PrivilegeGroup SSMCreateAccountInfos::GetPrivilegesList() const
{
    return m_privilegesList;
}

void SSMCreateAccountInfos::SetPrivilegesList(const PrivilegeGroup& _privilegesList)
{
    m_privilegesList = _privilegesList;
    m_privilegesListHasBeenSet = true;
}

bool SSMCreateAccountInfos::PrivilegesListHasBeenSet() const
{
    return m_privilegesListHasBeenSet;
}

string SSMCreateAccountInfos::GetKmsHsmClusterId() const
{
    return m_kmsHsmClusterId;
}

void SSMCreateAccountInfos::SetKmsHsmClusterId(const string& _kmsHsmClusterId)
{
    m_kmsHsmClusterId = _kmsHsmClusterId;
    m_kmsHsmClusterIdHasBeenSet = true;
}

bool SSMCreateAccountInfos::KmsHsmClusterIdHasBeenSet() const
{
    return m_kmsHsmClusterIdHasBeenSet;
}

