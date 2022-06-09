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

#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizePhilippinesDrivingLicenseOCRResponse::RecognizePhilippinesDrivingLicenseOCRResponse() :
    m_headPortraitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_licenseNoHasBeenSet(false),
    m_expiresDateHasBeenSet(false),
    m_agencyCodeHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome RecognizePhilippinesDrivingLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HeadPortrait") && !rsp["HeadPortrait"].IsNull())
    {
        if (!rsp["HeadPortrait"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HeadPortrait` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headPortrait.Deserialize(rsp["HeadPortrait"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headPortraitHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(rsp["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("LastName") && !rsp["LastName"].IsNull())
    {
        if (!rsp["LastName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LastName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lastName.Deserialize(rsp["LastName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lastNameHasBeenSet = true;
    }

    if (rsp.HasMember("FirstName") && !rsp["FirstName"].IsNull())
    {
        if (!rsp["FirstName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FirstName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firstName.Deserialize(rsp["FirstName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstNameHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleName") && !rsp["MiddleName"].IsNull())
    {
        if (!rsp["MiddleName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MiddleName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_middleName.Deserialize(rsp["MiddleName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_middleNameHasBeenSet = true;
    }

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Nationality` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nationality.Deserialize(rsp["Nationality"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nationalityHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sex.Deserialize(rsp["Sex"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(rsp["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseNo") && !rsp["LicenseNo"].IsNull())
    {
        if (!rsp["LicenseNo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseNo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseNo.Deserialize(rsp["LicenseNo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseNoHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiresDate") && !rsp["ExpiresDate"].IsNull())
    {
        if (!rsp["ExpiresDate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiresDate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expiresDate.Deserialize(rsp["ExpiresDate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expiresDateHasBeenSet = true;
    }

    if (rsp.HasMember("AgencyCode") && !rsp["AgencyCode"].IsNull())
    {
        if (!rsp["AgencyCode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgencyCode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agencyCode.Deserialize(rsp["AgencyCode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agencyCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Birthday` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_birthday.Deserialize(rsp["Birthday"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizePhilippinesDrivingLicenseOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_headPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadPortrait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headPortrait.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lastName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_middleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_middleName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nationality.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sex.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_licenseNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseNo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expiresDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expiresDate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_agencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agencyCode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birthday.ToJsonObject(value[key.c_str()], allocator);
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


TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetHeadPortrait() const
{
    return m_headPortrait;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::HeadPortraitHasBeenSet() const
{
    return m_headPortraitHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetName() const
{
    return m_name;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetLastName() const
{
    return m_lastName;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetFirstName() const
{
    return m_firstName;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetMiddleName() const
{
    return m_middleName;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::MiddleNameHasBeenSet() const
{
    return m_middleNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetLicenseNo() const
{
    return m_licenseNo;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::LicenseNoHasBeenSet() const
{
    return m_licenseNoHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetExpiresDate() const
{
    return m_expiresDate;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::ExpiresDateHasBeenSet() const
{
    return m_expiresDateHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetAgencyCode() const
{
    return m_agencyCode;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::AgencyCodeHasBeenSet() const
{
    return m_agencyCodeHasBeenSet;
}

TextDetectionResult RecognizePhilippinesDrivingLicenseOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizePhilippinesDrivingLicenseOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}


