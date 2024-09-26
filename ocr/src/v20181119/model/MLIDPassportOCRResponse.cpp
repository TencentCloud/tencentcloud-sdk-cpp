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

#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MLIDPassportOCRResponse::MLIDPassportOCRResponse() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_issuingCountryHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_warnHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_codeSetHasBeenSet(false),
    m_codeCrcHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_passportRecognizeInfosHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome MLIDPassportOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
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

    if (rsp.HasMember("DateOfBirth") && !rsp["DateOfBirth"].IsNull())
    {
        if (!rsp["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(rsp["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
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

    if (rsp.HasMember("DateOfExpiration") && !rsp["DateOfExpiration"].IsNull())
    {
        if (!rsp["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(rsp["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (rsp.HasMember("IssuingCountry") && !rsp["IssuingCountry"].IsNull())
    {
        if (!rsp["IssuingCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuingCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingCountry = string(rsp["IssuingCountry"].GetString());
        m_issuingCountryHasBeenSet = true;
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

    if (rsp.HasMember("Warn") && !rsp["Warn"].IsNull())
    {
        if (!rsp["Warn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Warn` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Warn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warn.push_back((*itr).GetInt64());
        }
        m_warnHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
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

    if (rsp.HasMember("Surname") && !rsp["Surname"].IsNull())
    {
        if (!rsp["Surname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Surname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surname = string(rsp["Surname"].GetString());
        m_surnameHasBeenSet = true;
    }

    if (rsp.HasMember("GivenName") && !rsp["GivenName"].IsNull())
    {
        if (!rsp["GivenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GivenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_givenName = string(rsp["GivenName"].GetString());
        m_givenNameHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("PassportRecognizeInfos") && !rsp["PassportRecognizeInfos"].IsNull())
    {
        if (!rsp["PassportRecognizeInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PassportRecognizeInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_passportRecognizeInfos.Deserialize(rsp["PassportRecognizeInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passportRecognizeInfosHasBeenSet = true;
    }

    if (rsp.HasMember("WarnCardInfos") && !rsp["WarnCardInfos"].IsNull())
    {
        if (!rsp["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string MLIDPassportOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiration.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_warnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warn.begin(); itr != m_warn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
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

    if (m_surnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surname.c_str(), allocator).Move(), allocator);
    }

    if (m_givenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_givenName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_passportRecognizeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassportRecognizeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_passportRecognizeInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_warnCardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCardInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCardInfos.begin(); itr != m_warnCardInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string MLIDPassportOCRResponse::GetID() const
{
    return m_iD;
}

bool MLIDPassportOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MLIDPassportOCRResponse::GetName() const
{
    return m_name;
}

bool MLIDPassportOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MLIDPassportOCRResponse::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

bool MLIDPassportOCRResponse::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string MLIDPassportOCRResponse::GetSex() const
{
    return m_sex;
}

bool MLIDPassportOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string MLIDPassportOCRResponse::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

bool MLIDPassportOCRResponse::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string MLIDPassportOCRResponse::GetIssuingCountry() const
{
    return m_issuingCountry;
}

bool MLIDPassportOCRResponse::IssuingCountryHasBeenSet() const
{
    return m_issuingCountryHasBeenSet;
}

string MLIDPassportOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool MLIDPassportOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

vector<int64_t> MLIDPassportOCRResponse::GetWarn() const
{
    return m_warn;
}

bool MLIDPassportOCRResponse::WarnHasBeenSet() const
{
    return m_warnHasBeenSet;
}

string MLIDPassportOCRResponse::GetImage() const
{
    return m_image;
}

bool MLIDPassportOCRResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string MLIDPassportOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool MLIDPassportOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

string MLIDPassportOCRResponse::GetCodeSet() const
{
    return m_codeSet;
}

bool MLIDPassportOCRResponse::CodeSetHasBeenSet() const
{
    return m_codeSetHasBeenSet;
}

string MLIDPassportOCRResponse::GetCodeCrc() const
{
    return m_codeCrc;
}

bool MLIDPassportOCRResponse::CodeCrcHasBeenSet() const
{
    return m_codeCrcHasBeenSet;
}

string MLIDPassportOCRResponse::GetSurname() const
{
    return m_surname;
}

bool MLIDPassportOCRResponse::SurnameHasBeenSet() const
{
    return m_surnameHasBeenSet;
}

string MLIDPassportOCRResponse::GetGivenName() const
{
    return m_givenName;
}

bool MLIDPassportOCRResponse::GivenNameHasBeenSet() const
{
    return m_givenNameHasBeenSet;
}

string MLIDPassportOCRResponse::GetType() const
{
    return m_type;
}

bool MLIDPassportOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

PassportRecognizeInfos MLIDPassportOCRResponse::GetPassportRecognizeInfos() const
{
    return m_passportRecognizeInfos;
}

bool MLIDPassportOCRResponse::PassportRecognizeInfosHasBeenSet() const
{
    return m_passportRecognizeInfosHasBeenSet;
}

vector<int64_t> MLIDPassportOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool MLIDPassportOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}


