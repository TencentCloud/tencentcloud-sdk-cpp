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

#include <tencentcloud/monitor/v20180724/model/BindPrometheusManagedGrafanaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

BindPrometheusManagedGrafanaRequest::BindPrometheusManagedGrafanaRequest() :
    m_instanceIdHasBeenSet(false),
    m_grafanaIdHasBeenSet(false)
{
}

string BindPrometheusManagedGrafanaRequest::ToJsonString() const
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

    if (m_grafanaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grafanaId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindPrometheusManagedGrafanaRequest::GetInstanceId() const
{
    return m_instanceId;
}

void BindPrometheusManagedGrafanaRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BindPrometheusManagedGrafanaRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BindPrometheusManagedGrafanaRequest::GetGrafanaId() const
{
    return m_grafanaId;
}

void BindPrometheusManagedGrafanaRequest::SetGrafanaId(const string& _grafanaId)
{
    m_grafanaId = _grafanaId;
    m_grafanaIdHasBeenSet = true;
}

bool BindPrometheusManagedGrafanaRequest::GrafanaIdHasBeenSet() const
{
    return m_grafanaIdHasBeenSet;
}


