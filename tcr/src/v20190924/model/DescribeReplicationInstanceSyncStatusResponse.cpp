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

#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeReplicationInstanceSyncStatusResponse::DescribeReplicationInstanceSyncStatusResponse() :
    m_replicationStatusHasBeenSet(false),
    m_replicationTimeHasBeenSet(false),
    m_replicationLogHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReplicationInstanceSyncStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReplicationStatus") && !rsp["ReplicationStatus"].IsNull())
    {
        if (!rsp["ReplicationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationStatus = string(rsp["ReplicationStatus"].GetString());
        m_replicationStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ReplicationTime") && !rsp["ReplicationTime"].IsNull())
    {
        if (!rsp["ReplicationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationTime = string(rsp["ReplicationTime"].GetString());
        m_replicationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ReplicationLog") && !rsp["ReplicationLog"].IsNull())
    {
        if (!rsp["ReplicationLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_replicationLog.Deserialize(rsp["ReplicationLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_replicationLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeReplicationInstanceSyncStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_replicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_replicationLog.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeReplicationInstanceSyncStatusResponse::GetReplicationStatus() const
{
    return m_replicationStatus;
}

bool DescribeReplicationInstanceSyncStatusResponse::ReplicationStatusHasBeenSet() const
{
    return m_replicationStatusHasBeenSet;
}

string DescribeReplicationInstanceSyncStatusResponse::GetReplicationTime() const
{
    return m_replicationTime;
}

bool DescribeReplicationInstanceSyncStatusResponse::ReplicationTimeHasBeenSet() const
{
    return m_replicationTimeHasBeenSet;
}

ReplicationLog DescribeReplicationInstanceSyncStatusResponse::GetReplicationLog() const
{
    return m_replicationLog;
}

bool DescribeReplicationInstanceSyncStatusResponse::ReplicationLogHasBeenSet() const
{
    return m_replicationLogHasBeenSet;
}


