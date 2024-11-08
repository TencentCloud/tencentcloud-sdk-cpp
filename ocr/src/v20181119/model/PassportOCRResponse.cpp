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

#include <tencentcloud/ocr/v20181119/model/PassportOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PassportOCRResponse::PassportOCRResponse() :
    m_countryHasBeenSet(false),
    m_passportNoHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_issuePlaceHasBeenSet(false),
    m_expiryDateHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_codeSetHasBeenSet(false),
    m_codeCrcHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_portraitImageInfoHasBeenSet(false)
{
}

CoreInternalOutcome PassportOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Country") && !rsp["Country"].IsNull())
    {
        if (!rsp["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(rsp["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (rsp.HasMember("PassportNo") && !rsp["PassportNo"].IsNull())
    {
        if (!rsp["PassportNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassportNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportNo = string(rsp["PassportNo"].GetString());
        m_passportNoHasBeenSet = true;
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

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(rsp["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
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

    if (rsp.HasMember("BirthPlace") && !rsp["BirthPlace"].IsNull())
    {
        if (!rsp["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(rsp["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (rsp.HasMember("IssueDate") && !rsp["IssueDate"].IsNull())
    {
        if (!rsp["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(rsp["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (rsp.HasMember("IssuePlace") && !rsp["IssuePlace"].IsNull())
    {
        if (!rsp["IssuePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuePlace = string(rsp["IssuePlace"].GetString());
        m_issuePlaceHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiryDate") && !rsp["ExpiryDate"].IsNull())
    {
        if (!rsp["ExpiryDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiryDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiryDate = string(rsp["ExpiryDate"].GetString());
        m_expiryDateHasBeenSet = true;
    }

    if (rsp.HasMember("Signature") && !rsp["Signature"].IsNull())
    {
        if (!rsp["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(rsp["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }

    if (rsp.HasMember("CodeSet") && !rsp["CodeSet"].IsNull())
    {
        if (!rsp["CodeSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeSet = string(rsp["CodeSet"].GetString());
        m_codeSetHasBeenSet = true;
    }

    if (rsp.HasMember("CodeCrc") && !rsp["CodeCrc"].IsNull())
    {
        if (!rsp["CodeCrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeCrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeCrc = string(rsp["CodeCrc"].GetString());
        m_codeCrcHasBeenSet = true;
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

    if (rsp.HasMember("FamilyName") && !rsp["FamilyName"].IsNull())
    {
        if (!rsp["FamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyName = string(rsp["FamilyName"].GetString());
        m_familyNameHasBeenSet = true;
    }

    if (rsp.HasMember("FirstName") && !rsp["FirstName"].IsNull())
    {
        if (!rsp["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(rsp["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
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

string PassportOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_passportNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassportNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passportNo.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDate.c_str(), allocator).Move(), allocator);
    }

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_expiryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiryDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiryDate.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeSet.c_str(), allocator).Move(), allocator);
    }

    if (m_codeCrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeCrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeCrc.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_familyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
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


string PassportOCRResponse::GetCountry() const
{
    return m_country;
}

bool PassportOCRResponse::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string PassportOCRResponse::GetPassportNo() const
{
    return m_passportNo;
}

bool PassportOCRResponse::PassportNoHasBeenSet() const
{
    return m_passportNoHasBeenSet;
}

string PassportOCRResponse::GetSex() const
{
    return m_sex;
}

bool PassportOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PassportOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool PassportOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string PassportOCRResponse::GetBirthDate() const
{
    return m_birthDate;
}

bool PassportOCRResponse::BirthDateHasBeenSet() const
{
    return m_birthDateHasBeenSet;
}

string PassportOCRResponse::GetBirthPlace() const
{
    return m_birthPlace;
}

bool PassportOCRResponse::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PassportOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool PassportOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string PassportOCRResponse::GetIssuePlace() const
{
    return m_issuePlace;
}

bool PassportOCRResponse::IssuePlaceHasBeenSet() const
{
    return m_issuePlaceHasBeenSet;
}

string PassportOCRResponse::GetExpiryDate() const
{
    return m_expiryDate;
}

bool PassportOCRResponse::ExpiryDateHasBeenSet() const
{
    return m_expiryDateHasBeenSet;
}

string PassportOCRResponse::GetSignature() const
{
    return m_signature;
}

bool PassportOCRResponse::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

string PassportOCRResponse::GetCodeSet() const
{
    return m_codeSet;
}

bool PassportOCRResponse::CodeSetHasBeenSet() const
{
    return m_codeSetHasBeenSet;
}

string PassportOCRResponse::GetCodeCrc() const
{
    return m_codeCrc;
}

bool PassportOCRResponse::CodeCrcHasBeenSet() const
{
    return m_codeCrcHasBeenSet;
}

string PassportOCRResponse::GetName() const
{
    return m_name;
}

bool PassportOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PassportOCRResponse::GetFamilyName() const
{
    return m_familyName;
}

bool PassportOCRResponse::FamilyNameHasBeenSet() const
{
    return m_familyNameHasBeenSet;
}

string PassportOCRResponse::GetFirstName() const
{
    return m_firstName;
}

bool PassportOCRResponse::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

PortraitImageInfo PassportOCRResponse::GetPortraitImageInfo() const
{
    return m_portraitImageInfo;
}

bool PassportOCRResponse::PortraitImageInfoHasBeenSet() const
{
    return m_portraitImageInfoHasBeenSet;
}


