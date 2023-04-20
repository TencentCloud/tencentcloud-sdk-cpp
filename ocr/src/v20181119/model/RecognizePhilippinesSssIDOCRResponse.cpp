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

#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizePhilippinesSssIDOCRResponse::RecognizePhilippinesSssIDOCRResponse() :
    m_headPortraitHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome RecognizePhilippinesSssIDOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LicenseNumber") && !rsp["LicenseNumber"].IsNull())
    {
        if (!rsp["LicenseNumber"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseNumber` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseNumber.Deserialize(rsp["LicenseNumber"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseNumberHasBeenSet = true;
    }

    if (rsp.HasMember("FullName") && !rsp["FullName"].IsNull())
    {
        if (!rsp["FullName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fullName.Deserialize(rsp["FullName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fullNameHasBeenSet = true;
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

string RecognizePhilippinesSssIDOCRResponse::ToJsonString() const
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

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseNumber.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fullName.ToJsonObject(value[key.c_str()], allocator);
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


TextDetectionResult RecognizePhilippinesSssIDOCRResponse::GetHeadPortrait() const
{
    return m_headPortrait;
}

bool RecognizePhilippinesSssIDOCRResponse::HeadPortraitHasBeenSet() const
{
    return m_headPortraitHasBeenSet;
}

TextDetectionResult RecognizePhilippinesSssIDOCRResponse::GetLicenseNumber() const
{
    return m_licenseNumber;
}

bool RecognizePhilippinesSssIDOCRResponse::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

TextDetectionResult RecognizePhilippinesSssIDOCRResponse::GetFullName() const
{
    return m_fullName;
}

bool RecognizePhilippinesSssIDOCRResponse::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

TextDetectionResult RecognizePhilippinesSssIDOCRResponse::GetBirthday() const
{
    return m_birthday;
}

bool RecognizePhilippinesSssIDOCRResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}


