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

#include <tencentcloud/dlc/v20210125/model/PartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PartitionInfo::PartitionInfo() :
    m_nameHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_queueCountHasBeenSet(false),
    m_resourceQuotaHasBeenSet(false),
    m_schedulableLimitListHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_resourcePoolKindHasBeenSet(false),
    m_externalClusterIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome PartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("QueueCount") && !value["QueueCount"].IsNull())
    {
        if (!value["QueueCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.QueueCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueCount = value["QueueCount"].GetInt64();
        m_queueCountHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuota") && !value["ResourceQuota"].IsNull())
    {
        if (!value["ResourceQuota"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.ResourceQuota` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceQuota"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceQuota.push_back(item);
        }
        m_resourceQuotaHasBeenSet = true;
    }

    if (value.HasMember("SchedulableLimitList") && !value["SchedulableLimitList"].IsNull())
    {
        if (!value["SchedulableLimitList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.SchedulableLimitList` is not array type"));

        const rapidjson::Value &tmpValue = value["SchedulableLimitList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulableLimit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schedulableLimitList.push_back(item);
        }
        m_schedulableLimitListHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourcePoolKind") && !value["ResourcePoolKind"].IsNull())
    {
        if (!value["ResourcePoolKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.ResourcePoolKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePoolKind = string(value["ResourcePoolKind"].GetString());
        m_resourcePoolKindHasBeenSet = true;
    }

    if (value.HasMember("ExternalClusterId") && !value["ExternalClusterId"].IsNull())
    {
        if (!value["ExternalClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.ExternalClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalClusterId = string(value["ExternalClusterId"].GetString());
        m_externalClusterIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudTag item;
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


    return CoreInternalOutcome(true);
}

void PartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_queueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueCount, allocator);
    }

    if (m_resourceQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceQuota.begin(); itr != m_resourceQuota.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schedulableLimitListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulableLimitList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schedulableLimitList.begin(); itr != m_schedulableLimitList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePoolKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePoolKind.c_str(), allocator).Move(), allocator);
    }

    if (m_externalClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalClusterId.c_str(), allocator).Move(), allocator);
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

}


string PartitionInfo::GetName() const
{
    return m_name;
}

void PartitionInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PartitionInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PartitionInfo::GetPartitionCode() const
{
    return m_partitionCode;
}

void PartitionInfo::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool PartitionInfo::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string PartitionInfo::GetDescription() const
{
    return m_description;
}

void PartitionInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PartitionInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t PartitionInfo::GetStatus() const
{
    return m_status;
}

void PartitionInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PartitionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t PartitionInfo::GetQueueCount() const
{
    return m_queueCount;
}

void PartitionInfo::SetQueueCount(const int64_t& _queueCount)
{
    m_queueCount = _queueCount;
    m_queueCountHasBeenSet = true;
}

bool PartitionInfo::QueueCountHasBeenSet() const
{
    return m_queueCountHasBeenSet;
}

vector<ResourceQuota> PartitionInfo::GetResourceQuota() const
{
    return m_resourceQuota;
}

void PartitionInfo::SetResourceQuota(const vector<ResourceQuota>& _resourceQuota)
{
    m_resourceQuota = _resourceQuota;
    m_resourceQuotaHasBeenSet = true;
}

bool PartitionInfo::ResourceQuotaHasBeenSet() const
{
    return m_resourceQuotaHasBeenSet;
}

vector<SchedulableLimit> PartitionInfo::GetSchedulableLimitList() const
{
    return m_schedulableLimitList;
}

void PartitionInfo::SetSchedulableLimitList(const vector<SchedulableLimit>& _schedulableLimitList)
{
    m_schedulableLimitList = _schedulableLimitList;
    m_schedulableLimitListHasBeenSet = true;
}

bool PartitionInfo::SchedulableLimitListHasBeenSet() const
{
    return m_schedulableLimitListHasBeenSet;
}

int64_t PartitionInfo::GetPayMode() const
{
    return m_payMode;
}

void PartitionInfo::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool PartitionInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t PartitionInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void PartitionInfo::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool PartitionInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string PartitionInfo::GetCreateTime() const
{
    return m_createTime;
}

void PartitionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PartitionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PartitionInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PartitionInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PartitionInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PartitionInfo::GetExpireTime() const
{
    return m_expireTime;
}

void PartitionInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PartitionInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string PartitionInfo::GetResourcePoolKind() const
{
    return m_resourcePoolKind;
}

void PartitionInfo::SetResourcePoolKind(const string& _resourcePoolKind)
{
    m_resourcePoolKind = _resourcePoolKind;
    m_resourcePoolKindHasBeenSet = true;
}

bool PartitionInfo::ResourcePoolKindHasBeenSet() const
{
    return m_resourcePoolKindHasBeenSet;
}

string PartitionInfo::GetExternalClusterId() const
{
    return m_externalClusterId;
}

void PartitionInfo::SetExternalClusterId(const string& _externalClusterId)
{
    m_externalClusterId = _externalClusterId;
    m_externalClusterIdHasBeenSet = true;
}

bool PartitionInfo::ExternalClusterIdHasBeenSet() const
{
    return m_externalClusterIdHasBeenSet;
}

vector<CloudTag> PartitionInfo::GetTags() const
{
    return m_tags;
}

void PartitionInfo::SetTags(const vector<CloudTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PartitionInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

