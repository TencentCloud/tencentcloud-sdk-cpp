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

#include <tencentcloud/wedata/v20210820/model/NewPathDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

NewPathDTO::NewPathDTO() :
    m_nameHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_fileExtensionTypeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_mD5ValueHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_fullPathHasBeenSet(false)
{
}

CoreInternalOutcome NewPathDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("MD5Value") && !value["MD5Value"].IsNull())
    {
        if (!value["MD5Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.MD5Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5Value = string(value["MD5Value"].GetString());
        m_mD5ValueHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NewPathDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }

    if (value.HasMember("FullPath") && !value["FullPath"].IsNull())
    {
        if (!value["FullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewPathDTO.FullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullPath = string(value["FullPath"].GetString());
        m_fullPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewPathDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
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

    if (m_fileExtensionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtensionType.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_mD5ValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5Value.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
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

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullPath.c_str(), allocator).Move(), allocator);
    }

}


string NewPathDTO::GetName() const
{
    return m_name;
}

void NewPathDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NewPathDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool NewPathDTO::GetIsLeaf() const
{
    return m_isLeaf;
}

void NewPathDTO::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool NewPathDTO::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string NewPathDTO::GetResourceId() const
{
    return m_resourceId;
}

void NewPathDTO::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool NewPathDTO::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string NewPathDTO::GetLocalPath() const
{
    return m_localPath;
}

void NewPathDTO::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool NewPathDTO::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string NewPathDTO::GetRemotePath() const
{
    return m_remotePath;
}

void NewPathDTO::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool NewPathDTO::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string NewPathDTO::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void NewPathDTO::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool NewPathDTO::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

int64_t NewPathDTO::GetSize() const
{
    return m_size;
}

void NewPathDTO::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool NewPathDTO::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string NewPathDTO::GetMD5Value() const
{
    return m_mD5Value;
}

void NewPathDTO::SetMD5Value(const string& _mD5Value)
{
    m_mD5Value = _mD5Value;
    m_mD5ValueHasBeenSet = true;
}

bool NewPathDTO::MD5ValueHasBeenSet() const
{
    return m_mD5ValueHasBeenSet;
}

string NewPathDTO::GetOwnerName() const
{
    return m_ownerName;
}

void NewPathDTO::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool NewPathDTO::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string NewPathDTO::GetUpdateUser() const
{
    return m_updateUser;
}

void NewPathDTO::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool NewPathDTO::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string NewPathDTO::GetUpdateUserId() const
{
    return m_updateUserId;
}

void NewPathDTO::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool NewPathDTO::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

int64_t NewPathDTO::GetCreateTime() const
{
    return m_createTime;
}

void NewPathDTO::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NewPathDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NewPathDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void NewPathDTO::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NewPathDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NewPathDTO::GetBucket() const
{
    return m_bucket;
}

void NewPathDTO::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool NewPathDTO::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string NewPathDTO::GetRegion() const
{
    return m_region;
}

void NewPathDTO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NewPathDTO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NewPathDTO::GetExtraInfo() const
{
    return m_extraInfo;
}

void NewPathDTO::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool NewPathDTO::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

vector<NewPathDTO> NewPathDTO::GetChildren() const
{
    return m_children;
}

void NewPathDTO::SetChildren(const vector<NewPathDTO>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool NewPathDTO::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

string NewPathDTO::GetFullPath() const
{
    return m_fullPath;
}

void NewPathDTO::SetFullPath(const string& _fullPath)
{
    m_fullPath = _fullPath;
    m_fullPathHasBeenSet = true;
}

bool NewPathDTO::FullPathHasBeenSet() const
{
    return m_fullPathHasBeenSet;
}

