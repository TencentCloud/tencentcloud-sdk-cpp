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

#include <tencentcloud/bmlb/v20180625/model/L4Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L4Listener::L4Listener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_customHealthSwitchHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_lineSeparatorTypeHasBeenSet(false),
    m_healthRequestHasBeenSet(false),
    m_healthResponseHasBeenSet(false),
    m_toaFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimestampHasBeenSet(false),
    m_balanceModeHasBeenSet(false)
{
}

CoreInternalOutcome L4Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ListenerType") && !value["ListenerType"].IsNull())
    {
        if (!value["ListenerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.ListenerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerType = string(value["ListenerType"].GetString());
        m_listenerTypeHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("CustomHealthSwitch") && !value["CustomHealthSwitch"].IsNull())
    {
        if (!value["CustomHealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.CustomHealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customHealthSwitch = value["CustomHealthSwitch"].GetInt64();
        m_customHealthSwitchHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("LineSeparatorType") && !value["LineSeparatorType"].IsNull())
    {
        if (!value["LineSeparatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.LineSeparatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSeparatorType = value["LineSeparatorType"].GetInt64();
        m_lineSeparatorTypeHasBeenSet = true;
    }

    if (value.HasMember("HealthRequest") && !value["HealthRequest"].IsNull())
    {
        if (!value["HealthRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.HealthRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthRequest = string(value["HealthRequest"].GetString());
        m_healthRequestHasBeenSet = true;
    }

    if (value.HasMember("HealthResponse") && !value["HealthResponse"].IsNull())
    {
        if (!value["HealthResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.HealthResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthResponse = string(value["HealthResponse"].GetString());
        m_healthResponseHasBeenSet = true;
    }

    if (value.HasMember("ToaFlag") && !value["ToaFlag"].IsNull())
    {
        if (!value["ToaFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.ToaFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toaFlag = value["ToaFlag"].GetInt64();
        m_toaFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }

    if (value.HasMember("BalanceMode") && !value["BalanceMode"].IsNull())
    {
        if (!value["BalanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Listener.BalanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_balanceMode = string(value["BalanceMode"].GetString());
        m_balanceModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_listenerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerType.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_balanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_balanceMode.c_str(), allocator).Move(), allocator);
    }

}


string L4Listener::GetListenerId() const
{
    return m_listenerId;
}

void L4Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool L4Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string L4Listener::GetListenerName() const
{
    return m_listenerName;
}

void L4Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool L4Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string L4Listener::GetProtocol() const
{
    return m_protocol;
}

void L4Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L4Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t L4Listener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void L4Listener::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool L4Listener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

int64_t L4Listener::GetBandwidth() const
{
    return m_bandwidth;
}

void L4Listener::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool L4Listener::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string L4Listener::GetListenerType() const
{
    return m_listenerType;
}

void L4Listener::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool L4Listener::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

int64_t L4Listener::GetSessionExpire() const
{
    return m_sessionExpire;
}

void L4Listener::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool L4Listener::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t L4Listener::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void L4Listener::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool L4Listener::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t L4Listener::GetTimeOut() const
{
    return m_timeOut;
}

void L4Listener::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool L4Listener::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t L4Listener::GetIntervalTime() const
{
    return m_intervalTime;
}

void L4Listener::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool L4Listener::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t L4Listener::GetHealthNum() const
{
    return m_healthNum;
}

void L4Listener::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool L4Listener::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t L4Listener::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void L4Listener::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool L4Listener::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t L4Listener::GetCustomHealthSwitch() const
{
    return m_customHealthSwitch;
}

void L4Listener::SetCustomHealthSwitch(const int64_t& _customHealthSwitch)
{
    m_customHealthSwitch = _customHealthSwitch;
    m_customHealthSwitchHasBeenSet = true;
}

bool L4Listener::CustomHealthSwitchHasBeenSet() const
{
    return m_customHealthSwitchHasBeenSet;
}

string L4Listener::GetInputType() const
{
    return m_inputType;
}

void L4Listener::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool L4Listener::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

int64_t L4Listener::GetLineSeparatorType() const
{
    return m_lineSeparatorType;
}

void L4Listener::SetLineSeparatorType(const int64_t& _lineSeparatorType)
{
    m_lineSeparatorType = _lineSeparatorType;
    m_lineSeparatorTypeHasBeenSet = true;
}

bool L4Listener::LineSeparatorTypeHasBeenSet() const
{
    return m_lineSeparatorTypeHasBeenSet;
}

string L4Listener::GetHealthRequest() const
{
    return m_healthRequest;
}

void L4Listener::SetHealthRequest(const string& _healthRequest)
{
    m_healthRequest = _healthRequest;
    m_healthRequestHasBeenSet = true;
}

bool L4Listener::HealthRequestHasBeenSet() const
{
    return m_healthRequestHasBeenSet;
}

string L4Listener::GetHealthResponse() const
{
    return m_healthResponse;
}

void L4Listener::SetHealthResponse(const string& _healthResponse)
{
    m_healthResponse = _healthResponse;
    m_healthResponseHasBeenSet = true;
}

bool L4Listener::HealthResponseHasBeenSet() const
{
    return m_healthResponseHasBeenSet;
}

int64_t L4Listener::GetToaFlag() const
{
    return m_toaFlag;
}

void L4Listener::SetToaFlag(const int64_t& _toaFlag)
{
    m_toaFlag = _toaFlag;
    m_toaFlagHasBeenSet = true;
}

bool L4Listener::ToaFlagHasBeenSet() const
{
    return m_toaFlagHasBeenSet;
}

int64_t L4Listener::GetStatus() const
{
    return m_status;
}

void L4Listener::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L4Listener::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L4Listener::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L4Listener::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L4Listener::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}

string L4Listener::GetBalanceMode() const
{
    return m_balanceMode;
}

void L4Listener::SetBalanceMode(const string& _balanceMode)
{
    m_balanceMode = _balanceMode;
    m_balanceModeHasBeenSet = true;
}

bool L4Listener::BalanceModeHasBeenSet() const
{
    return m_balanceModeHasBeenSet;
}

