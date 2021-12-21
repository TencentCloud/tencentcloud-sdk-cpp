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

#include <tencentcloud/tdmq/v20200217/model/DescribePublisherSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribePublisherSummaryResponse::DescribePublisherSummaryResponse() :
    m_msgRateInHasBeenSet(false),
    m_msgThroughputInHasBeenSet(false),
    m_publisherCountHasBeenSet(false),
    m_storageSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePublisherSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MsgRateIn") && !rsp["MsgRateIn"].IsNull())
    {
        if (!rsp["MsgRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateIn = rsp["MsgRateIn"].GetDouble();
        m_msgRateInHasBeenSet = true;
    }

    if (rsp.HasMember("MsgThroughputIn") && !rsp["MsgThroughputIn"].IsNull())
    {
        if (!rsp["MsgThroughputIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MsgThroughputIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputIn = rsp["MsgThroughputIn"].GetDouble();
        m_msgThroughputInHasBeenSet = true;
    }

    if (rsp.HasMember("PublisherCount") && !rsp["PublisherCount"].IsNull())
    {
        if (!rsp["PublisherCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublisherCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publisherCount = rsp["PublisherCount"].GetInt64();
        m_publisherCountHasBeenSet = true;
    }

    if (rsp.HasMember("StorageSize") && !rsp["StorageSize"].IsNull())
    {
        if (!rsp["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = rsp["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePublisherSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_msgRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRateIn, allocator);
    }

    if (m_msgThroughputInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgThroughputIn, allocator);
    }

    if (m_publisherCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublisherCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publisherCount, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
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


double DescribePublisherSummaryResponse::GetMsgRateIn() const
{
    return m_msgRateIn;
}

bool DescribePublisherSummaryResponse::MsgRateInHasBeenSet() const
{
    return m_msgRateInHasBeenSet;
}

double DescribePublisherSummaryResponse::GetMsgThroughputIn() const
{
    return m_msgThroughputIn;
}

bool DescribePublisherSummaryResponse::MsgThroughputInHasBeenSet() const
{
    return m_msgThroughputInHasBeenSet;
}

int64_t DescribePublisherSummaryResponse::GetPublisherCount() const
{
    return m_publisherCount;
}

bool DescribePublisherSummaryResponse::PublisherCountHasBeenSet() const
{
    return m_publisherCountHasBeenSet;
}

int64_t DescribePublisherSummaryResponse::GetStorageSize() const
{
    return m_storageSize;
}

bool DescribePublisherSummaryResponse::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}


