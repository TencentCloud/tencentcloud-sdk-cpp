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

#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusInstanceAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyPrometheusInstanceAttributesRequest::ModifyPrometheusInstanceAttributesRequest() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_dataRetentionTimeHasBeenSet(false)
{
}

string ModifyPrometheusInstanceAttributesRequest::ToJsonString() const
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataRetentionTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrometheusInstanceAttributesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyPrometheusInstanceAttributesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyPrometheusInstanceAttributesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyPrometheusInstanceAttributesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyPrometheusInstanceAttributesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyPrometheusInstanceAttributesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t ModifyPrometheusInstanceAttributesRequest::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

void ModifyPrometheusInstanceAttributesRequest::SetDataRetentionTime(const int64_t& _dataRetentionTime)
{
    m_dataRetentionTime = _dataRetentionTime;
    m_dataRetentionTimeHasBeenSet = true;
}

bool ModifyPrometheusInstanceAttributesRequest::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}


