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

#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyResourceSchedulerRequest::ModifyResourceSchedulerRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_newValueHasBeenSet(false)
{
}

string ModifyResourceSchedulerRequest::ToJsonString() const
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

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourceSchedulerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyResourceSchedulerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyResourceSchedulerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyResourceSchedulerRequest::GetOldValue() const
{
    return m_oldValue;
}

void ModifyResourceSchedulerRequest::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ModifyResourceSchedulerRequest::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ModifyResourceSchedulerRequest::GetNewValue() const
{
    return m_newValue;
}

void ModifyResourceSchedulerRequest::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool ModifyResourceSchedulerRequest::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}


