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

#include <tencentcloud/faceid/v20180301/model/GetWxNFCResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetWxNFCResultResponse::GetWxNFCResultResponse() :
    m_resultCodeHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_idCardFrontImgHasBeenSet(false),
    m_idCardBackImgHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_signingOrganizationHasBeenSet(false),
    m_otherIdNumHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_personalNumberHasBeenSet(false),
    m_checkMRTDHasBeenSet(false)
{
}

CoreInternalOutcome GetWxNFCResultResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(rsp["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("IdNum") && !rsp["IdNum"].IsNull())
    {
        if (!rsp["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(rsp["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Picture") && !rsp["Picture"].IsNull())
    {
        if (!rsp["Picture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Picture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picture = string(rsp["Picture"].GetString());
        m_pictureHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardFrontImg") && !rsp["IdCardFrontImg"].IsNull())
    {
        if (!rsp["IdCardFrontImg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardFrontImg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardFrontImg = string(rsp["IdCardFrontImg"].GetString());
        m_idCardFrontImgHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardBackImg") && !rsp["IdCardBackImg"].IsNull())
    {
        if (!rsp["IdCardBackImg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardBackImg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardBackImg = string(rsp["IdCardBackImg"].GetString());
        m_idCardBackImgHasBeenSet = true;
    }

    if (rsp.HasMember("BirthDate") && !rsp["BirthDate"].IsNull())
    {
        if (!rsp["BirthDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BirthDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthDate = string(rsp["BirthDate"].GetString());
        m_birthDateHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("IdType") && !rsp["IdType"].IsNull())
    {
        if (!rsp["IdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idType = string(rsp["IdType"].GetString());
        m_idTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EnName") && !rsp["EnName"].IsNull())
    {
        if (!rsp["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(rsp["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (rsp.HasMember("SigningOrganization") && !rsp["SigningOrganization"].IsNull())
    {
        if (!rsp["SigningOrganization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SigningOrganization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signingOrganization = string(rsp["SigningOrganization"].GetString());
        m_signingOrganizationHasBeenSet = true;
    }

    if (rsp.HasMember("OtherIdNum") && !rsp["OtherIdNum"].IsNull())
    {
        if (!rsp["OtherIdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherIdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherIdNum = string(rsp["OtherIdNum"].GetString());
        m_otherIdNumHasBeenSet = true;
    }

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(rsp["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (rsp.HasMember("PersonalNumber") && !rsp["PersonalNumber"].IsNull())
    {
        if (!rsp["PersonalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personalNumber = string(rsp["PersonalNumber"].GetString());
        m_personalNumberHasBeenSet = true;
    }

    if (rsp.HasMember("CheckMRTD") && !rsp["CheckMRTD"].IsNull())
    {
        if (!rsp["CheckMRTD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckMRTD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMRTD = string(rsp["CheckMRTD"].GetString());
        m_checkMRTDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetWxNFCResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCode.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardFrontImgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardFrontImg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardFrontImg.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardBackImgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardBackImg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardBackImg.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDate.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_signingOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SigningOrganization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signingOrganization.c_str(), allocator).Move(), allocator);
    }

    if (m_otherIdNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherIdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherIdNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_personalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personalNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMRTDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMRTD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMRTD.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string GetWxNFCResultResponse::GetResultCode() const
{
    return m_resultCode;
}

bool GetWxNFCResultResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string GetWxNFCResultResponse::GetIdNum() const
{
    return m_idNum;
}

bool GetWxNFCResultResponse::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string GetWxNFCResultResponse::GetName() const
{
    return m_name;
}

bool GetWxNFCResultResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetWxNFCResultResponse::GetPicture() const
{
    return m_picture;
}

bool GetWxNFCResultResponse::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string GetWxNFCResultResponse::GetIdCardFrontImg() const
{
    return m_idCardFrontImg;
}

bool GetWxNFCResultResponse::IdCardFrontImgHasBeenSet() const
{
    return m_idCardFrontImgHasBeenSet;
}

string GetWxNFCResultResponse::GetIdCardBackImg() const
{
    return m_idCardBackImg;
}

bool GetWxNFCResultResponse::IdCardBackImgHasBeenSet() const
{
    return m_idCardBackImgHasBeenSet;
}

string GetWxNFCResultResponse::GetBirthDate() const
{
    return m_birthDate;
}

bool GetWxNFCResultResponse::BirthDateHasBeenSet() const
{
    return m_birthDateHasBeenSet;
}

string GetWxNFCResultResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool GetWxNFCResultResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string GetWxNFCResultResponse::GetEndTime() const
{
    return m_endTime;
}

bool GetWxNFCResultResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetWxNFCResultResponse::GetAddress() const
{
    return m_address;
}

bool GetWxNFCResultResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string GetWxNFCResultResponse::GetNation() const
{
    return m_nation;
}

bool GetWxNFCResultResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string GetWxNFCResultResponse::GetSex() const
{
    return m_sex;
}

bool GetWxNFCResultResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string GetWxNFCResultResponse::GetIdType() const
{
    return m_idType;
}

bool GetWxNFCResultResponse::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string GetWxNFCResultResponse::GetEnName() const
{
    return m_enName;
}

bool GetWxNFCResultResponse::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string GetWxNFCResultResponse::GetSigningOrganization() const
{
    return m_signingOrganization;
}

bool GetWxNFCResultResponse::SigningOrganizationHasBeenSet() const
{
    return m_signingOrganizationHasBeenSet;
}

string GetWxNFCResultResponse::GetOtherIdNum() const
{
    return m_otherIdNum;
}

bool GetWxNFCResultResponse::OtherIdNumHasBeenSet() const
{
    return m_otherIdNumHasBeenSet;
}

string GetWxNFCResultResponse::GetNationality() const
{
    return m_nationality;
}

bool GetWxNFCResultResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string GetWxNFCResultResponse::GetPersonalNumber() const
{
    return m_personalNumber;
}

bool GetWxNFCResultResponse::PersonalNumberHasBeenSet() const
{
    return m_personalNumberHasBeenSet;
}

string GetWxNFCResultResponse::GetCheckMRTD() const
{
    return m_checkMRTD;
}

bool GetWxNFCResultResponse::CheckMRTDHasBeenSet() const
{
    return m_checkMRTDHasBeenSet;
}


