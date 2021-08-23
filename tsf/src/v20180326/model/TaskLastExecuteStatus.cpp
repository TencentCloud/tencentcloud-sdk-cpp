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

#include <tencentcloud/tsf/v20180326/model/TaskLastExecuteStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TaskLastExecuteStatus::TaskLastExecuteStatus() :
    m_batchIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_batchLogIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskLastExecuteStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLastExecuteStatus.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLastExecuteStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("BatchLogId") && !value["BatchLogId"].IsNull())
    {
        if (!value["BatchLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLastExecuteStatus.BatchLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchLogId = string(value["BatchLogId"].GetString());
        m_batchLogIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLastExecuteStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_batchLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchLogId.c_str(), allocator).Move(), allocator);
    }

}


string TaskLastExecuteStatus::GetBatchId() const
{
    return m_batchId;
}

void TaskLastExecuteStatus::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool TaskLastExecuteStatus::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string TaskLastExecuteStatus::GetState() const
{
    return m_state;
}

void TaskLastExecuteStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskLastExecuteStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TaskLastExecuteStatus::GetBatchLogId() const
{
    return m_batchLogId;
}

void TaskLastExecuteStatus::SetBatchLogId(const string& _batchLogId)
{
    m_batchLogId = _batchLogId;
    m_batchLogIdHasBeenSet = true;
}

bool TaskLastExecuteStatus::BatchLogIdHasBeenSet() const
{
    return m_batchLogIdHasBeenSet;
}

