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

#include <tencentcloud/faceid/v20180301/model/ChargeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ChargeDetail::ChargeDetail() :
    m_reqTimeHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_idcardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_simHasBeenSet(false),
    m_isNeedChargeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome ChargeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReqTime") && !value["ReqTime"].IsNull())
    {
        if (!value["ReqTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.ReqTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqTime = string(value["ReqTime"].GetString());
        m_reqTimeHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.Seq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seq = string(value["Seq"].GetString());
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("IdCard") && !value["IdCard"].IsNull())
    {
        if (!value["IdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(value["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (value.HasMember("Idcard") && !value["Idcard"].IsNull())
    {
        if (!value["Idcard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.Idcard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcard = string(value["Idcard"].GetString());
        m_idcardHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sim") && !value["Sim"].IsNull())
    {
        if (!value["Sim"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.Sim` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sim = string(value["Sim"].GetString());
        m_simHasBeenSet = true;
    }

    if (value.HasMember("IsNeedCharge") && !value["IsNeedCharge"].IsNull())
    {
        if (!value["IsNeedCharge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.IsNeedCharge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNeedCharge = value["IsNeedCharge"].GetBool();
        m_isNeedChargeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeDetail.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChargeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reqTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqTime.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seq.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_idcardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idcard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sim.c_str(), allocator).Move(), allocator);
    }

    if (m_isNeedChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNeedCharge, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string ChargeDetail::GetReqTime() const
{
    return m_reqTime;
}

void ChargeDetail::SetReqTime(const string& _reqTime)
{
    m_reqTime = _reqTime;
    m_reqTimeHasBeenSet = true;
}

bool ChargeDetail::ReqTimeHasBeenSet() const
{
    return m_reqTimeHasBeenSet;
}

string ChargeDetail::GetSeq() const
{
    return m_seq;
}

void ChargeDetail::SetSeq(const string& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool ChargeDetail::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string ChargeDetail::GetIdCard() const
{
    return m_idCard;
}

void ChargeDetail::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool ChargeDetail::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string ChargeDetail::GetIdcard() const
{
    return m_idcard;
}

void ChargeDetail::SetIdcard(const string& _idcard)
{
    m_idcard = _idcard;
    m_idcardHasBeenSet = true;
}

bool ChargeDetail::IdcardHasBeenSet() const
{
    return m_idcardHasBeenSet;
}

string ChargeDetail::GetName() const
{
    return m_name;
}

void ChargeDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChargeDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChargeDetail::GetSim() const
{
    return m_sim;
}

void ChargeDetail::SetSim(const string& _sim)
{
    m_sim = _sim;
    m_simHasBeenSet = true;
}

bool ChargeDetail::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

bool ChargeDetail::GetIsNeedCharge() const
{
    return m_isNeedCharge;
}

void ChargeDetail::SetIsNeedCharge(const bool& _isNeedCharge)
{
    m_isNeedCharge = _isNeedCharge;
    m_isNeedChargeHasBeenSet = true;
}

bool ChargeDetail::IsNeedChargeHasBeenSet() const
{
    return m_isNeedChargeHasBeenSet;
}

string ChargeDetail::GetChargeType() const
{
    return m_chargeType;
}

void ChargeDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ChargeDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string ChargeDetail::GetErrorCode() const
{
    return m_errorCode;
}

void ChargeDetail::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool ChargeDetail::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string ChargeDetail::GetErrorMessage() const
{
    return m_errorMessage;
}

void ChargeDetail::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ChargeDetail::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

