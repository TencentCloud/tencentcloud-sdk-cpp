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

#include <tencentcloud/cynosdb/v20190107/model/InstanceAuditStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceAuditStatus::InstanceAuditStatus() :
    m_instanceIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_highLogExpireDayHasBeenSet(false),
    m_lowLogExpireDayHasBeenSet(false),
    m_billingAmountHasBeenSet(false),
    m_highRealStorageHasBeenSet(false),
    m_lowRealStorageHasBeenSet(false),
    m_auditAllHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_instanceInfoHasBeenSet(false),
    m_realStorageHasBeenSet(false),
    m_ruleTemplateIdsHasBeenSet(false),
    m_deliverHasBeenSet(false),
    m_deliverSummaryHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAuditStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("LogExpireDay") && !value["LogExpireDay"].IsNull())
    {
        if (!value["LogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.LogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = value["LogExpireDay"].GetUint64();
        m_logExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HighLogExpireDay") && !value["HighLogExpireDay"].IsNull())
    {
        if (!value["HighLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.HighLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLogExpireDay = value["HighLogExpireDay"].GetUint64();
        m_highLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("LowLogExpireDay") && !value["LowLogExpireDay"].IsNull())
    {
        if (!value["LowLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.LowLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLogExpireDay = value["LowLogExpireDay"].GetUint64();
        m_lowLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("BillingAmount") && !value["BillingAmount"].IsNull())
    {
        if (!value["BillingAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.BillingAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_billingAmount = value["BillingAmount"].GetDouble();
        m_billingAmountHasBeenSet = true;
    }

    if (value.HasMember("HighRealStorage") && !value["HighRealStorage"].IsNull())
    {
        if (!value["HighRealStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.HighRealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highRealStorage = value["HighRealStorage"].GetDouble();
        m_highRealStorageHasBeenSet = true;
    }

    if (value.HasMember("LowRealStorage") && !value["LowRealStorage"].IsNull())
    {
        if (!value["LowRealStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.LowRealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowRealStorage = value["LowRealStorage"].GetDouble();
        m_lowRealStorageHasBeenSet = true;
    }

    if (value.HasMember("AuditAll") && !value["AuditAll"].IsNull())
    {
        if (!value["AuditAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.AuditAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditAll = value["AuditAll"].GetBool();
        m_auditAllHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.InstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceInfo.Deserialize(value["InstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceInfoHasBeenSet = true;
    }

    if (value.HasMember("RealStorage") && !value["RealStorage"].IsNull())
    {
        if (!value["RealStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.RealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realStorage = value["RealStorage"].GetDouble();
        m_realStorageHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateIds") && !value["RuleTemplateIds"].IsNull())
    {
        if (!value["RuleTemplateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.RuleTemplateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleTemplateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleTemplateIds.push_back((*itr).GetString());
        }
        m_ruleTemplateIdsHasBeenSet = true;
    }

    if (value.HasMember("Deliver") && !value["Deliver"].IsNull())
    {
        if (!value["Deliver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.Deliver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliver = string(value["Deliver"].GetString());
        m_deliverHasBeenSet = true;
    }

    if (value.HasMember("DeliverSummary") && !value["DeliverSummary"].IsNull())
    {
        if (!value["DeliverSummary"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAuditStatus.DeliverSummary` is not array type"));

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


    return CoreInternalOutcome(true);
}

void InstanceAuditStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_highLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLogExpireDay, allocator);
    }

    if (m_lowLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLogExpireDay, allocator);
    }

    if (m_billingAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingAmount, allocator);
    }

    if (m_highRealStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRealStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRealStorage, allocator);
    }

    if (m_lowRealStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowRealStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowRealStorage, allocator);
    }

    if (m_auditAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditAll, allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realStorage, allocator);
    }

    if (m_ruleTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTemplateIds.begin(); itr != m_ruleTemplateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

}


string InstanceAuditStatus::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAuditStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAuditStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceAuditStatus::GetAuditStatus() const
{
    return m_auditStatus;
}

void InstanceAuditStatus::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool InstanceAuditStatus::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

uint64_t InstanceAuditStatus::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void InstanceAuditStatus::SetLogExpireDay(const uint64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool InstanceAuditStatus::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

uint64_t InstanceAuditStatus::GetHighLogExpireDay() const
{
    return m_highLogExpireDay;
}

void InstanceAuditStatus::SetHighLogExpireDay(const uint64_t& _highLogExpireDay)
{
    m_highLogExpireDay = _highLogExpireDay;
    m_highLogExpireDayHasBeenSet = true;
}

bool InstanceAuditStatus::HighLogExpireDayHasBeenSet() const
{
    return m_highLogExpireDayHasBeenSet;
}

uint64_t InstanceAuditStatus::GetLowLogExpireDay() const
{
    return m_lowLogExpireDay;
}

void InstanceAuditStatus::SetLowLogExpireDay(const uint64_t& _lowLogExpireDay)
{
    m_lowLogExpireDay = _lowLogExpireDay;
    m_lowLogExpireDayHasBeenSet = true;
}

bool InstanceAuditStatus::LowLogExpireDayHasBeenSet() const
{
    return m_lowLogExpireDayHasBeenSet;
}

double InstanceAuditStatus::GetBillingAmount() const
{
    return m_billingAmount;
}

void InstanceAuditStatus::SetBillingAmount(const double& _billingAmount)
{
    m_billingAmount = _billingAmount;
    m_billingAmountHasBeenSet = true;
}

bool InstanceAuditStatus::BillingAmountHasBeenSet() const
{
    return m_billingAmountHasBeenSet;
}

double InstanceAuditStatus::GetHighRealStorage() const
{
    return m_highRealStorage;
}

void InstanceAuditStatus::SetHighRealStorage(const double& _highRealStorage)
{
    m_highRealStorage = _highRealStorage;
    m_highRealStorageHasBeenSet = true;
}

bool InstanceAuditStatus::HighRealStorageHasBeenSet() const
{
    return m_highRealStorageHasBeenSet;
}

double InstanceAuditStatus::GetLowRealStorage() const
{
    return m_lowRealStorage;
}

void InstanceAuditStatus::SetLowRealStorage(const double& _lowRealStorage)
{
    m_lowRealStorage = _lowRealStorage;
    m_lowRealStorageHasBeenSet = true;
}

bool InstanceAuditStatus::LowRealStorageHasBeenSet() const
{
    return m_lowRealStorageHasBeenSet;
}

bool InstanceAuditStatus::GetAuditAll() const
{
    return m_auditAll;
}

void InstanceAuditStatus::SetAuditAll(const bool& _auditAll)
{
    m_auditAll = _auditAll;
    m_auditAllHasBeenSet = true;
}

bool InstanceAuditStatus::AuditAllHasBeenSet() const
{
    return m_auditAllHasBeenSet;
}

string InstanceAuditStatus::GetCreateAt() const
{
    return m_createAt;
}

void InstanceAuditStatus::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool InstanceAuditStatus::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

AuditInstanceInfo InstanceAuditStatus::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void InstanceAuditStatus::SetInstanceInfo(const AuditInstanceInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool InstanceAuditStatus::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

double InstanceAuditStatus::GetRealStorage() const
{
    return m_realStorage;
}

void InstanceAuditStatus::SetRealStorage(const double& _realStorage)
{
    m_realStorage = _realStorage;
    m_realStorageHasBeenSet = true;
}

bool InstanceAuditStatus::RealStorageHasBeenSet() const
{
    return m_realStorageHasBeenSet;
}

vector<string> InstanceAuditStatus::GetRuleTemplateIds() const
{
    return m_ruleTemplateIds;
}

void InstanceAuditStatus::SetRuleTemplateIds(const vector<string>& _ruleTemplateIds)
{
    m_ruleTemplateIds = _ruleTemplateIds;
    m_ruleTemplateIdsHasBeenSet = true;
}

bool InstanceAuditStatus::RuleTemplateIdsHasBeenSet() const
{
    return m_ruleTemplateIdsHasBeenSet;
}

string InstanceAuditStatus::GetDeliver() const
{
    return m_deliver;
}

void InstanceAuditStatus::SetDeliver(const string& _deliver)
{
    m_deliver = _deliver;
    m_deliverHasBeenSet = true;
}

bool InstanceAuditStatus::DeliverHasBeenSet() const
{
    return m_deliverHasBeenSet;
}

vector<DeliverSummary> InstanceAuditStatus::GetDeliverSummary() const
{
    return m_deliverSummary;
}

void InstanceAuditStatus::SetDeliverSummary(const vector<DeliverSummary>& _deliverSummary)
{
    m_deliverSummary = _deliverSummary;
    m_deliverSummaryHasBeenSet = true;
}

bool InstanceAuditStatus::DeliverSummaryHasBeenSet() const
{
    return m_deliverSummaryHasBeenSet;
}

