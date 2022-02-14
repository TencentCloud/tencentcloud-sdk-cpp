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

#include <tencentcloud/antiddos/v20200309/model/CcBlackWhiteIpPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CcBlackWhiteIpPolicy::CcBlackWhiteIpPolicy() :
    m_policyIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_blackWhiteIpHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome CcBlackWhiteIpPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BlackWhiteIp") && !value["BlackWhiteIp"].IsNull())
    {
        if (!value["BlackWhiteIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.BlackWhiteIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blackWhiteIp = string(value["BlackWhiteIp"].GetString());
        m_blackWhiteIpHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.Mask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetUint64();
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcBlackWhiteIpPolicy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcBlackWhiteIpPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_blackWhiteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWhiteIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blackWhiteIp.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string CcBlackWhiteIpPolicy::GetPolicyId() const
{
    return m_policyId;
}

void CcBlackWhiteIpPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetInstanceId() const
{
    return m_instanceId;
}

void CcBlackWhiteIpPolicy::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetIp() const
{
    return m_ip;
}

void CcBlackWhiteIpPolicy::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetDomain() const
{
    return m_domain;
}

void CcBlackWhiteIpPolicy::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetProtocol() const
{
    return m_protocol;
}

void CcBlackWhiteIpPolicy::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetType() const
{
    return m_type;
}

void CcBlackWhiteIpPolicy::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetBlackWhiteIp() const
{
    return m_blackWhiteIp;
}

void CcBlackWhiteIpPolicy::SetBlackWhiteIp(const string& _blackWhiteIp)
{
    m_blackWhiteIp = _blackWhiteIp;
    m_blackWhiteIpHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::BlackWhiteIpHasBeenSet() const
{
    return m_blackWhiteIpHasBeenSet;
}

uint64_t CcBlackWhiteIpPolicy::GetMask() const
{
    return m_mask;
}

void CcBlackWhiteIpPolicy::SetMask(const uint64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetCreateTime() const
{
    return m_createTime;
}

void CcBlackWhiteIpPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CcBlackWhiteIpPolicy::GetModifyTime() const
{
    return m_modifyTime;
}

void CcBlackWhiteIpPolicy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CcBlackWhiteIpPolicy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

