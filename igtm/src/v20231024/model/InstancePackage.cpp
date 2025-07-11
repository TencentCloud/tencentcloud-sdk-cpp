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

#include <tencentcloud/igtm/v20231024/model/InstancePackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

InstancePackage::InstancePackage() :
    m_resourceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_currentDeadlineHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isExpireHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_costItemListHasBeenSet(false),
    m_minCheckIntervalHasBeenSet(false),
    m_minGlobalTtlHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false),
    m_scheduleStrategyHasBeenSet(false)
{
}

CoreInternalOutcome InstancePackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("CurrentDeadline") && !value["CurrentDeadline"].IsNull())
    {
        if (!value["CurrentDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.CurrentDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeadline = string(value["CurrentDeadline"].GetString());
        m_currentDeadlineHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsExpire") && !value["IsExpire"].IsNull())
    {
        if (!value["IsExpire"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.IsExpire` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isExpire = value["IsExpire"].GetUint64();
        m_isExpireHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CostItemList") && !value["CostItemList"].IsNull())
    {
        if (!value["CostItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstancePackage.CostItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["CostItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CostItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_costItemList.push_back(item);
        }
        m_costItemListHasBeenSet = true;
    }

    if (value.HasMember("MinCheckInterval") && !value["MinCheckInterval"].IsNull())
    {
        if (!value["MinCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.MinCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minCheckInterval = value["MinCheckInterval"].GetUint64();
        m_minCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("MinGlobalTtl") && !value["MinGlobalTtl"].IsNull())
    {
        if (!value["MinGlobalTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePackage.MinGlobalTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minGlobalTtl = value["MinGlobalTtl"].GetUint64();
        m_minGlobalTtlHasBeenSet = true;
    }

    if (value.HasMember("TrafficStrategy") && !value["TrafficStrategy"].IsNull())
    {
        if (!value["TrafficStrategy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstancePackage.TrafficStrategy` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficStrategy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_trafficStrategy.push_back((*itr).GetString());
        }
        m_trafficStrategyHasBeenSet = true;
    }

    if (value.HasMember("ScheduleStrategy") && !value["ScheduleStrategy"].IsNull())
    {
        if (!value["ScheduleStrategy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstancePackage.ScheduleStrategy` is not array type"));

        const rapidjson::Value &tmpValue = value["ScheduleStrategy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scheduleStrategy.push_back((*itr).GetString());
        }
        m_scheduleStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancePackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
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

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_currentDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpire, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_costItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_costItemList.begin(); itr != m_costItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_minCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCheckInterval, allocator);
    }

    if (m_minGlobalTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinGlobalTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minGlobalTtl, allocator);
    }

    if (m_trafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trafficStrategy.begin(); itr != m_trafficStrategy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scheduleStrategy.begin(); itr != m_scheduleStrategy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstancePackage::GetResourceId() const
{
    return m_resourceId;
}

void InstancePackage::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool InstancePackage::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string InstancePackage::GetInstanceId() const
{
    return m_instanceId;
}

void InstancePackage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstancePackage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstancePackage::GetInstanceName() const
{
    return m_instanceName;
}

void InstancePackage::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstancePackage::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstancePackage::GetPackageType() const
{
    return m_packageType;
}

void InstancePackage::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool InstancePackage::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string InstancePackage::GetCurrentDeadline() const
{
    return m_currentDeadline;
}

void InstancePackage::SetCurrentDeadline(const string& _currentDeadline)
{
    m_currentDeadline = _currentDeadline;
    m_currentDeadlineHasBeenSet = true;
}

bool InstancePackage::CurrentDeadlineHasBeenSet() const
{
    return m_currentDeadlineHasBeenSet;
}

string InstancePackage::GetCreateTime() const
{
    return m_createTime;
}

void InstancePackage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstancePackage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t InstancePackage::GetIsExpire() const
{
    return m_isExpire;
}

void InstancePackage::SetIsExpire(const uint64_t& _isExpire)
{
    m_isExpire = _isExpire;
    m_isExpireHasBeenSet = true;
}

bool InstancePackage::IsExpireHasBeenSet() const
{
    return m_isExpireHasBeenSet;
}

string InstancePackage::GetStatus() const
{
    return m_status;
}

void InstancePackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstancePackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t InstancePackage::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstancePackage::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstancePackage::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string InstancePackage::GetRemark() const
{
    return m_remark;
}

void InstancePackage::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InstancePackage::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<CostItem> InstancePackage::GetCostItemList() const
{
    return m_costItemList;
}

void InstancePackage::SetCostItemList(const vector<CostItem>& _costItemList)
{
    m_costItemList = _costItemList;
    m_costItemListHasBeenSet = true;
}

bool InstancePackage::CostItemListHasBeenSet() const
{
    return m_costItemListHasBeenSet;
}

uint64_t InstancePackage::GetMinCheckInterval() const
{
    return m_minCheckInterval;
}

void InstancePackage::SetMinCheckInterval(const uint64_t& _minCheckInterval)
{
    m_minCheckInterval = _minCheckInterval;
    m_minCheckIntervalHasBeenSet = true;
}

bool InstancePackage::MinCheckIntervalHasBeenSet() const
{
    return m_minCheckIntervalHasBeenSet;
}

uint64_t InstancePackage::GetMinGlobalTtl() const
{
    return m_minGlobalTtl;
}

void InstancePackage::SetMinGlobalTtl(const uint64_t& _minGlobalTtl)
{
    m_minGlobalTtl = _minGlobalTtl;
    m_minGlobalTtlHasBeenSet = true;
}

bool InstancePackage::MinGlobalTtlHasBeenSet() const
{
    return m_minGlobalTtlHasBeenSet;
}

vector<string> InstancePackage::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void InstancePackage::SetTrafficStrategy(const vector<string>& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool InstancePackage::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

vector<string> InstancePackage::GetScheduleStrategy() const
{
    return m_scheduleStrategy;
}

void InstancePackage::SetScheduleStrategy(const vector<string>& _scheduleStrategy)
{
    m_scheduleStrategy = _scheduleStrategy;
    m_scheduleStrategyHasBeenSet = true;
}

bool InstancePackage::ScheduleStrategyHasBeenSet() const
{
    return m_scheduleStrategyHasBeenSet;
}

