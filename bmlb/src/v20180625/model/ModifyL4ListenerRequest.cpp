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

#include <tencentcloud/bmlb/v20180625/model/ModifyL4ListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

ModifyL4ListenerRequest::ModifyL4ListenerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_customHealthSwitchHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_lineSeparatorTypeHasBeenSet(false),
    m_healthRequestHasBeenSet(false),
    m_healthResponseHasBeenSet(false),
    m_toaFlagHasBeenSet(false),
    m_balanceModeHasBeenSet(false)
{
}

string ModifyL4ListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpire, allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_customHealthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customHealthSwitch, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_lineSeparatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSeparatorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lineSeparatorType, allocator);
    }

    if (m_healthRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_healthResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthResponse.c_str(), allocator).Move(), allocator);
    }

    if (m_toaFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToaFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toaFlag, allocator);
    }

    if (m_balanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_balanceMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyL4ListenerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyL4ListenerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyL4ListenerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyL4ListenerRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyL4ListenerRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyL4ListenerRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyL4ListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyL4ListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyL4ListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetSessionExpire() const
{
    return m_sessionExpire;
}

void ModifyL4ListenerRequest::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool ModifyL4ListenerRequest::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void ModifyL4ListenerRequest::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool ModifyL4ListenerRequest::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetTimeOut() const
{
    return m_timeOut;
}

void ModifyL4ListenerRequest::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool ModifyL4ListenerRequest::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetIntervalTime() const
{
    return m_intervalTime;
}

void ModifyL4ListenerRequest::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool ModifyL4ListenerRequest::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetHealthNum() const
{
    return m_healthNum;
}

void ModifyL4ListenerRequest::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool ModifyL4ListenerRequest::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void ModifyL4ListenerRequest::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool ModifyL4ListenerRequest::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyL4ListenerRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyL4ListenerRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetCustomHealthSwitch() const
{
    return m_customHealthSwitch;
}

void ModifyL4ListenerRequest::SetCustomHealthSwitch(const int64_t& _customHealthSwitch)
{
    m_customHealthSwitch = _customHealthSwitch;
    m_customHealthSwitchHasBeenSet = true;
}

bool ModifyL4ListenerRequest::CustomHealthSwitchHasBeenSet() const
{
    return m_customHealthSwitchHasBeenSet;
}

string ModifyL4ListenerRequest::GetInputType() const
{
    return m_inputType;
}

void ModifyL4ListenerRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool ModifyL4ListenerRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetLineSeparatorType() const
{
    return m_lineSeparatorType;
}

void ModifyL4ListenerRequest::SetLineSeparatorType(const int64_t& _lineSeparatorType)
{
    m_lineSeparatorType = _lineSeparatorType;
    m_lineSeparatorTypeHasBeenSet = true;
}

bool ModifyL4ListenerRequest::LineSeparatorTypeHasBeenSet() const
{
    return m_lineSeparatorTypeHasBeenSet;
}

string ModifyL4ListenerRequest::GetHealthRequest() const
{
    return m_healthRequest;
}

void ModifyL4ListenerRequest::SetHealthRequest(const string& _healthRequest)
{
    m_healthRequest = _healthRequest;
    m_healthRequestHasBeenSet = true;
}

bool ModifyL4ListenerRequest::HealthRequestHasBeenSet() const
{
    return m_healthRequestHasBeenSet;
}

string ModifyL4ListenerRequest::GetHealthResponse() const
{
    return m_healthResponse;
}

void ModifyL4ListenerRequest::SetHealthResponse(const string& _healthResponse)
{
    m_healthResponse = _healthResponse;
    m_healthResponseHasBeenSet = true;
}

bool ModifyL4ListenerRequest::HealthResponseHasBeenSet() const
{
    return m_healthResponseHasBeenSet;
}

int64_t ModifyL4ListenerRequest::GetToaFlag() const
{
    return m_toaFlag;
}

void ModifyL4ListenerRequest::SetToaFlag(const int64_t& _toaFlag)
{
    m_toaFlag = _toaFlag;
    m_toaFlagHasBeenSet = true;
}

bool ModifyL4ListenerRequest::ToaFlagHasBeenSet() const
{
    return m_toaFlagHasBeenSet;
}

string ModifyL4ListenerRequest::GetBalanceMode() const
{
    return m_balanceMode;
}

void ModifyL4ListenerRequest::SetBalanceMode(const string& _balanceMode)
{
    m_balanceMode = _balanceMode;
    m_balanceModeHasBeenSet = true;
}

bool ModifyL4ListenerRequest::BalanceModeHasBeenSet() const
{
    return m_balanceModeHasBeenSet;
}


