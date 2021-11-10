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
    m_addressHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_homePageNumberHasBeenSet(false),
    m_householderNameHasBeenSet(false),
    m_relationshipHasBeenSet(false),
    m_otherAddressesHasBeenSet(false),
    m_religiousBeliefHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_bloodTypeHasBeenSet(false),
    m_maritalStatusHasBeenSet(false),
    m_veteranStatusHasBeenSet(false),
    m_professionHasBeenSet(false),
    m_moveToCityInformationHasBeenSet(false),
    m_moveToSiteInformationHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_formerNameHasBeenSet(false)
{
}

CoreInternalOutcome ResidenceBookletOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HouseholdNumber") && !rsp["HouseholdNumber"].IsNull())
    {
        if (!rsp["HouseholdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HouseholdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_householdNumber = string(rsp["HouseholdNumber"].GetString());
        m_householdNumberHasBeenSet = true;
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

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
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

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (rsp.HasMember("NativePlace") && !rsp["NativePlace"].IsNull())
    {
        if (!rsp["NativePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nativePlace = string(rsp["NativePlace"].GetString());
        m_nativePlaceHasBeenSet = true;
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

    if (rsp.HasMember("IdCardNumber") && !rsp["IdCardNumber"].IsNull())
    {
        if (!rsp["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(rsp["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (rsp.HasMember("EducationDegree") && !rsp["EducationDegree"].IsNull())
    {
        if (!rsp["EducationDegree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EducationDegree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_educationDegree = string(rsp["EducationDegree"].GetString());
        m_educationDegreeHasBeenSet = true;
    }

    if (rsp.HasMember("ServicePlace") && !rsp["ServicePlace"].IsNull())
    {
        if (!rsp["ServicePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicePlace = string(rsp["ServicePlace"].GetString());
        m_servicePlaceHasBeenSet = true;
    }

    if (rsp.HasMember("Household") && !rsp["Household"].IsNull())
    {
        if (!rsp["Household"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Household` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_household = string(rsp["Household"].GetString());
        m_householdHasBeenSet = true;
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

    if (rsp.HasMember("Signature") && !rsp["Signature"].IsNull())
    {
        if (!rsp["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(rsp["Signature"].GetString());
        m_signatureHasBeenSet = true;
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

    if (rsp.HasMember("HomePageNumber") && !rsp["HomePageNumber"].IsNull())
    {
        if (!rsp["HomePageNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HomePageNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homePageNumber = string(rsp["HomePageNumber"].GetString());
        m_homePageNumberHasBeenSet = true;
    }

    if (rsp.HasMember("HouseholderName") && !rsp["HouseholderName"].IsNull())
    {
        if (!rsp["HouseholderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HouseholderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_householderName = string(rsp["HouseholderName"].GetString());
        m_householderNameHasBeenSet = true;
    }

    if (rsp.HasMember("Relationship") && !rsp["Relationship"].IsNull())
    {
        if (!rsp["Relationship"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Relationship` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationship = string(rsp["Relationship"].GetString());
        m_relationshipHasBeenSet = true;
    }

    if (rsp.HasMember("OtherAddresses") && !rsp["OtherAddresses"].IsNull())
    {
        if (!rsp["OtherAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherAddresses = string(rsp["OtherAddresses"].GetString());
        m_otherAddressesHasBeenSet = true;
    }

    if (rsp.HasMember("ReligiousBelief") && !rsp["ReligiousBelief"].IsNull())
    {
        if (!rsp["ReligiousBelief"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReligiousBelief` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_religiousBelief = string(rsp["ReligiousBelief"].GetString());
        m_religiousBeliefHasBeenSet = true;
    }

    if (rsp.HasMember("Height") && !rsp["Height"].IsNull())
    {
        if (!rsp["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(rsp["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (rsp.HasMember("BloodType") && !rsp["BloodType"].IsNull())
    {
        if (!rsp["BloodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bloodType = string(rsp["BloodType"].GetString());
        m_bloodTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MaritalStatus") && !rsp["MaritalStatus"].IsNull())
    {
        if (!rsp["MaritalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaritalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maritalStatus = string(rsp["MaritalStatus"].GetString());
        m_maritalStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VeteranStatus") && !rsp["VeteranStatus"].IsNull())
    {
        if (!rsp["VeteranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VeteranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_veteranStatus = string(rsp["VeteranStatus"].GetString());
        m_veteranStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Profession") && !rsp["Profession"].IsNull())
    {
        if (!rsp["Profession"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Profession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profession = string(rsp["Profession"].GetString());
        m_professionHasBeenSet = true;
    }

    if (rsp.HasMember("MoveToCityInformation") && !rsp["MoveToCityInformation"].IsNull())
    {
        if (!rsp["MoveToCityInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MoveToCityInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moveToCityInformation = string(rsp["MoveToCityInformation"].GetString());
        m_moveToCityInformationHasBeenSet = true;
    }

    if (rsp.HasMember("MoveToSiteInformation") && !rsp["MoveToSiteInformation"].IsNull())
    {
        if (!rsp["MoveToSiteInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MoveToSiteInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moveToSiteInformation = string(rsp["MoveToSiteInformation"].GetString());
        m_moveToSiteInformationHasBeenSet = true;
    }

    if (rsp.HasMember("RegistrationDate") && !rsp["RegistrationDate"].IsNull())
    {
        if (!rsp["RegistrationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationDate = string(rsp["RegistrationDate"].GetString());
        m_registrationDateHasBeenSet = true;
    }

    if (rsp.HasMember("FormerName") && !rsp["FormerName"].IsNull())
    {
        if (!rsp["FormerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FormerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formerName = string(rsp["FormerName"].GetString());
        m_formerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ResidenceBookletOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_householdNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseholdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_householdNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_nativePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NativePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nativePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDate.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_educationDegreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EducationDegree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_educationDegree.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servicePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_householdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Household";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_household.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_homePageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomePageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homePageNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_householderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseholderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_householderName.c_str(), allocator).Move(), allocator);
    }

    if (m_relationshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relationship";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationship.c_str(), allocator).Move(), allocator);
    }

    if (m_otherAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_religiousBeliefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReligiousBelief";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_religiousBelief.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_bloodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BloodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bloodType.c_str(), allocator).Move(), allocator);
    }

    if (m_maritalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaritalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maritalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_veteranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VeteranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_veteranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_professionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profession.c_str(), allocator).Move(), allocator);
    }

    if (m_moveToCityInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoveToCityInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moveToCityInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_moveToSiteInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoveToSiteInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moveToSiteInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_formerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formerName.c_str(), allocator).Move(), allocator);
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

string ResidenceBookletOCRResponse::GetSignature() const
{
    return m_signature;
}

bool ResidenceBookletOCRResponse::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

string ResidenceBookletOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool ResidenceBookletOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string ResidenceBookletOCRResponse::GetHomePageNumber() const
{
    return m_homePageNumber;
}

bool ResidenceBookletOCRResponse::HomePageNumberHasBeenSet() const
{
    return m_homePageNumberHasBeenSet;
}

string ResidenceBookletOCRResponse::GetHouseholderName() const
{
    return m_householderName;
}

bool ResidenceBookletOCRResponse::HouseholderNameHasBeenSet() const
{
    return m_householderNameHasBeenSet;
}

string ResidenceBookletOCRResponse::GetRelationship() const
{
    return m_relationship;
}

bool ResidenceBookletOCRResponse::RelationshipHasBeenSet() const
{
    return m_relationshipHasBeenSet;
}

string ResidenceBookletOCRResponse::GetOtherAddresses() const
{
    return m_otherAddresses;
}

bool ResidenceBookletOCRResponse::OtherAddressesHasBeenSet() const
{
    return m_otherAddressesHasBeenSet;
}

string ResidenceBookletOCRResponse::GetReligiousBelief() const
{
    return m_religiousBelief;
}

bool ResidenceBookletOCRResponse::ReligiousBeliefHasBeenSet() const
{
    return m_religiousBeliefHasBeenSet;
}

string ResidenceBookletOCRResponse::GetHeight() const
{
    return m_height;
}

bool ResidenceBookletOCRResponse::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ResidenceBookletOCRResponse::GetBloodType() const
{
    return m_bloodType;
}

bool ResidenceBookletOCRResponse::BloodTypeHasBeenSet() const
{
    return m_bloodTypeHasBeenSet;
}

string ResidenceBookletOCRResponse::GetMaritalStatus() const
{
    return m_maritalStatus;
}

bool ResidenceBookletOCRResponse::MaritalStatusHasBeenSet() const
{
    return m_maritalStatusHasBeenSet;
}

string ResidenceBookletOCRResponse::GetVeteranStatus() const
{
    return m_veteranStatus;
}

bool ResidenceBookletOCRResponse::VeteranStatusHasBeenSet() const
{
    return m_veteranStatusHasBeenSet;
}

string ResidenceBookletOCRResponse::GetProfession() const
{
    return m_profession;
}

bool ResidenceBookletOCRResponse::ProfessionHasBeenSet() const
{
    return m_professionHasBeenSet;
}

string ResidenceBookletOCRResponse::GetMoveToCityInformation() const
{
    return m_moveToCityInformation;
}

bool ResidenceBookletOCRResponse::MoveToCityInformationHasBeenSet() const
{
    return m_moveToCityInformationHasBeenSet;
}

string ResidenceBookletOCRResponse::GetMoveToSiteInformation() const
{
    return m_moveToSiteInformation;
}

bool ResidenceBookletOCRResponse::MoveToSiteInformationHasBeenSet() const
{
    return m_moveToSiteInformationHasBeenSet;
}

string ResidenceBookletOCRResponse::GetRegistrationDate() const
{
    return m_registrationDate;
}

bool ResidenceBookletOCRResponse::RegistrationDateHasBeenSet() const
{
    return m_registrationDateHasBeenSet;
}

string ResidenceBookletOCRResponse::GetFormerName() const
{
    return m_formerName;
}

bool ResidenceBookletOCRResponse::FormerNameHasBeenSet() const
{
    return m_formerNameHasBeenSet;
}


