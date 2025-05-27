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

#include <tencentcloud/tione/v20211111/model/ServiceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceGroup::ServiceGroup() :
    m_serviceGroupIdHasBeenSet(false),
    m_serviceGroupNameHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_runningServiceCountHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_businessStatusHasBeenSet(false),
    m_billingInfoHasBeenSet(false),
    m_createSourceHasBeenSet(false),
    m_weightUpdateStatusHasBeenSet(false),
    m_replicasCountHasBeenSet(false),
    m_availableReplicasCountHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false),
    m_authTokensHasBeenSet(false),
    m_monitorSourceHasBeenSet(false),
    m_subUinNameHasBeenSet(false)
{
}

CoreInternalOutcome ServiceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceGroupId") && !value["ServiceGroupId"].IsNull())
    {
        if (!value["ServiceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.ServiceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupId = string(value["ServiceGroupId"].GetString());
        m_serviceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceGroupName") && !value["ServiceGroupName"].IsNull())
    {
        if (!value["ServiceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.ServiceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupName = string(value["ServiceGroupName"].GetString());
        m_serviceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("RunningServiceCount") && !value["RunningServiceCount"].IsNull())
    {
        if (!value["RunningServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.RunningServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningServiceCount = value["RunningServiceCount"].GetUint64();
        m_runningServiceCountHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.Services` is not array type"));

        const rapidjson::Value &tmpValue = value["Services"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Service item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_services.push_back(item);
        }
        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (value.HasMember("BusinessStatus") && !value["BusinessStatus"].IsNull())
    {
        if (!value["BusinessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.BusinessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessStatus = string(value["BusinessStatus"].GetString());
        m_businessStatusHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateSource") && !value["CreateSource"].IsNull())
    {
        if (!value["CreateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.CreateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createSource = string(value["CreateSource"].GetString());
        m_createSourceHasBeenSet = true;
    }

    if (value.HasMember("WeightUpdateStatus") && !value["WeightUpdateStatus"].IsNull())
    {
        if (!value["WeightUpdateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.WeightUpdateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightUpdateStatus = string(value["WeightUpdateStatus"].GetString());
        m_weightUpdateStatusHasBeenSet = true;
    }

    if (value.HasMember("ReplicasCount") && !value["ReplicasCount"].IsNull())
    {
        if (!value["ReplicasCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.ReplicasCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicasCount = value["ReplicasCount"].GetUint64();
        m_replicasCountHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicasCount") && !value["AvailableReplicasCount"].IsNull())
    {
        if (!value["AvailableReplicasCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.AvailableReplicasCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicasCount = value["AvailableReplicasCount"].GetUint64();
        m_availableReplicasCountHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationEnable") && !value["AuthorizationEnable"].IsNull())
    {
        if (!value["AuthorizationEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.AuthorizationEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEnable = value["AuthorizationEnable"].GetBool();
        m_authorizationEnableHasBeenSet = true;
    }

    if (value.HasMember("AuthTokens") && !value["AuthTokens"].IsNull())
    {
        if (!value["AuthTokens"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.AuthTokens` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthTokens"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthToken item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authTokens.push_back(item);
        }
        m_authTokensHasBeenSet = true;
    }

    if (value.HasMember("MonitorSource") && !value["MonitorSource"].IsNull())
    {
        if (!value["MonitorSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.MonitorSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorSource = string(value["MonitorSource"].GetString());
        m_monitorSourceHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGroup.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_runningServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningServiceCount, allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_businessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createSource.c_str(), allocator).Move(), allocator);
    }

    if (m_weightUpdateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightUpdateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightUpdateStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicasCount, allocator);
    }

    if (m_availableReplicasCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicasCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicasCount, allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationEnable, allocator);
    }

    if (m_authTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authTokens.begin(); itr != m_authTokens.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_monitorSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorSource.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

}


string ServiceGroup::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void ServiceGroup::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool ServiceGroup::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string ServiceGroup::GetServiceGroupName() const
{
    return m_serviceGroupName;
}

void ServiceGroup::SetServiceGroupName(const string& _serviceGroupName)
{
    m_serviceGroupName = _serviceGroupName;
    m_serviceGroupNameHasBeenSet = true;
}

bool ServiceGroup::ServiceGroupNameHasBeenSet() const
{
    return m_serviceGroupNameHasBeenSet;
}

string ServiceGroup::GetCreatedBy() const
{
    return m_createdBy;
}

void ServiceGroup::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool ServiceGroup::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string ServiceGroup::GetCreateTime() const
{
    return m_createTime;
}

void ServiceGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServiceGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServiceGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void ServiceGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ServiceGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ServiceGroup::GetUin() const
{
    return m_uin;
}

void ServiceGroup::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ServiceGroup::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t ServiceGroup::GetServiceCount() const
{
    return m_serviceCount;
}

void ServiceGroup::SetServiceCount(const uint64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool ServiceGroup::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

uint64_t ServiceGroup::GetRunningServiceCount() const
{
    return m_runningServiceCount;
}

void ServiceGroup::SetRunningServiceCount(const uint64_t& _runningServiceCount)
{
    m_runningServiceCount = _runningServiceCount;
    m_runningServiceCountHasBeenSet = true;
}

bool ServiceGroup::RunningServiceCountHasBeenSet() const
{
    return m_runningServiceCountHasBeenSet;
}

vector<Service> ServiceGroup::GetServices() const
{
    return m_services;
}

void ServiceGroup::SetServices(const vector<Service>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool ServiceGroup::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

string ServiceGroup::GetStatus() const
{
    return m_status;
}

void ServiceGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Tag> ServiceGroup::GetTags() const
{
    return m_tags;
}

void ServiceGroup::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ServiceGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ServiceGroup::GetLatestVersion() const
{
    return m_latestVersion;
}

void ServiceGroup::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool ServiceGroup::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

string ServiceGroup::GetBusinessStatus() const
{
    return m_businessStatus;
}

void ServiceGroup::SetBusinessStatus(const string& _businessStatus)
{
    m_businessStatus = _businessStatus;
    m_businessStatusHasBeenSet = true;
}

bool ServiceGroup::BusinessStatusHasBeenSet() const
{
    return m_businessStatusHasBeenSet;
}

string ServiceGroup::GetBillingInfo() const
{
    return m_billingInfo;
}

void ServiceGroup::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool ServiceGroup::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

string ServiceGroup::GetCreateSource() const
{
    return m_createSource;
}

void ServiceGroup::SetCreateSource(const string& _createSource)
{
    m_createSource = _createSource;
    m_createSourceHasBeenSet = true;
}

bool ServiceGroup::CreateSourceHasBeenSet() const
{
    return m_createSourceHasBeenSet;
}

string ServiceGroup::GetWeightUpdateStatus() const
{
    return m_weightUpdateStatus;
}

void ServiceGroup::SetWeightUpdateStatus(const string& _weightUpdateStatus)
{
    m_weightUpdateStatus = _weightUpdateStatus;
    m_weightUpdateStatusHasBeenSet = true;
}

bool ServiceGroup::WeightUpdateStatusHasBeenSet() const
{
    return m_weightUpdateStatusHasBeenSet;
}

uint64_t ServiceGroup::GetReplicasCount() const
{
    return m_replicasCount;
}

void ServiceGroup::SetReplicasCount(const uint64_t& _replicasCount)
{
    m_replicasCount = _replicasCount;
    m_replicasCountHasBeenSet = true;
}

bool ServiceGroup::ReplicasCountHasBeenSet() const
{
    return m_replicasCountHasBeenSet;
}

uint64_t ServiceGroup::GetAvailableReplicasCount() const
{
    return m_availableReplicasCount;
}

void ServiceGroup::SetAvailableReplicasCount(const uint64_t& _availableReplicasCount)
{
    m_availableReplicasCount = _availableReplicasCount;
    m_availableReplicasCountHasBeenSet = true;
}

bool ServiceGroup::AvailableReplicasCountHasBeenSet() const
{
    return m_availableReplicasCountHasBeenSet;
}

string ServiceGroup::GetSubUin() const
{
    return m_subUin;
}

void ServiceGroup::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool ServiceGroup::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

int64_t ServiceGroup::GetAppId() const
{
    return m_appId;
}

void ServiceGroup::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ServiceGroup::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool ServiceGroup::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void ServiceGroup::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool ServiceGroup::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}

vector<AuthToken> ServiceGroup::GetAuthTokens() const
{
    return m_authTokens;
}

void ServiceGroup::SetAuthTokens(const vector<AuthToken>& _authTokens)
{
    m_authTokens = _authTokens;
    m_authTokensHasBeenSet = true;
}

bool ServiceGroup::AuthTokensHasBeenSet() const
{
    return m_authTokensHasBeenSet;
}

string ServiceGroup::GetMonitorSource() const
{
    return m_monitorSource;
}

void ServiceGroup::SetMonitorSource(const string& _monitorSource)
{
    m_monitorSource = _monitorSource;
    m_monitorSourceHasBeenSet = true;
}

bool ServiceGroup::MonitorSourceHasBeenSet() const
{
    return m_monitorSourceHasBeenSet;
}

string ServiceGroup::GetSubUinName() const
{
    return m_subUinName;
}

void ServiceGroup::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool ServiceGroup::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

