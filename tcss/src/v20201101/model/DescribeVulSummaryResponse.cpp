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

#include <tencentcloud/tcss/v20201101/model/DescribeVulSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulSummaryResponse::DescribeVulSummaryResponse() :
    m_vulTotalCountHasBeenSet(false),
    m_seriousVulCountHasBeenSet(false),
    m_suggestVulCountHasBeenSet(false),
    m_pocExpLevelVulCountHasBeenSet(false),
    m_remoteExpLevelVulCountHasBeenSet(false),
    m_seriousVulNewestImageCountHasBeenSet(false),
    m_systemVulnerabilityFocusCountHasBeenSet(false),
    m_webVulnerabilityFocusCountHasBeenSet(false),
    m_seriousVulnerabilityLocalImageCountHasBeenSet(false),
    m_seriousVulnerabilityRegistryImageCountHasBeenSet(false),
    m_emergencyVulnerabilityCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulTotalCount") && !rsp["VulTotalCount"].IsNull())
    {
        if (!rsp["VulTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulTotalCount = rsp["VulTotalCount"].GetInt64();
        m_vulTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SeriousVulCount") && !rsp["SeriousVulCount"].IsNull())
    {
        if (!rsp["SeriousVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousVulCount = rsp["SeriousVulCount"].GetInt64();
        m_seriousVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestVulCount") && !rsp["SuggestVulCount"].IsNull())
    {
        if (!rsp["SuggestVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestVulCount = rsp["SuggestVulCount"].GetInt64();
        m_suggestVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("PocExpLevelVulCount") && !rsp["PocExpLevelVulCount"].IsNull())
    {
        if (!rsp["PocExpLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PocExpLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pocExpLevelVulCount = rsp["PocExpLevelVulCount"].GetInt64();
        m_pocExpLevelVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteExpLevelVulCount") && !rsp["RemoteExpLevelVulCount"].IsNull())
    {
        if (!rsp["RemoteExpLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteExpLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remoteExpLevelVulCount = rsp["RemoteExpLevelVulCount"].GetInt64();
        m_remoteExpLevelVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("SeriousVulNewestImageCount") && !rsp["SeriousVulNewestImageCount"].IsNull())
    {
        if (!rsp["SeriousVulNewestImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousVulNewestImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousVulNewestImageCount = rsp["SeriousVulNewestImageCount"].GetInt64();
        m_seriousVulNewestImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("SystemVulnerabilityFocusCount") && !rsp["SystemVulnerabilityFocusCount"].IsNull())
    {
        if (!rsp["SystemVulnerabilityFocusCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemVulnerabilityFocusCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemVulnerabilityFocusCount = rsp["SystemVulnerabilityFocusCount"].GetInt64();
        m_systemVulnerabilityFocusCountHasBeenSet = true;
    }

    if (rsp.HasMember("WebVulnerabilityFocusCount") && !rsp["WebVulnerabilityFocusCount"].IsNull())
    {
        if (!rsp["WebVulnerabilityFocusCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVulnerabilityFocusCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webVulnerabilityFocusCount = rsp["WebVulnerabilityFocusCount"].GetInt64();
        m_webVulnerabilityFocusCountHasBeenSet = true;
    }

    if (rsp.HasMember("SeriousVulnerabilityLocalImageCount") && !rsp["SeriousVulnerabilityLocalImageCount"].IsNull())
    {
        if (!rsp["SeriousVulnerabilityLocalImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousVulnerabilityLocalImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousVulnerabilityLocalImageCount = rsp["SeriousVulnerabilityLocalImageCount"].GetInt64();
        m_seriousVulnerabilityLocalImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("SeriousVulnerabilityRegistryImageCount") && !rsp["SeriousVulnerabilityRegistryImageCount"].IsNull())
    {
        if (!rsp["SeriousVulnerabilityRegistryImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousVulnerabilityRegistryImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousVulnerabilityRegistryImageCount = rsp["SeriousVulnerabilityRegistryImageCount"].GetInt64();
        m_seriousVulnerabilityRegistryImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("EmergencyVulnerabilityCount") && !rsp["EmergencyVulnerabilityCount"].IsNull())
    {
        if (!rsp["EmergencyVulnerabilityCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyVulnerabilityCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_emergencyVulnerabilityCount = rsp["EmergencyVulnerabilityCount"].GetInt64();
        m_emergencyVulnerabilityCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulTotalCount, allocator);
    }

    if (m_seriousVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousVulCount, allocator);
    }

    if (m_suggestVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestVulCount, allocator);
    }

    if (m_pocExpLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocExpLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pocExpLevelVulCount, allocator);
    }

    if (m_remoteExpLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteExpLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteExpLevelVulCount, allocator);
    }

    if (m_seriousVulNewestImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousVulNewestImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousVulNewestImageCount, allocator);
    }

    if (m_systemVulnerabilityFocusCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemVulnerabilityFocusCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemVulnerabilityFocusCount, allocator);
    }

    if (m_webVulnerabilityFocusCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVulnerabilityFocusCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webVulnerabilityFocusCount, allocator);
    }

    if (m_seriousVulnerabilityLocalImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousVulnerabilityLocalImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousVulnerabilityLocalImageCount, allocator);
    }

    if (m_seriousVulnerabilityRegistryImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousVulnerabilityRegistryImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousVulnerabilityRegistryImageCount, allocator);
    }

    if (m_emergencyVulnerabilityCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmergencyVulnerabilityCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergencyVulnerabilityCount, allocator);
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


int64_t DescribeVulSummaryResponse::GetVulTotalCount() const
{
    return m_vulTotalCount;
}

bool DescribeVulSummaryResponse::VulTotalCountHasBeenSet() const
{
    return m_vulTotalCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSeriousVulCount() const
{
    return m_seriousVulCount;
}

bool DescribeVulSummaryResponse::SeriousVulCountHasBeenSet() const
{
    return m_seriousVulCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSuggestVulCount() const
{
    return m_suggestVulCount;
}

bool DescribeVulSummaryResponse::SuggestVulCountHasBeenSet() const
{
    return m_suggestVulCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetPocExpLevelVulCount() const
{
    return m_pocExpLevelVulCount;
}

bool DescribeVulSummaryResponse::PocExpLevelVulCountHasBeenSet() const
{
    return m_pocExpLevelVulCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetRemoteExpLevelVulCount() const
{
    return m_remoteExpLevelVulCount;
}

bool DescribeVulSummaryResponse::RemoteExpLevelVulCountHasBeenSet() const
{
    return m_remoteExpLevelVulCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSeriousVulNewestImageCount() const
{
    return m_seriousVulNewestImageCount;
}

bool DescribeVulSummaryResponse::SeriousVulNewestImageCountHasBeenSet() const
{
    return m_seriousVulNewestImageCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSystemVulnerabilityFocusCount() const
{
    return m_systemVulnerabilityFocusCount;
}

bool DescribeVulSummaryResponse::SystemVulnerabilityFocusCountHasBeenSet() const
{
    return m_systemVulnerabilityFocusCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetWebVulnerabilityFocusCount() const
{
    return m_webVulnerabilityFocusCount;
}

bool DescribeVulSummaryResponse::WebVulnerabilityFocusCountHasBeenSet() const
{
    return m_webVulnerabilityFocusCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSeriousVulnerabilityLocalImageCount() const
{
    return m_seriousVulnerabilityLocalImageCount;
}

bool DescribeVulSummaryResponse::SeriousVulnerabilityLocalImageCountHasBeenSet() const
{
    return m_seriousVulnerabilityLocalImageCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetSeriousVulnerabilityRegistryImageCount() const
{
    return m_seriousVulnerabilityRegistryImageCount;
}

bool DescribeVulSummaryResponse::SeriousVulnerabilityRegistryImageCountHasBeenSet() const
{
    return m_seriousVulnerabilityRegistryImageCountHasBeenSet;
}

int64_t DescribeVulSummaryResponse::GetEmergencyVulnerabilityCount() const
{
    return m_emergencyVulnerabilityCount;
}

bool DescribeVulSummaryResponse::EmergencyVulnerabilityCountHasBeenSet() const
{
    return m_emergencyVulnerabilityCountHasBeenSet;
}


