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

#include <tencentcloud/tcss/v20201101/model/DescribeVulImageSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulImageSummaryResponse::DescribeVulImageSummaryResponse() :
    m_seriousVulImageCountHasBeenSet(false),
    m_scannedImageCountHasBeenSet(false),
    m_vulTotalCountHasBeenSet(false),
    m_sysTemVulCountHasBeenSet(false),
    m_webVulCountHasBeenSet(false),
    m_allAuthorizedImageCountHasBeenSet(false),
    m_emergencyVulCountHasBeenSet(false),
    m_supportVulTotalCountHasBeenSet(false),
    m_vulLibraryUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulImageSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SeriousVulImageCount") && !rsp["SeriousVulImageCount"].IsNull())
    {
        if (!rsp["SeriousVulImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousVulImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousVulImageCount = rsp["SeriousVulImageCount"].GetInt64();
        m_seriousVulImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScannedImageCount") && !rsp["ScannedImageCount"].IsNull())
    {
        if (!rsp["ScannedImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScannedImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scannedImageCount = rsp["ScannedImageCount"].GetInt64();
        m_scannedImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("VulTotalCount") && !rsp["VulTotalCount"].IsNull())
    {
        if (!rsp["VulTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulTotalCount = rsp["VulTotalCount"].GetInt64();
        m_vulTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SysTemVulCount") && !rsp["SysTemVulCount"].IsNull())
    {
        if (!rsp["SysTemVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SysTemVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sysTemVulCount = rsp["SysTemVulCount"].GetInt64();
        m_sysTemVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebVulCount") && !rsp["WebVulCount"].IsNull())
    {
        if (!rsp["WebVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webVulCount = rsp["WebVulCount"].GetInt64();
        m_webVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("AllAuthorizedImageCount") && !rsp["AllAuthorizedImageCount"].IsNull())
    {
        if (!rsp["AllAuthorizedImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllAuthorizedImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allAuthorizedImageCount = rsp["AllAuthorizedImageCount"].GetInt64();
        m_allAuthorizedImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyVulCount") && !rsp["EmergencyVulCount"].IsNull())
    {
        if (!rsp["EmergencyVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyVulCount = rsp["EmergencyVulCount"].GetInt64();
        m_emergencyVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("SupportVulTotalCount") && !rsp["SupportVulTotalCount"].IsNull())
    {
        if (!rsp["SupportVulTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SupportVulTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportVulTotalCount = rsp["SupportVulTotalCount"].GetInt64();
        m_supportVulTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("VulLibraryUpdateTime") && !rsp["VulLibraryUpdateTime"].IsNull())
    {
        if (!rsp["VulLibraryUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulLibraryUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLibraryUpdateTime = string(rsp["VulLibraryUpdateTime"].GetString());
        m_vulLibraryUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulImageSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_seriousVulImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousVulImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousVulImageCount, allocator);
    }

    if (m_scannedImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedImageCount, allocator);
    }

    if (m_vulTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulTotalCount, allocator);
    }

    if (m_sysTemVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysTemVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysTemVulCount, allocator);
    }

    if (m_webVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webVulCount, allocator);
    }

    if (m_allAuthorizedImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllAuthorizedImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allAuthorizedImageCount, allocator);
    }

    if (m_emergencyVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyVulCount, allocator);
    }

    if (m_supportVulTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportVulTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportVulTotalCount, allocator);
    }

    if (m_vulLibraryUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLibraryUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLibraryUpdateTime.c_str(), allocator).Move(), allocator);
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


int64_t DescribeVulImageSummaryResponse::GetSeriousVulImageCount() const
{
    return m_seriousVulImageCount;
}

bool DescribeVulImageSummaryResponse::SeriousVulImageCountHasBeenSet() const
{
    return m_seriousVulImageCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetScannedImageCount() const
{
    return m_scannedImageCount;
}

bool DescribeVulImageSummaryResponse::ScannedImageCountHasBeenSet() const
{
    return m_scannedImageCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetVulTotalCount() const
{
    return m_vulTotalCount;
}

bool DescribeVulImageSummaryResponse::VulTotalCountHasBeenSet() const
{
    return m_vulTotalCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetSysTemVulCount() const
{
    return m_sysTemVulCount;
}

bool DescribeVulImageSummaryResponse::SysTemVulCountHasBeenSet() const
{
    return m_sysTemVulCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetWebVulCount() const
{
    return m_webVulCount;
}

bool DescribeVulImageSummaryResponse::WebVulCountHasBeenSet() const
{
    return m_webVulCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetAllAuthorizedImageCount() const
{
    return m_allAuthorizedImageCount;
}

bool DescribeVulImageSummaryResponse::AllAuthorizedImageCountHasBeenSet() const
{
    return m_allAuthorizedImageCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetEmergencyVulCount() const
{
    return m_emergencyVulCount;
}

bool DescribeVulImageSummaryResponse::EmergencyVulCountHasBeenSet() const
{
    return m_emergencyVulCountHasBeenSet;
}

int64_t DescribeVulImageSummaryResponse::GetSupportVulTotalCount() const
{
    return m_supportVulTotalCount;
}

bool DescribeVulImageSummaryResponse::SupportVulTotalCountHasBeenSet() const
{
    return m_supportVulTotalCountHasBeenSet;
}

string DescribeVulImageSummaryResponse::GetVulLibraryUpdateTime() const
{
    return m_vulLibraryUpdateTime;
}

bool DescribeVulImageSummaryResponse::VulLibraryUpdateTimeHasBeenSet() const
{
    return m_vulLibraryUpdateTimeHasBeenSet;
}


