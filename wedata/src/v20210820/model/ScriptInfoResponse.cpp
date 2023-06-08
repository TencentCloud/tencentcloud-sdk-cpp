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

#include <tencentcloud/wedata/v20210820/model/ScriptInfoResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ScriptInfoResponse::ScriptInfoResponse() :
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
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome ScriptInfoResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Md5Value") && !value["Md5Value"].IsNull())
    {
        if (!value["Md5Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Md5Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5Value = string(value["Md5Value"].GetString());
        m_md5ValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Size` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetDouble();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("PathDepth") && !value["PathDepth"].IsNull())
    {
        if (!value["PathDepth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.PathDepth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pathDepth = value["PathDepth"].GetInt64();
        m_pathDepthHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("LocalTempPath") && !value["LocalTempPath"].IsNull())
    {
        if (!value["LocalTempPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.LocalTempPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localTempPath = string(value["LocalTempPath"].GetString());
        m_localTempPathHasBeenSet = true;
    }

    if (value.HasMember("ZipPath") && !value["ZipPath"].IsNull())
    {
        if (!value["ZipPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.ZipPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipPath = string(value["ZipPath"].GetString());
        m_zipPathHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfoResponse.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScriptInfoResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ScriptInfoResponse::GetResourceId() const
{
    return m_resourceId;
}

void ScriptInfoResponse::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ScriptInfoResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ScriptInfoResponse::GetFileName() const
{
    return m_fileName;
}

void ScriptInfoResponse::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ScriptInfoResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ScriptInfoResponse::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void ScriptInfoResponse::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool ScriptInfoResponse::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

string ScriptInfoResponse::GetType() const
{
    return m_type;
}

void ScriptInfoResponse::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScriptInfoResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ScriptInfoResponse::GetMd5Value() const
{
    return m_md5Value;
}

void ScriptInfoResponse::SetMd5Value(const string& _md5Value)
{
    m_md5Value = _md5Value;
    m_md5ValueHasBeenSet = true;
}

bool ScriptInfoResponse::Md5ValueHasBeenSet() const
{
    return m_md5ValueHasBeenSet;
}

string ScriptInfoResponse::GetCreateTime() const
{
    return m_createTime;
}

void ScriptInfoResponse::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScriptInfoResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScriptInfoResponse::GetUpdateTime() const
{
    return m_updateTime;
}

void ScriptInfoResponse::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ScriptInfoResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

double ScriptInfoResponse::GetSize() const
{
    return m_size;
}

void ScriptInfoResponse::SetSize(const double& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ScriptInfoResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ScriptInfoResponse::GetLocalPath() const
{
    return m_localPath;
}

void ScriptInfoResponse::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool ScriptInfoResponse::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string ScriptInfoResponse::GetRemotePath() const
{
    return m_remotePath;
}

void ScriptInfoResponse::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool ScriptInfoResponse::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string ScriptInfoResponse::GetOwnerName() const
{
    return m_ownerName;
}

void ScriptInfoResponse::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool ScriptInfoResponse::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string ScriptInfoResponse::GetOwner() const
{
    return m_owner;
}

void ScriptInfoResponse::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ScriptInfoResponse::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

int64_t ScriptInfoResponse::GetPathDepth() const
{
    return m_pathDepth;
}

void ScriptInfoResponse::SetPathDepth(const int64_t& _pathDepth)
{
    m_pathDepth = _pathDepth;
    m_pathDepthHasBeenSet = true;
}

bool ScriptInfoResponse::PathDepthHasBeenSet() const
{
    return m_pathDepthHasBeenSet;
}

string ScriptInfoResponse::GetProjectId() const
{
    return m_projectId;
}

void ScriptInfoResponse::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ScriptInfoResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ScriptInfoResponse::GetExtraInfo() const
{
    return m_extraInfo;
}

void ScriptInfoResponse::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool ScriptInfoResponse::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string ScriptInfoResponse::GetLocalTempPath() const
{
    return m_localTempPath;
}

void ScriptInfoResponse::SetLocalTempPath(const string& _localTempPath)
{
    m_localTempPath = _localTempPath;
    m_localTempPathHasBeenSet = true;
}

bool ScriptInfoResponse::LocalTempPathHasBeenSet() const
{
    return m_localTempPathHasBeenSet;
}

string ScriptInfoResponse::GetZipPath() const
{
    return m_zipPath;
}

void ScriptInfoResponse::SetZipPath(const string& _zipPath)
{
    m_zipPath = _zipPath;
    m_zipPathHasBeenSet = true;
}

bool ScriptInfoResponse::ZipPathHasBeenSet() const
{
    return m_zipPathHasBeenSet;
}

string ScriptInfoResponse::GetBucket() const
{
    return m_bucket;
}

void ScriptInfoResponse::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ScriptInfoResponse::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string ScriptInfoResponse::GetRegion() const
{
    return m_region;
}

void ScriptInfoResponse::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ScriptInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

