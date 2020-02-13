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

#include <tencentcloud/ocr/v20181119/model/ResidenceBookletOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

ResidenceBookletOCRResponse::ResidenceBookletOCRResponse() :
    m_householdNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_nativePlaceHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_educationDegreeHasBeenSet(false),
    m_servicePlaceHasBeenSet(false),
    m_householdHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome ResidenceBookletOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HouseholdNumber") && !rsp["HouseholdNumber"].IsNull())
    {
        if (!rsp["HouseholdNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `HouseholdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_householdNumber = string(rsp["HouseholdNumber"].GetString());
        m_householdNumberHasBeenSet = true;
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

    if (rsp.HasMember("BirthPlace") && !rsp["BirthPlace"].IsNull())
    {
        if (!rsp["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(rsp["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (rsp.HasMember("NativePlace") && !rsp["NativePlace"].IsNull())
    {
        if (!rsp["NativePlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `NativePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nativePlace = string(rsp["NativePlace"].GetString());
        m_nativePlaceHasBeenSet = true;
    }

    if (rsp.HasMember("BirthDate") && !rsp["BirthDate"].IsNull())
    {
        if (!rsp["BirthDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `BirthDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthDate = string(rsp["BirthDate"].GetString());
        m_birthDateHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardNumber") && !rsp["IdCardNumber"].IsNull())
    {
        if (!rsp["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(rsp["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (rsp.HasMember("EducationDegree") && !rsp["EducationDegree"].IsNull())
    {
        if (!rsp["EducationDegree"].IsString())
        {
            return CoreInternalOutcome(Error("response `EducationDegree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_educationDegree = string(rsp["EducationDegree"].GetString());
        m_educationDegreeHasBeenSet = true;
    }

    if (rsp.HasMember("ServicePlace") && !rsp["ServicePlace"].IsNull())
    {
        if (!rsp["ServicePlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServicePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicePlace = string(rsp["ServicePlace"].GetString());
        m_servicePlaceHasBeenSet = true;
    }

    if (rsp.HasMember("Household") && !rsp["Household"].IsNull())
    {
        if (!rsp["Household"].IsString())
        {
            return CoreInternalOutcome(Error("response `Household` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_household = string(rsp["Household"].GetString());
        m_householdHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


string ResidenceBookletOCRResponse::GetHouseholdNumber() const
{
    return m_householdNumber;
}

bool ResidenceBookletOCRResponse::HouseholdNumberHasBeenSet() const
{
    return m_householdNumberHasBeenSet;
}

string ResidenceBookletOCRResponse::GetName() const
{
    return m_name;
}

bool ResidenceBookletOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResidenceBookletOCRResponse::GetSex() const
{
    return m_sex;
}

bool ResidenceBookletOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string ResidenceBookletOCRResponse::GetBirthPlace() const
{
    return m_birthPlace;
}

bool ResidenceBookletOCRResponse::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string ResidenceBookletOCRResponse::GetNation() const
{
    return m_nation;
}

bool ResidenceBookletOCRResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string ResidenceBookletOCRResponse::GetNativePlace() const
{
    return m_nativePlace;
}

bool ResidenceBookletOCRResponse::NativePlaceHasBeenSet() const
{
    return m_nativePlaceHasBeenSet;
}

string ResidenceBookletOCRResponse::GetBirthDate() const
{
    return m_birthDate;
}

bool ResidenceBookletOCRResponse::BirthDateHasBeenSet() const
{
    return m_birthDateHasBeenSet;
}

string ResidenceBookletOCRResponse::GetIdCardNumber() const
{
    return m_idCardNumber;
}

bool ResidenceBookletOCRResponse::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string ResidenceBookletOCRResponse::GetEducationDegree() const
{
    return m_educationDegree;
}

bool ResidenceBookletOCRResponse::EducationDegreeHasBeenSet() const
{
    return m_educationDegreeHasBeenSet;
}

string ResidenceBookletOCRResponse::GetServicePlace() const
{
    return m_servicePlace;
}

bool ResidenceBookletOCRResponse::ServicePlaceHasBeenSet() const
{
    return m_servicePlaceHasBeenSet;
}

string ResidenceBookletOCRResponse::GetHousehold() const
{
    return m_household;
}

bool ResidenceBookletOCRResponse::HouseholdHasBeenSet() const
{
    return m_householdHasBeenSet;
}

string ResidenceBookletOCRResponse::GetAddress() const
{
    return m_address;
}

bool ResidenceBookletOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}


