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

#include <tencentcloud/ocr/v20181119/model/DriverLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

DriverLicenseOCRResponse::DriverLicenseOCRResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_dateOfFirstIssueHasBeenSet(false),
    m_classHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_cardCodeHasBeenSet(false)
{
}

CoreInternalOutcome DriverLicenseOCRResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(rsp["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfBirth") && !rsp["DateOfBirth"].IsNull())
    {
        if (!rsp["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Error("response `DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(rsp["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (rsp.HasMember("DateOfFirstIssue") && !rsp["DateOfFirstIssue"].IsNull())
    {
        if (!rsp["DateOfFirstIssue"].IsString())
        {
            return CoreInternalOutcome(Error("response `DateOfFirstIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfFirstIssue = string(rsp["DateOfFirstIssue"].GetString());
        m_dateOfFirstIssueHasBeenSet = true;
    }

    if (rsp.HasMember("Class") && !rsp["Class"].IsNull())
    {
        if (!rsp["Class"].IsString())
        {
            return CoreInternalOutcome(Error("response `Class` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_class = string(rsp["Class"].GetString());
        m_classHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (rsp.HasMember("EndDate") && !rsp["EndDate"].IsNull())
    {
        if (!rsp["EndDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(rsp["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (rsp.HasMember("CardCode") && !rsp["CardCode"].IsNull())
    {
        if (!rsp["CardCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardCode = string(rsp["CardCode"].GetString());
        m_cardCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DriverLicenseOCRResponse::GetName() const
{
    return m_name;
}

bool DriverLicenseOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DriverLicenseOCRResponse::GetSex() const
{
    return m_sex;
}

bool DriverLicenseOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string DriverLicenseOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool DriverLicenseOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string DriverLicenseOCRResponse::GetAddress() const
{
    return m_address;
}

bool DriverLicenseOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string DriverLicenseOCRResponse::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

bool DriverLicenseOCRResponse::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string DriverLicenseOCRResponse::GetDateOfFirstIssue() const
{
    return m_dateOfFirstIssue;
}

bool DriverLicenseOCRResponse::DateOfFirstIssueHasBeenSet() const
{
    return m_dateOfFirstIssueHasBeenSet;
}

string DriverLicenseOCRResponse::GetClass() const
{
    return m_class;
}

bool DriverLicenseOCRResponse::ClassHasBeenSet() const
{
    return m_classHasBeenSet;
}

string DriverLicenseOCRResponse::GetStartDate() const
{
    return m_startDate;
}

bool DriverLicenseOCRResponse::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DriverLicenseOCRResponse::GetEndDate() const
{
    return m_endDate;
}

bool DriverLicenseOCRResponse::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DriverLicenseOCRResponse::GetCardCode() const
{
    return m_cardCode;
}

bool DriverLicenseOCRResponse::CardCodeHasBeenSet() const
{
    return m_cardCodeHasBeenSet;
}


