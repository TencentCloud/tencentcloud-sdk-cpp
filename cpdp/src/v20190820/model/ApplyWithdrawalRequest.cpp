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

#include <tencentcloud/cpdp/v20190820/model/ApplyWithdrawalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

ApplyWithdrawalRequest::ApplyWithdrawalRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_settleAcctNoHasBeenSet(false),
    m_settleAcctNameHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_currencyUnitHasBeenSet(false),
    m_currencyAmtHasBeenSet(false),
    m_tranWebNameHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idCodeHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false)
{
}

string ApplyWithdrawalRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SettleAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_settleAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SettleAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_settleAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrencyUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_currencyUnit, allocator);
    }

    if (m_currencyAmtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrencyAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_currencyAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_tranWebNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranWebName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranWebName.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCode.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyWithdrawalRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void ApplyWithdrawalRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool ApplyWithdrawalRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string ApplyWithdrawalRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ApplyWithdrawalRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ApplyWithdrawalRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ApplyWithdrawalRequest::GetSettleAcctNo() const
{
    return m_settleAcctNo;
}

void ApplyWithdrawalRequest::SetSettleAcctNo(const string& _settleAcctNo)
{
    m_settleAcctNo = _settleAcctNo;
    m_settleAcctNoHasBeenSet = true;
}

bool ApplyWithdrawalRequest::SettleAcctNoHasBeenSet() const
{
    return m_settleAcctNoHasBeenSet;
}

string ApplyWithdrawalRequest::GetSettleAcctName() const
{
    return m_settleAcctName;
}

void ApplyWithdrawalRequest::SetSettleAcctName(const string& _settleAcctName)
{
    m_settleAcctName = _settleAcctName;
    m_settleAcctNameHasBeenSet = true;
}

bool ApplyWithdrawalRequest::SettleAcctNameHasBeenSet() const
{
    return m_settleAcctNameHasBeenSet;
}

string ApplyWithdrawalRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void ApplyWithdrawalRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool ApplyWithdrawalRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

int64_t ApplyWithdrawalRequest::GetCurrencyUnit() const
{
    return m_currencyUnit;
}

void ApplyWithdrawalRequest::SetCurrencyUnit(const int64_t& _currencyUnit)
{
    m_currencyUnit = _currencyUnit;
    m_currencyUnitHasBeenSet = true;
}

bool ApplyWithdrawalRequest::CurrencyUnitHasBeenSet() const
{
    return m_currencyUnitHasBeenSet;
}

string ApplyWithdrawalRequest::GetCurrencyAmt() const
{
    return m_currencyAmt;
}

void ApplyWithdrawalRequest::SetCurrencyAmt(const string& _currencyAmt)
{
    m_currencyAmt = _currencyAmt;
    m_currencyAmtHasBeenSet = true;
}

bool ApplyWithdrawalRequest::CurrencyAmtHasBeenSet() const
{
    return m_currencyAmtHasBeenSet;
}

string ApplyWithdrawalRequest::GetTranWebName() const
{
    return m_tranWebName;
}

void ApplyWithdrawalRequest::SetTranWebName(const string& _tranWebName)
{
    m_tranWebName = _tranWebName;
    m_tranWebNameHasBeenSet = true;
}

bool ApplyWithdrawalRequest::TranWebNameHasBeenSet() const
{
    return m_tranWebNameHasBeenSet;
}

string ApplyWithdrawalRequest::GetIdType() const
{
    return m_idType;
}

void ApplyWithdrawalRequest::SetIdType(const string& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool ApplyWithdrawalRequest::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string ApplyWithdrawalRequest::GetIdCode() const
{
    return m_idCode;
}

void ApplyWithdrawalRequest::SetIdCode(const string& _idCode)
{
    m_idCode = _idCode;
    m_idCodeHasBeenSet = true;
}

bool ApplyWithdrawalRequest::IdCodeHasBeenSet() const
{
    return m_idCodeHasBeenSet;
}

string ApplyWithdrawalRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void ApplyWithdrawalRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool ApplyWithdrawalRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string ApplyWithdrawalRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void ApplyWithdrawalRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool ApplyWithdrawalRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}


