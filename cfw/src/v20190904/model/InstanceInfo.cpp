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

#include <tencentcloud/cfw/v20190904/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_appIdHasBeenSet(false),
    m_insSourceHasBeenSet(false),
    m_insTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_leakNumHasBeenSet(false),
    m_portNumHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionKeyHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vPCNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InsSource") && !value["InsSource"].IsNull())
    {
        if (!value["InsSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InsSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insSource = string(value["InsSource"].GetString());
        m_insSourceHasBeenSet = true;
    }

    if (value.HasMember("InsType") && !value["InsType"].IsNull())
    {
        if (!value["InsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insType = value["InsType"].GetInt64();
        m_insTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("LeakNum") && !value["LeakNum"].IsNull())
    {
        if (!value["LeakNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LeakNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakNum = string(value["LeakNum"].GetString());
        m_leakNumHasBeenSet = true;
    }

    if (value.HasMember("PortNum") && !value["PortNum"].IsNull())
    {
        if (!value["PortNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PortNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portNum = string(value["PortNum"].GetString());
        m_portNumHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionKey") && !value["RegionKey"].IsNull())
    {
        if (!value["RegionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionKey = string(value["RegionKey"].GetString());
        m_regionKeyHasBeenSet = true;
    }

    if (value.HasMember("ResourcePath") && !value["ResourcePath"].IsNull())
    {
        if (!value["ResourcePath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ResourcePath` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourcePath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourcePath.push_back((*itr).GetString());
        }
        m_resourcePathHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Server` is not array type"));

        const rapidjson::Value &tmpValue = value["Server"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_server.push_back((*itr).GetString());
        }
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VPCName") && !value["VPCName"].IsNull())
    {
        if (!value["VPCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VPCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCName = string(value["VPCName"].GetString());
        m_vPCNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_insSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insSource.c_str(), allocator).Move(), allocator);
    }

    if (m_insTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_leakNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakNum.c_str(), allocator).Move(), allocator);
    }

    if (m_portNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portNum.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourcePath.begin(); itr != m_resourcePath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_server.begin(); itr != m_server.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetInsSource() const
{
    return m_insSource;
}

void InstanceInfo::SetInsSource(const string& _insSource)
{
    m_insSource = _insSource;
    m_insSourceHasBeenSet = true;
}

bool InstanceInfo::InsSourceHasBeenSet() const
{
    return m_insSourceHasBeenSet;
}

int64_t InstanceInfo::GetInsType() const
{
    return m_insType;
}

void InstanceInfo::SetInsType(const int64_t& _insType)
{
    m_insType = _insType;
    m_insTypeHasBeenSet = true;
}

bool InstanceInfo::InsTypeHasBeenSet() const
{
    return m_insTypeHasBeenSet;
}

string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetLeakNum() const
{
    return m_leakNum;
}

void InstanceInfo::SetLeakNum(const string& _leakNum)
{
    m_leakNum = _leakNum;
    m_leakNumHasBeenSet = true;
}

bool InstanceInfo::LeakNumHasBeenSet() const
{
    return m_leakNumHasBeenSet;
}

string InstanceInfo::GetPortNum() const
{
    return m_portNum;
}

void InstanceInfo::SetPortNum(const string& _portNum)
{
    m_portNum = _portNum;
    m_portNumHasBeenSet = true;
}

bool InstanceInfo::PortNumHasBeenSet() const
{
    return m_portNumHasBeenSet;
}

string InstanceInfo::GetPrivateIp() const
{
    return m_privateIp;
}

void InstanceInfo::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool InstanceInfo::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string InstanceInfo::GetPublicIp() const
{
    return m_publicIp;
}

void InstanceInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool InstanceInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetRegionKey() const
{
    return m_regionKey;
}

void InstanceInfo::SetRegionKey(const string& _regionKey)
{
    m_regionKey = _regionKey;
    m_regionKeyHasBeenSet = true;
}

bool InstanceInfo::RegionKeyHasBeenSet() const
{
    return m_regionKeyHasBeenSet;
}

vector<string> InstanceInfo::GetResourcePath() const
{
    return m_resourcePath;
}

void InstanceInfo::SetResourcePath(const vector<string>& _resourcePath)
{
    m_resourcePath = _resourcePath;
    m_resourcePathHasBeenSet = true;
}

bool InstanceInfo::ResourcePathHasBeenSet() const
{
    return m_resourcePathHasBeenSet;
}

vector<string> InstanceInfo::GetServer() const
{
    return m_server;
}

void InstanceInfo::SetServer(const vector<string>& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool InstanceInfo::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string InstanceInfo::GetVPCName() const
{
    return m_vPCName;
}

void InstanceInfo::SetVPCName(const string& _vPCName)
{
    m_vPCName = _vPCName;
    m_vPCNameHasBeenSet = true;
}

bool InstanceInfo::VPCNameHasBeenSet() const
{
    return m_vPCNameHasBeenSet;
}

string InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

