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

#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelImageSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulLevelImageSummaryResponse::DescribeVulLevelImageSummaryResponse() :
    m_highLevelVulLocalImagePercentHasBeenSet(false),
    m_mediumLevelVulLocalImagePercentHasBeenSet(false),
    m_lowLevelVulLocalImagePercentHasBeenSet(false),
    m_criticalLevelVulLocalImagePercentHasBeenSet(false),
    m_localNewestImageCountHasBeenSet(false),
    m_registryNewestImageCountHasBeenSet(false),
    m_highLevelVulRegistryImagePercentHasBeenSet(false),
    m_mediumLevelVulRegistryImagePercentHasBeenSet(false),
    m_lowLevelVulRegistryImagePercentHasBeenSet(false),
    m_criticalLevelVulRegistryImagePercentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulLevelImageSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HighLevelVulLocalImagePercent") && !rsp["HighLevelVulLocalImagePercent"].IsNull())
    {
        if (!rsp["HighLevelVulLocalImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighLevelVulLocalImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulLocalImagePercent = rsp["HighLevelVulLocalImagePercent"].GetDouble();
        m_highLevelVulLocalImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("MediumLevelVulLocalImagePercent") && !rsp["MediumLevelVulLocalImagePercent"].IsNull())
    {
        if (!rsp["MediumLevelVulLocalImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediumLevelVulLocalImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulLocalImagePercent = rsp["MediumLevelVulLocalImagePercent"].GetDouble();
        m_mediumLevelVulLocalImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("LowLevelVulLocalImagePercent") && !rsp["LowLevelVulLocalImagePercent"].IsNull())
    {
        if (!rsp["LowLevelVulLocalImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LowLevelVulLocalImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulLocalImagePercent = rsp["LowLevelVulLocalImagePercent"].GetDouble();
        m_lowLevelVulLocalImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalLevelVulLocalImagePercent") && !rsp["CriticalLevelVulLocalImagePercent"].IsNull())
    {
        if (!rsp["CriticalLevelVulLocalImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalLevelVulLocalImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulLocalImagePercent = rsp["CriticalLevelVulLocalImagePercent"].GetDouble();
        m_criticalLevelVulLocalImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("LocalNewestImageCount") && !rsp["LocalNewestImageCount"].IsNull())
    {
        if (!rsp["LocalNewestImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNewestImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localNewestImageCount = rsp["LocalNewestImageCount"].GetInt64();
        m_localNewestImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryNewestImageCount") && !rsp["RegistryNewestImageCount"].IsNull())
    {
        if (!rsp["RegistryNewestImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryNewestImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryNewestImageCount = rsp["RegistryNewestImageCount"].GetInt64();
        m_registryNewestImageCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighLevelVulRegistryImagePercent") && !rsp["HighLevelVulRegistryImagePercent"].IsNull())
    {
        if (!rsp["HighLevelVulRegistryImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighLevelVulRegistryImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulRegistryImagePercent = rsp["HighLevelVulRegistryImagePercent"].GetDouble();
        m_highLevelVulRegistryImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("MediumLevelVulRegistryImagePercent") && !rsp["MediumLevelVulRegistryImagePercent"].IsNull())
    {
        if (!rsp["MediumLevelVulRegistryImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediumLevelVulRegistryImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulRegistryImagePercent = rsp["MediumLevelVulRegistryImagePercent"].GetDouble();
        m_mediumLevelVulRegistryImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("LowLevelVulRegistryImagePercent") && !rsp["LowLevelVulRegistryImagePercent"].IsNull())
    {
        if (!rsp["LowLevelVulRegistryImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LowLevelVulRegistryImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulRegistryImagePercent = rsp["LowLevelVulRegistryImagePercent"].GetDouble();
        m_lowLevelVulRegistryImagePercentHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalLevelVulRegistryImagePercent") && !rsp["CriticalLevelVulRegistryImagePercent"].IsNull())
    {
        if (!rsp["CriticalLevelVulRegistryImagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalLevelVulRegistryImagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulRegistryImagePercent = rsp["CriticalLevelVulRegistryImagePercent"].GetDouble();
        m_criticalLevelVulRegistryImagePercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulLevelImageSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_highLevelVulLocalImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulLocalImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulLocalImagePercent, allocator);
    }

    if (m_mediumLevelVulLocalImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulLocalImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulLocalImagePercent, allocator);
    }

    if (m_lowLevelVulLocalImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulLocalImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulLocalImagePercent, allocator);
    }

    if (m_criticalLevelVulLocalImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulLocalImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulLocalImagePercent, allocator);
    }

    if (m_localNewestImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalNewestImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localNewestImageCount, allocator);
    }

    if (m_registryNewestImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryNewestImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryNewestImageCount, allocator);
    }

    if (m_highLevelVulRegistryImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulRegistryImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulRegistryImagePercent, allocator);
    }

    if (m_mediumLevelVulRegistryImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulRegistryImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulRegistryImagePercent, allocator);
    }

    if (m_lowLevelVulRegistryImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulRegistryImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulRegistryImagePercent, allocator);
    }

    if (m_criticalLevelVulRegistryImagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulRegistryImagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulRegistryImagePercent, allocator);
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


double DescribeVulLevelImageSummaryResponse::GetHighLevelVulLocalImagePercent() const
{
    return m_highLevelVulLocalImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::HighLevelVulLocalImagePercentHasBeenSet() const
{
    return m_highLevelVulLocalImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetMediumLevelVulLocalImagePercent() const
{
    return m_mediumLevelVulLocalImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::MediumLevelVulLocalImagePercentHasBeenSet() const
{
    return m_mediumLevelVulLocalImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetLowLevelVulLocalImagePercent() const
{
    return m_lowLevelVulLocalImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::LowLevelVulLocalImagePercentHasBeenSet() const
{
    return m_lowLevelVulLocalImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetCriticalLevelVulLocalImagePercent() const
{
    return m_criticalLevelVulLocalImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::CriticalLevelVulLocalImagePercentHasBeenSet() const
{
    return m_criticalLevelVulLocalImagePercentHasBeenSet;
}

int64_t DescribeVulLevelImageSummaryResponse::GetLocalNewestImageCount() const
{
    return m_localNewestImageCount;
}

bool DescribeVulLevelImageSummaryResponse::LocalNewestImageCountHasBeenSet() const
{
    return m_localNewestImageCountHasBeenSet;
}

int64_t DescribeVulLevelImageSummaryResponse::GetRegistryNewestImageCount() const
{
    return m_registryNewestImageCount;
}

bool DescribeVulLevelImageSummaryResponse::RegistryNewestImageCountHasBeenSet() const
{
    return m_registryNewestImageCountHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetHighLevelVulRegistryImagePercent() const
{
    return m_highLevelVulRegistryImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::HighLevelVulRegistryImagePercentHasBeenSet() const
{
    return m_highLevelVulRegistryImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetMediumLevelVulRegistryImagePercent() const
{
    return m_mediumLevelVulRegistryImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::MediumLevelVulRegistryImagePercentHasBeenSet() const
{
    return m_mediumLevelVulRegistryImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetLowLevelVulRegistryImagePercent() const
{
    return m_lowLevelVulRegistryImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::LowLevelVulRegistryImagePercentHasBeenSet() const
{
    return m_lowLevelVulRegistryImagePercentHasBeenSet;
}

double DescribeVulLevelImageSummaryResponse::GetCriticalLevelVulRegistryImagePercent() const
{
    return m_criticalLevelVulRegistryImagePercent;
}

bool DescribeVulLevelImageSummaryResponse::CriticalLevelVulRegistryImagePercentHasBeenSet() const
{
    return m_criticalLevelVulRegistryImagePercentHasBeenSet;
}


