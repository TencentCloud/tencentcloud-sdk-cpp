/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeBaselineOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselineOverviewResponse::DescribeBaselineOverviewResponse() :
    m_statisticsHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_enableCycleScanHasBeenSet(false),
    m_scanningTaskCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Statistics") && !rsp["Statistics"].IsNull())
    {
        if (!rsp["Statistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Statistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statistics.Deserialize(rsp["Statistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticsHasBeenSet = true;
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

    if (rsp.HasMember("EnableCycleScan") && !rsp["EnableCycleScan"].IsNull())
    {
        if (!rsp["EnableCycleScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableCycleScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCycleScan = rsp["EnableCycleScan"].GetBool();
        m_enableCycleScanHasBeenSet = true;
    }

    if (rsp.HasMember("ScanningTaskCount") && !rsp["ScanningTaskCount"].IsNull())
    {
        if (!rsp["ScanningTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanningTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanningTaskCount = rsp["ScanningTaskCount"].GetUint64();
        m_scanningTaskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCycleScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCycleScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCycleScan, allocator);
    }

    if (m_scanningTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanningTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanningTaskCount, allocator);
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


BaselineOverviewStatistic DescribeBaselineOverviewResponse::GetStatistics() const
{
    return m_statistics;
}

bool DescribeBaselineOverviewResponse::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

string DescribeBaselineOverviewResponse::GetLatestScanTime() const
{
    return m_latestScanTime;
}

bool DescribeBaselineOverviewResponse::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

bool DescribeBaselineOverviewResponse::GetEnableCycleScan() const
{
    return m_enableCycleScan;
}

bool DescribeBaselineOverviewResponse::EnableCycleScanHasBeenSet() const
{
    return m_enableCycleScanHasBeenSet;
}

uint64_t DescribeBaselineOverviewResponse::GetScanningTaskCount() const
{
    return m_scanningTaskCount;
}

bool DescribeBaselineOverviewResponse::ScanningTaskCountHasBeenSet() const
{
    return m_scanningTaskCountHasBeenSet;
}


