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

#include <tencentcloud/iss/v20230517/model/DescribeGatewayMonitor.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeGatewayMonitor::DescribeGatewayMonitor() :
    m_deviceTotalHasBeenSet(false),
    m_deviceOnlineHasBeenSet(false),
    m_deviceOfflineHasBeenSet(false),
    m_channelTotalHasBeenSet(false),
    m_channelOnlineHasBeenSet(false),
    m_channelOfflineHasBeenSet(false),
    m_upFlowHasBeenSet(false),
    m_channelPullHasBeenSet(false),
    m_channelUnPullHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGatewayMonitor::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceTotal") && !value["DeviceTotal"].IsNull())
    {
        if (!value["DeviceTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.DeviceTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTotal = value["DeviceTotal"].GetInt64();
        m_deviceTotalHasBeenSet = true;
    }

    if (value.HasMember("DeviceOnline") && !value["DeviceOnline"].IsNull())
    {
        if (!value["DeviceOnline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.DeviceOnline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceOnline = value["DeviceOnline"].GetInt64();
        m_deviceOnlineHasBeenSet = true;
    }

    if (value.HasMember("DeviceOffline") && !value["DeviceOffline"].IsNull())
    {
        if (!value["DeviceOffline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.DeviceOffline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceOffline = value["DeviceOffline"].GetInt64();
        m_deviceOfflineHasBeenSet = true;
    }

    if (value.HasMember("ChannelTotal") && !value["ChannelTotal"].IsNull())
    {
        if (!value["ChannelTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.ChannelTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelTotal = value["ChannelTotal"].GetInt64();
        m_channelTotalHasBeenSet = true;
    }

    if (value.HasMember("ChannelOnline") && !value["ChannelOnline"].IsNull())
    {
        if (!value["ChannelOnline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.ChannelOnline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelOnline = value["ChannelOnline"].GetInt64();
        m_channelOnlineHasBeenSet = true;
    }

    if (value.HasMember("ChannelOffline") && !value["ChannelOffline"].IsNull())
    {
        if (!value["ChannelOffline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.ChannelOffline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelOffline = value["ChannelOffline"].GetInt64();
        m_channelOfflineHasBeenSet = true;
    }

    if (value.HasMember("UpFlow") && !value["UpFlow"].IsNull())
    {
        if (!value["UpFlow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.UpFlow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upFlow = value["UpFlow"].GetInt64();
        m_upFlowHasBeenSet = true;
    }

    if (value.HasMember("ChannelPull") && !value["ChannelPull"].IsNull())
    {
        if (!value["ChannelPull"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.ChannelPull` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelPull = value["ChannelPull"].GetInt64();
        m_channelPullHasBeenSet = true;
    }

    if (value.HasMember("ChannelUnPull") && !value["ChannelUnPull"].IsNull())
    {
        if (!value["ChannelUnPull"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayMonitor.ChannelUnPull` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelUnPull = value["ChannelUnPull"].GetInt64();
        m_channelUnPullHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeGatewayMonitor::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceTotal, allocator);
    }

    if (m_deviceOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceOnline, allocator);
    }

    if (m_deviceOfflineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceOffline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceOffline, allocator);
    }

    if (m_channelTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelTotal, allocator);
    }

    if (m_channelOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelOnline, allocator);
    }

    if (m_channelOfflineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOffline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelOffline, allocator);
    }

    if (m_upFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upFlow, allocator);
    }

    if (m_channelPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelPull, allocator);
    }

    if (m_channelUnPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelUnPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelUnPull, allocator);
    }

}


int64_t DescribeGatewayMonitor::GetDeviceTotal() const
{
    return m_deviceTotal;
}

void DescribeGatewayMonitor::SetDeviceTotal(const int64_t& _deviceTotal)
{
    m_deviceTotal = _deviceTotal;
    m_deviceTotalHasBeenSet = true;
}

bool DescribeGatewayMonitor::DeviceTotalHasBeenSet() const
{
    return m_deviceTotalHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetDeviceOnline() const
{
    return m_deviceOnline;
}

void DescribeGatewayMonitor::SetDeviceOnline(const int64_t& _deviceOnline)
{
    m_deviceOnline = _deviceOnline;
    m_deviceOnlineHasBeenSet = true;
}

bool DescribeGatewayMonitor::DeviceOnlineHasBeenSet() const
{
    return m_deviceOnlineHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetDeviceOffline() const
{
    return m_deviceOffline;
}

void DescribeGatewayMonitor::SetDeviceOffline(const int64_t& _deviceOffline)
{
    m_deviceOffline = _deviceOffline;
    m_deviceOfflineHasBeenSet = true;
}

bool DescribeGatewayMonitor::DeviceOfflineHasBeenSet() const
{
    return m_deviceOfflineHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetChannelTotal() const
{
    return m_channelTotal;
}

void DescribeGatewayMonitor::SetChannelTotal(const int64_t& _channelTotal)
{
    m_channelTotal = _channelTotal;
    m_channelTotalHasBeenSet = true;
}

bool DescribeGatewayMonitor::ChannelTotalHasBeenSet() const
{
    return m_channelTotalHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetChannelOnline() const
{
    return m_channelOnline;
}

void DescribeGatewayMonitor::SetChannelOnline(const int64_t& _channelOnline)
{
    m_channelOnline = _channelOnline;
    m_channelOnlineHasBeenSet = true;
}

bool DescribeGatewayMonitor::ChannelOnlineHasBeenSet() const
{
    return m_channelOnlineHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetChannelOffline() const
{
    return m_channelOffline;
}

void DescribeGatewayMonitor::SetChannelOffline(const int64_t& _channelOffline)
{
    m_channelOffline = _channelOffline;
    m_channelOfflineHasBeenSet = true;
}

bool DescribeGatewayMonitor::ChannelOfflineHasBeenSet() const
{
    return m_channelOfflineHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetUpFlow() const
{
    return m_upFlow;
}

void DescribeGatewayMonitor::SetUpFlow(const int64_t& _upFlow)
{
    m_upFlow = _upFlow;
    m_upFlowHasBeenSet = true;
}

bool DescribeGatewayMonitor::UpFlowHasBeenSet() const
{
    return m_upFlowHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetChannelPull() const
{
    return m_channelPull;
}

void DescribeGatewayMonitor::SetChannelPull(const int64_t& _channelPull)
{
    m_channelPull = _channelPull;
    m_channelPullHasBeenSet = true;
}

bool DescribeGatewayMonitor::ChannelPullHasBeenSet() const
{
    return m_channelPullHasBeenSet;
}

int64_t DescribeGatewayMonitor::GetChannelUnPull() const
{
    return m_channelUnPull;
}

void DescribeGatewayMonitor::SetChannelUnPull(const int64_t& _channelUnPull)
{
    m_channelUnPull = _channelUnPull;
    m_channelUnPullHasBeenSet = true;
}

bool DescribeGatewayMonitor::ChannelUnPullHasBeenSet() const
{
    return m_channelUnPullHasBeenSet;
}

