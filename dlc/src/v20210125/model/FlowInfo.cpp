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

#include <tencentcloud/dlc/v20210125/model/FlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

FlowInfo::FlowInfo() :
    m_flowIdHasBeenSet(false),
    m_workFlowCodeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome FlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowCode") && !value["WorkFlowCode"].IsNull())
    {
        if (!value["WorkFlowCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.WorkFlowCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowCode = string(value["WorkFlowCode"].GetString());
        m_workFlowCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_workFlowCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t FlowInfo::GetFlowId() const
{
    return m_flowId;
}

void FlowInfo::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowInfo::GetWorkFlowCode() const
{
    return m_workFlowCode;
}

void FlowInfo::SetWorkFlowCode(const string& _workFlowCode)
{
    m_workFlowCode = _workFlowCode;
    m_workFlowCodeHasBeenSet = true;
}

bool FlowInfo::WorkFlowCodeHasBeenSet() const
{
    return m_workFlowCodeHasBeenSet;
}

int64_t FlowInfo::GetStatus() const
{
    return m_status;
}

void FlowInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FlowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

