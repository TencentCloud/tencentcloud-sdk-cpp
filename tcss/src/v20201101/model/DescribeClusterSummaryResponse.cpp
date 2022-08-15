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

#include <tencentcloud/tcss/v20201101/model/DescribeClusterSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeClusterSummaryResponse::DescribeClusterSummaryResponse() :
    m_totalCountHasBeenSet(false),
    m_riskClusterCountHasBeenSet(false),
    m_uncheckClusterCountHasBeenSet(false),
    m_managedClusterCountHasBeenSet(false),
    m_independentClusterCountHasBeenSet(false),
    m_noRiskClusterCountHasBeenSet(false),
    m_checkedClusterCountHasBeenSet(false),
    m_autoCheckClusterCountHasBeenSet(false),
    m_manualCheckClusterCountHasBeenSet(false),
    m_failedClusterCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskClusterCount") && !rsp["RiskClusterCount"].IsNull())
    {
        if (!rsp["RiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskClusterCount = rsp["RiskClusterCount"].GetUint64();
        m_riskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("UncheckClusterCount") && !rsp["UncheckClusterCount"].IsNull())
    {
        if (!rsp["UncheckClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UncheckClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uncheckClusterCount = rsp["UncheckClusterCount"].GetUint64();
        m_uncheckClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManagedClusterCount") && !rsp["ManagedClusterCount"].IsNull())
    {
        if (!rsp["ManagedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_managedClusterCount = rsp["ManagedClusterCount"].GetUint64();
        m_managedClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("IndependentClusterCount") && !rsp["IndependentClusterCount"].IsNull())
    {
        if (!rsp["IndependentClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IndependentClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_independentClusterCount = rsp["IndependentClusterCount"].GetUint64();
        m_independentClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("NoRiskClusterCount") && !rsp["NoRiskClusterCount"].IsNull())
    {
        if (!rsp["NoRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_noRiskClusterCount = rsp["NoRiskClusterCount"].GetUint64();
        m_noRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("CheckedClusterCount") && !rsp["CheckedClusterCount"].IsNull())
    {
        if (!rsp["CheckedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkedClusterCount = rsp["CheckedClusterCount"].GetUint64();
        m_checkedClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("AutoCheckClusterCount") && !rsp["AutoCheckClusterCount"].IsNull())
    {
        if (!rsp["AutoCheckClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCheckClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoCheckClusterCount = rsp["AutoCheckClusterCount"].GetUint64();
        m_autoCheckClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManualCheckClusterCount") && !rsp["ManualCheckClusterCount"].IsNull())
    {
        if (!rsp["ManualCheckClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualCheckClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualCheckClusterCount = rsp["ManualCheckClusterCount"].GetUint64();
        m_manualCheckClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailedClusterCount") && !rsp["FailedClusterCount"].IsNull())
    {
        if (!rsp["FailedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedClusterCount = rsp["FailedClusterCount"].GetUint64();
        m_failedClusterCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_riskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskClusterCount, allocator);
    }

    if (m_uncheckClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncheckClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncheckClusterCount, allocator);
    }

    if (m_managedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managedClusterCount, allocator);
    }

    if (m_independentClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndependentClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_independentClusterCount, allocator);
    }

    if (m_noRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noRiskClusterCount, allocator);
    }

    if (m_checkedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkedClusterCount, allocator);
    }

    if (m_autoCheckClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCheckClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCheckClusterCount, allocator);
    }

    if (m_manualCheckClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualCheckClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualCheckClusterCount, allocator);
    }

    if (m_failedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedClusterCount, allocator);
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


uint64_t DescribeClusterSummaryResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeClusterSummaryResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetRiskClusterCount() const
{
    return m_riskClusterCount;
}

bool DescribeClusterSummaryResponse::RiskClusterCountHasBeenSet() const
{
    return m_riskClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetUncheckClusterCount() const
{
    return m_uncheckClusterCount;
}

bool DescribeClusterSummaryResponse::UncheckClusterCountHasBeenSet() const
{
    return m_uncheckClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetManagedClusterCount() const
{
    return m_managedClusterCount;
}

bool DescribeClusterSummaryResponse::ManagedClusterCountHasBeenSet() const
{
    return m_managedClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetIndependentClusterCount() const
{
    return m_independentClusterCount;
}

bool DescribeClusterSummaryResponse::IndependentClusterCountHasBeenSet() const
{
    return m_independentClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetNoRiskClusterCount() const
{
    return m_noRiskClusterCount;
}

bool DescribeClusterSummaryResponse::NoRiskClusterCountHasBeenSet() const
{
    return m_noRiskClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetCheckedClusterCount() const
{
    return m_checkedClusterCount;
}

bool DescribeClusterSummaryResponse::CheckedClusterCountHasBeenSet() const
{
    return m_checkedClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetAutoCheckClusterCount() const
{
    return m_autoCheckClusterCount;
}

bool DescribeClusterSummaryResponse::AutoCheckClusterCountHasBeenSet() const
{
    return m_autoCheckClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetManualCheckClusterCount() const
{
    return m_manualCheckClusterCount;
}

bool DescribeClusterSummaryResponse::ManualCheckClusterCountHasBeenSet() const
{
    return m_manualCheckClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetFailedClusterCount() const
{
    return m_failedClusterCount;
}

bool DescribeClusterSummaryResponse::FailedClusterCountHasBeenSet() const
{
    return m_failedClusterCountHasBeenSet;
}


