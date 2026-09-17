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

#include <tencentcloud/tcb/v20180608/model/DescribePlatformCreditsUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribePlatformCreditsUsageResponse::DescribePlatformCreditsUsageResponse() :
    m_deductValueCountHasBeenSet(false),
    m_packageDeductValueCountHasBeenSet(false),
    m_reportValueCountHasBeenSet(false),
    m_dailyListHasBeenSet(false)
{
}

CoreInternalOutcome DescribePlatformCreditsUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeductValueCount") && !rsp["DeductValueCount"].IsNull())
    {
        if (!rsp["DeductValueCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeductValueCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValueCount = rsp["DeductValueCount"].GetDouble();
        m_deductValueCountHasBeenSet = true;
    }

    if (rsp.HasMember("PackageDeductValueCount") && !rsp["PackageDeductValueCount"].IsNull())
    {
        if (!rsp["PackageDeductValueCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDeductValueCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValueCount = rsp["PackageDeductValueCount"].GetDouble();
        m_packageDeductValueCountHasBeenSet = true;
    }

    if (rsp.HasMember("ReportValueCount") && !rsp["ReportValueCount"].IsNull())
    {
        if (!rsp["ReportValueCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportValueCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValueCount = rsp["ReportValueCount"].GetDouble();
        m_reportValueCountHasBeenSet = true;
    }

    if (rsp.HasMember("DailyList") && !rsp["DailyList"].IsNull())
    {
        if (!rsp["DailyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DailyList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DailyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlatformCreditsUsageDaily item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dailyList.push_back(item);
        }
        m_dailyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePlatformCreditsUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deductValueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValueCount, allocator);
    }

    if (m_packageDeductValueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDeductValueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageDeductValueCount, allocator);
    }

    if (m_reportValueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportValueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportValueCount, allocator);
    }

    if (m_dailyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dailyList.begin(); itr != m_dailyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


double DescribePlatformCreditsUsageResponse::GetDeductValueCount() const
{
    return m_deductValueCount;
}

bool DescribePlatformCreditsUsageResponse::DeductValueCountHasBeenSet() const
{
    return m_deductValueCountHasBeenSet;
}

double DescribePlatformCreditsUsageResponse::GetPackageDeductValueCount() const
{
    return m_packageDeductValueCount;
}

bool DescribePlatformCreditsUsageResponse::PackageDeductValueCountHasBeenSet() const
{
    return m_packageDeductValueCountHasBeenSet;
}

double DescribePlatformCreditsUsageResponse::GetReportValueCount() const
{
    return m_reportValueCount;
}

bool DescribePlatformCreditsUsageResponse::ReportValueCountHasBeenSet() const
{
    return m_reportValueCountHasBeenSet;
}

vector<PlatformCreditsUsageDaily> DescribePlatformCreditsUsageResponse::GetDailyList() const
{
    return m_dailyList;
}

bool DescribePlatformCreditsUsageResponse::DailyListHasBeenSet() const
{
    return m_dailyListHasBeenSet;
}


