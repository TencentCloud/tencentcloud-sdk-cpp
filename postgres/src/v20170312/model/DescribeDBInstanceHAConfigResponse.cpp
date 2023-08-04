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

#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceHAConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeDBInstanceHAConfigResponse::DescribeDBInstanceHAConfigResponse() :
    m_syncModeHasBeenSet(false),
    m_maxStandbyLatencyHasBeenSet(false),
    m_maxStandbyLagHasBeenSet(false),
    m_maxSyncStandbyLatencyHasBeenSet(false),
    m_maxSyncStandbyLagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceHAConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SyncMode") && !rsp["SyncMode"].IsNull())
    {
        if (!rsp["SyncMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = string(rsp["SyncMode"].GetString());
        m_syncModeHasBeenSet = true;
    }

    if (rsp.HasMember("MaxStandbyLatency") && !rsp["MaxStandbyLatency"].IsNull())
    {
        if (!rsp["MaxStandbyLatency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxStandbyLatency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStandbyLatency = rsp["MaxStandbyLatency"].GetUint64();
        m_maxStandbyLatencyHasBeenSet = true;
    }

    if (rsp.HasMember("MaxStandbyLag") && !rsp["MaxStandbyLag"].IsNull())
    {
        if (!rsp["MaxStandbyLag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxStandbyLag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStandbyLag = rsp["MaxStandbyLag"].GetUint64();
        m_maxStandbyLagHasBeenSet = true;
    }

    if (rsp.HasMember("MaxSyncStandbyLatency") && !rsp["MaxSyncStandbyLatency"].IsNull())
    {
        if (!rsp["MaxSyncStandbyLatency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxSyncStandbyLatency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSyncStandbyLatency = rsp["MaxSyncStandbyLatency"].GetUint64();
        m_maxSyncStandbyLatencyHasBeenSet = true;
    }

    if (rsp.HasMember("MaxSyncStandbyLag") && !rsp["MaxSyncStandbyLag"].IsNull())
    {
        if (!rsp["MaxSyncStandbyLag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxSyncStandbyLag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSyncStandbyLag = rsp["MaxSyncStandbyLag"].GetUint64();
        m_maxSyncStandbyLagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceHAConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncMode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxStandbyLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStandbyLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStandbyLatency, allocator);
    }

    if (m_maxStandbyLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStandbyLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStandbyLag, allocator);
    }

    if (m_maxSyncStandbyLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSyncStandbyLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSyncStandbyLatency, allocator);
    }

    if (m_maxSyncStandbyLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSyncStandbyLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSyncStandbyLag, allocator);
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


string DescribeDBInstanceHAConfigResponse::GetSyncMode() const
{
    return m_syncMode;
}

bool DescribeDBInstanceHAConfigResponse::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

uint64_t DescribeDBInstanceHAConfigResponse::GetMaxStandbyLatency() const
{
    return m_maxStandbyLatency;
}

bool DescribeDBInstanceHAConfigResponse::MaxStandbyLatencyHasBeenSet() const
{
    return m_maxStandbyLatencyHasBeenSet;
}

uint64_t DescribeDBInstanceHAConfigResponse::GetMaxStandbyLag() const
{
    return m_maxStandbyLag;
}

bool DescribeDBInstanceHAConfigResponse::MaxStandbyLagHasBeenSet() const
{
    return m_maxStandbyLagHasBeenSet;
}

uint64_t DescribeDBInstanceHAConfigResponse::GetMaxSyncStandbyLatency() const
{
    return m_maxSyncStandbyLatency;
}

bool DescribeDBInstanceHAConfigResponse::MaxSyncStandbyLatencyHasBeenSet() const
{
    return m_maxSyncStandbyLatencyHasBeenSet;
}

uint64_t DescribeDBInstanceHAConfigResponse::GetMaxSyncStandbyLag() const
{
    return m_maxSyncStandbyLag;
}

bool DescribeDBInstanceHAConfigResponse::MaxSyncStandbyLagHasBeenSet() const
{
    return m_maxSyncStandbyLagHasBeenSet;
}


