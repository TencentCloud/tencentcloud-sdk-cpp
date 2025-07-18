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

#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdatePrometheusAlertGroupStateRequest::UpdatePrometheusAlertGroupStateRequest() :
    m_instanceIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_groupStateHasBeenSet(false)
{
}

string UpdatePrometheusAlertGroupStateRequest::ToJsonString() const
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

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupState, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePrometheusAlertGroupStateRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdatePrometheusAlertGroupStateRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupStateRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> UpdatePrometheusAlertGroupStateRequest::GetGroupIds() const
{
    return m_groupIds;
}

void UpdatePrometheusAlertGroupStateRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupStateRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

int64_t UpdatePrometheusAlertGroupStateRequest::GetGroupState() const
{
    return m_groupState;
}

void UpdatePrometheusAlertGroupStateRequest::SetGroupState(const int64_t& _groupState)
{
    m_groupState = _groupState;
    m_groupStateHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupStateRequest::GroupStateHasBeenSet() const
{
    return m_groupStateHasBeenSet;
}


