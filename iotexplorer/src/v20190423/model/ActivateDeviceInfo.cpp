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

#include <tencentcloud/iotexplorer/v20190423/model/ActivateDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ActivateDeviceInfo::ActivateDeviceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_deviceActivationDetailsHasBeenSet(false),
    m_registeredDeviceTypeHasBeenSet(false),
    m_registeredDeviceNetTypeHasBeenSet(false)
{
}

CoreInternalOutcome ActivateDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateDeviceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateDeviceInfo.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceActivationDetails") && !value["DeviceActivationDetails"].IsNull())
    {
        if (!value["DeviceActivationDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateDeviceInfo.DeviceActivationDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deviceActivationDetails.Deserialize(value["DeviceActivationDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deviceActivationDetailsHasBeenSet = true;
    }

    if (value.HasMember("RegisteredDeviceType") && !value["RegisteredDeviceType"].IsNull())
    {
        if (!value["RegisteredDeviceType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateDeviceInfo.RegisteredDeviceType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registeredDeviceType.Deserialize(value["RegisteredDeviceType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registeredDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("RegisteredDeviceNetType") && !value["RegisteredDeviceNetType"].IsNull())
    {
        if (!value["RegisteredDeviceNetType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActivateDeviceInfo.RegisteredDeviceNetType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registeredDeviceNetType.Deserialize(value["RegisteredDeviceNetType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registeredDeviceNetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivateDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_deviceActivationDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceActivationDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deviceActivationDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_registeredDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registeredDeviceType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_registeredDeviceNetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredDeviceNetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registeredDeviceNetType.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ActivateDeviceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ActivateDeviceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ActivateDeviceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ActivateDeviceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void ActivateDeviceInfo::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ActivateDeviceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

DeviceActivationDetail ActivateDeviceInfo::GetDeviceActivationDetails() const
{
    return m_deviceActivationDetails;
}

void ActivateDeviceInfo::SetDeviceActivationDetails(const DeviceActivationDetail& _deviceActivationDetails)
{
    m_deviceActivationDetails = _deviceActivationDetails;
    m_deviceActivationDetailsHasBeenSet = true;
}

bool ActivateDeviceInfo::DeviceActivationDetailsHasBeenSet() const
{
    return m_deviceActivationDetailsHasBeenSet;
}

RegisteredDeviceTypeInfo ActivateDeviceInfo::GetRegisteredDeviceType() const
{
    return m_registeredDeviceType;
}

void ActivateDeviceInfo::SetRegisteredDeviceType(const RegisteredDeviceTypeInfo& _registeredDeviceType)
{
    m_registeredDeviceType = _registeredDeviceType;
    m_registeredDeviceTypeHasBeenSet = true;
}

bool ActivateDeviceInfo::RegisteredDeviceTypeHasBeenSet() const
{
    return m_registeredDeviceTypeHasBeenSet;
}

RegisteredDeviceNetTypeInfo ActivateDeviceInfo::GetRegisteredDeviceNetType() const
{
    return m_registeredDeviceNetType;
}

void ActivateDeviceInfo::SetRegisteredDeviceNetType(const RegisteredDeviceNetTypeInfo& _registeredDeviceNetType)
{
    m_registeredDeviceNetType = _registeredDeviceNetType;
    m_registeredDeviceNetTypeHasBeenSet = true;
}

bool ActivateDeviceInfo::RegisteredDeviceNetTypeHasBeenSet() const
{
    return m_registeredDeviceNetTypeHasBeenSet;
}

