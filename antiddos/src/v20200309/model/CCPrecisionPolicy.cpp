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

#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CCPrecisionPolicy::CCPrecisionPolicy() :
    m_policyIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_policyActionHasBeenSet(false),
    m_policyListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome CCPrecisionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("PolicyAction") && !value["PolicyAction"].IsNull())
    {
        if (!value["PolicyAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.PolicyAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyAction = string(value["PolicyAction"].GetString());
        m_policyActionHasBeenSet = true;
    }

    if (value.HasMember("PolicyList") && !value["PolicyList"].IsNull())
    {
        if (!value["PolicyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.PolicyList` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCPrecisionPlyRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyList.push_back(item);
        }
        m_policyListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPrecisionPolicy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCPrecisionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_policyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyAction.c_str(), allocator).Move(), allocator);
    }

    if (m_policyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyList.begin(); itr != m_policyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


string CCPrecisionPolicy::GetPolicyId() const
{
    return m_policyId;
}

void CCPrecisionPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CCPrecisionPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CCPrecisionPolicy::GetInstanceId() const
{
    return m_instanceId;
}

void CCPrecisionPolicy::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CCPrecisionPolicy::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CCPrecisionPolicy::GetIp() const
{
    return m_ip;
}

void CCPrecisionPolicy::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CCPrecisionPolicy::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CCPrecisionPolicy::GetProtocol() const
{
    return m_protocol;
}

void CCPrecisionPolicy::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CCPrecisionPolicy::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CCPrecisionPolicy::GetDomain() const
{
    return m_domain;
}

void CCPrecisionPolicy::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CCPrecisionPolicy::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CCPrecisionPolicy::GetPolicyAction() const
{
    return m_policyAction;
}

void CCPrecisionPolicy::SetPolicyAction(const string& _policyAction)
{
    m_policyAction = _policyAction;
    m_policyActionHasBeenSet = true;
}

bool CCPrecisionPolicy::PolicyActionHasBeenSet() const
{
    return m_policyActionHasBeenSet;
}

vector<CCPrecisionPlyRecord> CCPrecisionPolicy::GetPolicyList() const
{
    return m_policyList;
}

void CCPrecisionPolicy::SetPolicyList(const vector<CCPrecisionPlyRecord>& _policyList)
{
    m_policyList = _policyList;
    m_policyListHasBeenSet = true;
}

bool CCPrecisionPolicy::PolicyListHasBeenSet() const
{
    return m_policyListHasBeenSet;
}

string CCPrecisionPolicy::GetCreateTime() const
{
    return m_createTime;
}

void CCPrecisionPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CCPrecisionPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CCPrecisionPolicy::GetModifyTime() const
{
    return m_modifyTime;
}

void CCPrecisionPolicy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CCPrecisionPolicy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

