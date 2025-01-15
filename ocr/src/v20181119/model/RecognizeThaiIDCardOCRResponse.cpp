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

#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeThaiIDCardOCRResponse::RecognizeThaiIDCardOCRResponse() :
    m_iDHasBeenSet(false),
    m_thaiNameHasBeenSet(false),
    m_enFirstNameHasBeenSet(false),
    m_enLastNameHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_enIssueDateHasBeenSet(false),
    m_enExpirationDateHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_enBirthdayHasBeenSet(false),
    m_religionHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_laserIDHasBeenSet(false),
    m_portraitImageHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false),
    m_advancedInfoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeThaiIDCardOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ThaiName") && !rsp["ThaiName"].IsNull())
    {
        if (!rsp["ThaiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThaiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thaiName = string(rsp["ThaiName"].GetString());
        m_thaiNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnFirstName") && !rsp["EnFirstName"].IsNull())
    {
        if (!rsp["EnFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enFirstName = string(rsp["EnFirstName"].GetString());
        m_enFirstNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnLastName") && !rsp["EnLastName"].IsNull())
    {
        if (!rsp["EnLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enLastName = string(rsp["EnLastName"].GetString());
        m_enLastNameHasBeenSet = true;
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

    if (rsp.HasMember("ExpirationDate") && !rsp["ExpirationDate"].IsNull())
    {
        if (!rsp["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(rsp["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (rsp.HasMember("EnIssueDate") && !rsp["EnIssueDate"].IsNull())
    {
        if (!rsp["EnIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enIssueDate = string(rsp["EnIssueDate"].GetString());
        m_enIssueDateHasBeenSet = true;
    }

    if (rsp.HasMember("EnExpirationDate") && !rsp["EnExpirationDate"].IsNull())
    {
        if (!rsp["EnExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enExpirationDate = string(rsp["EnExpirationDate"].GetString());
        m_enExpirationDateHasBeenSet = true;
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

    if (rsp.HasMember("EnBirthday") && !rsp["EnBirthday"].IsNull())
    {
        if (!rsp["EnBirthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnBirthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enBirthday = string(rsp["EnBirthday"].GetString());
        m_enBirthdayHasBeenSet = true;
    }

    if (rsp.HasMember("Religion") && !rsp["Religion"].IsNull())
    {
        if (!rsp["Religion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Religion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_religion = string(rsp["Religion"].GetString());
        m_religionHasBeenSet = true;
    }

    if (rsp.HasMember("SerialNumber") && !rsp["SerialNumber"].IsNull())
    {
        if (!rsp["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(rsp["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
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

    if (rsp.HasMember("LaserID") && !rsp["LaserID"].IsNull())
    {
        if (!rsp["LaserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laserID = string(rsp["LaserID"].GetString());
        m_laserIDHasBeenSet = true;
    }

    if (rsp.HasMember("PortraitImage") && !rsp["PortraitImage"].IsNull())
    {
        if (!rsp["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(rsp["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
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

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeThaiIDCardOCRResponse::ToJsonString() const
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

    if (m_thaiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThaiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thaiName.c_str(), allocator).Move(), allocator);
    }

    if (m_enFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_enLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_enIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_enExpirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enExpirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_enBirthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnBirthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enBirthday.c_str(), allocator).Move(), allocator);
    }

    if (m_religionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Religion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_religion.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_laserIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laserID.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
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

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
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


string RecognizeThaiIDCardOCRResponse::GetID() const
{
    return m_iD;
}

bool RecognizeThaiIDCardOCRResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetThaiName() const
{
    return m_thaiName;
}

bool RecognizeThaiIDCardOCRResponse::ThaiNameHasBeenSet() const
{
    return m_thaiNameHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnFirstName() const
{
    return m_enFirstName;
}

bool RecognizeThaiIDCardOCRResponse::EnFirstNameHasBeenSet() const
{
    return m_enFirstNameHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnLastName() const
{
    return m_enLastName;
}

bool RecognizeThaiIDCardOCRResponse::EnLastNameHasBeenSet() const
{
    return m_enLastNameHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetIssueDate() const
{
    return m_issueDate;
}

bool RecognizeThaiIDCardOCRResponse::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetExpirationDate() const
{
    return m_expirationDate;
}

bool RecognizeThaiIDCardOCRResponse::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnIssueDate() const
{
    return m_enIssueDate;
}

bool RecognizeThaiIDCardOCRResponse::EnIssueDateHasBeenSet() const
{
    return m_enIssueDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnExpirationDate() const
{
    return m_enExpirationDate;
}

bool RecognizeThaiIDCardOCRResponse::EnExpirationDateHasBeenSet() const
{
    return m_enExpirationDateHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizeThaiIDCardOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetEnBirthday() const
{
    return m_enBirthday;
}

bool RecognizeThaiIDCardOCRResponse::EnBirthdayHasBeenSet() const
{
    return m_enBirthdayHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetReligion() const
{
    return m_religion;
}

bool RecognizeThaiIDCardOCRResponse::ReligionHasBeenSet() const
{
    return m_religionHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetSerialNumber() const
{
    return m_serialNumber;
}

bool RecognizeThaiIDCardOCRResponse::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizeThaiIDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetLaserID() const
{
    return m_laserID;
}

bool RecognizeThaiIDCardOCRResponse::LaserIDHasBeenSet() const
{
    return m_laserIDHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeThaiIDCardOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

vector<int64_t> RecognizeThaiIDCardOCRResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool RecognizeThaiIDCardOCRResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}

string RecognizeThaiIDCardOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool RecognizeThaiIDCardOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}


