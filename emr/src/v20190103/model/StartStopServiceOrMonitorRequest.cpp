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

#include <tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StartStopServiceOrMonitorRequest::StartStopServiceOrMonitorRequest() :
    m_instanceIdHasBeenSet(false),
    m_opTypeHasBeenSet(false),
    m_opScopeHasBeenSet(false),
    m_strategyConfigHasBeenSet(false),
    m_stopParamsHasBeenSet(false),
    m_keepMonitorButNotRecoverProcessHasBeenSet(false)
{
}

string StartStopServiceOrMonitorRequest::ToJsonString() const
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

    if (m_opTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opType.c_str(), allocator).Move(), allocator);
    }

    if (m_opScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_opScope.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_strategyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_strategyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_stopParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stopParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_keepMonitorButNotRecoverProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepMonitorButNotRecoverProcess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepMonitorButNotRecoverProcess, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartStopServiceOrMonitorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void StartStopServiceOrMonitorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string StartStopServiceOrMonitorRequest::GetOpType() const
{
    return m_opType;
}

void StartStopServiceOrMonitorRequest::SetOpType(const string& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}

OpScope StartStopServiceOrMonitorRequest::GetOpScope() const
{
    return m_opScope;
}

void StartStopServiceOrMonitorRequest::SetOpScope(const OpScope& _opScope)
{
    m_opScope = _opScope;
    m_opScopeHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::OpScopeHasBeenSet() const
{
    return m_opScopeHasBeenSet;
}

StrategyConfig StartStopServiceOrMonitorRequest::GetStrategyConfig() const
{
    return m_strategyConfig;
}

void StartStopServiceOrMonitorRequest::SetStrategyConfig(const StrategyConfig& _strategyConfig)
{
    m_strategyConfig = _strategyConfig;
    m_strategyConfigHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::StrategyConfigHasBeenSet() const
{
    return m_strategyConfigHasBeenSet;
}

StopParams StartStopServiceOrMonitorRequest::GetStopParams() const
{
    return m_stopParams;
}

void StartStopServiceOrMonitorRequest::SetStopParams(const StopParams& _stopParams)
{
    m_stopParams = _stopParams;
    m_stopParamsHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::StopParamsHasBeenSet() const
{
    return m_stopParamsHasBeenSet;
}

bool StartStopServiceOrMonitorRequest::GetKeepMonitorButNotRecoverProcess() const
{
    return m_keepMonitorButNotRecoverProcess;
}

void StartStopServiceOrMonitorRequest::SetKeepMonitorButNotRecoverProcess(const bool& _keepMonitorButNotRecoverProcess)
{
    m_keepMonitorButNotRecoverProcess = _keepMonitorButNotRecoverProcess;
    m_keepMonitorButNotRecoverProcessHasBeenSet = true;
}

bool StartStopServiceOrMonitorRequest::KeepMonitorButNotRecoverProcessHasBeenSet() const
{
    return m_keepMonitorButNotRecoverProcessHasBeenSet;
}


