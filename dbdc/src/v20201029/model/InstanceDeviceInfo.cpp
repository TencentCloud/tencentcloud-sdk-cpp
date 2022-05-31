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

#include <tencentcloud/dbdc/v20201029/model/InstanceDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

InstanceDeviceInfo::InstanceDeviceInfo() :
    m_instanceIdHasBeenSet(false),
    m_readWriteDeviceHasBeenSet(false),
    m_readOnlyDeviceHasBeenSet(false),
    m_freeDeviceHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDeviceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteDevice") && !value["ReadWriteDevice"].IsNull())
    {
        if (!value["ReadWriteDevice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDeviceInfo.ReadWriteDevice` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadWriteDevice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readWriteDevice.push_back(item);
        }
        m_readWriteDeviceHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyDevice") && !value["ReadOnlyDevice"].IsNull())
    {
        if (!value["ReadOnlyDevice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDeviceInfo.ReadOnlyDevice` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadOnlyDevice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readOnlyDevice.push_back(item);
        }
        m_readOnlyDeviceHasBeenSet = true;
    }

    if (value.HasMember("FreeDevice") && !value["FreeDevice"].IsNull())
    {
        if (!value["FreeDevice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDeviceInfo.FreeDevice` is not array type"));

        const rapidjson::Value &tmpValue = value["FreeDevice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_freeDevice.push_back(item);
        }
        m_freeDeviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readWriteDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readWriteDevice.begin(); itr != m_readWriteDevice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_readOnlyDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readOnlyDevice.begin(); itr != m_readOnlyDevice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_freeDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_freeDevice.begin(); itr != m_freeDevice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceDeviceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDeviceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDeviceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DeviceInfo> InstanceDeviceInfo::GetReadWriteDevice() const
{
    return m_readWriteDevice;
}

void InstanceDeviceInfo::SetReadWriteDevice(const vector<DeviceInfo>& _readWriteDevice)
{
    m_readWriteDevice = _readWriteDevice;
    m_readWriteDeviceHasBeenSet = true;
}

bool InstanceDeviceInfo::ReadWriteDeviceHasBeenSet() const
{
    return m_readWriteDeviceHasBeenSet;
}

vector<DeviceInfo> InstanceDeviceInfo::GetReadOnlyDevice() const
{
    return m_readOnlyDevice;
}

void InstanceDeviceInfo::SetReadOnlyDevice(const vector<DeviceInfo>& _readOnlyDevice)
{
    m_readOnlyDevice = _readOnlyDevice;
    m_readOnlyDeviceHasBeenSet = true;
}

bool InstanceDeviceInfo::ReadOnlyDeviceHasBeenSet() const
{
    return m_readOnlyDeviceHasBeenSet;
}

vector<DeviceInfo> InstanceDeviceInfo::GetFreeDevice() const
{
    return m_freeDevice;
}

void InstanceDeviceInfo::SetFreeDevice(const vector<DeviceInfo>& _freeDevice)
{
    m_freeDevice = _freeDevice;
    m_freeDeviceHasBeenSet = true;
}

bool InstanceDeviceInfo::FreeDeviceHasBeenSet() const
{
    return m_freeDeviceHasBeenSet;
}

