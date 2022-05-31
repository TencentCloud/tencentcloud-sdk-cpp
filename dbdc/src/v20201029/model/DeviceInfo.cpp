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

#include <tencentcloud/dbdc/v20201029/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceNoHasBeenSet(false),
    m_devClassHasBeenSet(false),
    m_maxMemoryHasBeenSet(false),
    m_maxDiskHasBeenSet(false),
    m_restMemoryHasBeenSet(false),
    m_restDiskHasBeenSet(false),
    m_rawDeviceNumHasBeenSet(false),
    m_instanceNumHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = value["DeviceId"].GetInt64();
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceNo") && !value["DeviceNo"].IsNull())
    {
        if (!value["DeviceNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceNo = string(value["DeviceNo"].GetString());
        m_deviceNoHasBeenSet = true;
    }

    if (value.HasMember("DevClass") && !value["DevClass"].IsNull())
    {
        if (!value["DevClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devClass = string(value["DevClass"].GetString());
        m_devClassHasBeenSet = true;
    }

    if (value.HasMember("MaxMemory") && !value["MaxMemory"].IsNull())
    {
        if (!value["MaxMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.MaxMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxMemory = value["MaxMemory"].GetDouble();
        m_maxMemoryHasBeenSet = true;
    }

    if (value.HasMember("MaxDisk") && !value["MaxDisk"].IsNull())
    {
        if (!value["MaxDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.MaxDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxDisk = value["MaxDisk"].GetDouble();
        m_maxDiskHasBeenSet = true;
    }

    if (value.HasMember("RestMemory") && !value["RestMemory"].IsNull())
    {
        if (!value["RestMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.RestMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_restMemory = value["RestMemory"].GetDouble();
        m_restMemoryHasBeenSet = true;
    }

    if (value.HasMember("RestDisk") && !value["RestDisk"].IsNull())
    {
        if (!value["RestDisk"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.RestDisk` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_restDisk = value["RestDisk"].GetDouble();
        m_restDiskHasBeenSet = true;
    }

    if (value.HasMember("RawDeviceNum") && !value["RawDeviceNum"].IsNull())
    {
        if (!value["RawDeviceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.RawDeviceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rawDeviceNum = value["RawDeviceNum"].GetUint64();
        m_rawDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.InstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetUint64();
        m_instanceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_deviceNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceNo.c_str(), allocator).Move(), allocator);
    }

    if (m_devClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devClass.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMemory, allocator);
    }

    if (m_maxDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDisk, allocator);
    }

    if (m_restMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restMemory, allocator);
    }

    if (m_restDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restDisk, allocator);
    }

    if (m_rawDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rawDeviceNum, allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

}


int64_t DeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceInfo::SetDeviceId(const int64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DeviceInfo::GetDeviceNo() const
{
    return m_deviceNo;
}

void DeviceInfo::SetDeviceNo(const string& _deviceNo)
{
    m_deviceNo = _deviceNo;
    m_deviceNoHasBeenSet = true;
}

bool DeviceInfo::DeviceNoHasBeenSet() const
{
    return m_deviceNoHasBeenSet;
}

string DeviceInfo::GetDevClass() const
{
    return m_devClass;
}

void DeviceInfo::SetDevClass(const string& _devClass)
{
    m_devClass = _devClass;
    m_devClassHasBeenSet = true;
}

bool DeviceInfo::DevClassHasBeenSet() const
{
    return m_devClassHasBeenSet;
}

double DeviceInfo::GetMaxMemory() const
{
    return m_maxMemory;
}

void DeviceInfo::SetMaxMemory(const double& _maxMemory)
{
    m_maxMemory = _maxMemory;
    m_maxMemoryHasBeenSet = true;
}

bool DeviceInfo::MaxMemoryHasBeenSet() const
{
    return m_maxMemoryHasBeenSet;
}

double DeviceInfo::GetMaxDisk() const
{
    return m_maxDisk;
}

void DeviceInfo::SetMaxDisk(const double& _maxDisk)
{
    m_maxDisk = _maxDisk;
    m_maxDiskHasBeenSet = true;
}

bool DeviceInfo::MaxDiskHasBeenSet() const
{
    return m_maxDiskHasBeenSet;
}

double DeviceInfo::GetRestMemory() const
{
    return m_restMemory;
}

void DeviceInfo::SetRestMemory(const double& _restMemory)
{
    m_restMemory = _restMemory;
    m_restMemoryHasBeenSet = true;
}

bool DeviceInfo::RestMemoryHasBeenSet() const
{
    return m_restMemoryHasBeenSet;
}

double DeviceInfo::GetRestDisk() const
{
    return m_restDisk;
}

void DeviceInfo::SetRestDisk(const double& _restDisk)
{
    m_restDisk = _restDisk;
    m_restDiskHasBeenSet = true;
}

bool DeviceInfo::RestDiskHasBeenSet() const
{
    return m_restDiskHasBeenSet;
}

uint64_t DeviceInfo::GetRawDeviceNum() const
{
    return m_rawDeviceNum;
}

void DeviceInfo::SetRawDeviceNum(const uint64_t& _rawDeviceNum)
{
    m_rawDeviceNum = _rawDeviceNum;
    m_rawDeviceNumHasBeenSet = true;
}

bool DeviceInfo::RawDeviceNumHasBeenSet() const
{
    return m_rawDeviceNumHasBeenSet;
}

uint64_t DeviceInfo::GetInstanceNum() const
{
    return m_instanceNum;
}

void DeviceInfo::SetInstanceNum(const uint64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool DeviceInfo::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

