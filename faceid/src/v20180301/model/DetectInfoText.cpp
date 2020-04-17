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

#include <tencentcloud/faceid/v20180301/model/DetectInfoText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

DetectInfoText::DetectInfoText() :
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ocrNationHasBeenSet(false),
    m_ocrAddressHasBeenSet(false),
    m_ocrBirthHasBeenSet(false),
    m_ocrAuthorityHasBeenSet(false),
    m_ocrValidDateHasBeenSet(false),
    m_ocrNameHasBeenSet(false),
    m_ocrIdCardHasBeenSet(false),
    m_ocrGenderHasBeenSet(false),
    m_liveStatusHasBeenSet(false),
    m_liveMsgHasBeenSet(false),
    m_comparestatusHasBeenSet(false),
    m_comparemsgHasBeenSet(false),
    m_simHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_livenessDetailHasBeenSet(false),
    m_mobileHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoText::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("IdCard") && !value["IdCard"].IsNull())
    {
        if (!value["IdCard"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(value["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OcrNation") && !value["OcrNation"].IsNull())
    {
        if (!value["OcrNation"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrNation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrNation = string(value["OcrNation"].GetString());
        m_ocrNationHasBeenSet = true;
    }

    if (value.HasMember("OcrAddress") && !value["OcrAddress"].IsNull())
    {
        if (!value["OcrAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrAddress = string(value["OcrAddress"].GetString());
        m_ocrAddressHasBeenSet = true;
    }

    if (value.HasMember("OcrBirth") && !value["OcrBirth"].IsNull())
    {
        if (!value["OcrBirth"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrBirth = string(value["OcrBirth"].GetString());
        m_ocrBirthHasBeenSet = true;
    }

    if (value.HasMember("OcrAuthority") && !value["OcrAuthority"].IsNull())
    {
        if (!value["OcrAuthority"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrAuthority = string(value["OcrAuthority"].GetString());
        m_ocrAuthorityHasBeenSet = true;
    }

    if (value.HasMember("OcrValidDate") && !value["OcrValidDate"].IsNull())
    {
        if (!value["OcrValidDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrValidDate = string(value["OcrValidDate"].GetString());
        m_ocrValidDateHasBeenSet = true;
    }

    if (value.HasMember("OcrName") && !value["OcrName"].IsNull())
    {
        if (!value["OcrName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrName = string(value["OcrName"].GetString());
        m_ocrNameHasBeenSet = true;
    }

    if (value.HasMember("OcrIdCard") && !value["OcrIdCard"].IsNull())
    {
        if (!value["OcrIdCard"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrIdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrIdCard = string(value["OcrIdCard"].GetString());
        m_ocrIdCardHasBeenSet = true;
    }

    if (value.HasMember("OcrGender") && !value["OcrGender"].IsNull())
    {
        if (!value["OcrGender"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.OcrGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrGender = string(value["OcrGender"].GetString());
        m_ocrGenderHasBeenSet = true;
    }

    if (value.HasMember("LiveStatus") && !value["LiveStatus"].IsNull())
    {
        if (!value["LiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.LiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveStatus = value["LiveStatus"].GetInt64();
        m_liveStatusHasBeenSet = true;
    }

    if (value.HasMember("LiveMsg") && !value["LiveMsg"].IsNull())
    {
        if (!value["LiveMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.LiveMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveMsg = string(value["LiveMsg"].GetString());
        m_liveMsgHasBeenSet = true;
    }

    if (value.HasMember("Comparestatus") && !value["Comparestatus"].IsNull())
    {
        if (!value["Comparestatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Comparestatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comparestatus = value["Comparestatus"].GetInt64();
        m_comparestatusHasBeenSet = true;
    }

    if (value.HasMember("Comparemsg") && !value["Comparemsg"].IsNull())
    {
        if (!value["Comparemsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Comparemsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparemsg = string(value["Comparemsg"].GetString());
        m_comparemsgHasBeenSet = true;
    }

    if (value.HasMember("Sim") && !value["Sim"].IsNull())
    {
        if (!value["Sim"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Sim` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sim = string(value["Sim"].GetString());
        m_simHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (value.HasMember("LivenessDetail") && !value["LivenessDetail"].IsNull())
    {
        if (!value["LivenessDetail"].IsArray())
            return CoreInternalOutcome(Error("response `DetectInfoText.LivenessDetail` is not array type"));

        const Value &tmpValue = value["LivenessDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_livenessDetail.push_back(item);
        }
        m_livenessDetailHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetectInfoText.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoText::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrNationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrNation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrNation.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrBirthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAuthorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrValidDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrValidDate.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrName.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrIdCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrIdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrIdCard.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrGenderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OcrGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ocrGender.c_str(), allocator).Move(), allocator);
    }

    if (m_liveStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveStatus, allocator);
    }

    if (m_liveMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LiveMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_liveMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_comparestatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comparestatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comparestatus, allocator);
    }

    if (m_comparemsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comparemsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comparemsg.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sim.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LivenessDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_livenessDetail.begin(); itr != m_livenessDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mobileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

}


int64_t DetectInfoText::GetErrCode() const
{
    return m_errCode;
}

void DetectInfoText::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool DetectInfoText::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string DetectInfoText::GetErrMsg() const
{
    return m_errMsg;
}

void DetectInfoText::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool DetectInfoText::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string DetectInfoText::GetIdCard() const
{
    return m_idCard;
}

void DetectInfoText::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool DetectInfoText::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string DetectInfoText::GetName() const
{
    return m_name;
}

void DetectInfoText::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectInfoText::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectInfoText::GetOcrNation() const
{
    return m_ocrNation;
}

void DetectInfoText::SetOcrNation(const string& _ocrNation)
{
    m_ocrNation = _ocrNation;
    m_ocrNationHasBeenSet = true;
}

bool DetectInfoText::OcrNationHasBeenSet() const
{
    return m_ocrNationHasBeenSet;
}

string DetectInfoText::GetOcrAddress() const
{
    return m_ocrAddress;
}

void DetectInfoText::SetOcrAddress(const string& _ocrAddress)
{
    m_ocrAddress = _ocrAddress;
    m_ocrAddressHasBeenSet = true;
}

bool DetectInfoText::OcrAddressHasBeenSet() const
{
    return m_ocrAddressHasBeenSet;
}

string DetectInfoText::GetOcrBirth() const
{
    return m_ocrBirth;
}

void DetectInfoText::SetOcrBirth(const string& _ocrBirth)
{
    m_ocrBirth = _ocrBirth;
    m_ocrBirthHasBeenSet = true;
}

bool DetectInfoText::OcrBirthHasBeenSet() const
{
    return m_ocrBirthHasBeenSet;
}

string DetectInfoText::GetOcrAuthority() const
{
    return m_ocrAuthority;
}

void DetectInfoText::SetOcrAuthority(const string& _ocrAuthority)
{
    m_ocrAuthority = _ocrAuthority;
    m_ocrAuthorityHasBeenSet = true;
}

bool DetectInfoText::OcrAuthorityHasBeenSet() const
{
    return m_ocrAuthorityHasBeenSet;
}

string DetectInfoText::GetOcrValidDate() const
{
    return m_ocrValidDate;
}

void DetectInfoText::SetOcrValidDate(const string& _ocrValidDate)
{
    m_ocrValidDate = _ocrValidDate;
    m_ocrValidDateHasBeenSet = true;
}

bool DetectInfoText::OcrValidDateHasBeenSet() const
{
    return m_ocrValidDateHasBeenSet;
}

string DetectInfoText::GetOcrName() const
{
    return m_ocrName;
}

void DetectInfoText::SetOcrName(const string& _ocrName)
{
    m_ocrName = _ocrName;
    m_ocrNameHasBeenSet = true;
}

bool DetectInfoText::OcrNameHasBeenSet() const
{
    return m_ocrNameHasBeenSet;
}

string DetectInfoText::GetOcrIdCard() const
{
    return m_ocrIdCard;
}

void DetectInfoText::SetOcrIdCard(const string& _ocrIdCard)
{
    m_ocrIdCard = _ocrIdCard;
    m_ocrIdCardHasBeenSet = true;
}

bool DetectInfoText::OcrIdCardHasBeenSet() const
{
    return m_ocrIdCardHasBeenSet;
}

string DetectInfoText::GetOcrGender() const
{
    return m_ocrGender;
}

void DetectInfoText::SetOcrGender(const string& _ocrGender)
{
    m_ocrGender = _ocrGender;
    m_ocrGenderHasBeenSet = true;
}

bool DetectInfoText::OcrGenderHasBeenSet() const
{
    return m_ocrGenderHasBeenSet;
}

int64_t DetectInfoText::GetLiveStatus() const
{
    return m_liveStatus;
}

void DetectInfoText::SetLiveStatus(const int64_t& _liveStatus)
{
    m_liveStatus = _liveStatus;
    m_liveStatusHasBeenSet = true;
}

bool DetectInfoText::LiveStatusHasBeenSet() const
{
    return m_liveStatusHasBeenSet;
}

string DetectInfoText::GetLiveMsg() const
{
    return m_liveMsg;
}

void DetectInfoText::SetLiveMsg(const string& _liveMsg)
{
    m_liveMsg = _liveMsg;
    m_liveMsgHasBeenSet = true;
}

bool DetectInfoText::LiveMsgHasBeenSet() const
{
    return m_liveMsgHasBeenSet;
}

int64_t DetectInfoText::GetComparestatus() const
{
    return m_comparestatus;
}

void DetectInfoText::SetComparestatus(const int64_t& _comparestatus)
{
    m_comparestatus = _comparestatus;
    m_comparestatusHasBeenSet = true;
}

bool DetectInfoText::ComparestatusHasBeenSet() const
{
    return m_comparestatusHasBeenSet;
}

string DetectInfoText::GetComparemsg() const
{
    return m_comparemsg;
}

void DetectInfoText::SetComparemsg(const string& _comparemsg)
{
    m_comparemsg = _comparemsg;
    m_comparemsgHasBeenSet = true;
}

bool DetectInfoText::ComparemsgHasBeenSet() const
{
    return m_comparemsgHasBeenSet;
}

string DetectInfoText::GetSim() const
{
    return m_sim;
}

void DetectInfoText::SetSim(const string& _sim)
{
    m_sim = _sim;
    m_simHasBeenSet = true;
}

bool DetectInfoText::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

string DetectInfoText::GetLocation() const
{
    return m_location;
}

void DetectInfoText::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DetectInfoText::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string DetectInfoText::GetExtra() const
{
    return m_extra;
}

void DetectInfoText::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool DetectInfoText::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

vector<DetectDetail> DetectInfoText::GetLivenessDetail() const
{
    return m_livenessDetail;
}

void DetectInfoText::SetLivenessDetail(const vector<DetectDetail>& _livenessDetail)
{
    m_livenessDetail = _livenessDetail;
    m_livenessDetailHasBeenSet = true;
}

bool DetectInfoText::LivenessDetailHasBeenSet() const
{
    return m_livenessDetailHasBeenSet;
}

string DetectInfoText::GetMobile() const
{
    return m_mobile;
}

void DetectInfoText::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool DetectInfoText::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

