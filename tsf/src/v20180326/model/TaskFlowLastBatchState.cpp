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

#include <tencentcloud/tsf/v20180326/model/TaskFlowLastBatchState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TaskFlowLastBatchState::TaskFlowLastBatchState() :
    m_flowBatchIdHasBeenSet(false),
    m_flowBatchLogIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome TaskFlowLastBatchState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowBatchId") && !value["FlowBatchId"].IsNull())
    {
        if (!value["FlowBatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowLastBatchState.FlowBatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowBatchId = string(value["FlowBatchId"].GetString());
        m_flowBatchIdHasBeenSet = true;
    }

    if (value.HasMember("FlowBatchLogId") && !value["FlowBatchLogId"].IsNull())
    {
        if (!value["FlowBatchLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowLastBatchState.FlowBatchLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowBatchLogId = string(value["FlowBatchLogId"].GetString());
        m_flowBatchLogIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowLastBatchState.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFlowLastBatchState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowBatchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowBatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowBatchId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowBatchLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowBatchLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowBatchLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

}


string TaskFlowLastBatchState::GetFlowBatchId() const
{
    return m_flowBatchId;
}

void TaskFlowLastBatchState::SetFlowBatchId(const string& _flowBatchId)
{
    m_flowBatchId = _flowBatchId;
    m_flowBatchIdHasBeenSet = true;
}

bool TaskFlowLastBatchState::FlowBatchIdHasBeenSet() const
{
    return m_flowBatchIdHasBeenSet;
}

string TaskFlowLastBatchState::GetFlowBatchLogId() const
{
    return m_flowBatchLogId;
}

void TaskFlowLastBatchState::SetFlowBatchLogId(const string& _flowBatchLogId)
{
    m_flowBatchLogId = _flowBatchLogId;
    m_flowBatchLogIdHasBeenSet = true;
}

bool TaskFlowLastBatchState::FlowBatchLogIdHasBeenSet() const
{
    return m_flowBatchLogIdHasBeenSet;
}

string TaskFlowLastBatchState::GetState() const
{
    return m_state;
}

void TaskFlowLastBatchState::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskFlowLastBatchState::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

