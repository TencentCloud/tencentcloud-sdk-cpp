/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBackupDownloadUrlRequest::DescribeBackupDownloadUrlRequest() :
    m_clusterIdHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_downloadRestrictionHasBeenSet(false)
{
}

string DescribeBackupDownloadUrlRequest::ToJsonString() const
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

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupId, allocator);
    }

    if (m_downloadRestrictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadRestriction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downloadRestriction.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupDownloadUrlRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBackupDownloadUrlRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBackupDownloadUrlRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeBackupDownloadUrlRequest::GetBackupId() const
{
    return m_backupId;
}

void DescribeBackupDownloadUrlRequest::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool DescribeBackupDownloadUrlRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

BackupLimitRestriction DescribeBackupDownloadUrlRequest::GetDownloadRestriction() const
{
    return m_downloadRestriction;
}

void DescribeBackupDownloadUrlRequest::SetDownloadRestriction(const BackupLimitRestriction& _downloadRestriction)
{
    m_downloadRestriction = _downloadRestriction;
    m_downloadRestrictionHasBeenSet = true;
}

bool DescribeBackupDownloadUrlRequest::DownloadRestrictionHasBeenSet() const
{
    return m_downloadRestrictionHasBeenSet;
}


