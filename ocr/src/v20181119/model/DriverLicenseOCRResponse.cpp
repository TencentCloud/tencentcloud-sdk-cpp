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
    m_cardCodeHasBeenSet(false),
    m_archivesCodeHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_recognizeWarnCodeHasBeenSet(false),
    m_recognizeWarnMsgHasBeenSet(false),
    m_issuingAuthorityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_cumulativeScoreHasBeenSet(false),
    m_currentTimeHasBeenSet(false),
    m_generateTimeHasBeenSet(false),
    m_backPageNameHasBeenSet(false),
    m_backPageCardCodeHasBeenSet(false),
    m_driverLicenseTypeHasBeenSet(false)
{
}

CoreInternalOutcome DriverLicenseOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
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

    if (rsp.HasMember("DateOfFirstIssue") && !rsp["DateOfFirstIssue"].IsNull())
    {
        if (!rsp["DateOfFirstIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DateOfFirstIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfFirstIssue = string(rsp["DateOfFirstIssue"].GetString());
        m_dateOfFirstIssueHasBeenSet = true;
    }

    if (rsp.HasMember("Class") && !rsp["Class"].IsNull())
    {
        if (!rsp["Class"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Class` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_class = string(rsp["Class"].GetString());
        m_classHasBeenSet = true;
    }

    if (rsp.HasMember("StartDate") && !rsp["StartDate"].IsNull())
    {
        if (!rsp["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(rsp["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (rsp.HasMember("EndDate") && !rsp["EndDate"].IsNull())
    {
        if (!rsp["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(rsp["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (rsp.HasMember("CardCode") && !rsp["CardCode"].IsNull())
    {
        if (!rsp["CardCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardCode = string(rsp["CardCode"].GetString());
        m_cardCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ArchivesCode") && !rsp["ArchivesCode"].IsNull())
    {
        if (!rsp["ArchivesCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchivesCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archivesCode = string(rsp["ArchivesCode"].GetString());
        m_archivesCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Record") && !rsp["Record"].IsNull())
    {
        if (!rsp["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(rsp["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnCode") && !rsp["RecognizeWarnCode"].IsNull())
    {
        if (!rsp["RecognizeWarnCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnCode.push_back((*itr).GetInt64());
        }
        m_recognizeWarnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnMsg") && !rsp["RecognizeWarnMsg"].IsNull())
    {
        if (!rsp["RecognizeWarnMsg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnMsg` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnMsg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnMsg.push_back((*itr).GetString());
        }
        m_recognizeWarnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("IssuingAuthority") && !rsp["IssuingAuthority"].IsNull())
    {
        if (!rsp["IssuingAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuingAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAuthority = string(rsp["IssuingAuthority"].GetString());
        m_issuingAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("CumulativeScore") && !rsp["CumulativeScore"].IsNull())
    {
        if (!rsp["CumulativeScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CumulativeScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cumulativeScore = string(rsp["CumulativeScore"].GetString());
        m_cumulativeScoreHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentTime") && !rsp["CurrentTime"].IsNull())
    {
        if (!rsp["CurrentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentTime = string(rsp["CurrentTime"].GetString());
        m_currentTimeHasBeenSet = true;
    }

    if (rsp.HasMember("GenerateTime") && !rsp["GenerateTime"].IsNull())
    {
        if (!rsp["GenerateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GenerateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateTime = string(rsp["GenerateTime"].GetString());
        m_generateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BackPageName") && !rsp["BackPageName"].IsNull())
    {
        if (!rsp["BackPageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackPageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backPageName = string(rsp["BackPageName"].GetString());
        m_backPageNameHasBeenSet = true;
    }

    if (rsp.HasMember("BackPageCardCode") && !rsp["BackPageCardCode"].IsNull())
    {
        if (!rsp["BackPageCardCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackPageCardCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backPageCardCode = string(rsp["BackPageCardCode"].GetString());
        m_backPageCardCodeHasBeenSet = true;
    }

    if (rsp.HasMember("DriverLicenseType") && !rsp["DriverLicenseType"].IsNull())
    {
        if (!rsp["DriverLicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DriverLicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverLicenseType = string(rsp["DriverLicenseType"].GetString());
        m_driverLicenseTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DriverLicenseOCRResponse::ToJsonString() const
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

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfFirstIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfFirstIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfFirstIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_classHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_class.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cardCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardCode.c_str(), allocator).Move(), allocator);
    }

    if (m_archivesCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchivesCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archivesCode.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_recognizeWarnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnCode.begin(); itr != m_recognizeWarnCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recognizeWarnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnMsg.begin(); itr != m_recognizeWarnMsg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_issuingAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_cumulativeScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CumulativeScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cumulativeScore.c_str(), allocator).Move(), allocator);
    }

    if (m_currentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backPageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackPageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backPageName.c_str(), allocator).Move(), allocator);
    }

    if (m_backPageCardCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackPageCardCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backPageCardCode.c_str(), allocator).Move(), allocator);
    }

    if (m_driverLicenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverLicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverLicenseType.c_str(), allocator).Move(), allocator);
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

string DriverLicenseOCRResponse::GetArchivesCode() const
{
    return m_archivesCode;
}

bool DriverLicenseOCRResponse::ArchivesCodeHasBeenSet() const
{
    return m_archivesCodeHasBeenSet;
}

string DriverLicenseOCRResponse::GetRecord() const
{
    return m_record;
}

bool DriverLicenseOCRResponse::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

vector<int64_t> DriverLicenseOCRResponse::GetRecognizeWarnCode() const
{
    return m_recognizeWarnCode;
}

bool DriverLicenseOCRResponse::RecognizeWarnCodeHasBeenSet() const
{
    return m_recognizeWarnCodeHasBeenSet;
}

vector<string> DriverLicenseOCRResponse::GetRecognizeWarnMsg() const
{
    return m_recognizeWarnMsg;
}

bool DriverLicenseOCRResponse::RecognizeWarnMsgHasBeenSet() const
{
    return m_recognizeWarnMsgHasBeenSet;
}

string DriverLicenseOCRResponse::GetIssuingAuthority() const
{
    return m_issuingAuthority;
}

bool DriverLicenseOCRResponse::IssuingAuthorityHasBeenSet() const
{
    return m_issuingAuthorityHasBeenSet;
}

string DriverLicenseOCRResponse::GetState() const
{
    return m_state;
}

bool DriverLicenseOCRResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DriverLicenseOCRResponse::GetCumulativeScore() const
{
    return m_cumulativeScore;
}

bool DriverLicenseOCRResponse::CumulativeScoreHasBeenSet() const
{
    return m_cumulativeScoreHasBeenSet;
}

string DriverLicenseOCRResponse::GetCurrentTime() const
{
    return m_currentTime;
}

bool DriverLicenseOCRResponse::CurrentTimeHasBeenSet() const
{
    return m_currentTimeHasBeenSet;
}

string DriverLicenseOCRResponse::GetGenerateTime() const
{
    return m_generateTime;
}

bool DriverLicenseOCRResponse::GenerateTimeHasBeenSet() const
{
    return m_generateTimeHasBeenSet;
}

string DriverLicenseOCRResponse::GetBackPageName() const
{
    return m_backPageName;
}

bool DriverLicenseOCRResponse::BackPageNameHasBeenSet() const
{
    return m_backPageNameHasBeenSet;
}

string DriverLicenseOCRResponse::GetBackPageCardCode() const
{
    return m_backPageCardCode;
}

bool DriverLicenseOCRResponse::BackPageCardCodeHasBeenSet() const
{
    return m_backPageCardCodeHasBeenSet;
}

string DriverLicenseOCRResponse::GetDriverLicenseType() const
{
    return m_driverLicenseType;
}

bool DriverLicenseOCRResponse::DriverLicenseTypeHasBeenSet() const
{
    return m_driverLicenseTypeHasBeenSet;
}


