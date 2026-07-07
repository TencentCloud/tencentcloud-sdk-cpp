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

#include <tencentcloud/alb/v20251030/model/DescribeListenersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeListenersResponse::DescribeListenersResponse() :
    m_listenersHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeListenersResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Listeners") && !rsp["Listeners"].IsNull())
    {
        if (!rsp["Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Listeners` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListenerOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listeners.push_back(item);
        }
        m_listenersHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancerId") && !rsp["LoadBalancerId"].IsNull())
    {
        if (!rsp["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(rsp["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (rsp.HasMember("MaxResults") && !rsp["MaxResults"].IsNull())
    {
        if (!rsp["MaxResults"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxResults` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResults = rsp["MaxResults"].GetUint64();
        m_maxResultsHasBeenSet = true;
    }

    if (rsp.HasMember("NextToken") && !rsp["NextToken"].IsNull())
    {
        if (!rsp["NextToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(rsp["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeListenersResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_listenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listeners.begin(); itr != m_listeners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


vector<ListenerOutput> DescribeListenersResponse::GetListeners() const
{
    return m_listeners;
}

bool DescribeListenersResponse::ListenersHasBeenSet() const
{
    return m_listenersHasBeenSet;
}

string DescribeListenersResponse::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

bool DescribeListenersResponse::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

uint64_t DescribeListenersResponse::GetMaxResults() const
{
    return m_maxResults;
}

bool DescribeListenersResponse::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeListenersResponse::GetNextToken() const
{
    return m_nextToken;
}

bool DescribeListenersResponse::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

uint64_t DescribeListenersResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeListenersResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


