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

#include <tencentcloud/apigateway/v20180808/model/TargetServicesReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

TargetServicesReq::TargetServicesReq() :
    m_vmIpHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vmPortHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_dockerIpHasBeenSet(false)
{
}

CoreInternalOutcome TargetServicesReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VmIp") && !value["VmIp"].IsNull())
    {
        if (!value["VmIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServicesReq.VmIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vmIp = string(value["VmIp"].GetString());
        m_vmIpHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServicesReq.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VmPort") && !value["VmPort"].IsNull())
    {
        if (!value["VmPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServicesReq.VmPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vmPort = value["VmPort"].GetInt64();
        m_vmPortHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServicesReq.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("DockerIp") && !value["DockerIp"].IsNull())
    {
        if (!value["DockerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetServicesReq.DockerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerIp = string(value["DockerIp"].GetString());
        m_dockerIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetServicesReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vmIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VmIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vmIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vmPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VmPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vmPort, allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerIp.c_str(), allocator).Move(), allocator);
    }

}


string TargetServicesReq::GetVmIp() const
{
    return m_vmIp;
}

void TargetServicesReq::SetVmIp(const string& _vmIp)
{
    m_vmIp = _vmIp;
    m_vmIpHasBeenSet = true;
}

bool TargetServicesReq::VmIpHasBeenSet() const
{
    return m_vmIpHasBeenSet;
}

string TargetServicesReq::GetVpcId() const
{
    return m_vpcId;
}

void TargetServicesReq::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TargetServicesReq::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t TargetServicesReq::GetVmPort() const
{
    return m_vmPort;
}

void TargetServicesReq::SetVmPort(const int64_t& _vmPort)
{
    m_vmPort = _vmPort;
    m_vmPortHasBeenSet = true;
}

bool TargetServicesReq::VmPortHasBeenSet() const
{
    return m_vmPortHasBeenSet;
}

string TargetServicesReq::GetHostIp() const
{
    return m_hostIp;
}

void TargetServicesReq::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool TargetServicesReq::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string TargetServicesReq::GetDockerIp() const
{
    return m_dockerIp;
}

void TargetServicesReq::SetDockerIp(const string& _dockerIp)
{
    m_dockerIp = _dockerIp;
    m_dockerIpHasBeenSet = true;
}

bool TargetServicesReq::DockerIpHasBeenSet() const
{
    return m_dockerIpHasBeenSet;
}

