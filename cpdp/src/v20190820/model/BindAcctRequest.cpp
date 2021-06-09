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

#include <tencentcloud/cpdp/v20190820/model/BindAcctRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindAcctRequest::BindAcctRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_settleAcctNoHasBeenSet(false),
    m_settleAcctNameHasBeenSet(false),
    m_settleAcctTypeHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idCodeHasBeenSet(false),
    m_acctBranchNameHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_eiconBankBranchIdHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_agencyClientInfoHasBeenSet(false)
{
}

string BindAcctRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindType, allocator);
    }

    if (m_settleAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_settleAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_settleAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAcctType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_settleAcctType, allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCode.c_str(), allocator).Move(), allocator);
    }

    if (m_acctBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_acctBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnapsBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cnapsBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_eiconBankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EiconBankBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eiconBankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyClientInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyClientInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agencyClientInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindAcctRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void BindAcctRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool BindAcctRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string BindAcctRequest::GetSubAppId() const
{
    return m_subAppId;
}

void BindAcctRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool BindAcctRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

int64_t BindAcctRequest::GetBindType() const
{
    return m_bindType;
}

void BindAcctRequest::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool BindAcctRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string BindAcctRequest::GetSettleAcctNo() const
{
    return m_settleAcctNo;
}

void BindAcctRequest::SetSettleAcctNo(const string& _settleAcctNo)
{
    m_settleAcctNo = _settleAcctNo;
    m_settleAcctNoHasBeenSet = true;
}

bool BindAcctRequest::SettleAcctNoHasBeenSet() const
{
    return m_settleAcctNoHasBeenSet;
}

string BindAcctRequest::GetSettleAcctName() const
{
    return m_settleAcctName;
}

void BindAcctRequest::SetSettleAcctName(const string& _settleAcctName)
{
    m_settleAcctName = _settleAcctName;
    m_settleAcctNameHasBeenSet = true;
}

bool BindAcctRequest::SettleAcctNameHasBeenSet() const
{
    return m_settleAcctNameHasBeenSet;
}

int64_t BindAcctRequest::GetSettleAcctType() const
{
    return m_settleAcctType;
}

void BindAcctRequest::SetSettleAcctType(const int64_t& _settleAcctType)
{
    m_settleAcctType = _settleAcctType;
    m_settleAcctTypeHasBeenSet = true;
}

bool BindAcctRequest::SettleAcctTypeHasBeenSet() const
{
    return m_settleAcctTypeHasBeenSet;
}

string BindAcctRequest::GetIdType() const
{
    return m_idType;
}

void BindAcctRequest::SetIdType(const string& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool BindAcctRequest::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string BindAcctRequest::GetIdCode() const
{
    return m_idCode;
}

void BindAcctRequest::SetIdCode(const string& _idCode)
{
    m_idCode = _idCode;
    m_idCodeHasBeenSet = true;
}

bool BindAcctRequest::IdCodeHasBeenSet() const
{
    return m_idCodeHasBeenSet;
}

string BindAcctRequest::GetAcctBranchName() const
{
    return m_acctBranchName;
}

void BindAcctRequest::SetAcctBranchName(const string& _acctBranchName)
{
    m_acctBranchName = _acctBranchName;
    m_acctBranchNameHasBeenSet = true;
}

bool BindAcctRequest::AcctBranchNameHasBeenSet() const
{
    return m_acctBranchNameHasBeenSet;
}

string BindAcctRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void BindAcctRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool BindAcctRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string BindAcctRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void BindAcctRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool BindAcctRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string BindAcctRequest::GetMobile() const
{
    return m_mobile;
}

void BindAcctRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool BindAcctRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string BindAcctRequest::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void BindAcctRequest::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool BindAcctRequest::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

string BindAcctRequest::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void BindAcctRequest::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool BindAcctRequest::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string BindAcctRequest::GetEncryptType() const
{
    return m_encryptType;
}

void BindAcctRequest::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool BindAcctRequest::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string BindAcctRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void BindAcctRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool BindAcctRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

AgencyClientInfo BindAcctRequest::GetAgencyClientInfo() const
{
    return m_agencyClientInfo;
}

void BindAcctRequest::SetAgencyClientInfo(const AgencyClientInfo& _agencyClientInfo)
{
    m_agencyClientInfo = _agencyClientInfo;
    m_agencyClientInfoHasBeenSet = true;
}

bool BindAcctRequest::AgencyClientInfoHasBeenSet() const
{
    return m_agencyClientInfoHasBeenSet;
}


