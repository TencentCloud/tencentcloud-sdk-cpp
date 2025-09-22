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

#include <tencentcloud/billing/v20180709/model/CreateBudgetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

CreateBudgetRequest::CreateBudgetRequest() :
    m_budgetNameHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_periodBeginHasBeenSet(false),
    m_periodEndHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_budgetQuotaHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_warnJsonHasBeenSet(false),
    m_budgetNoteHasBeenSet(false),
    m_dimensionsRangeHasBeenSet(false),
    m_waveThresholdJsonHasBeenSet(false)
{
}

string CreateBudgetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billType.c_str(), allocator).Move(), allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feeType.c_str(), allocator).Move(), allocator);
    }

    if (m_warnJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_warnJson.begin(); itr != m_warnJson.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_budgetNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetNote";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetNote.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionsRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dimensionsRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_waveThresholdJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaveThresholdJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waveThresholdJson.begin(); itr != m_waveThresholdJson.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBudgetRequest::GetBudgetName() const
{
    return m_budgetName;
}

void CreateBudgetRequest::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool CreateBudgetRequest::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

string CreateBudgetRequest::GetCycleType() const
{
    return m_cycleType;
}

void CreateBudgetRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool CreateBudgetRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string CreateBudgetRequest::GetPeriodBegin() const
{
    return m_periodBegin;
}

void CreateBudgetRequest::SetPeriodBegin(const string& _periodBegin)
{
    m_periodBegin = _periodBegin;
    m_periodBeginHasBeenSet = true;
}

bool CreateBudgetRequest::PeriodBeginHasBeenSet() const
{
    return m_periodBeginHasBeenSet;
}

string CreateBudgetRequest::GetPeriodEnd() const
{
    return m_periodEnd;
}

void CreateBudgetRequest::SetPeriodEnd(const string& _periodEnd)
{
    m_periodEnd = _periodEnd;
    m_periodEndHasBeenSet = true;
}

bool CreateBudgetRequest::PeriodEndHasBeenSet() const
{
    return m_periodEndHasBeenSet;
}

string CreateBudgetRequest::GetPlanType() const
{
    return m_planType;
}

void CreateBudgetRequest::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool CreateBudgetRequest::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

string CreateBudgetRequest::GetBudgetQuota() const
{
    return m_budgetQuota;
}

void CreateBudgetRequest::SetBudgetQuota(const string& _budgetQuota)
{
    m_budgetQuota = _budgetQuota;
    m_budgetQuotaHasBeenSet = true;
}

bool CreateBudgetRequest::BudgetQuotaHasBeenSet() const
{
    return m_budgetQuotaHasBeenSet;
}

string CreateBudgetRequest::GetBillType() const
{
    return m_billType;
}

void CreateBudgetRequest::SetBillType(const string& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool CreateBudgetRequest::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

string CreateBudgetRequest::GetFeeType() const
{
    return m_feeType;
}

void CreateBudgetRequest::SetFeeType(const string& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool CreateBudgetRequest::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

vector<BudgetWarn> CreateBudgetRequest::GetWarnJson() const
{
    return m_warnJson;
}

void CreateBudgetRequest::SetWarnJson(const vector<BudgetWarn>& _warnJson)
{
    m_warnJson = _warnJson;
    m_warnJsonHasBeenSet = true;
}

bool CreateBudgetRequest::WarnJsonHasBeenSet() const
{
    return m_warnJsonHasBeenSet;
}

string CreateBudgetRequest::GetBudgetNote() const
{
    return m_budgetNote;
}

void CreateBudgetRequest::SetBudgetNote(const string& _budgetNote)
{
    m_budgetNote = _budgetNote;
    m_budgetNoteHasBeenSet = true;
}

bool CreateBudgetRequest::BudgetNoteHasBeenSet() const
{
    return m_budgetNoteHasBeenSet;
}

BudgetConditionsForm CreateBudgetRequest::GetDimensionsRange() const
{
    return m_dimensionsRange;
}

void CreateBudgetRequest::SetDimensionsRange(const BudgetConditionsForm& _dimensionsRange)
{
    m_dimensionsRange = _dimensionsRange;
    m_dimensionsRangeHasBeenSet = true;
}

bool CreateBudgetRequest::DimensionsRangeHasBeenSet() const
{
    return m_dimensionsRangeHasBeenSet;
}

vector<WaveThresholdForm> CreateBudgetRequest::GetWaveThresholdJson() const
{
    return m_waveThresholdJson;
}

void CreateBudgetRequest::SetWaveThresholdJson(const vector<WaveThresholdForm>& _waveThresholdJson)
{
    m_waveThresholdJson = _waveThresholdJson;
    m_waveThresholdJsonHasBeenSet = true;
}

bool CreateBudgetRequest::WaveThresholdJsonHasBeenSet() const
{
    return m_waveThresholdJsonHasBeenSet;
}


