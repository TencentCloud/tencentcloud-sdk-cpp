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

#include <tencentcloud/ecm/v20190719/model/HealthCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

HealthCheck::HealthCheck() :
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unHealthyNumHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_sendContextHasBeenSet(false),
    m_recvContextHasBeenSet(false),
    m_checkTypeHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnHealthyNum") && !value["UnHealthyNum"].IsNull())
    {
        if (!value["UnHealthyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.UnHealthyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unHealthyNum = value["UnHealthyNum"].GetInt64();
        m_unHealthyNumHasBeenSet = true;
    }

    if (value.HasMember("CheckPort") && !value["CheckPort"].IsNull())
    {
        if (!value["CheckPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.CheckPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkPort = value["CheckPort"].GetInt64();
        m_checkPortHasBeenSet = true;
    }

    if (value.HasMember("ContextType") && !value["ContextType"].IsNull())
    {
        if (!value["ContextType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.ContextType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextType = string(value["ContextType"].GetString());
        m_contextTypeHasBeenSet = true;
    }

    if (value.HasMember("SendContext") && !value["SendContext"].IsNull())
    {
        if (!value["SendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.SendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendContext = string(value["SendContext"].GetString());
        m_sendContextHasBeenSet = true;
    }

    if (value.HasMember("RecvContext") && !value["RecvContext"].IsNull())
    {
        if (!value["RecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.RecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvContext = string(value["RecvContext"].GetString());
        m_recvContextHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheck.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_unHealthyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnHealthyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unHealthyNum, allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkPort, allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_sendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_recvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recvContext.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

}


int64_t HealthCheck::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void HealthCheck::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool HealthCheck::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t HealthCheck::GetTimeOut() const
{
    return m_timeOut;
}

void HealthCheck::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool HealthCheck::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t HealthCheck::GetIntervalTime() const
{
    return m_intervalTime;
}

void HealthCheck::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool HealthCheck::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t HealthCheck::GetHealthNum() const
{
    return m_healthNum;
}

void HealthCheck::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool HealthCheck::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t HealthCheck::GetUnHealthyNum() const
{
    return m_unHealthyNum;
}

void HealthCheck::SetUnHealthyNum(const int64_t& _unHealthyNum)
{
    m_unHealthyNum = _unHealthyNum;
    m_unHealthyNumHasBeenSet = true;
}

bool HealthCheck::UnHealthyNumHasBeenSet() const
{
    return m_unHealthyNumHasBeenSet;
}

int64_t HealthCheck::GetCheckPort() const
{
    return m_checkPort;
}

void HealthCheck::SetCheckPort(const int64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool HealthCheck::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string HealthCheck::GetContextType() const
{
    return m_contextType;
}

void HealthCheck::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool HealthCheck::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string HealthCheck::GetSendContext() const
{
    return m_sendContext;
}

void HealthCheck::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool HealthCheck::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string HealthCheck::GetRecvContext() const
{
    return m_recvContext;
}

void HealthCheck::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool HealthCheck::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}

string HealthCheck::GetCheckType() const
{
    return m_checkType;
}

void HealthCheck::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool HealthCheck::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

