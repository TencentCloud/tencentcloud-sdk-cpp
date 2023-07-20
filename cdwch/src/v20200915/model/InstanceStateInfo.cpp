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

#include <tencentcloud/cdwch/v20200915/model/InstanceStateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceStateInfo::InstanceStateInfo() :
    m_instanceStateHasBeenSet(false),
    m_flowCreateTimeHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowProgressHasBeenSet(false),
    m_instanceStateDescHasBeenSet(false),
    m_flowMsgHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_processSubNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceStateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("FlowCreateTime") && !value["FlowCreateTime"].IsNull())
    {
        if (!value["FlowCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.FlowCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowCreateTime = string(value["FlowCreateTime"].GetString());
        m_flowCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowProgress") && !value["FlowProgress"].IsNull())
    {
        if (!value["FlowProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.FlowProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowProgress = value["FlowProgress"].GetInt64();
        m_flowProgressHasBeenSet = true;
    }

    if (value.HasMember("InstanceStateDesc") && !value["InstanceStateDesc"].IsNull())
    {
        if (!value["InstanceStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.InstanceStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStateDesc = string(value["InstanceStateDesc"].GetString());
        m_instanceStateDescHasBeenSet = true;
    }

    if (value.HasMember("FlowMsg") && !value["FlowMsg"].IsNull())
    {
        if (!value["FlowMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.FlowMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMsg = string(value["FlowMsg"].GetString());
        m_flowMsgHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessSubName") && !value["ProcessSubName"].IsNull())
    {
        if (!value["ProcessSubName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateInfo.ProcessSubName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processSubName = string(value["ProcessSubName"].GetString());
        m_processSubNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceStateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_flowCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowProgress, allocator);
    }

    if (m_instanceStateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_processSubNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessSubName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processSubName.c_str(), allocator).Move(), allocator);
    }

}


string InstanceStateInfo::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceStateInfo::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceStateInfo::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceStateInfo::GetFlowCreateTime() const
{
    return m_flowCreateTime;
}

void InstanceStateInfo::SetFlowCreateTime(const string& _flowCreateTime)
{
    m_flowCreateTime = _flowCreateTime;
    m_flowCreateTimeHasBeenSet = true;
}

bool InstanceStateInfo::FlowCreateTimeHasBeenSet() const
{
    return m_flowCreateTimeHasBeenSet;
}

string InstanceStateInfo::GetFlowName() const
{
    return m_flowName;
}

void InstanceStateInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool InstanceStateInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t InstanceStateInfo::GetFlowProgress() const
{
    return m_flowProgress;
}

void InstanceStateInfo::SetFlowProgress(const int64_t& _flowProgress)
{
    m_flowProgress = _flowProgress;
    m_flowProgressHasBeenSet = true;
}

bool InstanceStateInfo::FlowProgressHasBeenSet() const
{
    return m_flowProgressHasBeenSet;
}

string InstanceStateInfo::GetInstanceStateDesc() const
{
    return m_instanceStateDesc;
}

void InstanceStateInfo::SetInstanceStateDesc(const string& _instanceStateDesc)
{
    m_instanceStateDesc = _instanceStateDesc;
    m_instanceStateDescHasBeenSet = true;
}

bool InstanceStateInfo::InstanceStateDescHasBeenSet() const
{
    return m_instanceStateDescHasBeenSet;
}

string InstanceStateInfo::GetFlowMsg() const
{
    return m_flowMsg;
}

void InstanceStateInfo::SetFlowMsg(const string& _flowMsg)
{
    m_flowMsg = _flowMsg;
    m_flowMsgHasBeenSet = true;
}

bool InstanceStateInfo::FlowMsgHasBeenSet() const
{
    return m_flowMsgHasBeenSet;
}

string InstanceStateInfo::GetProcessName() const
{
    return m_processName;
}

void InstanceStateInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool InstanceStateInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string InstanceStateInfo::GetRequestId() const
{
    return m_requestId;
}

void InstanceStateInfo::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool InstanceStateInfo::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string InstanceStateInfo::GetProcessSubName() const
{
    return m_processSubName;
}

void InstanceStateInfo::SetProcessSubName(const string& _processSubName)
{
    m_processSubName = _processSubName;
    m_processSubNameHasBeenSet = true;
}

bool InstanceStateInfo::ProcessSubNameHasBeenSet() const
{
    return m_processSubNameHasBeenSet;
}

