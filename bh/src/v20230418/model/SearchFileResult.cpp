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

#include <tencentcloud/bh/v20230418/model/SearchFileResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchFileResult::SearchFileResult() :
    m_timeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_fileCurrHasBeenSet(false),
    m_fileNewHasBeenSet(false),
    m_sidHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_fromIpHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_confirmTimeHasBeenSet(false),
    m_userDepartmentIdHasBeenSet(false),
    m_userDepartmentNameHasBeenSet(false),
    m_deviceDepartmentIdHasBeenSet(false),
    m_deviceDepartmentNameHasBeenSet(false),
    m_signValueHasBeenSet(false)
{
}

CoreInternalOutcome SearchFileResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Method` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetUint64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("FileCurr") && !value["FileCurr"].IsNull())
    {
        if (!value["FileCurr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.FileCurr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCurr = string(value["FileCurr"].GetString());
        m_fileCurrHasBeenSet = true;
    }

    if (value.HasMember("FileNew") && !value["FileNew"].IsNull())
    {
        if (!value["FileNew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.FileNew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNew = string(value["FileNew"].GetString());
        m_fileNewHasBeenSet = true;
    }

    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("FromIp") && !value["FromIp"].IsNull())
    {
        if (!value["FromIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.FromIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromIp = string(value["FromIp"].GetString());
        m_fromIpHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ConfirmTime") && !value["ConfirmTime"].IsNull())
    {
        if (!value["ConfirmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.ConfirmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmTime = string(value["ConfirmTime"].GetString());
        m_confirmTimeHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentId") && !value["UserDepartmentId"].IsNull())
    {
        if (!value["UserDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.UserDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentId = string(value["UserDepartmentId"].GetString());
        m_userDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentName") && !value["UserDepartmentName"].IsNull())
    {
        if (!value["UserDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.UserDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentName = string(value["UserDepartmentName"].GetString());
        m_userDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentId") && !value["DeviceDepartmentId"].IsNull())
    {
        if (!value["DeviceDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.DeviceDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentId = string(value["DeviceDepartmentId"].GetString());
        m_deviceDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentName") && !value["DeviceDepartmentName"].IsNull())
    {
        if (!value["DeviceDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.DeviceDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentName = string(value["DeviceDepartmentName"].GetString());
        m_deviceDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("SignValue") && !value["SignValue"].IsNull())
    {
        if (!value["SignValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileResult.SignValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signValue = string(value["SignValue"].GetString());
        m_signValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFileResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_fileCurrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCurr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCurr.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNew.c_str(), allocator).Move(), allocator);
    }

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
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

    if (m_signValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signValue.c_str(), allocator).Move(), allocator);
    }

}


string SearchFileResult::GetTime() const
{
    return m_time;
}

void SearchFileResult::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SearchFileResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string SearchFileResult::GetUserName() const
{
    return m_userName;
}

void SearchFileResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchFileResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchFileResult::GetRealName() const
{
    return m_realName;
}

void SearchFileResult::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SearchFileResult::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SearchFileResult::GetInstanceId() const
{
    return m_instanceId;
}

void SearchFileResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchFileResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SearchFileResult::GetDeviceName() const
{
    return m_deviceName;
}

void SearchFileResult::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SearchFileResult::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SearchFileResult::GetPublicIp() const
{
    return m_publicIp;
}

void SearchFileResult::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SearchFileResult::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SearchFileResult::GetPrivateIp() const
{
    return m_privateIp;
}

void SearchFileResult::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SearchFileResult::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

uint64_t SearchFileResult::GetAction() const
{
    return m_action;
}

void SearchFileResult::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SearchFileResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t SearchFileResult::GetMethod() const
{
    return m_method;
}

void SearchFileResult::SetMethod(const uint64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchFileResult::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SearchFileResult::GetFileCurr() const
{
    return m_fileCurr;
}

void SearchFileResult::SetFileCurr(const string& _fileCurr)
{
    m_fileCurr = _fileCurr;
    m_fileCurrHasBeenSet = true;
}

bool SearchFileResult::FileCurrHasBeenSet() const
{
    return m_fileCurrHasBeenSet;
}

string SearchFileResult::GetFileNew() const
{
    return m_fileNew;
}

void SearchFileResult::SetFileNew(const string& _fileNew)
{
    m_fileNew = _fileNew;
    m_fileNewHasBeenSet = true;
}

bool SearchFileResult::FileNewHasBeenSet() const
{
    return m_fileNewHasBeenSet;
}

string SearchFileResult::GetSid() const
{
    return m_sid;
}

void SearchFileResult::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SearchFileResult::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string SearchFileResult::GetAccount() const
{
    return m_account;
}

void SearchFileResult::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool SearchFileResult::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string SearchFileResult::GetFromIp() const
{
    return m_fromIp;
}

void SearchFileResult::SetFromIp(const string& _fromIp)
{
    m_fromIp = _fromIp;
    m_fromIpHasBeenSet = true;
}

bool SearchFileResult::FromIpHasBeenSet() const
{
    return m_fromIpHasBeenSet;
}

string SearchFileResult::GetProtocol() const
{
    return m_protocol;
}

void SearchFileResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SearchFileResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t SearchFileResult::GetSize() const
{
    return m_size;
}

void SearchFileResult::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SearchFileResult::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SearchFileResult::GetConfirmTime() const
{
    return m_confirmTime;
}

void SearchFileResult::SetConfirmTime(const string& _confirmTime)
{
    m_confirmTime = _confirmTime;
    m_confirmTimeHasBeenSet = true;
}

bool SearchFileResult::ConfirmTimeHasBeenSet() const
{
    return m_confirmTimeHasBeenSet;
}

string SearchFileResult::GetUserDepartmentId() const
{
    return m_userDepartmentId;
}

void SearchFileResult::SetUserDepartmentId(const string& _userDepartmentId)
{
    m_userDepartmentId = _userDepartmentId;
    m_userDepartmentIdHasBeenSet = true;
}

bool SearchFileResult::UserDepartmentIdHasBeenSet() const
{
    return m_userDepartmentIdHasBeenSet;
}

string SearchFileResult::GetUserDepartmentName() const
{
    return m_userDepartmentName;
}

void SearchFileResult::SetUserDepartmentName(const string& _userDepartmentName)
{
    m_userDepartmentName = _userDepartmentName;
    m_userDepartmentNameHasBeenSet = true;
}

bool SearchFileResult::UserDepartmentNameHasBeenSet() const
{
    return m_userDepartmentNameHasBeenSet;
}

string SearchFileResult::GetDeviceDepartmentId() const
{
    return m_deviceDepartmentId;
}

void SearchFileResult::SetDeviceDepartmentId(const string& _deviceDepartmentId)
{
    m_deviceDepartmentId = _deviceDepartmentId;
    m_deviceDepartmentIdHasBeenSet = true;
}

bool SearchFileResult::DeviceDepartmentIdHasBeenSet() const
{
    return m_deviceDepartmentIdHasBeenSet;
}

string SearchFileResult::GetDeviceDepartmentName() const
{
    return m_deviceDepartmentName;
}

void SearchFileResult::SetDeviceDepartmentName(const string& _deviceDepartmentName)
{
    m_deviceDepartmentName = _deviceDepartmentName;
    m_deviceDepartmentNameHasBeenSet = true;
}

bool SearchFileResult::DeviceDepartmentNameHasBeenSet() const
{
    return m_deviceDepartmentNameHasBeenSet;
}

string SearchFileResult::GetSignValue() const
{
    return m_signValue;
}

void SearchFileResult::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool SearchFileResult::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}

