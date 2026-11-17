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

#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanPersonalPackageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeTokenPlanPersonalPackageResponse::DescribeTokenPlanPersonalPackageResponse() :
    m_productTypeHasBeenSet(false),
    m_packageStatusHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_totalCreditsHasBeenSet(false),
    m_totalUsedHasBeenSet(false),
    m_cycleCreditsHasBeenSet(false),
    m_totalCyclesHasBeenSet(false),
    m_currentCycleHasBeenSet(false),
    m_remainCyclesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_periodEndDateHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_outputTokenHasBeenSet(false),
    m_inputTokenHasBeenSet(false),
    m_cacheTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTokenPlanPersonalPackageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProductType") && !rsp["ProductType"].IsNull())
    {
        if (!rsp["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(rsp["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PackageStatus") && !rsp["PackageStatus"].IsNull())
    {
        if (!rsp["PackageStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageStatus = string(rsp["PackageStatus"].GetString());
        m_packageStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCredits") && !rsp["TotalCredits"].IsNull())
    {
        if (!rsp["TotalCredits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCredits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredits = string(rsp["TotalCredits"].GetString());
        m_totalCreditsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalUsed") && !rsp["TotalUsed"].IsNull())
    {
        if (!rsp["TotalUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsed = string(rsp["TotalUsed"].GetString());
        m_totalUsedHasBeenSet = true;
    }

    if (rsp.HasMember("CycleCredits") && !rsp["CycleCredits"].IsNull())
    {
        if (!rsp["CycleCredits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CycleCredits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleCredits = string(rsp["CycleCredits"].GetString());
        m_cycleCreditsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCycles") && !rsp["TotalCycles"].IsNull())
    {
        if (!rsp["TotalCycles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCycles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCycles = rsp["TotalCycles"].GetInt64();
        m_totalCyclesHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentCycle") && !rsp["CurrentCycle"].IsNull())
    {
        if (!rsp["CurrentCycle"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentCycle` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentCycle = rsp["CurrentCycle"].GetInt64();
        m_currentCycleHasBeenSet = true;
    }

    if (rsp.HasMember("RemainCycles") && !rsp["RemainCycles"].IsNull())
    {
        if (!rsp["RemainCycles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainCycles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainCycles = rsp["RemainCycles"].GetInt64();
        m_remainCyclesHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PeriodEndDate") && !rsp["PeriodEndDate"].IsNull())
    {
        if (!rsp["PeriodEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndDate = string(rsp["PeriodEndDate"].GetString());
        m_periodEndDateHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("OutputToken") && !rsp["OutputToken"].IsNull())
    {
        if (!rsp["OutputToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputToken = rsp["OutputToken"].GetInt64();
        m_outputTokenHasBeenSet = true;
    }

    if (rsp.HasMember("InputToken") && !rsp["InputToken"].IsNull())
    {
        if (!rsp["InputToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputToken = rsp["InputToken"].GetInt64();
        m_inputTokenHasBeenSet = true;
    }

    if (rsp.HasMember("CacheToken") && !rsp["CacheToken"].IsNull())
    {
        if (!rsp["CacheToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheToken = rsp["CacheToken"].GetInt64();
        m_cacheTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTokenPlanPersonalPackageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCredits.c_str(), allocator).Move(), allocator);
    }

    if (m_totalUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleCredits.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCycles, allocator);
    }

    if (m_currentCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentCycle, allocator);
    }

    if (m_remainCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainCycles, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_outputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputToken, allocator);
    }

    if (m_inputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputToken, allocator);
    }

    if (m_cacheTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheToken, allocator);
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


string DescribeTokenPlanPersonalPackageResponse::GetProductType() const
{
    return m_productType;
}

bool DescribeTokenPlanPersonalPackageResponse::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetPackageStatus() const
{
    return m_packageStatus;
}

bool DescribeTokenPlanPersonalPackageResponse::PackageStatusHasBeenSet() const
{
    return m_packageStatusHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeTokenPlanPersonalPackageResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetTotalCredits() const
{
    return m_totalCredits;
}

bool DescribeTokenPlanPersonalPackageResponse::TotalCreditsHasBeenSet() const
{
    return m_totalCreditsHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetTotalUsed() const
{
    return m_totalUsed;
}

bool DescribeTokenPlanPersonalPackageResponse::TotalUsedHasBeenSet() const
{
    return m_totalUsedHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetCycleCredits() const
{
    return m_cycleCredits;
}

bool DescribeTokenPlanPersonalPackageResponse::CycleCreditsHasBeenSet() const
{
    return m_cycleCreditsHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetTotalCycles() const
{
    return m_totalCycles;
}

bool DescribeTokenPlanPersonalPackageResponse::TotalCyclesHasBeenSet() const
{
    return m_totalCyclesHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetCurrentCycle() const
{
    return m_currentCycle;
}

bool DescribeTokenPlanPersonalPackageResponse::CurrentCycleHasBeenSet() const
{
    return m_currentCycleHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetRemainCycles() const
{
    return m_remainCycles;
}

bool DescribeTokenPlanPersonalPackageResponse::RemainCyclesHasBeenSet() const
{
    return m_remainCyclesHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeTokenPlanPersonalPackageResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeTokenPlanPersonalPackageResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeTokenPlanPersonalPackageResponse::GetPeriodEndDate() const
{
    return m_periodEndDate;
}

bool DescribeTokenPlanPersonalPackageResponse::PeriodEndDateHasBeenSet() const
{
    return m_periodEndDateHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeTokenPlanPersonalPackageResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetOutputToken() const
{
    return m_outputToken;
}

bool DescribeTokenPlanPersonalPackageResponse::OutputTokenHasBeenSet() const
{
    return m_outputTokenHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetInputToken() const
{
    return m_inputToken;
}

bool DescribeTokenPlanPersonalPackageResponse::InputTokenHasBeenSet() const
{
    return m_inputTokenHasBeenSet;
}

int64_t DescribeTokenPlanPersonalPackageResponse::GetCacheToken() const
{
    return m_cacheToken;
}

bool DescribeTokenPlanPersonalPackageResponse::CacheTokenHasBeenSet() const
{
    return m_cacheTokenHasBeenSet;
}


