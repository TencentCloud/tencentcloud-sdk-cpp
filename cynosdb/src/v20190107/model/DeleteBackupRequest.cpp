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

#include <tencentcloud/cynosdb/v20190107/model/DeleteBackupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DeleteBackupRequest::DeleteBackupRequest() :
    m_clusterIdHasBeenSet(false),
    m_snapshotIdListHasBeenSet(false),
    m_backupIdsHasBeenSet(false)
{
}

string DeleteBackupRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteBackupRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteBackupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteBackupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<int64_t> DeleteBackupRequest::GetSnapshotIdList() const
{
    return m_snapshotIdList;
}

void DeleteBackupRequest::SetSnapshotIdList(const vector<int64_t>& _snapshotIdList)
{
    m_snapshotIdList = _snapshotIdList;
    m_snapshotIdListHasBeenSet = true;
}

bool DeleteBackupRequest::SnapshotIdListHasBeenSet() const
{
    return m_snapshotIdListHasBeenSet;
}

vector<int64_t> DeleteBackupRequest::GetBackupIds() const
{
    return m_backupIds;
}

void DeleteBackupRequest::SetBackupIds(const vector<int64_t>& _backupIds)
{
    m_backupIds = _backupIds;
    m_backupIdsHasBeenSet = true;
}

bool DeleteBackupRequest::BackupIdsHasBeenSet() const
{
    return m_backupIdsHasBeenSet;
}


