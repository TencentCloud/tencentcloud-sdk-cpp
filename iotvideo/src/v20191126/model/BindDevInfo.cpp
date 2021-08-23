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

#include <tencentcloud/iotvideo/v20191126/model/BindDevInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

BindDevInfo::BindDevInfo() :
    m_tidHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

CoreInternalOutcome BindDevInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindDevInfo.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindDevInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceModel") && !value["DeviceModel"].IsNull())
    {
        if (!value["DeviceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindDevInfo.DeviceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModel = string(value["DeviceModel"].GetString());
        m_deviceModelHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindDevInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindDevInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceModel.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

}


string BindDevInfo::GetTid() const
{
    return m_tid;
}

void BindDevInfo::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool BindDevInfo::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string BindDevInfo::GetDeviceName() const
{
    return m_deviceName;
}

void BindDevInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool BindDevInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string BindDevInfo::GetDeviceModel() const
{
    return m_deviceModel;
}

void BindDevInfo::SetDeviceModel(const string& _deviceModel)
{
    m_deviceModel = _deviceModel;
    m_deviceModelHasBeenSet = true;
}

bool BindDevInfo::DeviceModelHasBeenSet() const
{
    return m_deviceModelHasBeenSet;
}

string BindDevInfo::GetRole() const
{
    return m_role;
}

void BindDevInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool BindDevInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

