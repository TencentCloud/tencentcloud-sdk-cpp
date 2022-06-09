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

#include <tencentcloud/acp/v20220105/model/TaskFlowStepsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

TaskFlowStepsInfo::TaskFlowStepsInfo() :
    m_flowNoHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_flowStateDescHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskFlowStepsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowNo") && !value["FlowNo"].IsNull())
    {
        if (!value["FlowNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.FlowNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowNo = string(value["FlowNo"].GetString());
        m_flowNoHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowStatus") && !value["FlowStatus"].IsNull())
    {
        if (!value["FlowStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.FlowStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = value["FlowStatus"].GetInt64();
        m_flowStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowStateDesc") && !value["FlowStateDesc"].IsNull())
    {
        if (!value["FlowStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.FlowStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowStateDesc = string(value["FlowStateDesc"].GetString());
        m_flowStateDescHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowStepsInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFlowStepsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowNo.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowStatus, allocator);
    }

    if (m_flowStateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowStateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskFlowStepsInfo::GetFlowNo() const
{
    return m_flowNo;
}

void TaskFlowStepsInfo::SetFlowNo(const string& _flowNo)
{
    m_flowNo = _flowNo;
    m_flowNoHasBeenSet = true;
}

bool TaskFlowStepsInfo::FlowNoHasBeenSet() const
{
    return m_flowNoHasBeenSet;
}

string TaskFlowStepsInfo::GetFlowName() const
{
    return m_flowName;
}

void TaskFlowStepsInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool TaskFlowStepsInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t TaskFlowStepsInfo::GetFlowStatus() const
{
    return m_flowStatus;
}

void TaskFlowStepsInfo::SetFlowStatus(const int64_t& _flowStatus)
{
    m_flowStatus = _flowStatus;
    m_flowStatusHasBeenSet = true;
}

bool TaskFlowStepsInfo::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

string TaskFlowStepsInfo::GetFlowStateDesc() const
{
    return m_flowStateDesc;
}

void TaskFlowStepsInfo::SetFlowStateDesc(const string& _flowStateDesc)
{
    m_flowStateDesc = _flowStateDesc;
    m_flowStateDescHasBeenSet = true;
}

bool TaskFlowStepsInfo::FlowStateDescHasBeenSet() const
{
    return m_flowStateDescHasBeenSet;
}

string TaskFlowStepsInfo::GetStartTime() const
{
    return m_startTime;
}

void TaskFlowStepsInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskFlowStepsInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskFlowStepsInfo::GetEndTime() const
{
    return m_endTime;
}

void TaskFlowStepsInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskFlowStepsInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

