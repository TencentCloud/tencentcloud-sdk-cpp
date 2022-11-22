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

#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotRollbackTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeSnapshotRollbackTaskResponse::DescribeSnapshotRollbackTaskResponse() :
    m_domainHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_createdOnHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSnapshotRollbackTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotId") && !rsp["SnapshotId"].IsNull())
    {
        if (!rsp["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(rsp["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordCount") && !rsp["RecordCount"].IsNull())
    {
        if (!rsp["RecordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = rsp["RecordCount"].GetUint64();
        m_recordCountHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedOn") && !rsp["CreatedOn"].IsNull())
    {
        if (!rsp["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(rsp["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSnapshotRollbackTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
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


string DescribeSnapshotRollbackTaskResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeSnapshotRollbackTaskResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeSnapshotRollbackTaskResponse::GetSnapshotId() const
{
    return m_snapshotId;
}

bool DescribeSnapshotRollbackTaskResponse::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string DescribeSnapshotRollbackTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSnapshotRollbackTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeSnapshotRollbackTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeSnapshotRollbackTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeSnapshotRollbackTaskResponse::GetRecordCount() const
{
    return m_recordCount;
}

bool DescribeSnapshotRollbackTaskResponse::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string DescribeSnapshotRollbackTaskResponse::GetCreatedOn() const
{
    return m_createdOn;
}

bool DescribeSnapshotRollbackTaskResponse::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}


