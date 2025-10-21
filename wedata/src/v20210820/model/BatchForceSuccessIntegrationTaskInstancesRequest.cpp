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

#include <tencentcloud/wedata/v20210820/model/BatchForceSuccessIntegrationTaskInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchForceSuccessIntegrationTaskInstancesRequest::BatchForceSuccessIntegrationTaskInstancesRequest() :
    m_instancesHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string BatchForceSuccessIntegrationTaskInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SchedulerTaskInstanceInfo> BatchForceSuccessIntegrationTaskInstancesRequest::GetInstances() const
{
    return m_instances;
}

void BatchForceSuccessIntegrationTaskInstancesRequest::SetInstances(const vector<SchedulerTaskInstanceInfo>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool BatchForceSuccessIntegrationTaskInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

string BatchForceSuccessIntegrationTaskInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchForceSuccessIntegrationTaskInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchForceSuccessIntegrationTaskInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


