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

#include <tencentcloud/goosefs/v20220519/model/LinuxNodeAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

LinuxNodeAttribute::LinuxNodeAttribute() :
    m_instanceIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_linuxClientNodeIpHasBeenSet(false),
    m_mountPointHasBeenSet(false)
{
}

CoreInternalOutcome LinuxNodeAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxNodeAttribute.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxNodeAttribute.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxNodeAttribute.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("LinuxClientNodeIp") && !value["LinuxClientNodeIp"].IsNull())
    {
        if (!value["LinuxClientNodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxNodeAttribute.LinuxClientNodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linuxClientNodeIp = string(value["LinuxClientNodeIp"].GetString());
        m_linuxClientNodeIpHasBeenSet = true;
    }

    if (value.HasMember("MountPoint") && !value["MountPoint"].IsNull())
    {
        if (!value["MountPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxNodeAttribute.MountPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPoint = string(value["MountPoint"].GetString());
        m_mountPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinuxNodeAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_linuxClientNodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxClientNodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linuxClientNodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPoint.c_str(), allocator).Move(), allocator);
    }

}


string LinuxNodeAttribute::GetInstanceId() const
{
    return m_instanceId;
}

void LinuxNodeAttribute::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LinuxNodeAttribute::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LinuxNodeAttribute::GetVpcId() const
{
    return m_vpcId;
}

void LinuxNodeAttribute::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LinuxNodeAttribute::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LinuxNodeAttribute::GetSubnetId() const
{
    return m_subnetId;
}

void LinuxNodeAttribute::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LinuxNodeAttribute::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string LinuxNodeAttribute::GetLinuxClientNodeIp() const
{
    return m_linuxClientNodeIp;
}

void LinuxNodeAttribute::SetLinuxClientNodeIp(const string& _linuxClientNodeIp)
{
    m_linuxClientNodeIp = _linuxClientNodeIp;
    m_linuxClientNodeIpHasBeenSet = true;
}

bool LinuxNodeAttribute::LinuxClientNodeIpHasBeenSet() const
{
    return m_linuxClientNodeIpHasBeenSet;
}

string LinuxNodeAttribute::GetMountPoint() const
{
    return m_mountPoint;
}

void LinuxNodeAttribute::SetMountPoint(const string& _mountPoint)
{
    m_mountPoint = _mountPoint;
    m_mountPointHasBeenSet = true;
}

bool LinuxNodeAttribute::MountPointHasBeenSet() const
{
    return m_mountPointHasBeenSet;
}

