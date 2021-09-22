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

#include <tencentcloud/cwp/v20180228/model/DescribeBaselineAnalysisDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBaselineAnalysisDataResponse::DescribeBaselineAnalysisDataResponse() :
    m_latestScanTimeHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_scanHostCountHasBeenSet(false),
    m_scanRuleCountHasBeenSet(false),
    m_ifFirstScanHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineAnalysisDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LatestScanTime") && !rsp["LatestScanTime"].IsNull())
    {
        if (!rsp["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(rsp["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsGlobal") && !rsp["IsGlobal"].IsNull())
    {
        if (!rsp["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = rsp["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (rsp.HasMember("ScanHostCount") && !rsp["ScanHostCount"].IsNull())
    {
        if (!rsp["ScanHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanHostCount = rsp["ScanHostCount"].GetUint64();
        m_scanHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanRuleCount") && !rsp["ScanRuleCount"].IsNull())
    {
        if (!rsp["ScanRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanRuleCount = rsp["ScanRuleCount"].GetUint64();
        m_scanRuleCountHasBeenSet = true;
    }

    if (rsp.HasMember("IfFirstScan") && !rsp["IfFirstScan"].IsNull())
    {
        if (!rsp["IfFirstScan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IfFirstScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ifFirstScan = rsp["IfFirstScan"].GetUint64();
        m_ifFirstScanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineAnalysisDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_scanHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanHostCount, allocator);
    }

    if (m_scanRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanRuleCount, allocator);
    }

    if (m_ifFirstScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfFirstScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifFirstScan, allocator);
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


string DescribeBaselineAnalysisDataResponse::GetLatestScanTime() const
{
    return m_latestScanTime;
}

bool DescribeBaselineAnalysisDataResponse::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

uint64_t DescribeBaselineAnalysisDataResponse::GetIsGlobal() const
{
    return m_isGlobal;
}

bool DescribeBaselineAnalysisDataResponse::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t DescribeBaselineAnalysisDataResponse::GetScanHostCount() const
{
    return m_scanHostCount;
}

bool DescribeBaselineAnalysisDataResponse::ScanHostCountHasBeenSet() const
{
    return m_scanHostCountHasBeenSet;
}

uint64_t DescribeBaselineAnalysisDataResponse::GetScanRuleCount() const
{
    return m_scanRuleCount;
}

bool DescribeBaselineAnalysisDataResponse::ScanRuleCountHasBeenSet() const
{
    return m_scanRuleCountHasBeenSet;
}

uint64_t DescribeBaselineAnalysisDataResponse::GetIfFirstScan() const
{
    return m_ifFirstScan;
}

bool DescribeBaselineAnalysisDataResponse::IfFirstScanHasBeenSet() const
{
    return m_ifFirstScanHasBeenSet;
}


