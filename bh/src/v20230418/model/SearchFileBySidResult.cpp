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

#include <tencentcloud/bh/v20230418/model/SearchFileBySidResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchFileBySidResult::SearchFileBySidResult() :
    m_sidHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_fromIpHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_fileCurrHasBeenSet(false),
    m_fileNewHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_confirmTimeHasBeenSet(false),
    m_userDepartmentIdHasBeenSet(false),
    m_userDepartmentNameHasBeenSet(false),
    m_deviceDepartmentIdHasBeenSet(false),
    m_deviceDepartmentNameHasBeenSet(false),
    m_signValueHasBeenSet(false)
{
}

CoreInternalOutcome SearchFileBySidResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("FromIp") && !value["FromIp"].IsNull())
    {
        if (!value["FromIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.FromIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromIp = string(value["FromIp"].GetString());
        m_fromIpHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Method` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetInt64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("FileCurr") && !value["FileCurr"].IsNull())
    {
        if (!value["FileCurr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.FileCurr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCurr = string(value["FileCurr"].GetString());
        m_fileCurrHasBeenSet = true;
    }

    if (value.HasMember("FileNew") && !value["FileNew"].IsNull())
    {
        if (!value["FileNew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.FileNew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNew = string(value["FileNew"].GetString());
        m_fileNewHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ConfirmTime") && !value["ConfirmTime"].IsNull())
    {
        if (!value["ConfirmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.ConfirmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmTime = string(value["ConfirmTime"].GetString());
        m_confirmTimeHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentId") && !value["UserDepartmentId"].IsNull())
    {
        if (!value["UserDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.UserDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentId = string(value["UserDepartmentId"].GetString());
        m_userDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("UserDepartmentName") && !value["UserDepartmentName"].IsNull())
    {
        if (!value["UserDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.UserDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDepartmentName = string(value["UserDepartmentName"].GetString());
        m_userDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentId") && !value["DeviceDepartmentId"].IsNull())
    {
        if (!value["DeviceDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.DeviceDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentId = string(value["DeviceDepartmentId"].GetString());
        m_deviceDepartmentIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceDepartmentName") && !value["DeviceDepartmentName"].IsNull())
    {
        if (!value["DeviceDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.DeviceDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceDepartmentName = string(value["DeviceDepartmentName"].GetString());
        m_deviceDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("SignValue") && !value["SignValue"].IsNull())
    {
        if (!value["SignValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileBySidResult.SignValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signValue = string(value["SignValue"].GetString());
        m_signValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFileBySidResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
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


string SearchFileBySidResult::GetSid() const
{
    return m_sid;
}

void SearchFileBySidResult::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SearchFileBySidResult::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string SearchFileBySidResult::GetUserName() const
{
    return m_userName;
}

void SearchFileBySidResult::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchFileBySidResult::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchFileBySidResult::GetInstanceId() const
{
    return m_instanceId;
}

void SearchFileBySidResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SearchFileBySidResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SearchFileBySidResult::GetAccount() const
{
    return m_account;
}

void SearchFileBySidResult::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool SearchFileBySidResult::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string SearchFileBySidResult::GetFromIp() const
{
    return m_fromIp;
}

void SearchFileBySidResult::SetFromIp(const string& _fromIp)
{
    m_fromIp = _fromIp;
    m_fromIpHasBeenSet = true;
}

bool SearchFileBySidResult::FromIpHasBeenSet() const
{
    return m_fromIpHasBeenSet;
}

string SearchFileBySidResult::GetTime() const
{
    return m_time;
}

void SearchFileBySidResult::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SearchFileBySidResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t SearchFileBySidResult::GetMethod() const
{
    return m_method;
}

void SearchFileBySidResult::SetMethod(const int64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchFileBySidResult::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SearchFileBySidResult::GetProtocol() const
{
    return m_protocol;
}

void SearchFileBySidResult::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SearchFileBySidResult::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SearchFileBySidResult::GetFileCurr() const
{
    return m_fileCurr;
}

void SearchFileBySidResult::SetFileCurr(const string& _fileCurr)
{
    m_fileCurr = _fileCurr;
    m_fileCurrHasBeenSet = true;
}

bool SearchFileBySidResult::FileCurrHasBeenSet() const
{
    return m_fileCurrHasBeenSet;
}

string SearchFileBySidResult::GetFileNew() const
{
    return m_fileNew;
}

void SearchFileBySidResult::SetFileNew(const string& _fileNew)
{
    m_fileNew = _fileNew;
    m_fileNewHasBeenSet = true;
}

bool SearchFileBySidResult::FileNewHasBeenSet() const
{
    return m_fileNewHasBeenSet;
}

int64_t SearchFileBySidResult::GetSize() const
{
    return m_size;
}

void SearchFileBySidResult::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SearchFileBySidResult::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t SearchFileBySidResult::GetAction() const
{
    return m_action;
}

void SearchFileBySidResult::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SearchFileBySidResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SearchFileBySidResult::GetConfirmTime() const
{
    return m_confirmTime;
}

void SearchFileBySidResult::SetConfirmTime(const string& _confirmTime)
{
    m_confirmTime = _confirmTime;
    m_confirmTimeHasBeenSet = true;
}

bool SearchFileBySidResult::ConfirmTimeHasBeenSet() const
{
    return m_confirmTimeHasBeenSet;
}

string SearchFileBySidResult::GetUserDepartmentId() const
{
    return m_userDepartmentId;
}

void SearchFileBySidResult::SetUserDepartmentId(const string& _userDepartmentId)
{
    m_userDepartmentId = _userDepartmentId;
    m_userDepartmentIdHasBeenSet = true;
}

bool SearchFileBySidResult::UserDepartmentIdHasBeenSet() const
{
    return m_userDepartmentIdHasBeenSet;
}

string SearchFileBySidResult::GetUserDepartmentName() const
{
    return m_userDepartmentName;
}

void SearchFileBySidResult::SetUserDepartmentName(const string& _userDepartmentName)
{
    m_userDepartmentName = _userDepartmentName;
    m_userDepartmentNameHasBeenSet = true;
}

bool SearchFileBySidResult::UserDepartmentNameHasBeenSet() const
{
    return m_userDepartmentNameHasBeenSet;
}

string SearchFileBySidResult::GetDeviceDepartmentId() const
{
    return m_deviceDepartmentId;
}

void SearchFileBySidResult::SetDeviceDepartmentId(const string& _deviceDepartmentId)
{
    m_deviceDepartmentId = _deviceDepartmentId;
    m_deviceDepartmentIdHasBeenSet = true;
}

bool SearchFileBySidResult::DeviceDepartmentIdHasBeenSet() const
{
    return m_deviceDepartmentIdHasBeenSet;
}

string SearchFileBySidResult::GetDeviceDepartmentName() const
{
    return m_deviceDepartmentName;
}

void SearchFileBySidResult::SetDeviceDepartmentName(const string& _deviceDepartmentName)
{
    m_deviceDepartmentName = _deviceDepartmentName;
    m_deviceDepartmentNameHasBeenSet = true;
}

bool SearchFileBySidResult::DeviceDepartmentNameHasBeenSet() const
{
    return m_deviceDepartmentNameHasBeenSet;
}

string SearchFileBySidResult::GetSignValue() const
{
    return m_signValue;
}

void SearchFileBySidResult::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool SearchFileBySidResult::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}

