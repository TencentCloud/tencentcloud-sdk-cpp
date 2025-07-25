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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQClusterResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQClusterResponse::DescribeRocketMQClusterResponse() :
    m_clusterInfoHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_clusterStatsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRocketMQClusterResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterInfo") && !rsp["ClusterInfo"].IsNull())
    {
        if (!rsp["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(rsp["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterConfig") && !rsp["ClusterConfig"].IsNull())
    {
        if (!rsp["ClusterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterConfig.Deserialize(rsp["ClusterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterConfigHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterStats") && !rsp["ClusterStats"].IsNull())
    {
        if (!rsp["ClusterStats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterStats.Deserialize(rsp["ClusterStats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterStatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRocketMQClusterResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterStats.ToJsonObject(value[key.c_str()], allocator);
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


RocketMQClusterInfo DescribeRocketMQClusterResponse::GetClusterInfo() const
{
    return m_clusterInfo;
}

bool DescribeRocketMQClusterResponse::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

RocketMQClusterConfig DescribeRocketMQClusterResponse::GetClusterConfig() const
{
    return m_clusterConfig;
}

bool DescribeRocketMQClusterResponse::ClusterConfigHasBeenSet() const
{
    return m_clusterConfigHasBeenSet;
}

RocketMQClusterRecentStats DescribeRocketMQClusterResponse::GetClusterStats() const
{
    return m_clusterStats;
}

bool DescribeRocketMQClusterResponse::ClusterStatsHasBeenSet() const
{
    return m_clusterStatsHasBeenSet;
}


