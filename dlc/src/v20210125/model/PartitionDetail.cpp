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

#include <tencentcloud/dlc/v20210125/model/PartitionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PartitionDetail::PartitionDetail() :
    m_partitionCodeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_productInfoHasBeenSet(false),
    m_resourcePoolCodeHasBeenSet(false),
    m_resourceQuotaHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome PartitionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.Region` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetInt64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProductInfo") && !value["ProductInfo"].IsNull())
    {
        if (!value["ProductInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.ProductInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productInfo = string(value["ProductInfo"].GetString());
        m_productInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourcePoolCode") && !value["ResourcePoolCode"].IsNull())
    {
        if (!value["ResourcePoolCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.ResourcePoolCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePoolCode = string(value["ResourcePoolCode"].GetString());
        m_resourcePoolCodeHasBeenSet = true;
    }

    if (value.HasMember("ResourceQuota") && !value["ResourceQuota"].IsNull())
    {
        if (!value["ResourceQuota"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.ResourceQuota` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_region, allocator);
    }

    if (m_productInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePoolCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePoolCode.c_str(), allocator).Move(), allocator);
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

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string PartitionDetail::GetPartitionCode() const
{
    return m_partitionCode;
}

void PartitionDetail::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool PartitionDetail::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string PartitionDetail::GetPartitionName() const
{
    return m_partitionName;
}

void PartitionDetail::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool PartitionDetail::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string PartitionDetail::GetDescription() const
{
    return m_description;
}

void PartitionDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PartitionDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t PartitionDetail::GetRegion() const
{
    return m_region;
}

void PartitionDetail::SetRegion(const int64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PartitionDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string PartitionDetail::GetProductInfo() const
{
    return m_productInfo;
}

void PartitionDetail::SetProductInfo(const string& _productInfo)
{
    m_productInfo = _productInfo;
    m_productInfoHasBeenSet = true;
}

bool PartitionDetail::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

string PartitionDetail::GetResourcePoolCode() const
{
    return m_resourcePoolCode;
}

void PartitionDetail::SetResourcePoolCode(const string& _resourcePoolCode)
{
    m_resourcePoolCode = _resourcePoolCode;
    m_resourcePoolCodeHasBeenSet = true;
}

bool PartitionDetail::ResourcePoolCodeHasBeenSet() const
{
    return m_resourcePoolCodeHasBeenSet;
}

vector<ResourceQuota> PartitionDetail::GetResourceQuota() const
{
    return m_resourceQuota;
}

void PartitionDetail::SetResourceQuota(const vector<ResourceQuota>& _resourceQuota)
{
    m_resourceQuota = _resourceQuota;
    m_resourceQuotaHasBeenSet = true;
}

bool PartitionDetail::ResourceQuotaHasBeenSet() const
{
    return m_resourceQuotaHasBeenSet;
}

int64_t PartitionDetail::GetPayMode() const
{
    return m_payMode;
}

void PartitionDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool PartitionDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t PartitionDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void PartitionDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool PartitionDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string PartitionDetail::GetScheduler() const
{
    return m_scheduler;
}

void PartitionDetail::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool PartitionDetail::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t PartitionDetail::GetStatus() const
{
    return m_status;
}

void PartitionDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PartitionDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

