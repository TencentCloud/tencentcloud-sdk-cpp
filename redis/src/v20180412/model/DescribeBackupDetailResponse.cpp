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

#include <tencentcloud/redis/v20180412/model/DescribeBackupDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeBackupDetailResponse::DescribeBackupDetailResponse() :
    m_backupIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_replicasNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackupId") && !rsp["BackupId"].IsNull())
    {
        if (!rsp["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(rsp["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackupType") && !rsp["BackupType"].IsNull())
    {
        if (!rsp["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(rsp["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("Locked") && !rsp["Locked"].IsNull())
    {
        if (!rsp["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = rsp["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (rsp.HasMember("BackupSize") && !rsp["BackupSize"].IsNull())
    {
        if (!rsp["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = rsp["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = rsp["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MemSize") && !rsp["MemSize"].IsNull())
    {
        if (!rsp["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = rsp["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (rsp.HasMember("ShardNum") && !rsp["ShardNum"].IsNull())
    {
        if (!rsp["ShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = rsp["ShardNum"].GetInt64();
        m_shardNumHasBeenSet = true;
    }

    if (rsp.HasMember("ReplicasNum") && !rsp["ReplicasNum"].IsNull())
    {
        if (!rsp["ReplicasNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicasNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicasNum = rsp["ReplicasNum"].GetInt64();
        m_replicasNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_replicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicasNum, allocator);
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


string DescribeBackupDetailResponse::GetBackupId() const
{
    return m_backupId;
}

bool DescribeBackupDetailResponse::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string DescribeBackupDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeBackupDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBackupDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeBackupDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBackupDetailResponse::GetBackupType() const
{
    return m_backupType;
}

bool DescribeBackupDetailResponse::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBackupDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeBackupDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeBackupDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetLocked() const
{
    return m_locked;
}

bool DescribeBackupDetailResponse::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetBackupSize() const
{
    return m_backupSize;
}

bool DescribeBackupDetailResponse::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeBackupDetailResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetMemSize() const
{
    return m_memSize;
}

bool DescribeBackupDetailResponse::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetShardNum() const
{
    return m_shardNum;
}

bool DescribeBackupDetailResponse::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t DescribeBackupDetailResponse::GetReplicasNum() const
{
    return m_replicasNum;
}

bool DescribeBackupDetailResponse::ReplicasNumHasBeenSet() const
{
    return m_replicasNumHasBeenSet;
}


