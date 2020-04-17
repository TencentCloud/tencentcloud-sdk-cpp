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

#include <tencentcloud/dayu/v20180709/model/BoundIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

BoundIpInfo::BoundIpInfo() :
    m_ipHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome BoundIpInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `BoundIpInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BoundIpInfo.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BoundIpInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BoundIpInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BoundIpInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string BoundIpInfo::GetIp() const
{
    return m_ip;
}

void BoundIpInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool BoundIpInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string BoundIpInfo::GetBizType() const
{
    return m_bizType;
}

void BoundIpInfo::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool BoundIpInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string BoundIpInfo::GetDeviceType() const
{
    return m_deviceType;
}

void BoundIpInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool BoundIpInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string BoundIpInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BoundIpInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BoundIpInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

