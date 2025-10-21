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

#include <tencentcloud/tdmq/v20200217/model/DescribeNodeHealthOptResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeNodeHealthOptResponse::DescribeNodeHealthOptResponse() :
    m_nodeStateHasBeenSet(false),
    m_latestHealthCheckTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNodeHealthOptResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NodeState") && !rsp["NodeState"].IsNull())
    {
        if (!rsp["NodeState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeState = rsp["NodeState"].GetInt64();
        m_nodeStateHasBeenSet = true;
    }

    if (rsp.HasMember("LatestHealthCheckTime") && !rsp["LatestHealthCheckTime"].IsNull())
    {
        if (!rsp["LatestHealthCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestHealthCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestHealthCheckTime = string(rsp["LatestHealthCheckTime"].GetString());
        m_latestHealthCheckTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNodeHealthOptResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nodeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeState, allocator);
    }

    if (m_latestHealthCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestHealthCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestHealthCheckTime.c_str(), allocator).Move(), allocator);
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


int64_t DescribeNodeHealthOptResponse::GetNodeState() const
{
    return m_nodeState;
}

bool DescribeNodeHealthOptResponse::NodeStateHasBeenSet() const
{
    return m_nodeStateHasBeenSet;
}

string DescribeNodeHealthOptResponse::GetLatestHealthCheckTime() const
{
    return m_latestHealthCheckTime;
}

bool DescribeNodeHealthOptResponse::LatestHealthCheckTimeHasBeenSet() const
{
    return m_latestHealthCheckTimeHasBeenSet;
}


