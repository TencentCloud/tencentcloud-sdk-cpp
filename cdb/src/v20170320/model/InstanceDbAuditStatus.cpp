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

#include <tencentcloud/cdb/v20170320/model/InstanceDbAuditStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InstanceDbAuditStatus::InstanceDbAuditStatus() :
    m_instanceIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_auditTaskHasBeenSet(false),
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
    m_oldRuleHasBeenSet(false),
    m_ruleTemplateIdsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDbAuditStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditTask") && !value["AuditTask"].IsNull())
    {
        if (!value["AuditTask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.AuditTask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditTask = value["AuditTask"].GetUint64();
        m_auditTaskHasBeenSet = true;
    }

    if (value.HasMember("LogExpireDay") && !value["LogExpireDay"].IsNull())
    {
        if (!value["LogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.LogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logExpireDay = value["LogExpireDay"].GetUint64();
        m_logExpireDayHasBeenSet = true;
    }

    if (value.HasMember("HighLogExpireDay") && !value["HighLogExpireDay"].IsNull())
    {
        if (!value["HighLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.HighLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highLogExpireDay = value["HighLogExpireDay"].GetUint64();
        m_highLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("LowLogExpireDay") && !value["LowLogExpireDay"].IsNull())
    {
        if (!value["LowLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.LowLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLogExpireDay = value["LowLogExpireDay"].GetUint64();
        m_lowLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("BillingAmount") && !value["BillingAmount"].IsNull())
    {
        if (!value["BillingAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.BillingAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_billingAmount = value["BillingAmount"].GetDouble();
        m_billingAmountHasBeenSet = true;
    }

    if (value.HasMember("HighRealStorage") && !value["HighRealStorage"].IsNull())
    {
        if (!value["HighRealStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.HighRealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highRealStorage = value["HighRealStorage"].GetDouble();
        m_highRealStorageHasBeenSet = true;
    }

    if (value.HasMember("LowRealStorage") && !value["LowRealStorage"].IsNull())
    {
        if (!value["LowRealStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.LowRealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowRealStorage = value["LowRealStorage"].GetDouble();
        m_lowRealStorageHasBeenSet = true;
    }

    if (value.HasMember("AuditAll") && !value["AuditAll"].IsNull())
    {
        if (!value["AuditAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.AuditAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditAll = value["AuditAll"].GetBool();
        m_auditAllHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.InstanceInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.RealStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realStorage = value["RealStorage"].GetDouble();
        m_realStorageHasBeenSet = true;
    }

    if (value.HasMember("OldRule") && !value["OldRule"].IsNull())
    {
        if (!value["OldRule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.OldRule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_oldRule = value["OldRule"].GetBool();
        m_oldRuleHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateIds") && !value["RuleTemplateIds"].IsNull())
    {
        if (!value["RuleTemplateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDbAuditStatus.RuleTemplateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleTemplateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleTemplateIds.push_back((*itr).GetString());
        }
        m_ruleTemplateIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDbAuditStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_auditTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditTask, allocator);
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

    if (m_oldRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldRule, allocator);
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

}


string InstanceDbAuditStatus::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDbAuditStatus::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDbAuditStatus::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceDbAuditStatus::GetAuditStatus() const
{
    return m_auditStatus;
}

void InstanceDbAuditStatus::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool InstanceDbAuditStatus::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

uint64_t InstanceDbAuditStatus::GetAuditTask() const
{
    return m_auditTask;
}

void InstanceDbAuditStatus::SetAuditTask(const uint64_t& _auditTask)
{
    m_auditTask = _auditTask;
    m_auditTaskHasBeenSet = true;
}

bool InstanceDbAuditStatus::AuditTaskHasBeenSet() const
{
    return m_auditTaskHasBeenSet;
}

uint64_t InstanceDbAuditStatus::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void InstanceDbAuditStatus::SetLogExpireDay(const uint64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool InstanceDbAuditStatus::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

uint64_t InstanceDbAuditStatus::GetHighLogExpireDay() const
{
    return m_highLogExpireDay;
}

void InstanceDbAuditStatus::SetHighLogExpireDay(const uint64_t& _highLogExpireDay)
{
    m_highLogExpireDay = _highLogExpireDay;
    m_highLogExpireDayHasBeenSet = true;
}

bool InstanceDbAuditStatus::HighLogExpireDayHasBeenSet() const
{
    return m_highLogExpireDayHasBeenSet;
}

uint64_t InstanceDbAuditStatus::GetLowLogExpireDay() const
{
    return m_lowLogExpireDay;
}

void InstanceDbAuditStatus::SetLowLogExpireDay(const uint64_t& _lowLogExpireDay)
{
    m_lowLogExpireDay = _lowLogExpireDay;
    m_lowLogExpireDayHasBeenSet = true;
}

bool InstanceDbAuditStatus::LowLogExpireDayHasBeenSet() const
{
    return m_lowLogExpireDayHasBeenSet;
}

double InstanceDbAuditStatus::GetBillingAmount() const
{
    return m_billingAmount;
}

void InstanceDbAuditStatus::SetBillingAmount(const double& _billingAmount)
{
    m_billingAmount = _billingAmount;
    m_billingAmountHasBeenSet = true;
}

bool InstanceDbAuditStatus::BillingAmountHasBeenSet() const
{
    return m_billingAmountHasBeenSet;
}

double InstanceDbAuditStatus::GetHighRealStorage() const
{
    return m_highRealStorage;
}

void InstanceDbAuditStatus::SetHighRealStorage(const double& _highRealStorage)
{
    m_highRealStorage = _highRealStorage;
    m_highRealStorageHasBeenSet = true;
}

bool InstanceDbAuditStatus::HighRealStorageHasBeenSet() const
{
    return m_highRealStorageHasBeenSet;
}

double InstanceDbAuditStatus::GetLowRealStorage() const
{
    return m_lowRealStorage;
}

void InstanceDbAuditStatus::SetLowRealStorage(const double& _lowRealStorage)
{
    m_lowRealStorage = _lowRealStorage;
    m_lowRealStorageHasBeenSet = true;
}

bool InstanceDbAuditStatus::LowRealStorageHasBeenSet() const
{
    return m_lowRealStorageHasBeenSet;
}

bool InstanceDbAuditStatus::GetAuditAll() const
{
    return m_auditAll;
}

void InstanceDbAuditStatus::SetAuditAll(const bool& _auditAll)
{
    m_auditAll = _auditAll;
    m_auditAllHasBeenSet = true;
}

bool InstanceDbAuditStatus::AuditAllHasBeenSet() const
{
    return m_auditAllHasBeenSet;
}

string InstanceDbAuditStatus::GetCreateAt() const
{
    return m_createAt;
}

void InstanceDbAuditStatus::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool InstanceDbAuditStatus::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

AuditInstanceInfo InstanceDbAuditStatus::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void InstanceDbAuditStatus::SetInstanceInfo(const AuditInstanceInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool InstanceDbAuditStatus::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

double InstanceDbAuditStatus::GetRealStorage() const
{
    return m_realStorage;
}

void InstanceDbAuditStatus::SetRealStorage(const double& _realStorage)
{
    m_realStorage = _realStorage;
    m_realStorageHasBeenSet = true;
}

bool InstanceDbAuditStatus::RealStorageHasBeenSet() const
{
    return m_realStorageHasBeenSet;
}

bool InstanceDbAuditStatus::GetOldRule() const
{
    return m_oldRule;
}

void InstanceDbAuditStatus::SetOldRule(const bool& _oldRule)
{
    m_oldRule = _oldRule;
    m_oldRuleHasBeenSet = true;
}

bool InstanceDbAuditStatus::OldRuleHasBeenSet() const
{
    return m_oldRuleHasBeenSet;
}

vector<string> InstanceDbAuditStatus::GetRuleTemplateIds() const
{
    return m_ruleTemplateIds;
}

void InstanceDbAuditStatus::SetRuleTemplateIds(const vector<string>& _ruleTemplateIds)
{
    m_ruleTemplateIds = _ruleTemplateIds;
    m_ruleTemplateIdsHasBeenSet = true;
}

bool InstanceDbAuditStatus::RuleTemplateIdsHasBeenSet() const
{
    return m_ruleTemplateIdsHasBeenSet;
}

