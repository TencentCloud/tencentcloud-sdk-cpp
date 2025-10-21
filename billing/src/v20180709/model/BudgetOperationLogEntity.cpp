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

#include <tencentcloud/billing/v20180709/model/BudgetOperationLogEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetOperationLogEntity::BudgetOperationLogEntity() :
    m_payerUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_billDayHasBeenSet(false),
    m_billMonthHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_diffValueHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operationChannelHasBeenSet(false),
    m_budgetIdHasBeenSet(false)
{
}

CoreInternalOutcome BudgetOperationLogEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.PayerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = value["PayerUin"].GetUint64();
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.OwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetUint64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.OperateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = value["OperateUin"].GetUint64();
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("BillDay") && !value["BillDay"].IsNull())
    {
        if (!value["BillDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.BillDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billDay = value["BillDay"].GetUint64();
        m_billDayHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("DiffValue") && !value["DiffValue"].IsNull())
    {
        if (!value["DiffValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.DiffValue` is not array type"));

        const rapidjson::Value &tmpValue = value["DiffValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetInfoDiffEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diffValue.push_back(item);
        }
        m_diffValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperationChannel") && !value["OperationChannel"].IsNull())
    {
        if (!value["OperationChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.OperationChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationChannel = string(value["OperationChannel"].GetString());
        m_operationChannelHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetOperationLogEntity.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetOperationLogEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payerUin, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateUin, allocator);
    }

    if (m_billDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billDay, allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_diffValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diffValue.begin(); itr != m_diffValue.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_operationChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BudgetOperationLogEntity::GetPayerUin() const
{
    return m_payerUin;
}

void BudgetOperationLogEntity::SetPayerUin(const uint64_t& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool BudgetOperationLogEntity::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

uint64_t BudgetOperationLogEntity::GetOwnerUin() const
{
    return m_ownerUin;
}

void BudgetOperationLogEntity::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BudgetOperationLogEntity::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t BudgetOperationLogEntity::GetOperateUin() const
{
    return m_operateUin;
}

void BudgetOperationLogEntity::SetOperateUin(const uint64_t& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool BudgetOperationLogEntity::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

uint64_t BudgetOperationLogEntity::GetBillDay() const
{
    return m_billDay;
}

void BudgetOperationLogEntity::SetBillDay(const uint64_t& _billDay)
{
    m_billDay = _billDay;
    m_billDayHasBeenSet = true;
}

bool BudgetOperationLogEntity::BillDayHasBeenSet() const
{
    return m_billDayHasBeenSet;
}

string BudgetOperationLogEntity::GetBillMonth() const
{
    return m_billMonth;
}

void BudgetOperationLogEntity::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool BudgetOperationLogEntity::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

string BudgetOperationLogEntity::GetAction() const
{
    return m_action;
}

void BudgetOperationLogEntity::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BudgetOperationLogEntity::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<BudgetInfoDiffEntity> BudgetOperationLogEntity::GetDiffValue() const
{
    return m_diffValue;
}

void BudgetOperationLogEntity::SetDiffValue(const vector<BudgetInfoDiffEntity>& _diffValue)
{
    m_diffValue = _diffValue;
    m_diffValueHasBeenSet = true;
}

bool BudgetOperationLogEntity::DiffValueHasBeenSet() const
{
    return m_diffValueHasBeenSet;
}

string BudgetOperationLogEntity::GetCreateTime() const
{
    return m_createTime;
}

void BudgetOperationLogEntity::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BudgetOperationLogEntity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BudgetOperationLogEntity::GetUpdateTime() const
{
    return m_updateTime;
}

void BudgetOperationLogEntity::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BudgetOperationLogEntity::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BudgetOperationLogEntity::GetOperationChannel() const
{
    return m_operationChannel;
}

void BudgetOperationLogEntity::SetOperationChannel(const string& _operationChannel)
{
    m_operationChannel = _operationChannel;
    m_operationChannelHasBeenSet = true;
}

bool BudgetOperationLogEntity::OperationChannelHasBeenSet() const
{
    return m_operationChannelHasBeenSet;
}

string BudgetOperationLogEntity::GetBudgetId() const
{
    return m_budgetId;
}

void BudgetOperationLogEntity::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool BudgetOperationLogEntity::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

