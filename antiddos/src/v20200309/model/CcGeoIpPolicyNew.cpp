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

#include <tencentcloud/antiddos/v20200309/model/CcGeoIpPolicyNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CcGeoIpPolicyNew::CcGeoIpPolicyNew() :
    m_policyIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_areaListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome CcGeoIpPolicyNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("AreaList") && !value["AreaList"].IsNull())
    {
        if (!value["AreaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.AreaList` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaList.push_back((*itr).GetUint64());
        }
        m_areaListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcGeoIpPolicyNew.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcGeoIpPolicyNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionType.c_str(), allocator).Move(), allocator);
    }

    if (m_areaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaList.begin(); itr != m_areaList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


string CcGeoIpPolicyNew::GetPolicyId() const
{
    return m_policyId;
}

void CcGeoIpPolicyNew::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CcGeoIpPolicyNew::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CcGeoIpPolicyNew::GetInstanceId() const
{
    return m_instanceId;
}

void CcGeoIpPolicyNew::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcGeoIpPolicyNew::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcGeoIpPolicyNew::GetIp() const
{
    return m_ip;
}

void CcGeoIpPolicyNew::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CcGeoIpPolicyNew::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CcGeoIpPolicyNew::GetDomain() const
{
    return m_domain;
}

void CcGeoIpPolicyNew::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CcGeoIpPolicyNew::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CcGeoIpPolicyNew::GetProtocol() const
{
    return m_protocol;
}

void CcGeoIpPolicyNew::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CcGeoIpPolicyNew::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CcGeoIpPolicyNew::GetAction() const
{
    return m_action;
}

void CcGeoIpPolicyNew::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CcGeoIpPolicyNew::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string CcGeoIpPolicyNew::GetRegionType() const
{
    return m_regionType;
}

void CcGeoIpPolicyNew::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool CcGeoIpPolicyNew::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

vector<uint64_t> CcGeoIpPolicyNew::GetAreaList() const
{
    return m_areaList;
}

void CcGeoIpPolicyNew::SetAreaList(const vector<uint64_t>& _areaList)
{
    m_areaList = _areaList;
    m_areaListHasBeenSet = true;
}

bool CcGeoIpPolicyNew::AreaListHasBeenSet() const
{
    return m_areaListHasBeenSet;
}

string CcGeoIpPolicyNew::GetCreateTime() const
{
    return m_createTime;
}

void CcGeoIpPolicyNew::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CcGeoIpPolicyNew::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CcGeoIpPolicyNew::GetModifyTime() const
{
    return m_modifyTime;
}

void CcGeoIpPolicyNew::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CcGeoIpPolicyNew::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

