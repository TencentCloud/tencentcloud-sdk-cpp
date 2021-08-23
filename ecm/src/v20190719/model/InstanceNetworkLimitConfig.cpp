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

#include <tencentcloud/ecm/v20190719/model/InstanceNetworkLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstanceNetworkLimitConfig::InstanceNetworkLimitConfig() :
    m_cpuNumHasBeenSet(false),
    m_networkInterfaceLimitHasBeenSet(false),
    m_innerIpPerNetworkInterfaceHasBeenSet(false),
    m_publicIpPerInstanceHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNetworkLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkLimitConfig.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceLimit") && !value["NetworkInterfaceLimit"].IsNull())
    {
        if (!value["NetworkInterfaceLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkLimitConfig.NetworkInterfaceLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceLimit = value["NetworkInterfaceLimit"].GetInt64();
        m_networkInterfaceLimitHasBeenSet = true;
    }

    if (value.HasMember("InnerIpPerNetworkInterface") && !value["InnerIpPerNetworkInterface"].IsNull())
    {
        if (!value["InnerIpPerNetworkInterface"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkLimitConfig.InnerIpPerNetworkInterface` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_innerIpPerNetworkInterface = value["InnerIpPerNetworkInterface"].GetInt64();
        m_innerIpPerNetworkInterfaceHasBeenSet = true;
    }

    if (value.HasMember("PublicIpPerInstance") && !value["PublicIpPerInstance"].IsNull())
    {
        if (!value["PublicIpPerInstance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetworkLimitConfig.PublicIpPerInstance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpPerInstance = value["PublicIpPerInstance"].GetInt64();
        m_publicIpPerInstanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNetworkLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_networkInterfaceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkInterfaceLimit, allocator);
    }

    if (m_innerIpPerNetworkInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerIpPerNetworkInterface";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_innerIpPerNetworkInterface, allocator);
    }

    if (m_publicIpPerInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpPerInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpPerInstance, allocator);
    }

}


int64_t InstanceNetworkLimitConfig::GetCpuNum() const
{
    return m_cpuNum;
}

void InstanceNetworkLimitConfig::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool InstanceNetworkLimitConfig::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

int64_t InstanceNetworkLimitConfig::GetNetworkInterfaceLimit() const
{
    return m_networkInterfaceLimit;
}

void InstanceNetworkLimitConfig::SetNetworkInterfaceLimit(const int64_t& _networkInterfaceLimit)
{
    m_networkInterfaceLimit = _networkInterfaceLimit;
    m_networkInterfaceLimitHasBeenSet = true;
}

bool InstanceNetworkLimitConfig::NetworkInterfaceLimitHasBeenSet() const
{
    return m_networkInterfaceLimitHasBeenSet;
}

int64_t InstanceNetworkLimitConfig::GetInnerIpPerNetworkInterface() const
{
    return m_innerIpPerNetworkInterface;
}

void InstanceNetworkLimitConfig::SetInnerIpPerNetworkInterface(const int64_t& _innerIpPerNetworkInterface)
{
    m_innerIpPerNetworkInterface = _innerIpPerNetworkInterface;
    m_innerIpPerNetworkInterfaceHasBeenSet = true;
}

bool InstanceNetworkLimitConfig::InnerIpPerNetworkInterfaceHasBeenSet() const
{
    return m_innerIpPerNetworkInterfaceHasBeenSet;
}

int64_t InstanceNetworkLimitConfig::GetPublicIpPerInstance() const
{
    return m_publicIpPerInstance;
}

void InstanceNetworkLimitConfig::SetPublicIpPerInstance(const int64_t& _publicIpPerInstance)
{
    m_publicIpPerInstance = _publicIpPerInstance;
    m_publicIpPerInstanceHasBeenSet = true;
}

bool InstanceNetworkLimitConfig::PublicIpPerInstanceHasBeenSet() const
{
    return m_publicIpPerInstanceHasBeenSet;
}

