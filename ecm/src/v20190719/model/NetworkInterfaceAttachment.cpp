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

#include <tencentcloud/ecm/v20190719/model/NetworkInterfaceAttachment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

NetworkInterfaceAttachment::NetworkInterfaceAttachment() :
    m_instanceIdHasBeenSet(false),
    m_deviceIndexHasBeenSet(false),
    m_instanceAccountIdHasBeenSet(false),
    m_attachTimeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInterfaceAttachment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaceAttachment.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceIndex") && !value["DeviceIndex"].IsNull())
    {
        if (!value["DeviceIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaceAttachment.DeviceIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceIndex = value["DeviceIndex"].GetUint64();
        m_deviceIndexHasBeenSet = true;
    }

    if (value.HasMember("InstanceAccountId") && !value["InstanceAccountId"].IsNull())
    {
        if (!value["InstanceAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaceAttachment.InstanceAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAccountId = string(value["InstanceAccountId"].GetString());
        m_instanceAccountIdHasBeenSet = true;
    }

    if (value.HasMember("AttachTime") && !value["AttachTime"].IsNull())
    {
        if (!value["AttachTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInterfaceAttachment.AttachTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachTime = string(value["AttachTime"].GetString());
        m_attachTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInterfaceAttachment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceIndex, allocator);
    }

    if (m_instanceAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceAccountId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachTime.c_str(), allocator).Move(), allocator);
    }

}


string NetworkInterfaceAttachment::GetInstanceId() const
{
    return m_instanceId;
}

void NetworkInterfaceAttachment::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NetworkInterfaceAttachment::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t NetworkInterfaceAttachment::GetDeviceIndex() const
{
    return m_deviceIndex;
}

void NetworkInterfaceAttachment::SetDeviceIndex(const uint64_t& _deviceIndex)
{
    m_deviceIndex = _deviceIndex;
    m_deviceIndexHasBeenSet = true;
}

bool NetworkInterfaceAttachment::DeviceIndexHasBeenSet() const
{
    return m_deviceIndexHasBeenSet;
}

string NetworkInterfaceAttachment::GetInstanceAccountId() const
{
    return m_instanceAccountId;
}

void NetworkInterfaceAttachment::SetInstanceAccountId(const string& _instanceAccountId)
{
    m_instanceAccountId = _instanceAccountId;
    m_instanceAccountIdHasBeenSet = true;
}

bool NetworkInterfaceAttachment::InstanceAccountIdHasBeenSet() const
{
    return m_instanceAccountIdHasBeenSet;
}

string NetworkInterfaceAttachment::GetAttachTime() const
{
    return m_attachTime;
}

void NetworkInterfaceAttachment::SetAttachTime(const string& _attachTime)
{
    m_attachTime = _attachTime;
    m_attachTimeHasBeenSet = true;
}

bool NetworkInterfaceAttachment::AttachTimeHasBeenSet() const
{
    return m_attachTimeHasBeenSet;
}

