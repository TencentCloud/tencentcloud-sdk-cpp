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
    m_kmsKeyTypeHasBeenSet(false),
    m_rotationStatusHasBeenSet(false),
    m_nextRotationTimeHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_associatedInstanceIDsHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_rotationFrequencyHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_rotationBeginTimeHasBeenSet(false)
{
}

CoreInternalOutcome SecretMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = value["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyType") && !value["KmsKeyType"].IsNull())
    {
        if (!value["KmsKeyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.KmsKeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyType = string(value["KmsKeyType"].GetString());
        m_kmsKeyTypeHasBeenSet = true;
    }

    if (value.HasMember("RotationStatus") && !value["RotationStatus"].IsNull())
    {
        if (!value["RotationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.RotationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotationStatus = value["RotationStatus"].GetInt64();
        m_rotationStatusHasBeenSet = true;
    }

    if (value.HasMember("NextRotationTime") && !value["NextRotationTime"].IsNull())
    {
        if (!value["NextRotationTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.NextRotationTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextRotationTime = value["NextRotationTime"].GetUint64();
        m_nextRotationTimeHasBeenSet = true;
    }

    if (value.HasMember("SecretType") && !value["SecretType"].IsNull())
    {
        if (!value["SecretType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.SecretType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secretType = value["SecretType"].GetInt64();
        m_secretTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("AssociatedInstanceIDs") && !value["AssociatedInstanceIDs"].IsNull())
    {
        if (!value["AssociatedInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.AssociatedInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociatedInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_associatedInstanceIDs.push_back((*itr).GetString());
        }
        m_associatedInstanceIDsHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.TargetUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetUint64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("RotationFrequency") && !value["RotationFrequency"].IsNull())
    {
        if (!value["RotationFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.RotationFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotationFrequency = value["RotationFrequency"].GetInt64();
        m_rotationFrequencyHasBeenSet = true;
    }

    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(value["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("RotationBeginTime") && !value["RotationBeginTime"].IsNull())
    {
        if (!value["RotationBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretMetadata.RotationBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationBeginTime = string(value["RotationBeginTime"].GetString());
        m_rotationBeginTimeHasBeenSet = true;
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

    if (m_rotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotationStatus, allocator);
    }

    if (m_nextRotationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRotationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextRotationTime, allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretType, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_associatedInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_associatedInstanceIDs.begin(); itr != m_associatedInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_rotationFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotationFrequency, allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_rotationBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotationBeginTime.c_str(), allocator).Move(), allocator);
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

int64_t SecretMetadata::GetRotationStatus() const
{
    return m_rotationStatus;
}

void SecretMetadata::SetRotationStatus(const int64_t& _rotationStatus)
{
    m_rotationStatus = _rotationStatus;
    m_rotationStatusHasBeenSet = true;
}

bool SecretMetadata::RotationStatusHasBeenSet() const
{
    return m_rotationStatusHasBeenSet;
}

uint64_t SecretMetadata::GetNextRotationTime() const
{
    return m_nextRotationTime;
}

void SecretMetadata::SetNextRotationTime(const uint64_t& _nextRotationTime)
{
    m_nextRotationTime = _nextRotationTime;
    m_nextRotationTimeHasBeenSet = true;
}

bool SecretMetadata::NextRotationTimeHasBeenSet() const
{
    return m_nextRotationTimeHasBeenSet;
}

int64_t SecretMetadata::GetSecretType() const
{
    return m_secretType;
}

void SecretMetadata::SetSecretType(const int64_t& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool SecretMetadata::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string SecretMetadata::GetProductName() const
{
    return m_productName;
}

void SecretMetadata::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SecretMetadata::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string SecretMetadata::GetResourceName() const
{
    return m_resourceName;
}

void SecretMetadata::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool SecretMetadata::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t SecretMetadata::GetProjectID() const
{
    return m_projectID;
}

void SecretMetadata::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool SecretMetadata::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

vector<string> SecretMetadata::GetAssociatedInstanceIDs() const
{
    return m_associatedInstanceIDs;
}

void SecretMetadata::SetAssociatedInstanceIDs(const vector<string>& _associatedInstanceIDs)
{
    m_associatedInstanceIDs = _associatedInstanceIDs;
    m_associatedInstanceIDsHasBeenSet = true;
}

bool SecretMetadata::AssociatedInstanceIDsHasBeenSet() const
{
    return m_associatedInstanceIDsHasBeenSet;
}

uint64_t SecretMetadata::GetTargetUin() const
{
    return m_targetUin;
}

void SecretMetadata::SetTargetUin(const uint64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool SecretMetadata::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

int64_t SecretMetadata::GetRotationFrequency() const
{
    return m_rotationFrequency;
}

void SecretMetadata::SetRotationFrequency(const int64_t& _rotationFrequency)
{
    m_rotationFrequency = _rotationFrequency;
    m_rotationFrequencyHasBeenSet = true;
}

bool SecretMetadata::RotationFrequencyHasBeenSet() const
{
    return m_rotationFrequencyHasBeenSet;
}

string SecretMetadata::GetResourceID() const
{
    return m_resourceID;
}

void SecretMetadata::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool SecretMetadata::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string SecretMetadata::GetRotationBeginTime() const
{
    return m_rotationBeginTime;
}

void SecretMetadata::SetRotationBeginTime(const string& _rotationBeginTime)
{
    m_rotationBeginTime = _rotationBeginTime;
    m_rotationBeginTimeHasBeenSet = true;
}

bool SecretMetadata::RotationBeginTimeHasBeenSet() const
{
    return m_rotationBeginTimeHasBeenSet;
}

