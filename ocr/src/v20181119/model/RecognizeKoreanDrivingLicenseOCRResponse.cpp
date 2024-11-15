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

#include <tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeKoreanDrivingLicenseOCRResponse::RecognizeKoreanDrivingLicenseOCRResponse() :
    m_iDHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aptitudeTesDateHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false),
    m_photoHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeKoreanDrivingLicenseOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LicenseNumber") && !rsp["LicenseNumber"].IsNull())
    {
        if (!rsp["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(rsp["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Number") && !rsp["Number"].IsNull())
    {
        if (!rsp["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(rsp["Number"].GetString());
        m_numberHasBeenSet = true;
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

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
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

    if (rsp.HasMember("AptitudeTesDate") && !rsp["AptitudeTesDate"].IsNull())
    {
        if (!rsp["AptitudeTesDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AptitudeTesDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aptitudeTesDate = string(rsp["AptitudeTesDate"].GetString());
        m_aptitudeTesDateHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfIssue") && !rsp["DateOfIssue"].IsNull())
    {
        if (!rsp["DateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssue = string(rsp["DateOfIssue"].GetString());
        m_dateOfIssueHasBeenSet = true;
    }

    if (rsp.HasMember("Photo") && !rsp["Photo"].IsNull())
    {
        if (!rsp["Photo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Photo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photo = string(rsp["Photo"].GetString());
        m_photoHasBeenSet = true;
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

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeKoreanDrivingLicenseOCRResponse::ToJsonString() const
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

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aptitudeTesDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AptitudeTesDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aptitudeTesDate.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_photoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Photo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photo.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
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


string RecognizeKoreanDrivingLicenseOCRResponse::GetID() const
{
    return m_iD;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetLicenseNumber() const
{
    return m_licenseNumber;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetNumber() const
{
    return m_number;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetType() const
{
    return m_type;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetName() const
{
    return m_name;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetAptitudeTesDate() const
{
    return m_aptitudeTesDate;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::AptitudeTesDateHasBeenSet() const
{
    return m_aptitudeTesDateHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetPhoto() const
{
    return m_photo;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::PhotoHasBeenSet() const
{
    return m_photoHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string RecognizeKoreanDrivingLicenseOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizeKoreanDrivingLicenseOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}


