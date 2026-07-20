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

#include <tencentcloud/cfw/v20190904/model/ModifyIsolateTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyIsolateTableRequest::ModifyIsolateTableRequest() :
    m_instanceIDHasBeenSet(false),
    m_buttonActionHasBeenSet(false),
    m_cfwAiAgentOperationSourceHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ModifyIsolateTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_buttonActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ButtonAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buttonAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwAiAgentOperationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwAiAgentOperationSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwAiAgentOperationSource.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIsolateTableRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyIsolateTableRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyIsolateTableRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyIsolateTableRequest::GetButtonAction() const
{
    return m_buttonAction;
}

void ModifyIsolateTableRequest::SetButtonAction(const string& _buttonAction)
{
    m_buttonAction = _buttonAction;
    m_buttonActionHasBeenSet = true;
}

bool ModifyIsolateTableRequest::ButtonActionHasBeenSet() const
{
    return m_buttonActionHasBeenSet;
}

string ModifyIsolateTableRequest::GetCfwAiAgentOperationSource() const
{
    return m_cfwAiAgentOperationSource;
}

void ModifyIsolateTableRequest::SetCfwAiAgentOperationSource(const string& _cfwAiAgentOperationSource)
{
    m_cfwAiAgentOperationSource = _cfwAiAgentOperationSource;
    m_cfwAiAgentOperationSourceHasBeenSet = true;
}

bool ModifyIsolateTableRequest::CfwAiAgentOperationSourceHasBeenSet() const
{
    return m_cfwAiAgentOperationSourceHasBeenSet;
}

string ModifyIsolateTableRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyIsolateTableRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyIsolateTableRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyIsolateTableRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyIsolateTableRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyIsolateTableRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


