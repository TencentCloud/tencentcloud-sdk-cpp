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

#include <tencentcloud/emr/v20190103/model/ModifyYarnDeployRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyYarnDeployRequest::ModifyYarnDeployRequest() :
    m_instanceIdHasBeenSet(false),
    m_newSchedulerHasBeenSet(false),
    m_oldSchedulerHasBeenSet(false)
{
}

string ModifyYarnDeployRequest::ToJsonString() const
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

    if (m_newSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewScheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newScheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_oldSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldScheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldScheduler.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyYarnDeployRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyYarnDeployRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyYarnDeployRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyYarnDeployRequest::GetNewScheduler() const
{
    return m_newScheduler;
}

void ModifyYarnDeployRequest::SetNewScheduler(const string& _newScheduler)
{
    m_newScheduler = _newScheduler;
    m_newSchedulerHasBeenSet = true;
}

bool ModifyYarnDeployRequest::NewSchedulerHasBeenSet() const
{
    return m_newSchedulerHasBeenSet;
}

string ModifyYarnDeployRequest::GetOldScheduler() const
{
    return m_oldScheduler;
}

void ModifyYarnDeployRequest::SetOldScheduler(const string& _oldScheduler)
{
    m_oldScheduler = _oldScheduler;
    m_oldSchedulerHasBeenSet = true;
}

bool ModifyYarnDeployRequest::OldSchedulerHasBeenSet() const
{
    return m_oldSchedulerHasBeenSet;
}


