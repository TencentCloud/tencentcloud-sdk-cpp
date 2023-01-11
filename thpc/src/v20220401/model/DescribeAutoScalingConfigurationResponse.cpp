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

#include <tencentcloud/thpc/v20220401/model/DescribeAutoScalingConfigurationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

DescribeAutoScalingConfigurationResponse::DescribeAutoScalingConfigurationResponse() :
    m_clusterIdHasBeenSet(false),
    m_expansionBusyTimeHasBeenSet(false),
    m_shrinkIdleTimeHasBeenSet(false),
    m_queueConfigsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAutoScalingConfigurationResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ExpansionBusyTime") && !rsp["ExpansionBusyTime"].IsNull())
    {
        if (!rsp["ExpansionBusyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpansionBusyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expansionBusyTime = rsp["ExpansionBusyTime"].GetInt64();
        m_expansionBusyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ShrinkIdleTime") && !rsp["ShrinkIdleTime"].IsNull())
    {
        if (!rsp["ShrinkIdleTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShrinkIdleTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shrinkIdleTime = rsp["ShrinkIdleTime"].GetInt64();
        m_shrinkIdleTimeHasBeenSet = true;
    }

    if (rsp.HasMember("QueueConfigs") && !rsp["QueueConfigs"].IsNull())
    {
        if (!rsp["QueueConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueConfigs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QueueConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueueConfigOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queueConfigs.push_back(item);
        }
        m_queueConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAutoScalingConfigurationResponse::ToJsonString() const
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

    if (m_expansionBusyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionBusyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expansionBusyTime, allocator);
    }

    if (m_shrinkIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shrinkIdleTime, allocator);
    }

    if (m_queueConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queueConfigs.begin(); itr != m_queueConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeAutoScalingConfigurationResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeAutoScalingConfigurationResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeAutoScalingConfigurationResponse::GetExpansionBusyTime() const
{
    return m_expansionBusyTime;
}

bool DescribeAutoScalingConfigurationResponse::ExpansionBusyTimeHasBeenSet() const
{
    return m_expansionBusyTimeHasBeenSet;
}

int64_t DescribeAutoScalingConfigurationResponse::GetShrinkIdleTime() const
{
    return m_shrinkIdleTime;
}

bool DescribeAutoScalingConfigurationResponse::ShrinkIdleTimeHasBeenSet() const
{
    return m_shrinkIdleTimeHasBeenSet;
}

vector<QueueConfigOverview> DescribeAutoScalingConfigurationResponse::GetQueueConfigs() const
{
    return m_queueConfigs;
}

bool DescribeAutoScalingConfigurationResponse::QueueConfigsHasBeenSet() const
{
    return m_queueConfigsHasBeenSet;
}


