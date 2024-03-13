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

#include <tencentcloud/mongodb/v20190725/model/SetInstanceMaintenanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SetInstanceMaintenanceRequest::SetInstanceMaintenanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_maintenanceStartHasBeenSet(false),
    m_maintenanceEndHasBeenSet(false)
{
}

string SetInstanceMaintenanceRequest::ToJsonString() const
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

    if (m_maintenanceStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintenanceStart.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintenanceEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetInstanceMaintenanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetInstanceMaintenanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetInstanceMaintenanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SetInstanceMaintenanceRequest::GetMaintenanceStart() const
{
    return m_maintenanceStart;
}

void SetInstanceMaintenanceRequest::SetMaintenanceStart(const string& _maintenanceStart)
{
    m_maintenanceStart = _maintenanceStart;
    m_maintenanceStartHasBeenSet = true;
}

bool SetInstanceMaintenanceRequest::MaintenanceStartHasBeenSet() const
{
    return m_maintenanceStartHasBeenSet;
}

string SetInstanceMaintenanceRequest::GetMaintenanceEnd() const
{
    return m_maintenanceEnd;
}

void SetInstanceMaintenanceRequest::SetMaintenanceEnd(const string& _maintenanceEnd)
{
    m_maintenanceEnd = _maintenanceEnd;
    m_maintenanceEndHasBeenSet = true;
}

bool SetInstanceMaintenanceRequest::MaintenanceEndHasBeenSet() const
{
    return m_maintenanceEndHasBeenSet;
}


