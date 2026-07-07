/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_accessLogConfigHasBeenSet(false),
    m_addressIpVersionHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_loadBalancerBillingConfigHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerOperationLocksHasBeenSet(false),
    m_loadBalancerStatusHasBeenSet(false),
    m_modificationProtectionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessLogConfig") && !value["AccessLogConfig"].IsNull())
    {
        if (!value["AccessLogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.AccessLogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessLogConfig.Deserialize(value["AccessLogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessLogConfigHasBeenSet = true;
    }

    if (value.HasMember("AddressIpVersion") && !value["AddressIpVersion"].IsNull())
    {
        if (!value["AddressIpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.AddressIpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIpVersion = string(value["AddressIpVersion"].GetString());
        m_addressIpVersionHasBeenSet = true;
    }

    if (value.HasMember("AddressType") && !value["AddressType"].IsNull())
    {
        if (!value["AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressType = string(value["AddressType"].GetString());
        m_addressTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.DeletionProtection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deletionProtection.Deserialize(value["DeletionProtection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerBillingConfig") && !value["LoadBalancerBillingConfig"].IsNull())
    {
        if (!value["LoadBalancerBillingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerBillingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadBalancerBillingConfig.Deserialize(value["LoadBalancerBillingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadBalancerBillingConfigHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerOperationLocks") && !value["LoadBalancerOperationLocks"].IsNull())
    {
        if (!value["LoadBalancerOperationLocks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerOperationLocks` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerOperationLocks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadBalancerOperationLocksItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loadBalancerOperationLocks.push_back(item);
        }
        m_loadBalancerOperationLocksHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerStatus") && !value["LoadBalancerStatus"].IsNull())
    {
        if (!value["LoadBalancerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerStatus = string(value["LoadBalancerStatus"].GetString());
        m_loadBalancerStatusHasBeenSet = true;
    }

    if (value.HasMember("ModificationProtection") && !value["ModificationProtection"].IsNull())
    {
        if (!value["ModificationProtection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.ModificationProtection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modificationProtection.Deserialize(value["ModificationProtection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modificationProtectionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessLogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessLogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessLogConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressIpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deletionProtection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerBillingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerBillingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancerBillingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerOperationLocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerOperationLocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadBalancerOperationLocks.begin(); itr != m_loadBalancerOperationLocks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loadBalancerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_modificationProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modificationProtection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


AccessLogConfig LoadBalancer::GetAccessLogConfig() const
{
    return m_accessLogConfig;
}

void LoadBalancer::SetAccessLogConfig(const AccessLogConfig& _accessLogConfig)
{
    m_accessLogConfig = _accessLogConfig;
    m_accessLogConfigHasBeenSet = true;
}

bool LoadBalancer::AccessLogConfigHasBeenSet() const
{
    return m_accessLogConfigHasBeenSet;
}

string LoadBalancer::GetAddressIpVersion() const
{
    return m_addressIpVersion;
}

void LoadBalancer::SetAddressIpVersion(const string& _addressIpVersion)
{
    m_addressIpVersion = _addressIpVersion;
    m_addressIpVersionHasBeenSet = true;
}

bool LoadBalancer::AddressIpVersionHasBeenSet() const
{
    return m_addressIpVersionHasBeenSet;
}

string LoadBalancer::GetAddressType() const
{
    return m_addressType;
}

void LoadBalancer::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool LoadBalancer::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string LoadBalancer::GetCreateTime() const
{
    return m_createTime;
}

void LoadBalancer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadBalancer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

DeletionProtectionConfig LoadBalancer::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void LoadBalancer::SetDeletionProtection(const DeletionProtectionConfig& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool LoadBalancer::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

string LoadBalancer::GetDomain() const
{
    return m_domain;
}

void LoadBalancer::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LoadBalancer::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

LoadBalancerBillingConfig LoadBalancer::GetLoadBalancerBillingConfig() const
{
    return m_loadBalancerBillingConfig;
}

void LoadBalancer::SetLoadBalancerBillingConfig(const LoadBalancerBillingConfig& _loadBalancerBillingConfig)
{
    m_loadBalancerBillingConfig = _loadBalancerBillingConfig;
    m_loadBalancerBillingConfigHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerBillingConfigHasBeenSet() const
{
    return m_loadBalancerBillingConfigHasBeenSet;
}

string LoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

vector<LoadBalancerOperationLocksItem> LoadBalancer::GetLoadBalancerOperationLocks() const
{
    return m_loadBalancerOperationLocks;
}

void LoadBalancer::SetLoadBalancerOperationLocks(const vector<LoadBalancerOperationLocksItem>& _loadBalancerOperationLocks)
{
    m_loadBalancerOperationLocks = _loadBalancerOperationLocks;
    m_loadBalancerOperationLocksHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerOperationLocksHasBeenSet() const
{
    return m_loadBalancerOperationLocksHasBeenSet;
}

string LoadBalancer::GetLoadBalancerStatus() const
{
    return m_loadBalancerStatus;
}

void LoadBalancer::SetLoadBalancerStatus(const string& _loadBalancerStatus)
{
    m_loadBalancerStatus = _loadBalancerStatus;
    m_loadBalancerStatusHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerStatusHasBeenSet() const
{
    return m_loadBalancerStatusHasBeenSet;
}

ModificationProtectionInfo LoadBalancer::GetModificationProtection() const
{
    return m_modificationProtection;
}

void LoadBalancer::SetModificationProtection(const ModificationProtectionInfo& _modificationProtection)
{
    m_modificationProtection = _modificationProtection;
    m_modificationProtectionHasBeenSet = true;
}

bool LoadBalancer::ModificationProtectionHasBeenSet() const
{
    return m_modificationProtectionHasBeenSet;
}

vector<TagInfo> LoadBalancer::GetTags() const
{
    return m_tags;
}

void LoadBalancer::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadBalancer::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string LoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void LoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

