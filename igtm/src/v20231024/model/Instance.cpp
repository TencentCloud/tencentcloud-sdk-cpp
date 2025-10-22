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

#include <tencentcloud/igtm/v20231024/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessDomainHasBeenSet(false),
    m_accessSubDomainHasBeenSet(false),
    m_globalTtlHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_workingStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isCnameConfiguredHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_strategyNumHasBeenSet(false),
    m_addressPoolNumHasBeenSet(false),
    m_monitorNumHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessDomain") && !value["AccessDomain"].IsNull())
    {
        if (!value["AccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessDomain = string(value["AccessDomain"].GetString());
        m_accessDomainHasBeenSet = true;
    }

    if (value.HasMember("AccessSubDomain") && !value["AccessSubDomain"].IsNull())
    {
        if (!value["AccessSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AccessSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessSubDomain = string(value["AccessSubDomain"].GetString());
        m_accessSubDomainHasBeenSet = true;
    }

    if (value.HasMember("GlobalTtl") && !value["GlobalTtl"].IsNull())
    {
        if (!value["GlobalTtl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GlobalTtl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_globalTtl = value["GlobalTtl"].GetInt64();
        m_globalTtlHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkingStatus") && !value["WorkingStatus"].IsNull())
    {
        if (!value["WorkingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.WorkingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingStatus = string(value["WorkingStatus"].GetString());
        m_workingStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsCnameConfigured") && !value["IsCnameConfigured"].IsNull())
    {
        if (!value["IsCnameConfigured"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.IsCnameConfigured` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCnameConfigured = value["IsCnameConfigured"].GetBool();
        m_isCnameConfiguredHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("StrategyNum") && !value["StrategyNum"].IsNull())
    {
        if (!value["StrategyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.StrategyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyNum = value["StrategyNum"].GetInt64();
        m_strategyNumHasBeenSet = true;
    }

    if (value.HasMember("AddressPoolNum") && !value["AddressPoolNum"].IsNull())
    {
        if (!value["AddressPoolNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AddressPoolNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressPoolNum = value["AddressPoolNum"].GetInt64();
        m_addressPoolNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorNum") && !value["MonitorNum"].IsNull())
    {
        if (!value["MonitorNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.MonitorNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorNum = value["MonitorNum"].GetInt64();
        m_monitorNumHasBeenSet = true;
    }

    if (value.HasMember("PoolId") && !value["PoolId"].IsNull())
    {
        if (!value["PoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = value["PoolId"].GetUint64();
        m_poolIdHasBeenSet = true;
    }

    if (value.HasMember("PoolName") && !value["PoolName"].IsNull())
    {
        if (!value["PoolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PoolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poolName = string(value["PoolName"].GetString());
        m_poolNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_globalTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalTtl, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_workingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isCnameConfiguredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCnameConfigured";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCnameConfigured, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyNum, allocator);
    }

    if (m_addressPoolNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressPoolNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressPoolNum, allocator);
    }

    if (m_monitorNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorNum, allocator);
    }

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolId, allocator);
    }

    if (m_poolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poolName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetResourceId() const
{
    return m_resourceId;
}

void Instance::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Instance::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string Instance::GetDomain() const
{
    return m_domain;
}

void Instance::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Instance::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string Instance::GetAccessType() const
{
    return m_accessType;
}

void Instance::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool Instance::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string Instance::GetAccessDomain() const
{
    return m_accessDomain;
}

void Instance::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool Instance::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

string Instance::GetAccessSubDomain() const
{
    return m_accessSubDomain;
}

void Instance::SetAccessSubDomain(const string& _accessSubDomain)
{
    m_accessSubDomain = _accessSubDomain;
    m_accessSubDomainHasBeenSet = true;
}

bool Instance::AccessSubDomainHasBeenSet() const
{
    return m_accessSubDomainHasBeenSet;
}

int64_t Instance::GetGlobalTtl() const
{
    return m_globalTtl;
}

void Instance::SetGlobalTtl(const int64_t& _globalTtl)
{
    m_globalTtl = _globalTtl;
    m_globalTtlHasBeenSet = true;
}

bool Instance::GlobalTtlHasBeenSet() const
{
    return m_globalTtlHasBeenSet;
}

string Instance::GetPackageType() const
{
    return m_packageType;
}

void Instance::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool Instance::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string Instance::GetWorkingStatus() const
{
    return m_workingStatus;
}

void Instance::SetWorkingStatus(const string& _workingStatus)
{
    m_workingStatus = _workingStatus;
    m_workingStatusHasBeenSet = true;
}

bool Instance::WorkingStatusHasBeenSet() const
{
    return m_workingStatusHasBeenSet;
}

string Instance::GetStatus() const
{
    return m_status;
}

void Instance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Instance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool Instance::GetIsCnameConfigured() const
{
    return m_isCnameConfigured;
}

void Instance::SetIsCnameConfigured(const bool& _isCnameConfigured)
{
    m_isCnameConfigured = _isCnameConfigured;
    m_isCnameConfiguredHasBeenSet = true;
}

bool Instance::IsCnameConfiguredHasBeenSet() const
{
    return m_isCnameConfiguredHasBeenSet;
}

string Instance::GetRemark() const
{
    return m_remark;
}

void Instance::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Instance::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t Instance::GetStrategyNum() const
{
    return m_strategyNum;
}

void Instance::SetStrategyNum(const int64_t& _strategyNum)
{
    m_strategyNum = _strategyNum;
    m_strategyNumHasBeenSet = true;
}

bool Instance::StrategyNumHasBeenSet() const
{
    return m_strategyNumHasBeenSet;
}

int64_t Instance::GetAddressPoolNum() const
{
    return m_addressPoolNum;
}

void Instance::SetAddressPoolNum(const int64_t& _addressPoolNum)
{
    m_addressPoolNum = _addressPoolNum;
    m_addressPoolNumHasBeenSet = true;
}

bool Instance::AddressPoolNumHasBeenSet() const
{
    return m_addressPoolNumHasBeenSet;
}

int64_t Instance::GetMonitorNum() const
{
    return m_monitorNum;
}

void Instance::SetMonitorNum(const int64_t& _monitorNum)
{
    m_monitorNum = _monitorNum;
    m_monitorNumHasBeenSet = true;
}

bool Instance::MonitorNumHasBeenSet() const
{
    return m_monitorNumHasBeenSet;
}

uint64_t Instance::GetPoolId() const
{
    return m_poolId;
}

void Instance::SetPoolId(const uint64_t& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool Instance::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

string Instance::GetPoolName() const
{
    return m_poolName;
}

void Instance::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool Instance::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

string Instance::GetCreatedOn() const
{
    return m_createdOn;
}

void Instance::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Instance::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Instance::GetUpdatedOn() const
{
    return m_updatedOn;
}

void Instance::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool Instance::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

