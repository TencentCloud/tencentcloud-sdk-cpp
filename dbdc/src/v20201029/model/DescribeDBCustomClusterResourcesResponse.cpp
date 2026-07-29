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

#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterResourcesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeDBCustomClusterResourcesResponse::DescribeDBCustomClusterResourcesResponse() :
    m_nodeCountHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_allocatableHasBeenSet(false),
    m_requestsHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBCustomClusterResourcesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NodeCount") && !rsp["NodeCount"].IsNull())
    {
        if (!rsp["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = rsp["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("Capacity") && !rsp["Capacity"].IsNull())
    {
        if (!rsp["Capacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Capacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capacity.Deserialize(rsp["Capacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capacityHasBeenSet = true;
    }

    if (rsp.HasMember("Allocatable") && !rsp["Allocatable"].IsNull())
    {
        if (!rsp["Allocatable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Allocatable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_allocatable.Deserialize(rsp["Allocatable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_allocatableHasBeenSet = true;
    }

    if (rsp.HasMember("Requests") && !rsp["Requests"].IsNull())
    {
        if (!rsp["Requests"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Requests` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requests.Deserialize(rsp["Requests"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestsHasBeenSet = true;
    }

    if (rsp.HasMember("Limits") && !rsp["Limits"].IsNull())
    {
        if (!rsp["Limits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Limits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limits.Deserialize(rsp["Limits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitsHasBeenSet = true;
    }

    if (rsp.HasMember("Available") && !rsp["Available"].IsNull())
    {
        if (!rsp["Available"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Available` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_available.Deserialize(rsp["Available"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBCustomClusterResourcesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allocatableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allocatable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_allocatable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requests.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limits.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_available.ToJsonObject(value[key.c_str()], allocator);
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


uint64_t DescribeDBCustomClusterResourcesResponse::GetNodeCount() const
{
    return m_nodeCount;
}

bool DescribeDBCustomClusterResourcesResponse::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

MetaResource DescribeDBCustomClusterResourcesResponse::GetCapacity() const
{
    return m_capacity;
}

bool DescribeDBCustomClusterResourcesResponse::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

MetaResource DescribeDBCustomClusterResourcesResponse::GetAllocatable() const
{
    return m_allocatable;
}

bool DescribeDBCustomClusterResourcesResponse::AllocatableHasBeenSet() const
{
    return m_allocatableHasBeenSet;
}

MetaResource DescribeDBCustomClusterResourcesResponse::GetRequests() const
{
    return m_requests;
}

bool DescribeDBCustomClusterResourcesResponse::RequestsHasBeenSet() const
{
    return m_requestsHasBeenSet;
}

MetaResource DescribeDBCustomClusterResourcesResponse::GetLimits() const
{
    return m_limits;
}

bool DescribeDBCustomClusterResourcesResponse::LimitsHasBeenSet() const
{
    return m_limitsHasBeenSet;
}

MetaResource DescribeDBCustomClusterResourcesResponse::GetAvailable() const
{
    return m_available;
}

bool DescribeDBCustomClusterResourcesResponse::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}


