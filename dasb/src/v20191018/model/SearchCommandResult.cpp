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
    m_timeOffsetHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_fromIpHasBeenSet(false),
    m_sessionTimeHasBeenSet(false),
    m_sessTimeHasBeenSet(false),
    m_confirmTimeHasBeenSet(false),
    m_userDepartmentIdHasBeenSet(false),
    m_userDepartmentNameHasBeenSet(false),
    m_deviceDepartmentIdHasBeenSet(false),
    m_deviceDepartmentNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_signValueHasBeenSet(false)
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

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("FromIp") && !value["FromIp"].IsNull())
    {
        if (!value["FromIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.FromIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromIp = string(value["FromIp"].GetString());
        m_fromIpHasBeenSet = true;
    }

    if (value.HasMember("SessionTime") && !value["SessionTime"].IsNull())
    {
        if (!value["SessionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.SessionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionTime = string(value["SessionTime"].GetString());
        m_sessionTimeHasBeenSet = true;
    }

    if (value.HasMember("SessTime") && !value["SessTime"].IsNull())
    {
        if (!value["SessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.SessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessTime = string(value["SessTime"].GetString());
        m_sessTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfirmTime") && !value["ConfirmTime"].IsNull())
    {
        if (!value["ConfirmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.ConfirmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmTime = string(value["ConfirmTime"].GetString());
        m_confirmTimeHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentId") && !value["UserDepartmentId"].IsNull())
    {
        if (!value["UserDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.UserDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentId = string(value["UserDepartmentId"].GetString());
        m_userDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentName") && !value["UserDepartmentName"].IsNull())
    {
        if (!value["UserDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.UserDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentName = string(value["UserDepartmentName"].GetString());
        m_userDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentId") && !value["DeviceDepartmentId"].IsNull())
    {
        if (!value["DeviceDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.DeviceDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentId = string(value["DeviceDepartmentId"].GetString());
        m_deviceDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentName") && !value["DeviceDepartmentName"].IsNull())
    {
        if (!value["DeviceDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.DeviceDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentName = string(value["DeviceDepartmentName"].GetString());
        m_deviceDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("SignValue") && !value["SignValue"].IsNull())
    {
        if (!value["SignValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchCommandResult.SignValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signValue = string(value["SignValue"].GetString());
        m_signValueHasBeenSet = true;
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

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_fromIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_confirmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confirmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userDepartmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDepartmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDepartmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDepartmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceDepartmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceDepartmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceDepartmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceDepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceDepartmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_signValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signValue.c_str(), allocator).Move(), allocator);
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

string SearchCommandResult::GetAccount() const
{
    return m_account;
}

void SearchCommandResult::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool SearchCommandResult::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string SearchCommandResult::GetFromIp() const
{
    return m_fromIp;
}

void SearchCommandResult::SetFromIp(const string& _fromIp)
{
    m_fromIp = _fromIp;
    m_fromIpHasBeenSet = true;
}

bool SearchCommandResult::FromIpHasBeenSet() const
{
    return m_fromIpHasBeenSet;
}

string SearchCommandResult::GetSessionTime() const
{
    return m_sessionTime;
}

void SearchCommandResult::SetSessionTime(const string& _sessionTime)
{
    m_sessionTime = _sessionTime;
    m_sessionTimeHasBeenSet = true;
}

bool SearchCommandResult::SessionTimeHasBeenSet() const
{
    return m_sessionTimeHasBeenSet;
}

string SearchCommandResult::GetSessTime() const
{
    return m_sessTime;
}

void SearchCommandResult::SetSessTime(const string& _sessTime)
{
    m_sessTime = _sessTime;
    m_sessTimeHasBeenSet = true;
}

bool SearchCommandResult::SessTimeHasBeenSet() const
{
    return m_sessTimeHasBeenSet;
}

string SearchCommandResult::GetConfirmTime() const
{
    return m_confirmTime;
}

void SearchCommandResult::SetConfirmTime(const string& _confirmTime)
{
    m_confirmTime = _confirmTime;
    m_confirmTimeHasBeenSet = true;
}

bool SearchCommandResult::ConfirmTimeHasBeenSet() const
{
    return m_confirmTimeHasBeenSet;
}

string SearchCommandResult::GetUserDepartmentId() const
{
    return m_userDepartmentId;
}

void SearchCommandResult::SetUserDepartmentId(const string& _userDepartmentId)
{
    m_userDepartmentId = _userDepartmentId;
    m_userDepartmentIdHasBeenSet = true;
}

bool SearchCommandResult::UserDepartmentIdHasBeenSet() const
{
    return m_userDepartmentIdHasBeenSet;
}

string SearchCommandResult::GetUserDepartmentName() const
{
    return m_userDepartmentName;
}

void SearchCommandResult::SetUserDepartmentName(const string& _userDepartmentName)
{
    m_userDepartmentName = _userDepartmentName;
    m_userDepartmentNameHasBeenSet = true;
}

bool SearchCommandResult::UserDepartmentNameHasBeenSet() const
{
    return m_userDepartmentNameHasBeenSet;
}

string SearchCommandResult::GetDeviceDepartmentId() const
{
    return m_deviceDepartmentId;
}

void SearchCommandResult::SetDeviceDepartmentId(const string& _deviceDepartmentId)
{
    m_deviceDepartmentId = _deviceDepartmentId;
    m_deviceDepartmentIdHasBeenSet = true;
}

bool SearchCommandResult::DeviceDepartmentIdHasBeenSet() const
{
    return m_deviceDepartmentIdHasBeenSet;
}

string SearchCommandResult::GetDeviceDepartmentName() const
{
    return m_deviceDepartmentName;
}

void SearchCommandResult::SetDeviceDepartmentName(const string& _deviceDepartmentName)
{
    m_deviceDepartmentName = _deviceDepartmentName;
    m_deviceDepartmentNameHasBeenSet = true;
}

bool SearchCommandResult::DeviceDepartmentNameHasBeenSet() const
{
    return m_deviceDepartmentNameHasBeenSet;
}

uint64_t SearchCommandResult::GetSize() const
{
    return m_size;
}

void SearchCommandResult::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SearchCommandResult::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SearchCommandResult::GetSignValue() const
{
    return m_signValue;
}

void SearchCommandResult::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool SearchCommandResult::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}

