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

#include <tencentcloud/tcb/v20180608/model/DescribeCreditsUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCreditsUsageResponse::DescribeCreditsUsageResponse() :
    m_deductValueHasBeenSet(false),
    m_packageDeductValueHasBeenSet(false),
    m_reportValueHasBeenSet(false),
    m_historyDeductedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCreditsUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeductValue") && !rsp["DeductValue"].IsNull())
    {
        if (!rsp["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = rsp["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (rsp.HasMember("PackageDeductValue") && !rsp["PackageDeductValue"].IsNull())
    {
        if (!rsp["PackageDeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValue = rsp["PackageDeductValue"].GetDouble();
        m_packageDeductValueHasBeenSet = true;
    }

    if (rsp.HasMember("ReportValue") && !rsp["ReportValue"].IsNull())
    {
        if (!rsp["ReportValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValue = rsp["ReportValue"].GetDouble();
        m_reportValueHasBeenSet = true;
    }

    if (rsp.HasMember("HistoryDeducted") && !rsp["HistoryDeducted"].IsNull())
    {
        if (!rsp["HistoryDeducted"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryDeducted` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_historyDeducted = rsp["HistoryDeducted"].GetDouble();
        m_historyDeductedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCreditsUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValue, allocator);
    }

    if (m_packageDeductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageDeductValue, allocator);
    }

    if (m_reportValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportValue, allocator);
    }

    if (m_historyDeductedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryDeducted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyDeducted, allocator);
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


double DescribeCreditsUsageResponse::GetDeductValue() const
{
    return m_deductValue;
}

bool DescribeCreditsUsageResponse::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double DescribeCreditsUsageResponse::GetPackageDeductValue() const
{
    return m_packageDeductValue;
}

bool DescribeCreditsUsageResponse::PackageDeductValueHasBeenSet() const
{
    return m_packageDeductValueHasBeenSet;
}

double DescribeCreditsUsageResponse::GetReportValue() const
{
    return m_reportValue;
}

bool DescribeCreditsUsageResponse::ReportValueHasBeenSet() const
{
    return m_reportValueHasBeenSet;
}

double DescribeCreditsUsageResponse::GetHistoryDeducted() const
{
    return m_historyDeducted;
}

bool DescribeCreditsUsageResponse::HistoryDeductedHasBeenSet() const
{
    return m_historyDeductedHasBeenSet;
}


