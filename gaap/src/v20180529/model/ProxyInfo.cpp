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

#include <tencentcloud/gaap/v20180529/model/ProxyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ProxyInfo::ProxyInfo() :
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_accessRegionHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_scalarableHasBeenSet(false),
    m_supportProtocolsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_accessRegionInfoHasBeenSet(false),
    m_realServerRegionInfoHasBeenSet(false),
    m_forwardIPHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_supportSecurityHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_relatedGlobalDomainsHasBeenSet(false),
    m_modifyConfigTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyName") && !value["ProxyName"].IsNull())
    {
        if (!value["ProxyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.ProxyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyName = string(value["ProxyName"].GetString());
        m_proxyNameHasBeenSet = true;
    }

    if (value.HasMember("AccessRegion") && !value["AccessRegion"].IsNull())
    {
        if (!value["AccessRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.AccessRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessRegion = string(value["AccessRegion"].GetString());
        m_accessRegionHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegion") && !value["RealServerRegion"].IsNull())
    {
        if (!value["RealServerRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.RealServerRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerRegion = string(value["RealServerRegion"].GetString());
        m_realServerRegionHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Concurrent") && !value["Concurrent"].IsNull())
    {
        if (!value["Concurrent"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Concurrent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrent = value["Concurrent"].GetInt64();
        m_concurrentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("Scalarable") && !value["Scalarable"].IsNull())
    {
        if (!value["Scalarable"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.Scalarable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalarable = value["Scalarable"].GetInt64();
        m_scalarableHasBeenSet = true;
    }

    if (value.HasMember("SupportProtocols") && !value["SupportProtocols"].IsNull())
    {
        if (!value["SupportProtocols"].IsArray())
            return CoreInternalOutcome(Error("response `ProxyInfo.SupportProtocols` is not array type"));

        const Value &tmpValue = value["SupportProtocols"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportProtocols.push_back((*itr).GetString());
        }
        m_supportProtocolsHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("AccessRegionInfo") && !value["AccessRegionInfo"].IsNull())
    {
        if (!value["AccessRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.AccessRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessRegionInfo.Deserialize(value["AccessRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("RealServerRegionInfo") && !value["RealServerRegionInfo"].IsNull())
    {
        if (!value["RealServerRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.RealServerRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realServerRegionInfo.Deserialize(value["RealServerRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realServerRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("ForwardIP") && !value["ForwardIP"].IsNull())
    {
        if (!value["ForwardIP"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.ForwardIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardIP = string(value["ForwardIP"].GetString());
        m_forwardIPHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Error("response `ProxyInfo.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("SupportSecurity") && !value["SupportSecurity"].IsNull())
    {
        if (!value["SupportSecurity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.SupportSecurity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportSecurity = value["SupportSecurity"].GetInt64();
        m_supportSecurityHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("RelatedGlobalDomains") && !value["RelatedGlobalDomains"].IsNull())
    {
        if (!value["RelatedGlobalDomains"].IsArray())
            return CoreInternalOutcome(Error("response `ProxyInfo.RelatedGlobalDomains` is not array type"));

        const Value &tmpValue = value["RelatedGlobalDomains"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relatedGlobalDomains.push_back((*itr).GetString());
        }
        m_relatedGlobalDomainsHasBeenSet = true;
    }

    if (value.HasMember("ModifyConfigTime") && !value["ModifyConfigTime"].IsNull())
    {
        if (!value["ModifyConfigTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProxyInfo.ModifyConfigTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyConfigTime = value["ModifyConfigTime"].GetUint64();
        m_modifyConfigTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalarableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scalarable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalarable, allocator);
    }

    if (m_supportProtocolsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SupportProtocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_supportProtocols.begin(); itr != m_supportProtocols.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_accessRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realServerRegionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_realServerRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forwardIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_forwardIP.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportSecurityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SupportSecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportSecurity, allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

    if (m_relatedGlobalDomainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RelatedGlobalDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_relatedGlobalDomains.begin(); itr != m_relatedGlobalDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifyConfigTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifyConfigTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyConfigTime, allocator);
    }

}


string ProxyInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ProxyInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProxyInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ProxyInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProxyInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProxyInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ProxyInfo::GetProjectId() const
{
    return m_projectId;
}

void ProxyInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProxyInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProxyInfo::GetProxyName() const
{
    return m_proxyName;
}

void ProxyInfo::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool ProxyInfo::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string ProxyInfo::GetAccessRegion() const
{
    return m_accessRegion;
}

void ProxyInfo::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool ProxyInfo::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

string ProxyInfo::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void ProxyInfo::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool ProxyInfo::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

int64_t ProxyInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void ProxyInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ProxyInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t ProxyInfo::GetConcurrent() const
{
    return m_concurrent;
}

void ProxyInfo::SetConcurrent(const int64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool ProxyInfo::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string ProxyInfo::GetStatus() const
{
    return m_status;
}

void ProxyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyInfo::GetDomain() const
{
    return m_domain;
}

void ProxyInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ProxyInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ProxyInfo::GetIP() const
{
    return m_iP;
}

void ProxyInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ProxyInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string ProxyInfo::GetVersion() const
{
    return m_version;
}

void ProxyInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProxyInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ProxyInfo::GetProxyId() const
{
    return m_proxyId;
}

void ProxyInfo::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxyInfo::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

int64_t ProxyInfo::GetScalarable() const
{
    return m_scalarable;
}

void ProxyInfo::SetScalarable(const int64_t& _scalarable)
{
    m_scalarable = _scalarable;
    m_scalarableHasBeenSet = true;
}

bool ProxyInfo::ScalarableHasBeenSet() const
{
    return m_scalarableHasBeenSet;
}

vector<string> ProxyInfo::GetSupportProtocols() const
{
    return m_supportProtocols;
}

void ProxyInfo::SetSupportProtocols(const vector<string>& _supportProtocols)
{
    m_supportProtocols = _supportProtocols;
    m_supportProtocolsHasBeenSet = true;
}

bool ProxyInfo::SupportProtocolsHasBeenSet() const
{
    return m_supportProtocolsHasBeenSet;
}

string ProxyInfo::GetGroupId() const
{
    return m_groupId;
}

void ProxyInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ProxyInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ProxyInfo::GetPolicyId() const
{
    return m_policyId;
}

void ProxyInfo::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ProxyInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

RegionDetail ProxyInfo::GetAccessRegionInfo() const
{
    return m_accessRegionInfo;
}

void ProxyInfo::SetAccessRegionInfo(const RegionDetail& _accessRegionInfo)
{
    m_accessRegionInfo = _accessRegionInfo;
    m_accessRegionInfoHasBeenSet = true;
}

bool ProxyInfo::AccessRegionInfoHasBeenSet() const
{
    return m_accessRegionInfoHasBeenSet;
}

RegionDetail ProxyInfo::GetRealServerRegionInfo() const
{
    return m_realServerRegionInfo;
}

void ProxyInfo::SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo)
{
    m_realServerRegionInfo = _realServerRegionInfo;
    m_realServerRegionInfoHasBeenSet = true;
}

bool ProxyInfo::RealServerRegionInfoHasBeenSet() const
{
    return m_realServerRegionInfoHasBeenSet;
}

string ProxyInfo::GetForwardIP() const
{
    return m_forwardIP;
}

void ProxyInfo::SetForwardIP(const string& _forwardIP)
{
    m_forwardIP = _forwardIP;
    m_forwardIPHasBeenSet = true;
}

bool ProxyInfo::ForwardIPHasBeenSet() const
{
    return m_forwardIPHasBeenSet;
}

vector<TagPair> ProxyInfo::GetTagSet() const
{
    return m_tagSet;
}

void ProxyInfo::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ProxyInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

int64_t ProxyInfo::GetSupportSecurity() const
{
    return m_supportSecurity;
}

void ProxyInfo::SetSupportSecurity(const int64_t& _supportSecurity)
{
    m_supportSecurity = _supportSecurity;
    m_supportSecurityHasBeenSet = true;
}

bool ProxyInfo::SupportSecurityHasBeenSet() const
{
    return m_supportSecurityHasBeenSet;
}

int64_t ProxyInfo::GetBillingType() const
{
    return m_billingType;
}

void ProxyInfo::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool ProxyInfo::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

vector<string> ProxyInfo::GetRelatedGlobalDomains() const
{
    return m_relatedGlobalDomains;
}

void ProxyInfo::SetRelatedGlobalDomains(const vector<string>& _relatedGlobalDomains)
{
    m_relatedGlobalDomains = _relatedGlobalDomains;
    m_relatedGlobalDomainsHasBeenSet = true;
}

bool ProxyInfo::RelatedGlobalDomainsHasBeenSet() const
{
    return m_relatedGlobalDomainsHasBeenSet;
}

uint64_t ProxyInfo::GetModifyConfigTime() const
{
    return m_modifyConfigTime;
}

void ProxyInfo::SetModifyConfigTime(const uint64_t& _modifyConfigTime)
{
    m_modifyConfigTime = _modifyConfigTime;
    m_modifyConfigTimeHasBeenSet = true;
}

bool ProxyInfo::ModifyConfigTimeHasBeenSet() const
{
    return m_modifyConfigTimeHasBeenSet;
}

