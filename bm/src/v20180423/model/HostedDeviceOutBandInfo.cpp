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

#include <tencentcloud/bm/v20180423/model/HostedDeviceOutBandInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

HostedDeviceOutBandInfo::HostedDeviceOutBandInfo() :
    m_instanceIdHasBeenSet(false),
    m_outBandIpHasBeenSet(false),
    m_vpnIpHasBeenSet(false),
    m_vpnPortHasBeenSet(false)
{
}

CoreInternalOutcome HostedDeviceOutBandInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostedDeviceOutBandInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("OutBandIp") && !value["OutBandIp"].IsNull())
    {
        if (!value["OutBandIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostedDeviceOutBandInfo.OutBandIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBandIp = string(value["OutBandIp"].GetString());
        m_outBandIpHasBeenSet = true;
    }

    if (value.HasMember("VpnIp") && !value["VpnIp"].IsNull())
    {
        if (!value["VpnIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostedDeviceOutBandInfo.VpnIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnIp = string(value["VpnIp"].GetString());
        m_vpnIpHasBeenSet = true;
    }

    if (value.HasMember("VpnPort") && !value["VpnPort"].IsNull())
    {
        if (!value["VpnPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostedDeviceOutBandInfo.VpnPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpnPort = value["VpnPort"].GetUint64();
        m_vpnPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostedDeviceOutBandInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_outBandIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBandIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outBandIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpnPort, allocator);
    }

}


string HostedDeviceOutBandInfo::GetInstanceId() const
{
    return m_instanceId;
}

void HostedDeviceOutBandInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HostedDeviceOutBandInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HostedDeviceOutBandInfo::GetOutBandIp() const
{
    return m_outBandIp;
}

void HostedDeviceOutBandInfo::SetOutBandIp(const string& _outBandIp)
{
    m_outBandIp = _outBandIp;
    m_outBandIpHasBeenSet = true;
}

bool HostedDeviceOutBandInfo::OutBandIpHasBeenSet() const
{
    return m_outBandIpHasBeenSet;
}

string HostedDeviceOutBandInfo::GetVpnIp() const
{
    return m_vpnIp;
}

void HostedDeviceOutBandInfo::SetVpnIp(const string& _vpnIp)
{
    m_vpnIp = _vpnIp;
    m_vpnIpHasBeenSet = true;
}

bool HostedDeviceOutBandInfo::VpnIpHasBeenSet() const
{
    return m_vpnIpHasBeenSet;
}

uint64_t HostedDeviceOutBandInfo::GetVpnPort() const
{
    return m_vpnPort;
}

void HostedDeviceOutBandInfo::SetVpnPort(const uint64_t& _vpnPort)
{
    m_vpnPort = _vpnPort;
    m_vpnPortHasBeenSet = true;
}

bool HostedDeviceOutBandInfo::VpnPortHasBeenSet() const
{
    return m_vpnPortHasBeenSet;
}

