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

#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizePhilippinesVoteIDOCRResponse::RecognizePhilippinesVoteIDOCRResponse() :
    m_headPortraitHasBeenSet(false),
    m_vINHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_civilStatusHasBeenSet(false),
    m_citizenshipHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_precinctNoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizePhilippinesVoteIDOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("VIN") && !rsp["VIN"].IsNull())
    {
        if (!rsp["VIN"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VIN` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vIN.Deserialize(rsp["VIN"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vINHasBeenSet = true;
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

    if (rsp.HasMember("CivilStatus") && !rsp["CivilStatus"].IsNull())
    {
        if (!rsp["CivilStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CivilStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_civilStatus.Deserialize(rsp["CivilStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_civilStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Citizenship") && !rsp["Citizenship"].IsNull())
    {
        if (!rsp["Citizenship"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Citizenship` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_citizenship.Deserialize(rsp["Citizenship"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_citizenshipHasBeenSet = true;
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

    if (rsp.HasMember("PrecinctNo") && !rsp["PrecinctNo"].IsNull())
    {
        if (!rsp["PrecinctNo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrecinctNo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_precinctNo.Deserialize(rsp["PrecinctNo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_precinctNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizePhilippinesVoteIDOCRResponse::ToJsonString() const
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

    if (m_vINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vIN.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lastName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birthday.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_civilStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CivilStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_civilStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_citizenshipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Citizenship";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_citizenship.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_precinctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrecinctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_precinctNo.ToJsonObject(value[key.c_str()], allocator);
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


TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetHeadPortrait() const
{
    return m_headPortrait;
}

bool RecognizePhilippinesVoteIDOCRResponse::HeadPortraitHasBeenSet() const
{
    return m_headPortraitHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetVIN() const
{
    return m_vIN;
}

bool RecognizePhilippinesVoteIDOCRResponse::VINHasBeenSet() const
{
    return m_vINHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetFirstName() const
{
    return m_firstName;
}

bool RecognizePhilippinesVoteIDOCRResponse::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetLastName() const
{
    return m_lastName;
}

bool RecognizePhilippinesVoteIDOCRResponse::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizePhilippinesVoteIDOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetCivilStatus() const
{
    return m_civilStatus;
}

bool RecognizePhilippinesVoteIDOCRResponse::CivilStatusHasBeenSet() const
{
    return m_civilStatusHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetCitizenship() const
{
    return m_citizenship;
}

bool RecognizePhilippinesVoteIDOCRResponse::CitizenshipHasBeenSet() const
{
    return m_citizenshipHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizePhilippinesVoteIDOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

TextDetectionResult RecognizePhilippinesVoteIDOCRResponse::GetPrecinctNo() const
{
    return m_precinctNo;
}

bool RecognizePhilippinesVoteIDOCRResponse::PrecinctNoHasBeenSet() const
{
    return m_precinctNoHasBeenSet;
}


