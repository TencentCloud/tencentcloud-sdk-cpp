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

#include <tencentcloud/chdfs/v20201112/model/MountPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

MountPoint::MountPoint() :
    m_mountPointIdHasBeenSet(false),
    m_mountPointNameHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accessGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome MountPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MountPointId") && !value["MountPointId"].IsNull())
    {
        if (!value["MountPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPoint.MountPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPointId = string(value["MountPointId"].GetString());
        m_mountPointIdHasBeenSet = true;
    }

    if (value.HasMember("MountPointName") && !value["MountPointName"].IsNull())
    {
        if (!value["MountPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPoint.MountPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPointName = string(value["MountPointName"].GetString());
        m_mountPointNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPoint.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MountPoint.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPoint.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AccessGroupIds") && !value["AccessGroupIds"].IsNull())
    {
        if (!value["AccessGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MountPoint.AccessGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessGroupIds.push_back((*itr).GetString());
        }
        m_accessGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mountPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessGroupIds.begin(); itr != m_accessGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MountPoint::GetMountPointId() const
{
    return m_mountPointId;
}

void MountPoint::SetMountPointId(const string& _mountPointId)
{
    m_mountPointId = _mountPointId;
    m_mountPointIdHasBeenSet = true;
}

bool MountPoint::MountPointIdHasBeenSet() const
{
    return m_mountPointIdHasBeenSet;
}

string MountPoint::GetMountPointName() const
{
    return m_mountPointName;
}

void MountPoint::SetMountPointName(const string& _mountPointName)
{
    m_mountPointName = _mountPointName;
    m_mountPointNameHasBeenSet = true;
}

bool MountPoint::MountPointNameHasBeenSet() const
{
    return m_mountPointNameHasBeenSet;
}

string MountPoint::GetFileSystemId() const
{
    return m_fileSystemId;
}

void MountPoint::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool MountPoint::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t MountPoint::GetStatus() const
{
    return m_status;
}

void MountPoint::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MountPoint::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MountPoint::GetCreateTime() const
{
    return m_createTime;
}

void MountPoint::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MountPoint::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> MountPoint::GetAccessGroupIds() const
{
    return m_accessGroupIds;
}

void MountPoint::SetAccessGroupIds(const vector<string>& _accessGroupIds)
{
    m_accessGroupIds = _accessGroupIds;
    m_accessGroupIdsHasBeenSet = true;
}

bool MountPoint::AccessGroupIdsHasBeenSet() const
{
    return m_accessGroupIdsHasBeenSet;
}

