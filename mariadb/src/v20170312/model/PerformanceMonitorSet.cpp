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

#include <tencentcloud/mariadb/v20170312/model/PerformanceMonitorSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

PerformanceMonitorSet::PerformanceMonitorSet() :
    m_updateTotalHasBeenSet(false),
    m_diskIopsHasBeenSet(false),
    m_connActiveHasBeenSet(false),
    m_memHitRateHasBeenSet(false),
    m_slaveDelayHasBeenSet(false),
    m_selectTotalHasBeenSet(false),
    m_longQueryHasBeenSet(false),
    m_deleteTotalHasBeenSet(false),
    m_insertTotalHasBeenSet(false),
    m_isMasterSwitchedHasBeenSet(false)
{
}

CoreInternalOutcome PerformanceMonitorSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpdateTotal") && !value["UpdateTotal"].IsNull())
    {
        if (!value["UpdateTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.UpdateTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_updateTotal.Deserialize(value["UpdateTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_updateTotalHasBeenSet = true;
    }

    if (value.HasMember("DiskIops") && !value["DiskIops"].IsNull())
    {
        if (!value["DiskIops"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.DiskIops` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskIops.Deserialize(value["DiskIops"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskIopsHasBeenSet = true;
    }

    if (value.HasMember("ConnActive") && !value["ConnActive"].IsNull())
    {
        if (!value["ConnActive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.ConnActive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connActive.Deserialize(value["ConnActive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connActiveHasBeenSet = true;
    }

    if (value.HasMember("MemHitRate") && !value["MemHitRate"].IsNull())
    {
        if (!value["MemHitRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.MemHitRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memHitRate.Deserialize(value["MemHitRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memHitRateHasBeenSet = true;
    }

    if (value.HasMember("SlaveDelay") && !value["SlaveDelay"].IsNull())
    {
        if (!value["SlaveDelay"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.SlaveDelay` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slaveDelay.Deserialize(value["SlaveDelay"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slaveDelayHasBeenSet = true;
    }

    if (value.HasMember("SelectTotal") && !value["SelectTotal"].IsNull())
    {
        if (!value["SelectTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.SelectTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectTotal.Deserialize(value["SelectTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectTotalHasBeenSet = true;
    }

    if (value.HasMember("LongQuery") && !value["LongQuery"].IsNull())
    {
        if (!value["LongQuery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.LongQuery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_longQuery.Deserialize(value["LongQuery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_longQueryHasBeenSet = true;
    }

    if (value.HasMember("DeleteTotal") && !value["DeleteTotal"].IsNull())
    {
        if (!value["DeleteTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.DeleteTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deleteTotal.Deserialize(value["DeleteTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deleteTotalHasBeenSet = true;
    }

    if (value.HasMember("InsertTotal") && !value["InsertTotal"].IsNull())
    {
        if (!value["InsertTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.InsertTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_insertTotal.Deserialize(value["InsertTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_insertTotalHasBeenSet = true;
    }

    if (value.HasMember("IsMasterSwitched") && !value["IsMasterSwitched"].IsNull())
    {
        if (!value["IsMasterSwitched"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PerformanceMonitorSet.IsMasterSwitched` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_isMasterSwitched.Deserialize(value["IsMasterSwitched"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_isMasterSwitchedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PerformanceMonitorSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_updateTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskIopsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskIops.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connActive.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memHitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemHitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memHitRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slaveDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slaveDelay.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_selectTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_longQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_longQuery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deleteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deleteTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_insertTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_insertTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isMasterSwitchedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMasterSwitched";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_isMasterSwitched.ToJsonObject(value[key.c_str()], allocator);
    }

}


MonitorData PerformanceMonitorSet::GetUpdateTotal() const
{
    return m_updateTotal;
}

void PerformanceMonitorSet::SetUpdateTotal(const MonitorData& _updateTotal)
{
    m_updateTotal = _updateTotal;
    m_updateTotalHasBeenSet = true;
}

bool PerformanceMonitorSet::UpdateTotalHasBeenSet() const
{
    return m_updateTotalHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetDiskIops() const
{
    return m_diskIops;
}

void PerformanceMonitorSet::SetDiskIops(const MonitorData& _diskIops)
{
    m_diskIops = _diskIops;
    m_diskIopsHasBeenSet = true;
}

bool PerformanceMonitorSet::DiskIopsHasBeenSet() const
{
    return m_diskIopsHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetConnActive() const
{
    return m_connActive;
}

void PerformanceMonitorSet::SetConnActive(const MonitorData& _connActive)
{
    m_connActive = _connActive;
    m_connActiveHasBeenSet = true;
}

bool PerformanceMonitorSet::ConnActiveHasBeenSet() const
{
    return m_connActiveHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetMemHitRate() const
{
    return m_memHitRate;
}

void PerformanceMonitorSet::SetMemHitRate(const MonitorData& _memHitRate)
{
    m_memHitRate = _memHitRate;
    m_memHitRateHasBeenSet = true;
}

bool PerformanceMonitorSet::MemHitRateHasBeenSet() const
{
    return m_memHitRateHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetSlaveDelay() const
{
    return m_slaveDelay;
}

void PerformanceMonitorSet::SetSlaveDelay(const MonitorData& _slaveDelay)
{
    m_slaveDelay = _slaveDelay;
    m_slaveDelayHasBeenSet = true;
}

bool PerformanceMonitorSet::SlaveDelayHasBeenSet() const
{
    return m_slaveDelayHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetSelectTotal() const
{
    return m_selectTotal;
}

void PerformanceMonitorSet::SetSelectTotal(const MonitorData& _selectTotal)
{
    m_selectTotal = _selectTotal;
    m_selectTotalHasBeenSet = true;
}

bool PerformanceMonitorSet::SelectTotalHasBeenSet() const
{
    return m_selectTotalHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetLongQuery() const
{
    return m_longQuery;
}

void PerformanceMonitorSet::SetLongQuery(const MonitorData& _longQuery)
{
    m_longQuery = _longQuery;
    m_longQueryHasBeenSet = true;
}

bool PerformanceMonitorSet::LongQueryHasBeenSet() const
{
    return m_longQueryHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetDeleteTotal() const
{
    return m_deleteTotal;
}

void PerformanceMonitorSet::SetDeleteTotal(const MonitorData& _deleteTotal)
{
    m_deleteTotal = _deleteTotal;
    m_deleteTotalHasBeenSet = true;
}

bool PerformanceMonitorSet::DeleteTotalHasBeenSet() const
{
    return m_deleteTotalHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetInsertTotal() const
{
    return m_insertTotal;
}

void PerformanceMonitorSet::SetInsertTotal(const MonitorData& _insertTotal)
{
    m_insertTotal = _insertTotal;
    m_insertTotalHasBeenSet = true;
}

bool PerformanceMonitorSet::InsertTotalHasBeenSet() const
{
    return m_insertTotalHasBeenSet;
}

MonitorData PerformanceMonitorSet::GetIsMasterSwitched() const
{
    return m_isMasterSwitched;
}

void PerformanceMonitorSet::SetIsMasterSwitched(const MonitorData& _isMasterSwitched)
{
    m_isMasterSwitched = _isMasterSwitched;
    m_isMasterSwitchedHasBeenSet = true;
}

bool PerformanceMonitorSet::IsMasterSwitchedHasBeenSet() const
{
    return m_isMasterSwitchedHasBeenSet;
}

