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

#include <tencentcloud/cynosdb/v20190107/model/DescribeSQLExecutionPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeSQLExecutionPlanRequest::DescribeSQLExecutionPlanRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_templateIDHasBeenSet(false),
    m_planDetailIdHasBeenSet(false)
{
}

string DescribeSQLExecutionPlanRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateID.c_str(), allocator).Move(), allocator);
    }

    if (m_planDetailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanDetailId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planDetailId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSQLExecutionPlanRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeSQLExecutionPlanRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeSQLExecutionPlanRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeSQLExecutionPlanRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSQLExecutionPlanRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSQLExecutionPlanRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSQLExecutionPlanRequest::GetTemplateID() const
{
    return m_templateID;
}

void DescribeSQLExecutionPlanRequest::SetTemplateID(const string& _templateID)
{
    m_templateID = _templateID;
    m_templateIDHasBeenSet = true;
}

bool DescribeSQLExecutionPlanRequest::TemplateIDHasBeenSet() const
{
    return m_templateIDHasBeenSet;
}

int64_t DescribeSQLExecutionPlanRequest::GetPlanDetailId() const
{
    return m_planDetailId;
}

void DescribeSQLExecutionPlanRequest::SetPlanDetailId(const int64_t& _planDetailId)
{
    m_planDetailId = _planDetailId;
    m_planDetailIdHasBeenSet = true;
}

bool DescribeSQLExecutionPlanRequest::PlanDetailIdHasBeenSet() const
{
    return m_planDetailIdHasBeenSet;
}


