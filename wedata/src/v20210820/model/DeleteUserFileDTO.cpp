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

#include <tencentcloud/wedata/v20210820/model/DeleteUserFileDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteUserFileDTO::DeleteUserFileDTO() :
    m_resourceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileExtensionTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_md5ValueHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_pathDepthHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_localTempPathHasBeenSet(false),
    m_zipPathHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_deleteNameHasBeenSet(false),
    m_deleteOwnerHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operatorNameHasBeenSet(false)
{
}

CoreInternalOutcome DeleteUserFileDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Md5Value") && !value["Md5Value"].IsNull())
    {
        if (!value["Md5Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Md5Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5Value = string(value["Md5Value"].GetString());
        m_md5ValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("PathDepth") && !value["PathDepth"].IsNull())
    {
        if (!value["PathDepth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.PathDepth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pathDepth = value["PathDepth"].GetUint64();
        m_pathDepthHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("LocalTempPath") && !value["LocalTempPath"].IsNull())
    {
        if (!value["LocalTempPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.LocalTempPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localTempPath = string(value["LocalTempPath"].GetString());
        m_localTempPathHasBeenSet = true;
    }

    if (value.HasMember("ZipPath") && !value["ZipPath"].IsNull())
    {
        if (!value["ZipPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.ZipPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipPath = string(value["ZipPath"].GetString());
        m_zipPathHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DeleteName") && !value["DeleteName"].IsNull())
    {
        if (!value["DeleteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.DeleteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteName = string(value["DeleteName"].GetString());
        m_deleteNameHasBeenSet = true;
    }

    if (value.HasMember("DeleteOwner") && !value["DeleteOwner"].IsNull())
    {
        if (!value["DeleteOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.DeleteOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteOwner = string(value["DeleteOwner"].GetString());
        m_deleteOwnerHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUserFileDTO.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteUserFileDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtensionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtensionType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_md5ValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5Value.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_pathDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pathDepth, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_localTempPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTempPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localTempPath.c_str(), allocator).Move(), allocator);
    }

    if (m_zipPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipPath.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteName.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

}


string DeleteUserFileDTO::GetResourceId() const
{
    return m_resourceId;
}

void DeleteUserFileDTO::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DeleteUserFileDTO::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DeleteUserFileDTO::GetFileName() const
{
    return m_fileName;
}

void DeleteUserFileDTO::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DeleteUserFileDTO::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DeleteUserFileDTO::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void DeleteUserFileDTO::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool DeleteUserFileDTO::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

string DeleteUserFileDTO::GetType() const
{
    return m_type;
}

void DeleteUserFileDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteUserFileDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeleteUserFileDTO::GetMd5Value() const
{
    return m_md5Value;
}

void DeleteUserFileDTO::SetMd5Value(const string& _md5Value)
{
    m_md5Value = _md5Value;
    m_md5ValueHasBeenSet = true;
}

bool DeleteUserFileDTO::Md5ValueHasBeenSet() const
{
    return m_md5ValueHasBeenSet;
}

string DeleteUserFileDTO::GetCreateTime() const
{
    return m_createTime;
}

void DeleteUserFileDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeleteUserFileDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DeleteUserFileDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void DeleteUserFileDTO::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DeleteUserFileDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DeleteUserFileDTO::GetSize() const
{
    return m_size;
}

void DeleteUserFileDTO::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DeleteUserFileDTO::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DeleteUserFileDTO::GetLocalPath() const
{
    return m_localPath;
}

void DeleteUserFileDTO::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool DeleteUserFileDTO::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string DeleteUserFileDTO::GetRemotePath() const
{
    return m_remotePath;
}

void DeleteUserFileDTO::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool DeleteUserFileDTO::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string DeleteUserFileDTO::GetOwnerName() const
{
    return m_ownerName;
}

void DeleteUserFileDTO::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DeleteUserFileDTO::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string DeleteUserFileDTO::GetOwner() const
{
    return m_owner;
}

void DeleteUserFileDTO::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DeleteUserFileDTO::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t DeleteUserFileDTO::GetPathDepth() const
{
    return m_pathDepth;
}

void DeleteUserFileDTO::SetPathDepth(const uint64_t& _pathDepth)
{
    m_pathDepth = _pathDepth;
    m_pathDepthHasBeenSet = true;
}

bool DeleteUserFileDTO::PathDepthHasBeenSet() const
{
    return m_pathDepthHasBeenSet;
}

string DeleteUserFileDTO::GetProjectId() const
{
    return m_projectId;
}

void DeleteUserFileDTO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteUserFileDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DeleteUserFileDTO::GetExtraInfo() const
{
    return m_extraInfo;
}

void DeleteUserFileDTO::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool DeleteUserFileDTO::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string DeleteUserFileDTO::GetLocalTempPath() const
{
    return m_localTempPath;
}

void DeleteUserFileDTO::SetLocalTempPath(const string& _localTempPath)
{
    m_localTempPath = _localTempPath;
    m_localTempPathHasBeenSet = true;
}

bool DeleteUserFileDTO::LocalTempPathHasBeenSet() const
{
    return m_localTempPathHasBeenSet;
}

string DeleteUserFileDTO::GetZipPath() const
{
    return m_zipPath;
}

void DeleteUserFileDTO::SetZipPath(const string& _zipPath)
{
    m_zipPath = _zipPath;
    m_zipPathHasBeenSet = true;
}

bool DeleteUserFileDTO::ZipPathHasBeenSet() const
{
    return m_zipPathHasBeenSet;
}

string DeleteUserFileDTO::GetBucket() const
{
    return m_bucket;
}

void DeleteUserFileDTO::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool DeleteUserFileDTO::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DeleteUserFileDTO::GetRegion() const
{
    return m_region;
}

void DeleteUserFileDTO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DeleteUserFileDTO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DeleteUserFileDTO::GetDeleteName() const
{
    return m_deleteName;
}

void DeleteUserFileDTO::SetDeleteName(const string& _deleteName)
{
    m_deleteName = _deleteName;
    m_deleteNameHasBeenSet = true;
}

bool DeleteUserFileDTO::DeleteNameHasBeenSet() const
{
    return m_deleteNameHasBeenSet;
}

string DeleteUserFileDTO::GetDeleteOwner() const
{
    return m_deleteOwner;
}

void DeleteUserFileDTO::SetDeleteOwner(const string& _deleteOwner)
{
    m_deleteOwner = _deleteOwner;
    m_deleteOwnerHasBeenSet = true;
}

bool DeleteUserFileDTO::DeleteOwnerHasBeenSet() const
{
    return m_deleteOwnerHasBeenSet;
}

string DeleteUserFileDTO::GetOperator() const
{
    return m_operator;
}

void DeleteUserFileDTO::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DeleteUserFileDTO::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DeleteUserFileDTO::GetOperatorName() const
{
    return m_operatorName;
}

void DeleteUserFileDTO::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool DeleteUserFileDTO::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

