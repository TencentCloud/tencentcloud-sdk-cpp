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

#include <tencentcloud/ocr/v20181119/model/RecognizeForeignPermanentResidentIdCardResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeForeignPermanentResidentIdCardResponse::RecognizeForeignPermanentResidentIdCardResponse() :
    m_cnNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_periodOfValidityHasBeenSet(false),
    m_noHasBeenSet(false),
    m_previousNumberHasBeenSet(false),
    m_issuedAuthorityHasBeenSet(false),
    m_portraitImageInfoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeForeignPermanentResidentIdCardResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CnName") && !rsp["CnName"].IsNull())
    {
        if (!rsp["CnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnName = string(rsp["CnName"].GetString());
        m_cnNameHasBeenSet = true;
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

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfBirth") && !rsp["DateOfBirth"].IsNull())
    {
        if (!rsp["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(rsp["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
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

    if (rsp.HasMember("PeriodOfValidity") && !rsp["PeriodOfValidity"].IsNull())
    {
        if (!rsp["PeriodOfValidity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodOfValidity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodOfValidity = string(rsp["PeriodOfValidity"].GetString());
        m_periodOfValidityHasBeenSet = true;
    }

    if (rsp.HasMember("No") && !rsp["No"].IsNull())
    {
        if (!rsp["No"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `No` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_no = string(rsp["No"].GetString());
        m_noHasBeenSet = true;
    }

    if (rsp.HasMember("PreviousNumber") && !rsp["PreviousNumber"].IsNull())
    {
        if (!rsp["PreviousNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviousNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previousNumber = string(rsp["PreviousNumber"].GetString());
        m_previousNumberHasBeenSet = true;
    }

    if (rsp.HasMember("IssuedAuthority") && !rsp["IssuedAuthority"].IsNull())
    {
        if (!rsp["IssuedAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuedAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedAuthority = string(rsp["IssuedAuthority"].GetString());
        m_issuedAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("PortraitImageInfo") && !rsp["PortraitImageInfo"].IsNull())
    {
        if (!rsp["PortraitImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portraitImageInfo.Deserialize(rsp["PortraitImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portraitImageInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeForeignPermanentResidentIdCardResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_periodOfValidityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodOfValidity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodOfValidity.c_str(), allocator).Move(), allocator);
    }

    if (m_noHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "No";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_no.c_str(), allocator).Move(), allocator);
    }

    if (m_previousNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviousNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previousNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portraitImageInfo.ToJsonObject(value[key.c_str()], allocator);
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


string RecognizeForeignPermanentResidentIdCardResponse::GetCnName() const
{
    return m_cnName;
}

bool RecognizeForeignPermanentResidentIdCardResponse::CnNameHasBeenSet() const
{
    return m_cnNameHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetEnName() const
{
    return m_enName;
}

bool RecognizeForeignPermanentResidentIdCardResponse::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeForeignPermanentResidentIdCardResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

bool RecognizeForeignPermanentResidentIdCardResponse::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetNationality() const
{
    return m_nationality;
}

bool RecognizeForeignPermanentResidentIdCardResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetPeriodOfValidity() const
{
    return m_periodOfValidity;
}

bool RecognizeForeignPermanentResidentIdCardResponse::PeriodOfValidityHasBeenSet() const
{
    return m_periodOfValidityHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetNo() const
{
    return m_no;
}

bool RecognizeForeignPermanentResidentIdCardResponse::NoHasBeenSet() const
{
    return m_noHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetPreviousNumber() const
{
    return m_previousNumber;
}

bool RecognizeForeignPermanentResidentIdCardResponse::PreviousNumberHasBeenSet() const
{
    return m_previousNumberHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardResponse::GetIssuedAuthority() const
{
    return m_issuedAuthority;
}

bool RecognizeForeignPermanentResidentIdCardResponse::IssuedAuthorityHasBeenSet() const
{
    return m_issuedAuthorityHasBeenSet;
}

PortraitImageInfo RecognizeForeignPermanentResidentIdCardResponse::GetPortraitImageInfo() const
{
    return m_portraitImageInfo;
}

bool RecognizeForeignPermanentResidentIdCardResponse::PortraitImageInfoHasBeenSet() const
{
    return m_portraitImageInfoHasBeenSet;
}


