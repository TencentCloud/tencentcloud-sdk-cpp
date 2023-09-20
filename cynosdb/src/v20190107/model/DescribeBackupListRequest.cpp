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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupListRequest::DescribeBackupListRequest() :
    m_clusterIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_backupIdsHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_snapShotTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fileNamesHasBeenSet(false),
    m_backupNamesHasBeenSet(false),
    m_snapshotIdListHasBeenSet(false),
    m_backupRegionHasBeenSet(false),
    m_isCrossRegionsBackupHasBeenSet(false)
{
}

string DescribeBackupListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupIds.begin(); itr != m_backupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_snapShotTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapShotType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapShotType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileNames.begin(); itr != m_fileNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupNames.begin(); itr != m_backupNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_snapshotIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_snapshotIdList.begin(); itr != m_snapshotIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_backupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isCrossRegionsBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCrossRegionsBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isCrossRegionsBackup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupListRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBackupListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBackupListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeBackupListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBackupListRequest::GetDbType() const
{
    return m_dbType;
}

void DescribeBackupListRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DescribeBackupListRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

vector<int64_t> DescribeBackupListRequest::GetBackupIds() const
{
    return m_backupIds;
}

void DescribeBackupListRequest::SetBackupIds(const vector<int64_t>& _backupIds)
{
    m_backupIds = _backupIds;
    m_backupIdsHasBeenSet = true;
}

bool DescribeBackupListRequest::BackupIdsHasBeenSet() const
{
    return m_backupIdsHasBeenSet;
}

string DescribeBackupListRequest::GetBackupType() const
{
    return m_backupType;
}

void DescribeBackupListRequest::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool DescribeBackupListRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string DescribeBackupListRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void DescribeBackupListRequest::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool DescribeBackupListRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string DescribeBackupListRequest::GetSnapShotType() const
{
    return m_snapShotType;
}

void DescribeBackupListRequest::SetSnapShotType(const string& _snapShotType)
{
    m_snapShotType = _snapShotType;
    m_snapShotTypeHasBeenSet = true;
}

bool DescribeBackupListRequest::SnapShotTypeHasBeenSet() const
{
    return m_snapShotTypeHasBeenSet;
}

string DescribeBackupListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBackupListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBackupListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBackupListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBackupListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBackupListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeBackupListRequest::GetFileNames() const
{
    return m_fileNames;
}

void DescribeBackupListRequest::SetFileNames(const vector<string>& _fileNames)
{
    m_fileNames = _fileNames;
    m_fileNamesHasBeenSet = true;
}

bool DescribeBackupListRequest::FileNamesHasBeenSet() const
{
    return m_fileNamesHasBeenSet;
}

vector<string> DescribeBackupListRequest::GetBackupNames() const
{
    return m_backupNames;
}

void DescribeBackupListRequest::SetBackupNames(const vector<string>& _backupNames)
{
    m_backupNames = _backupNames;
    m_backupNamesHasBeenSet = true;
}

bool DescribeBackupListRequest::BackupNamesHasBeenSet() const
{
    return m_backupNamesHasBeenSet;
}

vector<int64_t> DescribeBackupListRequest::GetSnapshotIdList() const
{
    return m_snapshotIdList;
}

void DescribeBackupListRequest::SetSnapshotIdList(const vector<int64_t>& _snapshotIdList)
{
    m_snapshotIdList = _snapshotIdList;
    m_snapshotIdListHasBeenSet = true;
}

bool DescribeBackupListRequest::SnapshotIdListHasBeenSet() const
{
    return m_snapshotIdListHasBeenSet;
}

string DescribeBackupListRequest::GetBackupRegion() const
{
    return m_backupRegion;
}

void DescribeBackupListRequest::SetBackupRegion(const string& _backupRegion)
{
    m_backupRegion = _backupRegion;
    m_backupRegionHasBeenSet = true;
}

bool DescribeBackupListRequest::BackupRegionHasBeenSet() const
{
    return m_backupRegionHasBeenSet;
}

string DescribeBackupListRequest::GetIsCrossRegionsBackup() const
{
    return m_isCrossRegionsBackup;
}

void DescribeBackupListRequest::SetIsCrossRegionsBackup(const string& _isCrossRegionsBackup)
{
    m_isCrossRegionsBackup = _isCrossRegionsBackup;
    m_isCrossRegionsBackupHasBeenSet = true;
}

bool DescribeBackupListRequest::IsCrossRegionsBackupHasBeenSet() const
{
    return m_isCrossRegionsBackupHasBeenSet;
}


