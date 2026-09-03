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

#include <tencentcloud/dlc/v20210125/model/DescribeClusterEventLogSwitchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeClusterEventLogSwitchResponse::DescribeClusterEventLogSwitchResponse() :
    m_clusterIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterEventLogSwitchResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("LogsetId") && !rsp["LogsetId"].IsNull())
    {
        if (!rsp["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(rsp["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicId") && !rsp["TopicId"].IsNull())
    {
        if (!rsp["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(rsp["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicRegion") && !rsp["TopicRegion"].IsNull())
    {
        if (!rsp["TopicRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicRegion = string(rsp["TopicRegion"].GetString());
        m_topicRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterEventLogSwitchResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicRegion.c_str(), allocator).Move(), allocator);
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


string DescribeClusterEventLogSwitchResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeClusterEventLogSwitchResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool DescribeClusterEventLogSwitchResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeClusterEventLogSwitchResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeClusterEventLogSwitchResponse::GetLogsetId() const
{
    return m_logsetId;
}

bool DescribeClusterEventLogSwitchResponse::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string DescribeClusterEventLogSwitchResponse::GetTopicId() const
{
    return m_topicId;
}

bool DescribeClusterEventLogSwitchResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DescribeClusterEventLogSwitchResponse::GetTopicRegion() const
{
    return m_topicRegion;
}

bool DescribeClusterEventLogSwitchResponse::TopicRegionHasBeenSet() const
{
    return m_topicRegionHasBeenSet;
}


