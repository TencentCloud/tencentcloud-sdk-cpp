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

#include <tencentcloud/wedata/v20210820/model/PathTreeNodeParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

PathTreeNodeParams::PathTreeNodeParams() :
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_fileExtensionTypeHasBeenSet(false),
    m_updateUserHasBeenSet(false)
{
}

CoreInternalOutcome PathTreeNodeParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathTreeNodeParams.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathTreeNodeParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtensionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtensionType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

}


string PathTreeNodeParams::GetLocalPath() const
{
    return m_localPath;
}

void PathTreeNodeParams::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool PathTreeNodeParams::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string PathTreeNodeParams::GetRemotePath() const
{
    return m_remotePath;
}

void PathTreeNodeParams::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool PathTreeNodeParams::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string PathTreeNodeParams::GetResourceId() const
{
    return m_resourceId;
}

void PathTreeNodeParams::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool PathTreeNodeParams::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t PathTreeNodeParams::GetUpdateTime() const
{
    return m_updateTime;
}

void PathTreeNodeParams::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PathTreeNodeParams::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PathTreeNodeParams::GetUpdateUserId() const
{
    return m_updateUserId;
}

void PathTreeNodeParams::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool PathTreeNodeParams::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string PathTreeNodeParams::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void PathTreeNodeParams::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool PathTreeNodeParams::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

string PathTreeNodeParams::GetUpdateUser() const
{
    return m_updateUser;
}

void PathTreeNodeParams::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool PathTreeNodeParams::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

