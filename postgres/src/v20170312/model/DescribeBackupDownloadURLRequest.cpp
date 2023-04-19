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

#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeBackupDownloadURLRequest::DescribeBackupDownloadURLRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_uRLExpireTimeHasBeenSet(false),
    m_backupDownloadRestrictionHasBeenSet(false)
{
}

string DescribeBackupDownloadURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uRLExpireTime, allocator);
    }

    if (m_backupDownloadRestrictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDownloadRestriction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupDownloadRestriction.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupDownloadURLRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void DescribeBackupDownloadURLRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool DescribeBackupDownloadURLRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string DescribeBackupDownloadURLRequest::GetBackupType() const
{
    return m_backupType;
}

void DescribeBackupDownloadURLRequest::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool DescribeBackupDownloadURLRequest::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string DescribeBackupDownloadURLRequest::GetBackupId() const
{
    return m_backupId;
}

void DescribeBackupDownloadURLRequest::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool DescribeBackupDownloadURLRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

uint64_t DescribeBackupDownloadURLRequest::GetURLExpireTime() const
{
    return m_uRLExpireTime;
}

void DescribeBackupDownloadURLRequest::SetURLExpireTime(const uint64_t& _uRLExpireTime)
{
    m_uRLExpireTime = _uRLExpireTime;
    m_uRLExpireTimeHasBeenSet = true;
}

bool DescribeBackupDownloadURLRequest::URLExpireTimeHasBeenSet() const
{
    return m_uRLExpireTimeHasBeenSet;
}

BackupDownloadRestriction DescribeBackupDownloadURLRequest::GetBackupDownloadRestriction() const
{
    return m_backupDownloadRestriction;
}

void DescribeBackupDownloadURLRequest::SetBackupDownloadRestriction(const BackupDownloadRestriction& _backupDownloadRestriction)
{
    m_backupDownloadRestriction = _backupDownloadRestriction;
    m_backupDownloadRestrictionHasBeenSet = true;
}

bool DescribeBackupDownloadURLRequest::BackupDownloadRestrictionHasBeenSet() const
{
    return m_backupDownloadRestrictionHasBeenSet;
}


