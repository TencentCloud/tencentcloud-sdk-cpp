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

#include <tencentcloud/ocr/v20181119/model/RecognizeHealthCodeOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeHealthCodeOCRResponse::RecognizeHealthCodeOCRResponse() :
    m_nameHasBeenSet(false),
    m_iDNumberHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_testingIntervalHasBeenSet(false),
    m_testingResultHasBeenSet(false),
    m_testingTimeHasBeenSet(false),
    m_vaccinationHasBeenSet(false),
    m_spotNameHasBeenSet(false),
    m_vaccinationTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeHealthCodeOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("IDNumber") && !rsp["IDNumber"].IsNull())
    {
        if (!rsp["IDNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDNumber = string(rsp["IDNumber"].GetString());
        m_iDNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Time") && !rsp["Time"].IsNull())
    {
        if (!rsp["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(rsp["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (rsp.HasMember("Color") && !rsp["Color"].IsNull())
    {
        if (!rsp["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(rsp["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (rsp.HasMember("TestingInterval") && !rsp["TestingInterval"].IsNull())
    {
        if (!rsp["TestingInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestingInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testingInterval = string(rsp["TestingInterval"].GetString());
        m_testingIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("TestingResult") && !rsp["TestingResult"].IsNull())
    {
        if (!rsp["TestingResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestingResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testingResult = string(rsp["TestingResult"].GetString());
        m_testingResultHasBeenSet = true;
    }

    if (rsp.HasMember("TestingTime") && !rsp["TestingTime"].IsNull())
    {
        if (!rsp["TestingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testingTime = string(rsp["TestingTime"].GetString());
        m_testingTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Vaccination") && !rsp["Vaccination"].IsNull())
    {
        if (!rsp["Vaccination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaccination = string(rsp["Vaccination"].GetString());
        m_vaccinationHasBeenSet = true;
    }

    if (rsp.HasMember("SpotName") && !rsp["SpotName"].IsNull())
    {
        if (!rsp["SpotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spotName = string(rsp["SpotName"].GetString());
        m_spotNameHasBeenSet = true;
    }

    if (rsp.HasMember("VaccinationTime") && !rsp["VaccinationTime"].IsNull())
    {
        if (!rsp["VaccinationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VaccinationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaccinationTime = string(rsp["VaccinationTime"].GetString());
        m_vaccinationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeHealthCodeOCRResponse::ToJsonString() const
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

    if (m_iDNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_testingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestingInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testingInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_testingResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestingResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testingResult.c_str(), allocator).Move(), allocator);
    }

    if (m_testingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vaccinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vaccination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaccination.c_str(), allocator).Move(), allocator);
    }

    if (m_spotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spotName.c_str(), allocator).Move(), allocator);
    }

    if (m_vaccinationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaccinationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaccinationTime.c_str(), allocator).Move(), allocator);
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


string RecognizeHealthCodeOCRResponse::GetName() const
{
    return m_name;
}

bool RecognizeHealthCodeOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetIDNumber() const
{
    return m_iDNumber;
}

bool RecognizeHealthCodeOCRResponse::IDNumberHasBeenSet() const
{
    return m_iDNumberHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetTime() const
{
    return m_time;
}

bool RecognizeHealthCodeOCRResponse::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetColor() const
{
    return m_color;
}

bool RecognizeHealthCodeOCRResponse::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetTestingInterval() const
{
    return m_testingInterval;
}

bool RecognizeHealthCodeOCRResponse::TestingIntervalHasBeenSet() const
{
    return m_testingIntervalHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetTestingResult() const
{
    return m_testingResult;
}

bool RecognizeHealthCodeOCRResponse::TestingResultHasBeenSet() const
{
    return m_testingResultHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetTestingTime() const
{
    return m_testingTime;
}

bool RecognizeHealthCodeOCRResponse::TestingTimeHasBeenSet() const
{
    return m_testingTimeHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetVaccination() const
{
    return m_vaccination;
}

bool RecognizeHealthCodeOCRResponse::VaccinationHasBeenSet() const
{
    return m_vaccinationHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetSpotName() const
{
    return m_spotName;
}

bool RecognizeHealthCodeOCRResponse::SpotNameHasBeenSet() const
{
    return m_spotNameHasBeenSet;
}

string RecognizeHealthCodeOCRResponse::GetVaccinationTime() const
{
    return m_vaccinationTime;
}

bool RecognizeHealthCodeOCRResponse::VaccinationTimeHasBeenSet() const
{
    return m_vaccinationTimeHasBeenSet;
}


