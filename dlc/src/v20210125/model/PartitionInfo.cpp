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
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
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

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
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

