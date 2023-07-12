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

#include <tencentcloud/cfs/v20190719/model/SnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

SnapshotInfo::SnapshotInfo() :
    m_creationTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_aliveDayHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("AliveDay") && !value["AliveDay"].IsNull())
    {
        if (!value["AliveDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.AliveDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveDay = value["AliveDay"].GetUint64();
        m_aliveDayHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(value["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("FsName") && !value["FsName"].IsNull())
    {
        if (!value["FsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(value["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SnapshotType") && !value["SnapshotType"].IsNull())
    {
        if (!value["SnapshotType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotType = string(value["SnapshotType"].GetString());
        m_snapshotTypeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotInfo.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_aliveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveDay, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_snapshotTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotType.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotInfo::GetCreationTime() const
{
    return m_creationTime;
}

void SnapshotInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool SnapshotInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string SnapshotInfo::GetSnapshotName() const
{
    return m_snapshotName;
}

void SnapshotInfo::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool SnapshotInfo::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string SnapshotInfo::GetSnapshotId() const
{
    return m_snapshotId;
}

void SnapshotInfo::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SnapshotInfo::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string SnapshotInfo::GetStatus() const
{
    return m_status;
}

void SnapshotInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SnapshotInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SnapshotInfo::GetRegionName() const
{
    return m_regionName;
}

void SnapshotInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool SnapshotInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string SnapshotInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void SnapshotInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool SnapshotInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t SnapshotInfo::GetSize() const
{
    return m_size;
}

void SnapshotInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SnapshotInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t SnapshotInfo::GetAliveDay() const
{
    return m_aliveDay;
}

void SnapshotInfo::SetAliveDay(const uint64_t& _aliveDay)
{
    m_aliveDay = _aliveDay;
    m_aliveDayHasBeenSet = true;
}

bool SnapshotInfo::AliveDayHasBeenSet() const
{
    return m_aliveDayHasBeenSet;
}

uint64_t SnapshotInfo::GetPercent() const
{
    return m_percent;
}

void SnapshotInfo::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool SnapshotInfo::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

uint64_t SnapshotInfo::GetAppId() const
{
    return m_appId;
}

void SnapshotInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SnapshotInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SnapshotInfo::GetDeleteTime() const
{
    return m_deleteTime;
}

void SnapshotInfo::SetDeleteTime(const string& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool SnapshotInfo::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

string SnapshotInfo::GetFsName() const
{
    return m_fsName;
}

void SnapshotInfo::SetFsName(const string& _fsName)
{
    m_fsName = _fsName;
    m_fsNameHasBeenSet = true;
}

bool SnapshotInfo::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

vector<TagInfo> SnapshotInfo::GetTags() const
{
    return m_tags;
}

void SnapshotInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SnapshotInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SnapshotInfo::GetSnapshotType() const
{
    return m_snapshotType;
}

void SnapshotInfo::SetSnapshotType(const string& _snapshotType)
{
    m_snapshotType = _snapshotType;
    m_snapshotTypeHasBeenSet = true;
}

bool SnapshotInfo::SnapshotTypeHasBeenSet() const
{
    return m_snapshotTypeHasBeenSet;
}

string SnapshotInfo::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void SnapshotInfo::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool SnapshotInfo::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

