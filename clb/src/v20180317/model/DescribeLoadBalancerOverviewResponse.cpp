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

#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeLoadBalancerOverviewResponse::DescribeLoadBalancerOverviewResponse() :
    m_totalCountHasBeenSet(false),
    m_runningCountHasBeenSet(false),
    m_isolationCountHasBeenSet(false),
    m_willExpireCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLoadBalancerOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RunningCount") && !rsp["RunningCount"].IsNull())
    {
        if (!rsp["RunningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCount = rsp["RunningCount"].GetInt64();
        m_runningCountHasBeenSet = true;
    }

    if (rsp.HasMember("IsolationCount") && !rsp["IsolationCount"].IsNull())
    {
        if (!rsp["IsolationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsolationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolationCount = rsp["IsolationCount"].GetInt64();
        m_isolationCountHasBeenSet = true;
    }

    if (rsp.HasMember("WillExpireCount") && !rsp["WillExpireCount"].IsNull())
    {
        if (!rsp["WillExpireCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillExpireCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willExpireCount = rsp["WillExpireCount"].GetInt64();
        m_willExpireCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLoadBalancerOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_runningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCount, allocator);
    }

    if (m_isolationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolationCount, allocator);
    }

    if (m_willExpireCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillExpireCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willExpireCount, allocator);
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


int64_t DescribeLoadBalancerOverviewResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeLoadBalancerOverviewResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeLoadBalancerOverviewResponse::GetRunningCount() const
{
    return m_runningCount;
}

bool DescribeLoadBalancerOverviewResponse::RunningCountHasBeenSet() const
{
    return m_runningCountHasBeenSet;
}

int64_t DescribeLoadBalancerOverviewResponse::GetIsolationCount() const
{
    return m_isolationCount;
}

bool DescribeLoadBalancerOverviewResponse::IsolationCountHasBeenSet() const
{
    return m_isolationCountHasBeenSet;
}

int64_t DescribeLoadBalancerOverviewResponse::GetWillExpireCount() const
{
    return m_willExpireCount;
}

bool DescribeLoadBalancerOverviewResponse::WillExpireCountHasBeenSet() const
{
    return m_willExpireCountHasBeenSet;
}


