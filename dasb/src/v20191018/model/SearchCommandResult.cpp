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

#include <tencentcloud/dasb/v20191018/model/SearchCommandResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

SearchCommandResult::SearchCommandResult() :
    m_timeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_sidHasBeenSet(false),
    m_timeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome SearchCommandResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.TimeOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetUint64();
        m_timeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchCommandResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

}


string SearchCommandResult::GetTime() const
{
    return m_time;
}

void SearchCommandResult::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SearchCommandResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string SearchCommandResult::GetUserName() const
{
    return m_userName;
}

void SearchCommandResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchCommandResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchCommandResult::GetRealName() const
{
    return m_realName;
}

void SearchCommandResult::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SearchCommandResult::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SearchCommandResult::GetInstanceId() const
{
    return m_instanceId;
}

void SearchCommandResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchCommandResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SearchCommandResult::GetDeviceName() const
{
    return m_deviceName;
}

void SearchCommandResult::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SearchCommandResult::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SearchCommandResult::GetPublicIp() const
{
    return m_publicIp;
}

void SearchCommandResult::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SearchCommandResult::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SearchCommandResult::GetPrivateIp() const
{
    return m_privateIp;
}

void SearchCommandResult::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SearchCommandResult::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SearchCommandResult::GetCmd() const
{
    return m_cmd;
}

void SearchCommandResult::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SearchCommandResult::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t SearchCommandResult::GetAction() const
{
    return m_action;
}

void SearchCommandResult::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SearchCommandResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SearchCommandResult::GetSid() const
{
    return m_sid;
}

void SearchCommandResult::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SearchCommandResult::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

uint64_t SearchCommandResult::GetTimeOffset() const
{
    return m_timeOffset;
}

void SearchCommandResult::SetTimeOffset(const uint64_t& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool SearchCommandResult::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

