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

#include <tencentcloud/wedata/v20210820/model/UserFileVersionDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UserFileVersionDto::UserFileVersionDto() :
    m_idHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskVersionNumHasBeenSet(false),
    m_taskVersionIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_objectRegionHasBeenSet(false),
    m_objectBucketNameHasBeenSet(false)
{
}

CoreInternalOutcome UserFileVersionDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskVersionNum") && !value["TaskVersionNum"].IsNull())
    {
        if (!value["TaskVersionNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.TaskVersionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskVersionNum = string(value["TaskVersionNum"].GetString());
        m_taskVersionNumHasBeenSet = true;
    }

    if (value.HasMember("TaskVersionId") && !value["TaskVersionId"].IsNull())
    {
        if (!value["TaskVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.TaskVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskVersionId = string(value["TaskVersionId"].GetString());
        m_taskVersionIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("ObjectRegion") && !value["ObjectRegion"].IsNull())
    {
        if (!value["ObjectRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.ObjectRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectRegion = string(value["ObjectRegion"].GetString());
        m_objectRegionHasBeenSet = true;
    }

    if (value.HasMember("ObjectBucketName") && !value["ObjectBucketName"].IsNull())
    {
        if (!value["ObjectBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserFileVersionDto.ObjectBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectBucketName = string(value["ObjectBucketName"].GetString());
        m_objectBucketNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserFileVersionDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskVersionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_objectRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_objectBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectBucketName.c_str(), allocator).Move(), allocator);
    }

}


int64_t UserFileVersionDto::GetId() const
{
    return m_id;
}

void UserFileVersionDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserFileVersionDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UserFileVersionDto::GetVersionId() const
{
    return m_versionId;
}

void UserFileVersionDto::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool UserFileVersionDto::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string UserFileVersionDto::GetResourceId() const
{
    return m_resourceId;
}

void UserFileVersionDto::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool UserFileVersionDto::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string UserFileVersionDto::GetVersionName() const
{
    return m_versionName;
}

void UserFileVersionDto::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool UserFileVersionDto::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string UserFileVersionDto::GetCreateTime() const
{
    return m_createTime;
}

void UserFileVersionDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserFileVersionDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserFileVersionDto::GetDescription() const
{
    return m_description;
}

void UserFileVersionDto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserFileVersionDto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserFileVersionDto::GetTaskId() const
{
    return m_taskId;
}

void UserFileVersionDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UserFileVersionDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string UserFileVersionDto::GetTaskVersionNum() const
{
    return m_taskVersionNum;
}

void UserFileVersionDto::SetTaskVersionNum(const string& _taskVersionNum)
{
    m_taskVersionNum = _taskVersionNum;
    m_taskVersionNumHasBeenSet = true;
}

bool UserFileVersionDto::TaskVersionNumHasBeenSet() const
{
    return m_taskVersionNumHasBeenSet;
}

string UserFileVersionDto::GetTaskVersionId() const
{
    return m_taskVersionId;
}

void UserFileVersionDto::SetTaskVersionId(const string& _taskVersionId)
{
    m_taskVersionId = _taskVersionId;
    m_taskVersionIdHasBeenSet = true;
}

bool UserFileVersionDto::TaskVersionIdHasBeenSet() const
{
    return m_taskVersionIdHasBeenSet;
}

string UserFileVersionDto::GetUserName() const
{
    return m_userName;
}

void UserFileVersionDto::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserFileVersionDto::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserFileVersionDto::GetUserUin() const
{
    return m_userUin;
}

void UserFileVersionDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool UserFileVersionDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string UserFileVersionDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void UserFileVersionDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool UserFileVersionDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string UserFileVersionDto::GetProjectId() const
{
    return m_projectId;
}

void UserFileVersionDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UserFileVersionDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UserFileVersionDto::GetAppId() const
{
    return m_appId;
}

void UserFileVersionDto::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UserFileVersionDto::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UserFileVersionDto::GetRemotePath() const
{
    return m_remotePath;
}

void UserFileVersionDto::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool UserFileVersionDto::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string UserFileVersionDto::GetObjectRegion() const
{
    return m_objectRegion;
}

void UserFileVersionDto::SetObjectRegion(const string& _objectRegion)
{
    m_objectRegion = _objectRegion;
    m_objectRegionHasBeenSet = true;
}

bool UserFileVersionDto::ObjectRegionHasBeenSet() const
{
    return m_objectRegionHasBeenSet;
}

string UserFileVersionDto::GetObjectBucketName() const
{
    return m_objectBucketName;
}

void UserFileVersionDto::SetObjectBucketName(const string& _objectBucketName)
{
    m_objectBucketName = _objectBucketName;
    m_objectBucketNameHasBeenSet = true;
}

bool UserFileVersionDto::ObjectBucketNameHasBeenSet() const
{
    return m_objectBucketNameHasBeenSet;
}

