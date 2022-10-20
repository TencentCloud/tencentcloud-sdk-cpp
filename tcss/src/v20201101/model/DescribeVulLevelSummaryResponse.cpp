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

#include <tencentcloud/tcss/v20201101/model/DescribeVulLevelSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulLevelSummaryResponse::DescribeVulLevelSummaryResponse() :
    m_highLevelVulCountHasBeenSet(false),
    m_mediumLevelVulCountHasBeenSet(false),
    m_lowLevelVulCountHasBeenSet(false),
    m_criticalLevelVulCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulLevelSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HighLevelVulCount") && !rsp["HighLevelVulCount"].IsNull())
    {
        if (!rsp["HighLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelVulCount = rsp["HighLevelVulCount"].GetInt64();
        m_highLevelVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("MediumLevelVulCount") && !rsp["MediumLevelVulCount"].IsNull())
    {
        if (!rsp["MediumLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediumLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelVulCount = rsp["MediumLevelVulCount"].GetInt64();
        m_mediumLevelVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("LowLevelVulCount") && !rsp["LowLevelVulCount"].IsNull())
    {
        if (!rsp["LowLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LowLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelVulCount = rsp["LowLevelVulCount"].GetInt64();
        m_lowLevelVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalLevelVulCount") && !rsp["CriticalLevelVulCount"].IsNull())
    {
        if (!rsp["CriticalLevelVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalLevelVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalLevelVulCount = rsp["CriticalLevelVulCount"].GetInt64();
        m_criticalLevelVulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulLevelSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_highLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelVulCount, allocator);
    }

    if (m_mediumLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelVulCount, allocator);
    }

    if (m_lowLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelVulCount, allocator);
    }

    if (m_criticalLevelVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalLevelVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalLevelVulCount, allocator);
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


int64_t DescribeVulLevelSummaryResponse::GetHighLevelVulCount() const
{
    return m_highLevelVulCount;
}

bool DescribeVulLevelSummaryResponse::HighLevelVulCountHasBeenSet() const
{
    return m_highLevelVulCountHasBeenSet;
}

int64_t DescribeVulLevelSummaryResponse::GetMediumLevelVulCount() const
{
    return m_mediumLevelVulCount;
}

bool DescribeVulLevelSummaryResponse::MediumLevelVulCountHasBeenSet() const
{
    return m_mediumLevelVulCountHasBeenSet;
}

int64_t DescribeVulLevelSummaryResponse::GetLowLevelVulCount() const
{
    return m_lowLevelVulCount;
}

bool DescribeVulLevelSummaryResponse::LowLevelVulCountHasBeenSet() const
{
    return m_lowLevelVulCountHasBeenSet;
}

int64_t DescribeVulLevelSummaryResponse::GetCriticalLevelVulCount() const
{
    return m_criticalLevelVulCount;
}

bool DescribeVulLevelSummaryResponse::CriticalLevelVulCountHasBeenSet() const
{
    return m_criticalLevelVulCountHasBeenSet;
}


