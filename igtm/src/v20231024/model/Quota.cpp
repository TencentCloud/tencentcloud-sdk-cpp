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

#include <tencentcloud/igtm/v20231024/model/Quota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

Quota::Quota() :
    m_taskQuotaHasBeenSet(false),
    m_poolQuotaHasBeenSet(false),
    m_addressQuotaHasBeenSet(false),
    m_monitorQuotaHasBeenSet(false),
    m_messageQuotaHasBeenSet(false),
    m_usedTaskQuotaHasBeenSet(false),
    m_usedFreeInstanceNumHasBeenSet(false),
    m_usedBillInstanceNumHasBeenSet(false),
    m_freePackageNumHasBeenSet(false),
    m_usedBillPackageNumHasBeenSet(false),
    m_billPackageNumHasBeenSet(false)
{
}

CoreInternalOutcome Quota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskQuota") && !value["TaskQuota"].IsNull())
    {
        if (!value["TaskQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.TaskQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskQuota = value["TaskQuota"].GetUint64();
        m_taskQuotaHasBeenSet = true;
    }

    if (value.HasMember("PoolQuota") && !value["PoolQuota"].IsNull())
    {
        if (!value["PoolQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.PoolQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_poolQuota = value["PoolQuota"].GetUint64();
        m_poolQuotaHasBeenSet = true;
    }

    if (value.HasMember("AddressQuota") && !value["AddressQuota"].IsNull())
    {
        if (!value["AddressQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.AddressQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addressQuota = value["AddressQuota"].GetUint64();
        m_addressQuotaHasBeenSet = true;
    }

    if (value.HasMember("MonitorQuota") && !value["MonitorQuota"].IsNull())
    {
        if (!value["MonitorQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.MonitorQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorQuota = value["MonitorQuota"].GetUint64();
        m_monitorQuotaHasBeenSet = true;
    }

    if (value.HasMember("MessageQuota") && !value["MessageQuota"].IsNull())
    {
        if (!value["MessageQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.MessageQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageQuota = value["MessageQuota"].GetUint64();
        m_messageQuotaHasBeenSet = true;
    }

    if (value.HasMember("UsedTaskQuota") && !value["UsedTaskQuota"].IsNull())
    {
        if (!value["UsedTaskQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.UsedTaskQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTaskQuota = value["UsedTaskQuota"].GetUint64();
        m_usedTaskQuotaHasBeenSet = true;
    }

    if (value.HasMember("UsedFreeInstanceNum") && !value["UsedFreeInstanceNum"].IsNull())
    {
        if (!value["UsedFreeInstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.UsedFreeInstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedFreeInstanceNum = value["UsedFreeInstanceNum"].GetUint64();
        m_usedFreeInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedBillInstanceNum") && !value["UsedBillInstanceNum"].IsNull())
    {
        if (!value["UsedBillInstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.UsedBillInstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBillInstanceNum = value["UsedBillInstanceNum"].GetUint64();
        m_usedBillInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("FreePackageNum") && !value["FreePackageNum"].IsNull())
    {
        if (!value["FreePackageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.FreePackageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freePackageNum = value["FreePackageNum"].GetUint64();
        m_freePackageNumHasBeenSet = true;
    }

    if (value.HasMember("UsedBillPackageNum") && !value["UsedBillPackageNum"].IsNull())
    {
        if (!value["UsedBillPackageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.UsedBillPackageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBillPackageNum = value["UsedBillPackageNum"].GetUint64();
        m_usedBillPackageNumHasBeenSet = true;
    }

    if (value.HasMember("BillPackageNum") && !value["BillPackageNum"].IsNull())
    {
        if (!value["BillPackageNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.BillPackageNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billPackageNum = value["BillPackageNum"].GetUint64();
        m_billPackageNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Quota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskQuota, allocator);
    }

    if (m_poolQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolQuota, allocator);
    }

    if (m_addressQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressQuota, allocator);
    }

    if (m_monitorQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorQuota, allocator);
    }

    if (m_messageQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageQuota, allocator);
    }

    if (m_usedTaskQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTaskQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTaskQuota, allocator);
    }

    if (m_usedFreeInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedFreeInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedFreeInstanceNum, allocator);
    }

    if (m_usedBillInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBillInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBillInstanceNum, allocator);
    }

    if (m_freePackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreePackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freePackageNum, allocator);
    }

    if (m_usedBillPackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBillPackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBillPackageNum, allocator);
    }

    if (m_billPackageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillPackageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billPackageNum, allocator);
    }

}


uint64_t Quota::GetTaskQuota() const
{
    return m_taskQuota;
}

void Quota::SetTaskQuota(const uint64_t& _taskQuota)
{
    m_taskQuota = _taskQuota;
    m_taskQuotaHasBeenSet = true;
}

bool Quota::TaskQuotaHasBeenSet() const
{
    return m_taskQuotaHasBeenSet;
}

uint64_t Quota::GetPoolQuota() const
{
    return m_poolQuota;
}

void Quota::SetPoolQuota(const uint64_t& _poolQuota)
{
    m_poolQuota = _poolQuota;
    m_poolQuotaHasBeenSet = true;
}

bool Quota::PoolQuotaHasBeenSet() const
{
    return m_poolQuotaHasBeenSet;
}

uint64_t Quota::GetAddressQuota() const
{
    return m_addressQuota;
}

void Quota::SetAddressQuota(const uint64_t& _addressQuota)
{
    m_addressQuota = _addressQuota;
    m_addressQuotaHasBeenSet = true;
}

bool Quota::AddressQuotaHasBeenSet() const
{
    return m_addressQuotaHasBeenSet;
}

uint64_t Quota::GetMonitorQuota() const
{
    return m_monitorQuota;
}

void Quota::SetMonitorQuota(const uint64_t& _monitorQuota)
{
    m_monitorQuota = _monitorQuota;
    m_monitorQuotaHasBeenSet = true;
}

bool Quota::MonitorQuotaHasBeenSet() const
{
    return m_monitorQuotaHasBeenSet;
}

uint64_t Quota::GetMessageQuota() const
{
    return m_messageQuota;
}

void Quota::SetMessageQuota(const uint64_t& _messageQuota)
{
    m_messageQuota = _messageQuota;
    m_messageQuotaHasBeenSet = true;
}

bool Quota::MessageQuotaHasBeenSet() const
{
    return m_messageQuotaHasBeenSet;
}

uint64_t Quota::GetUsedTaskQuota() const
{
    return m_usedTaskQuota;
}

void Quota::SetUsedTaskQuota(const uint64_t& _usedTaskQuota)
{
    m_usedTaskQuota = _usedTaskQuota;
    m_usedTaskQuotaHasBeenSet = true;
}

bool Quota::UsedTaskQuotaHasBeenSet() const
{
    return m_usedTaskQuotaHasBeenSet;
}

uint64_t Quota::GetUsedFreeInstanceNum() const
{
    return m_usedFreeInstanceNum;
}

void Quota::SetUsedFreeInstanceNum(const uint64_t& _usedFreeInstanceNum)
{
    m_usedFreeInstanceNum = _usedFreeInstanceNum;
    m_usedFreeInstanceNumHasBeenSet = true;
}

bool Quota::UsedFreeInstanceNumHasBeenSet() const
{
    return m_usedFreeInstanceNumHasBeenSet;
}

uint64_t Quota::GetUsedBillInstanceNum() const
{
    return m_usedBillInstanceNum;
}

void Quota::SetUsedBillInstanceNum(const uint64_t& _usedBillInstanceNum)
{
    m_usedBillInstanceNum = _usedBillInstanceNum;
    m_usedBillInstanceNumHasBeenSet = true;
}

bool Quota::UsedBillInstanceNumHasBeenSet() const
{
    return m_usedBillInstanceNumHasBeenSet;
}

uint64_t Quota::GetFreePackageNum() const
{
    return m_freePackageNum;
}

void Quota::SetFreePackageNum(const uint64_t& _freePackageNum)
{
    m_freePackageNum = _freePackageNum;
    m_freePackageNumHasBeenSet = true;
}

bool Quota::FreePackageNumHasBeenSet() const
{
    return m_freePackageNumHasBeenSet;
}

uint64_t Quota::GetUsedBillPackageNum() const
{
    return m_usedBillPackageNum;
}

void Quota::SetUsedBillPackageNum(const uint64_t& _usedBillPackageNum)
{
    m_usedBillPackageNum = _usedBillPackageNum;
    m_usedBillPackageNumHasBeenSet = true;
}

bool Quota::UsedBillPackageNumHasBeenSet() const
{
    return m_usedBillPackageNumHasBeenSet;
}

uint64_t Quota::GetBillPackageNum() const
{
    return m_billPackageNum;
}

void Quota::SetBillPackageNum(const uint64_t& _billPackageNum)
{
    m_billPackageNum = _billPackageNum;
    m_billPackageNumHasBeenSet = true;
}

bool Quota::BillPackageNumHasBeenSet() const
{
    return m_billPackageNumHasBeenSet;
}

