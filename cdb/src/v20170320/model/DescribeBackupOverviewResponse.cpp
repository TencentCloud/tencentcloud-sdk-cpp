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

#include <tencentcloud/cdb/v20170320/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeBackupOverviewResponse::DescribeBackupOverviewResponse() :
    m_backupCountHasBeenSet(false),
    m_backupVolumeHasBeenSet(false),
    m_billingVolumeHasBeenSet(false),
    m_freeVolumeHasBeenSet(false),
    m_remoteBackupVolumeHasBeenSet(false),
    m_backupArchiveVolumeHasBeenSet(false),
    m_backupStandbyVolumeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupOverviewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BackupCount") && !rsp["BackupCount"].IsNull())
    {
        if (!rsp["BackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = rsp["BackupCount"].GetInt64();
        m_backupCountHasBeenSet = true;
    }

    if (rsp.HasMember("BackupVolume") && !rsp["BackupVolume"].IsNull())
    {
        if (!rsp["BackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupVolume = rsp["BackupVolume"].GetInt64();
        m_backupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BillingVolume") && !rsp["BillingVolume"].IsNull())
    {
        if (!rsp["BillingVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillingVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingVolume = rsp["BillingVolume"].GetInt64();
        m_billingVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("FreeVolume") && !rsp["FreeVolume"].IsNull())
    {
        if (!rsp["FreeVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FreeVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeVolume = rsp["FreeVolume"].GetInt64();
        m_freeVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBackupVolume") && !rsp["RemoteBackupVolume"].IsNull())
    {
        if (!rsp["RemoteBackupVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBackupVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBackupVolume = rsp["RemoteBackupVolume"].GetInt64();
        m_remoteBackupVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupArchiveVolume") && !rsp["BackupArchiveVolume"].IsNull())
    {
        if (!rsp["BackupArchiveVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupArchiveVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupArchiveVolume = rsp["BackupArchiveVolume"].GetInt64();
        m_backupArchiveVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupStandbyVolume") && !rsp["BackupStandbyVolume"].IsNull())
    {
        if (!rsp["BackupStandbyVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStandbyVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStandbyVolume = rsp["BackupStandbyVolume"].GetInt64();
        m_backupStandbyVolumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_backupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupVolume, allocator);
    }

    if (m_billingVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingVolume, allocator);
    }

    if (m_freeVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeVolume, allocator);
    }

    if (m_remoteBackupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteBackupVolume, allocator);
    }

    if (m_backupArchiveVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupArchiveVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupArchiveVolume, allocator);
    }

    if (m_backupStandbyVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStandbyVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStandbyVolume, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBackupOverviewResponse::GetBackupCount() const
{
    return m_backupCount;
}

bool DescribeBackupOverviewResponse::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetBackupVolume() const
{
    return m_backupVolume;
}

bool DescribeBackupOverviewResponse::BackupVolumeHasBeenSet() const
{
    return m_backupVolumeHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetBillingVolume() const
{
    return m_billingVolume;
}

bool DescribeBackupOverviewResponse::BillingVolumeHasBeenSet() const
{
    return m_billingVolumeHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetFreeVolume() const
{
    return m_freeVolume;
}

bool DescribeBackupOverviewResponse::FreeVolumeHasBeenSet() const
{
    return m_freeVolumeHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetRemoteBackupVolume() const
{
    return m_remoteBackupVolume;
}

bool DescribeBackupOverviewResponse::RemoteBackupVolumeHasBeenSet() const
{
    return m_remoteBackupVolumeHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetBackupArchiveVolume() const
{
    return m_backupArchiveVolume;
}

bool DescribeBackupOverviewResponse::BackupArchiveVolumeHasBeenSet() const
{
    return m_backupArchiveVolumeHasBeenSet;
}

int64_t DescribeBackupOverviewResponse::GetBackupStandbyVolume() const
{
    return m_backupStandbyVolume;
}

bool DescribeBackupOverviewResponse::BackupStandbyVolumeHasBeenSet() const
{
    return m_backupStandbyVolumeHasBeenSet;
}


