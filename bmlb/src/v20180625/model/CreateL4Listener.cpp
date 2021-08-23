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

#include <tencentcloud/bmlb/v20180625/model/CreateL4Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

CreateL4Listener::CreateL4Listener() :
    m_loadBalancerPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
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
    m_toaFlagHasBeenSet(false)
{
}

CoreInternalOutcome CreateL4Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("CustomHealthSwitch") && !value["CustomHealthSwitch"].IsNull())
    {
        if (!value["CustomHealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.CustomHealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customHealthSwitch = value["CustomHealthSwitch"].GetInt64();
        m_customHealthSwitchHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("LineSeparatorType") && !value["LineSeparatorType"].IsNull())
    {
        if (!value["LineSeparatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.LineSeparatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSeparatorType = value["LineSeparatorType"].GetInt64();
        m_lineSeparatorTypeHasBeenSet = true;
    }

    if (value.HasMember("HealthRequest") && !value["HealthRequest"].IsNull())
    {
        if (!value["HealthRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.HealthRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthRequest = string(value["HealthRequest"].GetString());
        m_healthRequestHasBeenSet = true;
    }

    if (value.HasMember("HealthResponse") && !value["HealthResponse"].IsNull())
    {
        if (!value["HealthResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.HealthResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthResponse = string(value["HealthResponse"].GetString());
        m_healthResponseHasBeenSet = true;
    }

    if (value.HasMember("ToaFlag") && !value["ToaFlag"].IsNull())
    {
        if (!value["ToaFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL4Listener.ToaFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toaFlag = value["ToaFlag"].GetInt64();
        m_toaFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateL4Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpire, allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_customHealthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customHealthSwitch, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_lineSeparatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSeparatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineSeparatorType, allocator);
    }

    if (m_healthRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_healthResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthResponse.c_str(), allocator).Move(), allocator);
    }

    if (m_toaFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToaFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toaFlag, allocator);
    }

}


int64_t CreateL4Listener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void CreateL4Listener::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool CreateL4Listener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

string CreateL4Listener::GetProtocol() const
{
    return m_protocol;
}

void CreateL4Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateL4Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateL4Listener::GetListenerName() const
{
    return m_listenerName;
}

void CreateL4Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateL4Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t CreateL4Listener::GetSessionExpire() const
{
    return m_sessionExpire;
}

void CreateL4Listener::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool CreateL4Listener::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t CreateL4Listener::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void CreateL4Listener::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool CreateL4Listener::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t CreateL4Listener::GetTimeOut() const
{
    return m_timeOut;
}

void CreateL4Listener::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool CreateL4Listener::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t CreateL4Listener::GetIntervalTime() const
{
    return m_intervalTime;
}

void CreateL4Listener::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool CreateL4Listener::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t CreateL4Listener::GetHealthNum() const
{
    return m_healthNum;
}

void CreateL4Listener::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool CreateL4Listener::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t CreateL4Listener::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void CreateL4Listener::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool CreateL4Listener::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t CreateL4Listener::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateL4Listener::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateL4Listener::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t CreateL4Listener::GetCustomHealthSwitch() const
{
    return m_customHealthSwitch;
}

void CreateL4Listener::SetCustomHealthSwitch(const int64_t& _customHealthSwitch)
{
    m_customHealthSwitch = _customHealthSwitch;
    m_customHealthSwitchHasBeenSet = true;
}

bool CreateL4Listener::CustomHealthSwitchHasBeenSet() const
{
    return m_customHealthSwitchHasBeenSet;
}

string CreateL4Listener::GetInputType() const
{
    return m_inputType;
}

void CreateL4Listener::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateL4Listener::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

int64_t CreateL4Listener::GetLineSeparatorType() const
{
    return m_lineSeparatorType;
}

void CreateL4Listener::SetLineSeparatorType(const int64_t& _lineSeparatorType)
{
    m_lineSeparatorType = _lineSeparatorType;
    m_lineSeparatorTypeHasBeenSet = true;
}

bool CreateL4Listener::LineSeparatorTypeHasBeenSet() const
{
    return m_lineSeparatorTypeHasBeenSet;
}

string CreateL4Listener::GetHealthRequest() const
{
    return m_healthRequest;
}

void CreateL4Listener::SetHealthRequest(const string& _healthRequest)
{
    m_healthRequest = _healthRequest;
    m_healthRequestHasBeenSet = true;
}

bool CreateL4Listener::HealthRequestHasBeenSet() const
{
    return m_healthRequestHasBeenSet;
}

string CreateL4Listener::GetHealthResponse() const
{
    return m_healthResponse;
}

void CreateL4Listener::SetHealthResponse(const string& _healthResponse)
{
    m_healthResponse = _healthResponse;
    m_healthResponseHasBeenSet = true;
}

bool CreateL4Listener::HealthResponseHasBeenSet() const
{
    return m_healthResponseHasBeenSet;
}

int64_t CreateL4Listener::GetToaFlag() const
{
    return m_toaFlag;
}

void CreateL4Listener::SetToaFlag(const int64_t& _toaFlag)
{
    m_toaFlag = _toaFlag;
    m_toaFlagHasBeenSet = true;
}

bool CreateL4Listener::ToaFlagHasBeenSet() const
{
    return m_toaFlagHasBeenSet;
}

