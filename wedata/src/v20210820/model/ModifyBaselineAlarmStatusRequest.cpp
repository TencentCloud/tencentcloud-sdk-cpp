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

#include <tencentcloud/wedata/v20210820/model/ModifyBaselineAlarmStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyBaselineAlarmStatusRequest::ModifyBaselineAlarmStatusRequest() :
    m_isAlarmHasBeenSet(false),
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string ModifyBaselineAlarmStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAlarm.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


string ModifyBaselineAlarmStatusRequest::GetIsAlarm() const
{
    return m_isAlarm;
}

void ModifyBaselineAlarmStatusRequest::SetIsAlarm(const string& _isAlarm)
{
    m_isAlarm = _isAlarm;
    m_isAlarmHasBeenSet = true;
}

bool ModifyBaselineAlarmStatusRequest::IsAlarmHasBeenSet() const
{
    return m_isAlarmHasBeenSet;
}

uint64_t ModifyBaselineAlarmStatusRequest::GetId() const
{
    return m_id;
}

void ModifyBaselineAlarmStatusRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyBaselineAlarmStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyBaselineAlarmStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyBaselineAlarmStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyBaselineAlarmStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


