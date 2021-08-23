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

#include <tencentcloud/iotvideo/v20201215/model/ActionHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

ActionHistory::ActionHistory() :
    m_deviceNameHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_reqTimeHasBeenSet(false),
    m_rspTimeHasBeenSet(false),
    m_inputParamsHasBeenSet(false),
    m_outputParamsHasBeenSet(false),
    m_callingHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ActionHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.ActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = string(value["ActionId"].GetString());
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("ReqTime") && !value["ReqTime"].IsNull())
    {
        if (!value["ReqTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.ReqTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqTime = value["ReqTime"].GetUint64();
        m_reqTimeHasBeenSet = true;
    }

    if (value.HasMember("RspTime") && !value["RspTime"].IsNull())
    {
        if (!value["RspTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.RspTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rspTime = value["RspTime"].GetUint64();
        m_rspTimeHasBeenSet = true;
    }

    if (value.HasMember("InputParams") && !value["InputParams"].IsNull())
    {
        if (!value["InputParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.InputParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputParams = string(value["InputParams"].GetString());
        m_inputParamsHasBeenSet = true;
    }

    if (value.HasMember("OutputParams") && !value["OutputParams"].IsNull())
    {
        if (!value["OutputParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.OutputParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputParams = string(value["OutputParams"].GetString());
        m_outputParamsHasBeenSet = true;
    }

    if (value.HasMember("Calling") && !value["Calling"].IsNull())
    {
        if (!value["Calling"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.Calling` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calling = string(value["Calling"].GetString());
        m_callingHasBeenSet = true;
    }

    if (value.HasMember("ClientToken") && !value["ClientToken"].IsNull())
    {
        if (!value["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(value["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionHistory.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionName.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqTime, allocator);
    }

    if (m_rspTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rspTime, allocator);
    }

    if (m_inputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputParams.c_str(), allocator).Move(), allocator);
    }

    if (m_outputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputParams.c_str(), allocator).Move(), allocator);
    }

    if (m_callingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Calling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calling.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ActionHistory::GetDeviceName() const
{
    return m_deviceName;
}

void ActionHistory::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ActionHistory::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ActionHistory::GetActionId() const
{
    return m_actionId;
}

void ActionHistory::SetActionId(const string& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool ActionHistory::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

string ActionHistory::GetActionName() const
{
    return m_actionName;
}

void ActionHistory::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool ActionHistory::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

uint64_t ActionHistory::GetReqTime() const
{
    return m_reqTime;
}

void ActionHistory::SetReqTime(const uint64_t& _reqTime)
{
    m_reqTime = _reqTime;
    m_reqTimeHasBeenSet = true;
}

bool ActionHistory::ReqTimeHasBeenSet() const
{
    return m_reqTimeHasBeenSet;
}

uint64_t ActionHistory::GetRspTime() const
{
    return m_rspTime;
}

void ActionHistory::SetRspTime(const uint64_t& _rspTime)
{
    m_rspTime = _rspTime;
    m_rspTimeHasBeenSet = true;
}

bool ActionHistory::RspTimeHasBeenSet() const
{
    return m_rspTimeHasBeenSet;
}

string ActionHistory::GetInputParams() const
{
    return m_inputParams;
}

void ActionHistory::SetInputParams(const string& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool ActionHistory::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}

string ActionHistory::GetOutputParams() const
{
    return m_outputParams;
}

void ActionHistory::SetOutputParams(const string& _outputParams)
{
    m_outputParams = _outputParams;
    m_outputParamsHasBeenSet = true;
}

bool ActionHistory::OutputParamsHasBeenSet() const
{
    return m_outputParamsHasBeenSet;
}

string ActionHistory::GetCalling() const
{
    return m_calling;
}

void ActionHistory::SetCalling(const string& _calling)
{
    m_calling = _calling;
    m_callingHasBeenSet = true;
}

bool ActionHistory::CallingHasBeenSet() const
{
    return m_callingHasBeenSet;
}

string ActionHistory::GetClientToken() const
{
    return m_clientToken;
}

void ActionHistory::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ActionHistory::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string ActionHistory::GetStatus() const
{
    return m_status;
}

void ActionHistory::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ActionHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

