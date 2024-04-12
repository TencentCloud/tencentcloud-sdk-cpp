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

#include <tencentcloud/cdb/v20170320/model/DescribeClusterInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeClusterInfoResponse::DescribeClusterInfoResponse() :
    m_clusterNameHasBeenSet(false),
    m_readWriteAddressHasBeenSet(false),
    m_readOnlyAddressHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_readonlyLimitHasBeenSet(false),
    m_nodeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ReadWriteAddress") && !rsp["ReadWriteAddress"].IsNull())
    {
        if (!rsp["ReadWriteAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReadWriteAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readWriteAddress.Deserialize(rsp["ReadWriteAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readWriteAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ReadOnlyAddress") && !rsp["ReadOnlyAddress"].IsNull())
    {
        if (!rsp["ReadOnlyAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReadOnlyAddress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReadOnlyAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readOnlyAddress.push_back(item);
        }
        m_readOnlyAddressHasBeenSet = true;
    }

    if (rsp.HasMember("NodeList") && !rsp["NodeList"].IsNull())
    {
        if (!rsp["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeList.push_back(item);
        }
        m_nodeListHasBeenSet = true;
    }

    if (rsp.HasMember("ReadonlyLimit") && !rsp["ReadonlyLimit"].IsNull())
    {
        if (!rsp["ReadonlyLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadonlyLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readonlyLimit = rsp["ReadonlyLimit"].GetInt64();
        m_readonlyLimitHasBeenSet = true;
    }

    if (rsp.HasMember("NodeCount") && !rsp["NodeCount"].IsNull())
    {
        if (!rsp["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = rsp["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_readWriteAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readWriteAddress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readOnlyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readOnlyAddress.begin(); itr != m_readOnlyAddress.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_readonlyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readonlyLimit, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
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


string DescribeClusterInfoResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeClusterInfoResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

AddressInfo DescribeClusterInfoResponse::GetReadWriteAddress() const
{
    return m_readWriteAddress;
}

bool DescribeClusterInfoResponse::ReadWriteAddressHasBeenSet() const
{
    return m_readWriteAddressHasBeenSet;
}

vector<AddressInfo> DescribeClusterInfoResponse::GetReadOnlyAddress() const
{
    return m_readOnlyAddress;
}

bool DescribeClusterInfoResponse::ReadOnlyAddressHasBeenSet() const
{
    return m_readOnlyAddressHasBeenSet;
}

vector<ClusterNodeInfo> DescribeClusterInfoResponse::GetNodeList() const
{
    return m_nodeList;
}

bool DescribeClusterInfoResponse::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

int64_t DescribeClusterInfoResponse::GetReadonlyLimit() const
{
    return m_readonlyLimit;
}

bool DescribeClusterInfoResponse::ReadonlyLimitHasBeenSet() const
{
    return m_readonlyLimitHasBeenSet;
}

int64_t DescribeClusterInfoResponse::GetNodeCount() const
{
    return m_nodeCount;
}

bool DescribeClusterInfoResponse::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}


