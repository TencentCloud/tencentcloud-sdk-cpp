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

#include <tencentcloud/dasb/v20191018/model/SearchFileResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
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

