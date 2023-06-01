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

#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesUMIDOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizePhilippinesUMIDOCRResponse::RecognizePhilippinesUMIDOCRResponse() :
    m_surnameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_cRNHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_headPortraitHasBeenSet(false)
{
}

CoreInternalOutcome RecognizePhilippinesUMIDOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Surname") && !rsp["Surname"].IsNull())
    {
        if (!rsp["Surname"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Surname` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surname.Deserialize(rsp["Surname"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surnameHasBeenSet = true;
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

    if (rsp.HasMember("GivenName") && !rsp["GivenName"].IsNull())
    {
        if (!rsp["GivenName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GivenName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_givenName.Deserialize(rsp["GivenName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_givenNameHasBeenSet = true;
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

    if (rsp.HasMember("CRN") && !rsp["CRN"].IsNull())
    {
        if (!rsp["CRN"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CRN` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cRN.Deserialize(rsp["CRN"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cRNHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string RecognizePhilippinesUMIDOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_surnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surname.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_middleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_middleName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_givenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_givenName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birthday.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cRNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cRN.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sex.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadPortrait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headPortrait.ToJsonObject(value[key.c_str()], allocator);
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


TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetSurname() const
{
    return m_surname;
}

bool RecognizePhilippinesUMIDOCRResponse::SurnameHasBeenSet() const
{
    return m_surnameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetMiddleName() const
{
    return m_middleName;
}

bool RecognizePhilippinesUMIDOCRResponse::MiddleNameHasBeenSet() const
{
    return m_middleNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetGivenName() const
{
    return m_givenName;
}

bool RecognizePhilippinesUMIDOCRResponse::GivenNameHasBeenSet() const
{
    return m_givenNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetAddress() const
{
    return m_address;
}

bool RecognizePhilippinesUMIDOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizePhilippinesUMIDOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetCRN() const
{
    return m_cRN;
}

bool RecognizePhilippinesUMIDOCRResponse::CRNHasBeenSet() const
{
    return m_cRNHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetSex() const
{
    return m_sex;
}

bool RecognizePhilippinesUMIDOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

TextDetectionResult RecognizePhilippinesUMIDOCRResponse::GetHeadPortrait() const
{
    return m_headPortrait;
}

bool RecognizePhilippinesUMIDOCRResponse::HeadPortraitHasBeenSet() const
{
    return m_headPortraitHasBeenSet;
}


