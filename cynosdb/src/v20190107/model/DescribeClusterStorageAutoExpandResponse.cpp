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

#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterStorageAutoExpandResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeClusterStorageAutoExpandResponse::DescribeClusterStorageAutoExpandResponse() :
    m_storageUsageThresholdHasBeenSet(false),
    m_expandStepHasBeenSet(false),
    m_maxStorageLimitHasBeenSet(false),
    m_storageAutoExpandHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterStorageAutoExpandResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StorageUsageThreshold") && !rsp["StorageUsageThreshold"].IsNull())
    {
        if (!rsp["StorageUsageThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageUsageThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsageThreshold = rsp["StorageUsageThreshold"].GetInt64();
        m_storageUsageThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("ExpandStep") && !rsp["ExpandStep"].IsNull())
    {
        if (!rsp["ExpandStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpandStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandStep = rsp["ExpandStep"].GetInt64();
        m_expandStepHasBeenSet = true;
    }

    if (rsp.HasMember("MaxStorageLimit") && !rsp["MaxStorageLimit"].IsNull())
    {
        if (!rsp["MaxStorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxStorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageLimit = rsp["MaxStorageLimit"].GetInt64();
        m_maxStorageLimitHasBeenSet = true;
    }

    if (rsp.HasMember("StorageAutoExpand") && !rsp["StorageAutoExpand"].IsNull())
    {
        if (!rsp["StorageAutoExpand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageAutoExpand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageAutoExpand = string(rsp["StorageAutoExpand"].GetString());
        m_storageAutoExpandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterStorageAutoExpandResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_storageUsageThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUsageThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsageThreshold, allocator);
    }

    if (m_expandStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandStep, allocator);
    }

    if (m_maxStorageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageLimit, allocator);
    }

    if (m_storageAutoExpandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageAutoExpand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageAutoExpand.c_str(), allocator).Move(), allocator);
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


int64_t DescribeClusterStorageAutoExpandResponse::GetStorageUsageThreshold() const
{
    return m_storageUsageThreshold;
}

bool DescribeClusterStorageAutoExpandResponse::StorageUsageThresholdHasBeenSet() const
{
    return m_storageUsageThresholdHasBeenSet;
}

int64_t DescribeClusterStorageAutoExpandResponse::GetExpandStep() const
{
    return m_expandStep;
}

bool DescribeClusterStorageAutoExpandResponse::ExpandStepHasBeenSet() const
{
    return m_expandStepHasBeenSet;
}

int64_t DescribeClusterStorageAutoExpandResponse::GetMaxStorageLimit() const
{
    return m_maxStorageLimit;
}

bool DescribeClusterStorageAutoExpandResponse::MaxStorageLimitHasBeenSet() const
{
    return m_maxStorageLimitHasBeenSet;
}

string DescribeClusterStorageAutoExpandResponse::GetStorageAutoExpand() const
{
    return m_storageAutoExpand;
}

bool DescribeClusterStorageAutoExpandResponse::StorageAutoExpandHasBeenSet() const
{
    return m_storageAutoExpandHasBeenSet;
}


