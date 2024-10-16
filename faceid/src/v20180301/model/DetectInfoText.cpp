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
using namespace std;

DetectInfoText::DetectInfoText() :
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_useIDTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ocrNationHasBeenSet(false),
    m_ocrAddressHasBeenSet(false),
    m_ocrBirthHasBeenSet(false),
    m_ocrAuthorityHasBeenSet(false),
    m_ocrValidDateHasBeenSet(false),
    m_ocrNameHasBeenSet(false),
    m_ocrIdCardHasBeenSet(false),
    m_ocrGenderHasBeenSet(false),
    m_idInfoFromHasBeenSet(false),
    m_liveStatusHasBeenSet(false),
    m_liveMsgHasBeenSet(false),
    m_comparestatusHasBeenSet(false),
    m_comparemsgHasBeenSet(false),
    m_simHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_livenessDetailHasBeenSet(false),
    m_livenessInfoTagHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_compareLibTypeHasBeenSet(false),
    m_livenessModeHasBeenSet(false),
    m_nFCRequestIdsHasBeenSet(false),
    m_nFCBillingCountsHasBeenSet(false),
    m_passNoHasBeenSet(false),
    m_visaNumHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("IdCard") && !value["IdCard"].IsNull())
    {
        if (!value["IdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(value["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (value.HasMember("UseIDType") && !value["UseIDType"].IsNull())
    {
        if (!value["UseIDType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.UseIDType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_useIDType = value["UseIDType"].GetUint64();
        m_useIDTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OcrNation") && !value["OcrNation"].IsNull())
    {
        if (!value["OcrNation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrNation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrNation = string(value["OcrNation"].GetString());
        m_ocrNationHasBeenSet = true;
    }

    if (value.HasMember("OcrAddress") && !value["OcrAddress"].IsNull())
    {
        if (!value["OcrAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrAddress = string(value["OcrAddress"].GetString());
        m_ocrAddressHasBeenSet = true;
    }

    if (value.HasMember("OcrBirth") && !value["OcrBirth"].IsNull())
    {
        if (!value["OcrBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrBirth = string(value["OcrBirth"].GetString());
        m_ocrBirthHasBeenSet = true;
    }

    if (value.HasMember("OcrAuthority") && !value["OcrAuthority"].IsNull())
    {
        if (!value["OcrAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrAuthority = string(value["OcrAuthority"].GetString());
        m_ocrAuthorityHasBeenSet = true;
    }

    if (value.HasMember("OcrValidDate") && !value["OcrValidDate"].IsNull())
    {
        if (!value["OcrValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrValidDate = string(value["OcrValidDate"].GetString());
        m_ocrValidDateHasBeenSet = true;
    }

    if (value.HasMember("OcrName") && !value["OcrName"].IsNull())
    {
        if (!value["OcrName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrName = string(value["OcrName"].GetString());
        m_ocrNameHasBeenSet = true;
    }

    if (value.HasMember("OcrIdCard") && !value["OcrIdCard"].IsNull())
    {
        if (!value["OcrIdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrIdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrIdCard = string(value["OcrIdCard"].GetString());
        m_ocrIdCardHasBeenSet = true;
    }

    if (value.HasMember("OcrGender") && !value["OcrGender"].IsNull())
    {
        if (!value["OcrGender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.OcrGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrGender = string(value["OcrGender"].GetString());
        m_ocrGenderHasBeenSet = true;
    }

    if (value.HasMember("IdInfoFrom") && !value["IdInfoFrom"].IsNull())
    {
        if (!value["IdInfoFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.IdInfoFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idInfoFrom = string(value["IdInfoFrom"].GetString());
        m_idInfoFromHasBeenSet = true;
    }

    if (value.HasMember("LiveStatus") && !value["LiveStatus"].IsNull())
    {
        if (!value["LiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.LiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveStatus = value["LiveStatus"].GetInt64();
        m_liveStatusHasBeenSet = true;
    }

    if (value.HasMember("LiveMsg") && !value["LiveMsg"].IsNull())
    {
        if (!value["LiveMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.LiveMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveMsg = string(value["LiveMsg"].GetString());
        m_liveMsgHasBeenSet = true;
    }

    if (value.HasMember("Comparestatus") && !value["Comparestatus"].IsNull())
    {
        if (!value["Comparestatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Comparestatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comparestatus = value["Comparestatus"].GetInt64();
        m_comparestatusHasBeenSet = true;
    }

    if (value.HasMember("Comparemsg") && !value["Comparemsg"].IsNull())
    {
        if (!value["Comparemsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Comparemsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparemsg = string(value["Comparemsg"].GetString());
        m_comparemsgHasBeenSet = true;
    }

    if (value.HasMember("Sim") && !value["Sim"].IsNull())
    {
        if (!value["Sim"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Sim` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sim = string(value["Sim"].GetString());
        m_simHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (value.HasMember("LivenessDetail") && !value["LivenessDetail"].IsNull())
    {
        if (!value["LivenessDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.LivenessDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["LivenessDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("LivenessInfoTag") && !value["LivenessInfoTag"].IsNull())
    {
        if (!value["LivenessInfoTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.LivenessInfoTag` is not array type"));

        const rapidjson::Value &tmpValue = value["LivenessInfoTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_livenessInfoTag.push_back((*itr).GetString());
        }
        m_livenessInfoTagHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("CompareLibType") && !value["CompareLibType"].IsNull())
    {
        if (!value["CompareLibType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.CompareLibType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareLibType = string(value["CompareLibType"].GetString());
        m_compareLibTypeHasBeenSet = true;
    }

    if (value.HasMember("LivenessMode") && !value["LivenessMode"].IsNull())
    {
        if (!value["LivenessMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.LivenessMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_livenessMode = value["LivenessMode"].GetUint64();
        m_livenessModeHasBeenSet = true;
    }

    if (value.HasMember("NFCRequestIds") && !value["NFCRequestIds"].IsNull())
    {
        if (!value["NFCRequestIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.NFCRequestIds` is not array type"));

        const rapidjson::Value &tmpValue = value["NFCRequestIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nFCRequestIds.push_back((*itr).GetString());
        }
        m_nFCRequestIdsHasBeenSet = true;
    }

    if (value.HasMember("NFCBillingCounts") && !value["NFCBillingCounts"].IsNull())
    {
        if (!value["NFCBillingCounts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.NFCBillingCounts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nFCBillingCounts = value["NFCBillingCounts"].GetInt64();
        m_nFCBillingCountsHasBeenSet = true;
    }

    if (value.HasMember("PassNo") && !value["PassNo"].IsNull())
    {
        if (!value["PassNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.PassNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passNo = string(value["PassNo"].GetString());
        m_passNoHasBeenSet = true;
    }

    if (value.HasMember("VisaNum") && !value["VisaNum"].IsNull())
    {
        if (!value["VisaNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoText.VisaNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visaNum = string(value["VisaNum"].GetString());
        m_visaNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_useIDTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseIDType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useIDType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrNationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrNation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrNation.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrValidDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrValidDate.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrName.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrIdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrIdCard.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrGender.c_str(), allocator).Move(), allocator);
    }

    if (m_idInfoFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdInfoFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idInfoFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_liveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveStatus, allocator);
    }

    if (m_liveMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_comparestatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comparestatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comparestatus, allocator);
    }

    if (m_comparemsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comparemsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparemsg.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sim.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_livenessDetail.begin(); itr != m_livenessDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_livenessInfoTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessInfoTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_livenessInfoTag.begin(); itr != m_livenessInfoTag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_compareLibTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareLibType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareLibType.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livenessMode, allocator);
    }

    if (m_nFCRequestIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFCRequestIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nFCRequestIds.begin(); itr != m_nFCRequestIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nFCBillingCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFCBillingCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nFCBillingCounts, allocator);
    }

    if (m_passNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passNo.c_str(), allocator).Move(), allocator);
    }

    if (m_visaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visaNum.c_str(), allocator).Move(), allocator);
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

uint64_t DetectInfoText::GetUseIDType() const
{
    return m_useIDType;
}

void DetectInfoText::SetUseIDType(const uint64_t& _useIDType)
{
    m_useIDType = _useIDType;
    m_useIDTypeHasBeenSet = true;
}

bool DetectInfoText::UseIDTypeHasBeenSet() const
{
    return m_useIDTypeHasBeenSet;
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

string DetectInfoText::GetIdInfoFrom() const
{
    return m_idInfoFrom;
}

void DetectInfoText::SetIdInfoFrom(const string& _idInfoFrom)
{
    m_idInfoFrom = _idInfoFrom;
    m_idInfoFromHasBeenSet = true;
}

bool DetectInfoText::IdInfoFromHasBeenSet() const
{
    return m_idInfoFromHasBeenSet;
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

vector<string> DetectInfoText::GetLivenessInfoTag() const
{
    return m_livenessInfoTag;
}

void DetectInfoText::SetLivenessInfoTag(const vector<string>& _livenessInfoTag)
{
    m_livenessInfoTag = _livenessInfoTag;
    m_livenessInfoTagHasBeenSet = true;
}

bool DetectInfoText::LivenessInfoTagHasBeenSet() const
{
    return m_livenessInfoTagHasBeenSet;
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

string DetectInfoText::GetCompareLibType() const
{
    return m_compareLibType;
}

void DetectInfoText::SetCompareLibType(const string& _compareLibType)
{
    m_compareLibType = _compareLibType;
    m_compareLibTypeHasBeenSet = true;
}

bool DetectInfoText::CompareLibTypeHasBeenSet() const
{
    return m_compareLibTypeHasBeenSet;
}

uint64_t DetectInfoText::GetLivenessMode() const
{
    return m_livenessMode;
}

void DetectInfoText::SetLivenessMode(const uint64_t& _livenessMode)
{
    m_livenessMode = _livenessMode;
    m_livenessModeHasBeenSet = true;
}

bool DetectInfoText::LivenessModeHasBeenSet() const
{
    return m_livenessModeHasBeenSet;
}

vector<string> DetectInfoText::GetNFCRequestIds() const
{
    return m_nFCRequestIds;
}

void DetectInfoText::SetNFCRequestIds(const vector<string>& _nFCRequestIds)
{
    m_nFCRequestIds = _nFCRequestIds;
    m_nFCRequestIdsHasBeenSet = true;
}

bool DetectInfoText::NFCRequestIdsHasBeenSet() const
{
    return m_nFCRequestIdsHasBeenSet;
}

int64_t DetectInfoText::GetNFCBillingCounts() const
{
    return m_nFCBillingCounts;
}

void DetectInfoText::SetNFCBillingCounts(const int64_t& _nFCBillingCounts)
{
    m_nFCBillingCounts = _nFCBillingCounts;
    m_nFCBillingCountsHasBeenSet = true;
}

bool DetectInfoText::NFCBillingCountsHasBeenSet() const
{
    return m_nFCBillingCountsHasBeenSet;
}

string DetectInfoText::GetPassNo() const
{
    return m_passNo;
}

void DetectInfoText::SetPassNo(const string& _passNo)
{
    m_passNo = _passNo;
    m_passNoHasBeenSet = true;
}

bool DetectInfoText::PassNoHasBeenSet() const
{
    return m_passNoHasBeenSet;
}

string DetectInfoText::GetVisaNum() const
{
    return m_visaNum;
}

void DetectInfoText::SetVisaNum(const string& _visaNum)
{
    m_visaNum = _visaNum;
    m_visaNumHasBeenSet = true;
}

bool DetectInfoText::VisaNumHasBeenSet() const
{
    return m_visaNumHasBeenSet;
}

