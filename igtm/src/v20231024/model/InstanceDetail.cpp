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

#include <tencentcloud/igtm/v20231024/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessSubDomainHasBeenSet(false),
    m_accessDomainHasBeenSet(false),
    m_globalTtlHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_workingStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isCnameConfiguredHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_strategyNumHasBeenSet(false),
    m_addressPoolNumHasBeenSet(false),
    m_monitorNumHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_notifyEventSetHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessSubDomain") && !value["AccessSubDomain"].IsNull())
    {
        if (!value["AccessSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.AccessSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessSubDomain = string(value["AccessSubDomain"].GetString());
        m_accessSubDomainHasBeenSet = true;
    }

    if (value.HasMember("AccessDomain") && !value["AccessDomain"].IsNull())
    {
        if (!value["AccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.AccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessDomain = string(value["AccessDomain"].GetString());
        m_accessDomainHasBeenSet = true;
    }

    if (value.HasMember("GlobalTtl") && !value["GlobalTtl"].IsNull())
    {
        if (!value["GlobalTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.GlobalTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_globalTtl = value["GlobalTtl"].GetUint64();
        m_globalTtlHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkingStatus") && !value["WorkingStatus"].IsNull())
    {
        if (!value["WorkingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.WorkingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingStatus = string(value["WorkingStatus"].GetString());
        m_workingStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsCnameConfigured") && !value["IsCnameConfigured"].IsNull())
    {
        if (!value["IsCnameConfigured"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.IsCnameConfigured` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCnameConfigured = value["IsCnameConfigured"].GetBool();
        m_isCnameConfiguredHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("StrategyNum") && !value["StrategyNum"].IsNull())
    {
        if (!value["StrategyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.StrategyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyNum = value["StrategyNum"].GetInt64();
        m_strategyNumHasBeenSet = true;
    }

    if (value.HasMember("AddressPoolNum") && !value["AddressPoolNum"].IsNull())
    {
        if (!value["AddressPoolNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.AddressPoolNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressPoolNum = value["AddressPoolNum"].GetInt64();
        m_addressPoolNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorNum") && !value["MonitorNum"].IsNull())
    {
        if (!value["MonitorNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MonitorNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorNum = value["MonitorNum"].GetInt64();
        m_monitorNumHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("NotifyEventSet") && !value["NotifyEventSet"].IsNull())
    {
        if (!value["NotifyEventSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.NotifyEventSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyEventSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyEventSet.push_back((*itr).GetString());
        }
        m_notifyEventSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accessSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyEventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyEventSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyEventSet.begin(); itr != m_notifyEventSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string InstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceDetail::GetDomain() const
{
    return m_domain;
}

void InstanceDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool InstanceDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string InstanceDetail::GetAccessType() const
{
    return m_accessType;
}

void InstanceDetail::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool InstanceDetail::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string InstanceDetail::GetAccessSubDomain() const
{
    return m_accessSubDomain;
}

void InstanceDetail::SetAccessSubDomain(const string& _accessSubDomain)
{
    m_accessSubDomain = _accessSubDomain;
    m_accessSubDomainHasBeenSet = true;
}

bool InstanceDetail::AccessSubDomainHasBeenSet() const
{
    return m_accessSubDomainHasBeenSet;
}

string InstanceDetail::GetAccessDomain() const
{
    return m_accessDomain;
}

void InstanceDetail::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool InstanceDetail::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

uint64_t InstanceDetail::GetGlobalTtl() const
{
    return m_globalTtl;
}

void InstanceDetail::SetGlobalTtl(const uint64_t& _globalTtl)
{
    m_globalTtl = _globalTtl;
    m_globalTtlHasBeenSet = true;
}

bool InstanceDetail::GlobalTtlHasBeenSet() const
{
    return m_globalTtlHasBeenSet;
}

string InstanceDetail::GetPackageType() const
{
    return m_packageType;
}

void InstanceDetail::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool InstanceDetail::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string InstanceDetail::GetWorkingStatus() const
{
    return m_workingStatus;
}

void InstanceDetail::SetWorkingStatus(const string& _workingStatus)
{
    m_workingStatus = _workingStatus;
    m_workingStatusHasBeenSet = true;
}

bool InstanceDetail::WorkingStatusHasBeenSet() const
{
    return m_workingStatusHasBeenSet;
}

string InstanceDetail::GetStatus() const
{
    return m_status;
}

void InstanceDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool InstanceDetail::GetIsCnameConfigured() const
{
    return m_isCnameConfigured;
}

void InstanceDetail::SetIsCnameConfigured(const bool& _isCnameConfigured)
{
    m_isCnameConfigured = _isCnameConfigured;
    m_isCnameConfiguredHasBeenSet = true;
}

bool InstanceDetail::IsCnameConfiguredHasBeenSet() const
{
    return m_isCnameConfiguredHasBeenSet;
}

string InstanceDetail::GetRemark() const
{
    return m_remark;
}

void InstanceDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InstanceDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t InstanceDetail::GetStrategyNum() const
{
    return m_strategyNum;
}

void InstanceDetail::SetStrategyNum(const int64_t& _strategyNum)
{
    m_strategyNum = _strategyNum;
    m_strategyNumHasBeenSet = true;
}

bool InstanceDetail::StrategyNumHasBeenSet() const
{
    return m_strategyNumHasBeenSet;
}

int64_t InstanceDetail::GetAddressPoolNum() const
{
    return m_addressPoolNum;
}

void InstanceDetail::SetAddressPoolNum(const int64_t& _addressPoolNum)
{
    m_addressPoolNum = _addressPoolNum;
    m_addressPoolNumHasBeenSet = true;
}

bool InstanceDetail::AddressPoolNumHasBeenSet() const
{
    return m_addressPoolNumHasBeenSet;
}

int64_t InstanceDetail::GetMonitorNum() const
{
    return m_monitorNum;
}

void InstanceDetail::SetMonitorNum(const int64_t& _monitorNum)
{
    m_monitorNum = _monitorNum;
    m_monitorNumHasBeenSet = true;
}

bool InstanceDetail::MonitorNumHasBeenSet() const
{
    return m_monitorNumHasBeenSet;
}

string InstanceDetail::GetResourceId() const
{
    return m_resourceId;
}

void InstanceDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool InstanceDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<string> InstanceDetail::GetNotifyEventSet() const
{
    return m_notifyEventSet;
}

void InstanceDetail::SetNotifyEventSet(const vector<string>& _notifyEventSet)
{
    m_notifyEventSet = _notifyEventSet;
    m_notifyEventSetHasBeenSet = true;
}

bool InstanceDetail::NotifyEventSetHasBeenSet() const
{
    return m_notifyEventSetHasBeenSet;
}

string InstanceDetail::GetCreatedOn() const
{
    return m_createdOn;
}

void InstanceDetail::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool InstanceDetail::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string InstanceDetail::GetUpdatedOn() const
{
    return m_updatedOn;
}

void InstanceDetail::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool InstanceDetail::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

