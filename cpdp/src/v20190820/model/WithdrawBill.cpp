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

#include <tencentcloud/cpdp/v20190820/model/WithdrawBill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

WithdrawBill::WithdrawBill() :
    m_withdrawOrderIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_payAmtHasBeenSet(false),
    m_inSubAppIdHasBeenSet(false),
    m_outSubAppIdHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_extendFieldDataHasBeenSet(false)
{
}

CoreInternalOutcome WithdrawBill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WithdrawOrderId") && !value["WithdrawOrderId"].IsNull())
    {
        if (!value["WithdrawOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.WithdrawOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_withdrawOrderId = string(value["WithdrawOrderId"].GetString());
        m_withdrawOrderIdHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("PayAmt") && !value["PayAmt"].IsNull())
    {
        if (!value["PayAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.PayAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payAmt = string(value["PayAmt"].GetString());
        m_payAmtHasBeenSet = true;
    }

    if (value.HasMember("InSubAppId") && !value["InSubAppId"].IsNull())
    {
        if (!value["InSubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.InSubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSubAppId = string(value["InSubAppId"].GetString());
        m_inSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("OutSubAppId") && !value["OutSubAppId"].IsNull())
    {
        if (!value["OutSubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.OutSubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubAppId = string(value["OutSubAppId"].GetString());
        m_outSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("CurrencyType") && !value["CurrencyType"].IsNull())
    {
        if (!value["CurrencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.CurrencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyType = string(value["CurrencyType"].GetString());
        m_currencyTypeHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.MetaData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaData = string(value["MetaData"].GetString());
        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("ExtendFieldData") && !value["ExtendFieldData"].IsNull())
    {
        if (!value["ExtendFieldData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawBill.ExtendFieldData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendFieldData = string(value["ExtendFieldData"].GetString());
        m_extendFieldDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WithdrawBill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_withdrawOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithdrawOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_withdrawOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_payAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaData.c_str(), allocator).Move(), allocator);
    }

    if (m_extendFieldDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendFieldData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendFieldData.c_str(), allocator).Move(), allocator);
    }

}


string WithdrawBill::GetWithdrawOrderId() const
{
    return m_withdrawOrderId;
}

void WithdrawBill::SetWithdrawOrderId(const string& _withdrawOrderId)
{
    m_withdrawOrderId = _withdrawOrderId;
    m_withdrawOrderIdHasBeenSet = true;
}

bool WithdrawBill::WithdrawOrderIdHasBeenSet() const
{
    return m_withdrawOrderIdHasBeenSet;
}

string WithdrawBill::GetDate() const
{
    return m_date;
}

void WithdrawBill::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool WithdrawBill::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string WithdrawBill::GetPayAmt() const
{
    return m_payAmt;
}

void WithdrawBill::SetPayAmt(const string& _payAmt)
{
    m_payAmt = _payAmt;
    m_payAmtHasBeenSet = true;
}

bool WithdrawBill::PayAmtHasBeenSet() const
{
    return m_payAmtHasBeenSet;
}

string WithdrawBill::GetInSubAppId() const
{
    return m_inSubAppId;
}

void WithdrawBill::SetInSubAppId(const string& _inSubAppId)
{
    m_inSubAppId = _inSubAppId;
    m_inSubAppIdHasBeenSet = true;
}

bool WithdrawBill::InSubAppIdHasBeenSet() const
{
    return m_inSubAppIdHasBeenSet;
}

string WithdrawBill::GetOutSubAppId() const
{
    return m_outSubAppId;
}

void WithdrawBill::SetOutSubAppId(const string& _outSubAppId)
{
    m_outSubAppId = _outSubAppId;
    m_outSubAppIdHasBeenSet = true;
}

bool WithdrawBill::OutSubAppIdHasBeenSet() const
{
    return m_outSubAppIdHasBeenSet;
}

string WithdrawBill::GetCurrencyType() const
{
    return m_currencyType;
}

void WithdrawBill::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool WithdrawBill::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string WithdrawBill::GetMetaData() const
{
    return m_metaData;
}

void WithdrawBill::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool WithdrawBill::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string WithdrawBill::GetExtendFieldData() const
{
    return m_extendFieldData;
}

void WithdrawBill::SetExtendFieldData(const string& _extendFieldData)
{
    m_extendFieldData = _extendFieldData;
    m_extendFieldDataHasBeenSet = true;
}

bool WithdrawBill::ExtendFieldDataHasBeenSet() const
{
    return m_extendFieldDataHasBeenSet;
}

