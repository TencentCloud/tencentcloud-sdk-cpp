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

#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAgentStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdatePrometheusAgentStatusRequest::UpdatePrometheusAgentStatusRequest() :
    m_instanceIdHasBeenSet(false),
    m_agentIdsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string UpdatePrometheusAgentStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentIds.begin(); itr != m_agentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePrometheusAgentStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdatePrometheusAgentStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdatePrometheusAgentStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> UpdatePrometheusAgentStatusRequest::GetAgentIds() const
{
    return m_agentIds;
}

void UpdatePrometheusAgentStatusRequest::SetAgentIds(const vector<string>& _agentIds)
{
    m_agentIds = _agentIds;
    m_agentIdsHasBeenSet = true;
}

bool UpdatePrometheusAgentStatusRequest::AgentIdsHasBeenSet() const
{
    return m_agentIdsHasBeenSet;
}

int64_t UpdatePrometheusAgentStatusRequest::GetStatus() const
{
    return m_status;
}

void UpdatePrometheusAgentStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdatePrometheusAgentStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


