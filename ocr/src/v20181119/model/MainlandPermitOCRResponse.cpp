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

#include <tencentcloud/ocr/v20181119/model/MainlandPermitOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MainlandPermitOCRResponse::MainlandPermitOCRResponse() :
    m_nameHasBeenSet(false),
    m_englishNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_issueAuthorityHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_issueAddressHasBeenSet(false),
    m_issueNumberHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_mainlandTravelPermitBackInfosHasBeenSet(false)
{
}

CoreInternalOutcome MainlandPermitOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("EnglishName") && !rsp["EnglishName"].IsNull())
    {
        if (!rsp["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(rsp["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
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

    if (rsp.HasMember("IssueAuthority") && !rsp["IssueAuthority"].IsNull())
    {
        if (!rsp["IssueAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueAuthority = string(rsp["IssueAuthority"].GetString());
        m_issueAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
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

    if (rsp.HasMember("IssueAddress") && !rsp["IssueAddress"].IsNull())
    {
        if (!rsp["IssueAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueAddress = string(rsp["IssueAddress"].GetString());
        m_issueAddressHasBeenSet = true;
    }

    if (rsp.HasMember("IssueNumber") && !rsp["IssueNumber"].IsNull())
    {
        if (!rsp["IssueNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueNumber = string(rsp["IssueNumber"].GetString());
        m_issueNumberHasBeenSet = true;
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

    if (rsp.HasMember("Profile") && !rsp["Profile"].IsNull())
    {
        if (!rsp["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(rsp["Profile"].GetString());
        m_profileHasBeenSet = true;
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

    if (rsp.HasMember("MainlandTravelPermitBackInfos") && !rsp["MainlandTravelPermitBackInfos"].IsNull())
    {
        if (!rsp["MainlandTravelPermitBackInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandTravelPermitBackInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainlandTravelPermitBackInfos.Deserialize(rsp["MainlandTravelPermitBackInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainlandTravelPermitBackInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string MainlandPermitOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
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

    if (m_issueAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_issueAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_issueNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_mainlandTravelPermitBackInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandTravelPermitBackInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainlandTravelPermitBackInfos.ToJsonObject(value[key.c_str()], allocator);
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


string MainlandPermitOCRResponse::GetName() const
{
    return m_name;
}

bool MainlandPermitOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MainlandPermitOCRResponse::GetEnglishName() const
{
    return m_englishName;
}

bool MainlandPermitOCRResponse::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

string MainlandPermitOCRResponse::GetSex() const
{
    return m_sex;
}

bool MainlandPermitOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string MainlandPermitOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool MainlandPermitOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string MainlandPermitOCRResponse::GetIssueAuthority() const
{
    return m_issueAuthority;
}

bool MainlandPermitOCRResponse::IssueAuthorityHasBeenSet() const
{
    return m_issueAuthorityHasBeenSet;
}

string MainlandPermitOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool MainlandPermitOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string MainlandPermitOCRResponse::GetNumber() const
{
    return m_number;
}

bool MainlandPermitOCRResponse::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string MainlandPermitOCRResponse::GetIssueAddress() const
{
    return m_issueAddress;
}

bool MainlandPermitOCRResponse::IssueAddressHasBeenSet() const
{
    return m_issueAddressHasBeenSet;
}

string MainlandPermitOCRResponse::GetIssueNumber() const
{
    return m_issueNumber;
}

bool MainlandPermitOCRResponse::IssueNumberHasBeenSet() const
{
    return m_issueNumberHasBeenSet;
}

string MainlandPermitOCRResponse::GetType() const
{
    return m_type;
}

bool MainlandPermitOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MainlandPermitOCRResponse::GetProfile() const
{
    return m_profile;
}

bool MainlandPermitOCRResponse::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string MainlandPermitOCRResponse::GetNationality() const
{
    return m_nationality;
}

bool MainlandPermitOCRResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

MainlandTravelPermitBackInfos MainlandPermitOCRResponse::GetMainlandTravelPermitBackInfos() const
{
    return m_mainlandTravelPermitBackInfos;
}

bool MainlandPermitOCRResponse::MainlandTravelPermitBackInfosHasBeenSet() const
{
    return m_mainlandTravelPermitBackInfosHasBeenSet;
}


