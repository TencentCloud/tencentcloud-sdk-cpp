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

#include <tencentcloud/ocr/v20181119/model/RideHailingDriverLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RideHailingDriverLicenseOCRResponse::RideHailingDriverLicenseOCRResponse() :
    m_nameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_releaseDateHasBeenSet(false)
{
}

CoreInternalOutcome RideHailingDriverLicenseOCRResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LicenseNumber") && !rsp["LicenseNumber"].IsNull())
    {
        if (!rsp["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(rsp["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
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

    if (rsp.HasMember("ReleaseDate") && !rsp["ReleaseDate"].IsNull())
    {
        if (!rsp["ReleaseDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDate = string(rsp["ReleaseDate"].GetString());
        m_releaseDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RideHailingDriverLicenseOCRResponse::ToJsonString() const
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

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
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

    if (m_releaseDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDate.c_str(), allocator).Move(), allocator);
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


string RideHailingDriverLicenseOCRResponse::GetName() const
{
    return m_name;
}

bool RideHailingDriverLicenseOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RideHailingDriverLicenseOCRResponse::GetLicenseNumber() const
{
    return m_licenseNumber;
}

bool RideHailingDriverLicenseOCRResponse::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string RideHailingDriverLicenseOCRResponse::GetStartDate() const
{
    return m_startDate;
}

bool RideHailingDriverLicenseOCRResponse::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string RideHailingDriverLicenseOCRResponse::GetEndDate() const
{
    return m_endDate;
}

bool RideHailingDriverLicenseOCRResponse::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string RideHailingDriverLicenseOCRResponse::GetReleaseDate() const
{
    return m_releaseDate;
}

bool RideHailingDriverLicenseOCRResponse::ReleaseDateHasBeenSet() const
{
    return m_releaseDateHasBeenSet;
}


