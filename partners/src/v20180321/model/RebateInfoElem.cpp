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

#include <tencentcloud/partners/v20180321/model/RebateInfoElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

RebateInfoElem::RebateInfoElem() :
    m_uinHasBeenSet(false),
    m_rebateMonthHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_monthSalesHasBeenSet(false),
    m_quarterSalesHasBeenSet(false),
    m_exceptionFlagHasBeenSet(false)
{
}

CoreInternalOutcome RebateInfoElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("RebateMonth") && !value["RebateMonth"].IsNull())
    {
        if (!value["RebateMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.RebateMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rebateMonth = string(value["RebateMonth"].GetString());
        m_rebateMonthHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.Amt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetUint64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("MonthSales") && !value["MonthSales"].IsNull())
    {
        if (!value["MonthSales"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.MonthSales` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monthSales = value["MonthSales"].GetUint64();
        m_monthSalesHasBeenSet = true;
    }

    if (value.HasMember("QuarterSales") && !value["QuarterSales"].IsNull())
    {
        if (!value["QuarterSales"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.QuarterSales` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quarterSales = value["QuarterSales"].GetUint64();
        m_quarterSalesHasBeenSet = true;
    }

    if (value.HasMember("ExceptionFlag") && !value["ExceptionFlag"].IsNull())
    {
        if (!value["ExceptionFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebateInfoElem.ExceptionFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionFlag = string(value["ExceptionFlag"].GetString());
        m_exceptionFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebateInfoElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_rebateMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebateMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rebateMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_monthSalesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthSales";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthSales, allocator);
    }

    if (m_quarterSalesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuarterSales";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quarterSales, allocator);
    }

    if (m_exceptionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionFlag.c_str(), allocator).Move(), allocator);
    }

}


string RebateInfoElem::GetUin() const
{
    return m_uin;
}

void RebateInfoElem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RebateInfoElem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RebateInfoElem::GetRebateMonth() const
{
    return m_rebateMonth;
}

void RebateInfoElem::SetRebateMonth(const string& _rebateMonth)
{
    m_rebateMonth = _rebateMonth;
    m_rebateMonthHasBeenSet = true;
}

bool RebateInfoElem::RebateMonthHasBeenSet() const
{
    return m_rebateMonthHasBeenSet;
}

uint64_t RebateInfoElem::GetAmt() const
{
    return m_amt;
}

void RebateInfoElem::SetAmt(const uint64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool RebateInfoElem::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

uint64_t RebateInfoElem::GetMonthSales() const
{
    return m_monthSales;
}

void RebateInfoElem::SetMonthSales(const uint64_t& _monthSales)
{
    m_monthSales = _monthSales;
    m_monthSalesHasBeenSet = true;
}

bool RebateInfoElem::MonthSalesHasBeenSet() const
{
    return m_monthSalesHasBeenSet;
}

uint64_t RebateInfoElem::GetQuarterSales() const
{
    return m_quarterSales;
}

void RebateInfoElem::SetQuarterSales(const uint64_t& _quarterSales)
{
    m_quarterSales = _quarterSales;
    m_quarterSalesHasBeenSet = true;
}

bool RebateInfoElem::QuarterSalesHasBeenSet() const
{
    return m_quarterSalesHasBeenSet;
}

string RebateInfoElem::GetExceptionFlag() const
{
    return m_exceptionFlag;
}

void RebateInfoElem::SetExceptionFlag(const string& _exceptionFlag)
{
    m_exceptionFlag = _exceptionFlag;
    m_exceptionFlagHasBeenSet = true;
}

bool RebateInfoElem::ExceptionFlagHasBeenSet() const
{
    return m_exceptionFlagHasBeenSet;
}

