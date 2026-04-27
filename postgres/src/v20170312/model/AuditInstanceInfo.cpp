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

#include <tencentcloud/postgres/v20170312/model/AuditInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

AuditInstanceInfo::AuditInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_hotLogExpireDayHasBeenSet(false),
    m_coldLogExpireDayHasBeenSet(false),
    m_hotLogSizeHasBeenSet(false),
    m_coldLogSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deliverHasBeenSet(false),
    m_deliverSummaryHasBeenSet(false),
    m_instanceInfoHasBeenSet(false)
{
}

CoreInternalOutcome AuditInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("LogExpireDay") && !value["LogExpireDay"].IsNull())
    {
        if (!value["LogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.LogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = value["LogExpireDay"].GetUint64();
        m_logExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HotLogExpireDay") && !value["HotLogExpireDay"].IsNull())
    {
        if (!value["HotLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.HotLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hotLogExpireDay = value["HotLogExpireDay"].GetUint64();
        m_hotLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("ColdLogExpireDay") && !value["ColdLogExpireDay"].IsNull())
    {
        if (!value["ColdLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.ColdLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coldLogExpireDay = value["ColdLogExpireDay"].GetUint64();
        m_coldLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HotLogSize") && !value["HotLogSize"].IsNull())
    {
        if (!value["HotLogSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.HotLogSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_hotLogSize = value["HotLogSize"].GetDouble();
        m_hotLogSizeHasBeenSet = true;
    }

    if (value.HasMember("ColdLogSize") && !value["ColdLogSize"].IsNull())
    {
        if (!value["ColdLogSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.ColdLogSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_coldLogSize = value["ColdLogSize"].GetDouble();
        m_coldLogSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Deliver") && !value["Deliver"].IsNull())
    {
        if (!value["Deliver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.Deliver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliver = string(value["Deliver"].GetString());
        m_deliverHasBeenSet = true;
    }

    if (value.HasMember("DeliverSummary") && !value["DeliverSummary"].IsNull())
    {
        if (!value["DeliverSummary"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.DeliverSummary` is not array type"));

        const rapidjson::Value &tmpValue = value["DeliverSummary"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliverSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deliverSummary.push_back(item);
        }
        m_deliverSummaryHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuditInstanceInfo.InstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceInfo.Deserialize(value["InstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_hotLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotLogExpireDay, allocator);
    }

    if (m_coldLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldLogExpireDay, allocator);
    }

    if (m_hotLogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotLogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotLogSize, allocator);
    }

    if (m_coldLogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdLogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldLogSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deliver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliver.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliverSummary.begin(); itr != m_deliverSummary.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AuditInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AuditInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AuditInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AuditInstanceInfo::GetAuditStatus() const
{
    return m_auditStatus;
}

void AuditInstanceInfo::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool AuditInstanceInfo::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

uint64_t AuditInstanceInfo::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void AuditInstanceInfo::SetLogExpireDay(const uint64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool AuditInstanceInfo::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

uint64_t AuditInstanceInfo::GetHotLogExpireDay() const
{
    return m_hotLogExpireDay;
}

void AuditInstanceInfo::SetHotLogExpireDay(const uint64_t& _hotLogExpireDay)
{
    m_hotLogExpireDay = _hotLogExpireDay;
    m_hotLogExpireDayHasBeenSet = true;
}

bool AuditInstanceInfo::HotLogExpireDayHasBeenSet() const
{
    return m_hotLogExpireDayHasBeenSet;
}

uint64_t AuditInstanceInfo::GetColdLogExpireDay() const
{
    return m_coldLogExpireDay;
}

void AuditInstanceInfo::SetColdLogExpireDay(const uint64_t& _coldLogExpireDay)
{
    m_coldLogExpireDay = _coldLogExpireDay;
    m_coldLogExpireDayHasBeenSet = true;
}

bool AuditInstanceInfo::ColdLogExpireDayHasBeenSet() const
{
    return m_coldLogExpireDayHasBeenSet;
}

double AuditInstanceInfo::GetHotLogSize() const
{
    return m_hotLogSize;
}

void AuditInstanceInfo::SetHotLogSize(const double& _hotLogSize)
{
    m_hotLogSize = _hotLogSize;
    m_hotLogSizeHasBeenSet = true;
}

bool AuditInstanceInfo::HotLogSizeHasBeenSet() const
{
    return m_hotLogSizeHasBeenSet;
}

double AuditInstanceInfo::GetColdLogSize() const
{
    return m_coldLogSize;
}

void AuditInstanceInfo::SetColdLogSize(const double& _coldLogSize)
{
    m_coldLogSize = _coldLogSize;
    m_coldLogSizeHasBeenSet = true;
}

bool AuditInstanceInfo::ColdLogSizeHasBeenSet() const
{
    return m_coldLogSizeHasBeenSet;
}

string AuditInstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void AuditInstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuditInstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AuditInstanceInfo::GetDeliver() const
{
    return m_deliver;
}

void AuditInstanceInfo::SetDeliver(const string& _deliver)
{
    m_deliver = _deliver;
    m_deliverHasBeenSet = true;
}

bool AuditInstanceInfo::DeliverHasBeenSet() const
{
    return m_deliverHasBeenSet;
}

vector<DeliverSummary> AuditInstanceInfo::GetDeliverSummary() const
{
    return m_deliverSummary;
}

void AuditInstanceInfo::SetDeliverSummary(const vector<DeliverSummary>& _deliverSummary)
{
    m_deliverSummary = _deliverSummary;
    m_deliverSummaryHasBeenSet = true;
}

bool AuditInstanceInfo::DeliverSummaryHasBeenSet() const
{
    return m_deliverSummaryHasBeenSet;
}

LogInstanceInfo AuditInstanceInfo::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void AuditInstanceInfo::SetInstanceInfo(const LogInstanceInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool AuditInstanceInfo::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

