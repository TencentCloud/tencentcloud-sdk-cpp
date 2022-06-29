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

#include <tencentcloud/tsf/v20180326/model/CreateTaskFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateTaskFlowRequest::CreateTaskFlowRequest() :
    m_flowNameHasBeenSet(false),
    m_triggerRuleHasBeenSet(false),
    m_flowEdgesHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateTaskFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowEdgesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowEdges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowEdges.begin(); itr != m_flowEdges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskFlowRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateTaskFlowRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateTaskFlowRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

TaskRule CreateTaskFlowRequest::GetTriggerRule() const
{
    return m_triggerRule;
}

void CreateTaskFlowRequest::SetTriggerRule(const TaskRule& _triggerRule)
{
    m_triggerRule = _triggerRule;
    m_triggerRuleHasBeenSet = true;
}

bool CreateTaskFlowRequest::TriggerRuleHasBeenSet() const
{
    return m_triggerRuleHasBeenSet;
}

vector<TaskFlowEdge> CreateTaskFlowRequest::GetFlowEdges() const
{
    return m_flowEdges;
}

void CreateTaskFlowRequest::SetFlowEdges(const vector<TaskFlowEdge>& _flowEdges)
{
    m_flowEdges = _flowEdges;
    m_flowEdgesHasBeenSet = true;
}

bool CreateTaskFlowRequest::FlowEdgesHasBeenSet() const
{
    return m_flowEdgesHasBeenSet;
}

uint64_t CreateTaskFlowRequest::GetTimeOut() const
{
    return m_timeOut;
}

void CreateTaskFlowRequest::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool CreateTaskFlowRequest::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

vector<string> CreateTaskFlowRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateTaskFlowRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateTaskFlowRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


