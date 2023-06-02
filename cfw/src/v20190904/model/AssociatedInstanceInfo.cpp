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

#include <tencentcloud/cfw/v20190904/model/AssociatedInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AssociatedInstanceInfo::AssociatedInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_securityGroupCountHasBeenSet(false),
    m_securityGroupRuleCountHasBeenSet(false),
    m_cdbIdHasBeenSet(false)
{
}

CoreInternalOutcome AssociatedInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupCount") && !value["SecurityGroupCount"].IsNull())
    {
        if (!value["SecurityGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.SecurityGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupCount = value["SecurityGroupCount"].GetUint64();
        m_securityGroupCountHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupRuleCount") && !value["SecurityGroupRuleCount"].IsNull())
    {
        if (!value["SecurityGroupRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.SecurityGroupRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupRuleCount = value["SecurityGroupRuleCount"].GetUint64();
        m_securityGroupRuleCountHasBeenSet = true;
    }

    if (value.HasMember("CdbId") && !value["CdbId"].IsNull())
    {
        if (!value["CdbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedInstanceInfo.CdbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdbId = string(value["CdbId"].GetString());
        m_cdbIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssociatedInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupCount, allocator);
    }

    if (m_securityGroupRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupRuleCount, allocator);
    }

    if (m_cdbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdbId.c_str(), allocator).Move(), allocator);
    }

}


string AssociatedInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AssociatedInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssociatedInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssociatedInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void AssociatedInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssociatedInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t AssociatedInstanceInfo::GetType() const
{
    return m_type;
}

void AssociatedInstanceInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AssociatedInstanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AssociatedInstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void AssociatedInstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssociatedInstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssociatedInstanceInfo::GetVpcName() const
{
    return m_vpcName;
}

void AssociatedInstanceInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool AssociatedInstanceInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string AssociatedInstanceInfo::GetPublicIp() const
{
    return m_publicIp;
}

void AssociatedInstanceInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AssociatedInstanceInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AssociatedInstanceInfo::GetIp() const
{
    return m_ip;
}

void AssociatedInstanceInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AssociatedInstanceInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t AssociatedInstanceInfo::GetSecurityGroupCount() const
{
    return m_securityGroupCount;
}

void AssociatedInstanceInfo::SetSecurityGroupCount(const uint64_t& _securityGroupCount)
{
    m_securityGroupCount = _securityGroupCount;
    m_securityGroupCountHasBeenSet = true;
}

bool AssociatedInstanceInfo::SecurityGroupCountHasBeenSet() const
{
    return m_securityGroupCountHasBeenSet;
}

uint64_t AssociatedInstanceInfo::GetSecurityGroupRuleCount() const
{
    return m_securityGroupRuleCount;
}

void AssociatedInstanceInfo::SetSecurityGroupRuleCount(const uint64_t& _securityGroupRuleCount)
{
    m_securityGroupRuleCount = _securityGroupRuleCount;
    m_securityGroupRuleCountHasBeenSet = true;
}

bool AssociatedInstanceInfo::SecurityGroupRuleCountHasBeenSet() const
{
    return m_securityGroupRuleCountHasBeenSet;
}

string AssociatedInstanceInfo::GetCdbId() const
{
    return m_cdbId;
}

void AssociatedInstanceInfo::SetCdbId(const string& _cdbId)
{
    m_cdbId = _cdbId;
    m_cdbIdHasBeenSet = true;
}

bool AssociatedInstanceInfo::CdbIdHasBeenSet() const
{
    return m_cdbIdHasBeenSet;
}

