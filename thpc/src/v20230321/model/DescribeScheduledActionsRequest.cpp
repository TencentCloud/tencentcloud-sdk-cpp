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

#include <tencentcloud/thpc/v20230321/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

DescribeScheduledActionsRequest::DescribeScheduledActionsRequest() :
    m_clusterIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_scheduledActionIdsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeScheduledActionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledActionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scheduledActionIds.begin(); itr != m_scheduledActionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeScheduledActionsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeScheduledActionsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeScheduledActionsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeScheduledActionsRequest::GetQueueName() const
{
    return m_queueName;
}

void DescribeScheduledActionsRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DescribeScheduledActionsRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

vector<string> DescribeScheduledActionsRequest::GetScheduledActionIds() const
{
    return m_scheduledActionIds;
}

void DescribeScheduledActionsRequest::SetScheduledActionIds(const vector<string>& _scheduledActionIds)
{
    m_scheduledActionIds = _scheduledActionIds;
    m_scheduledActionIdsHasBeenSet = true;
}

bool DescribeScheduledActionsRequest::ScheduledActionIdsHasBeenSet() const
{
    return m_scheduledActionIdsHasBeenSet;
}

string DescribeScheduledActionsRequest::GetStatus() const
{
    return m_status;
}

void DescribeScheduledActionsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeScheduledActionsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


