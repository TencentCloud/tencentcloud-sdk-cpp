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

#include <tencentcloud/csip/v20221121/model/DescribeClusterSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterSummaryResponse::DescribeClusterSummaryResponse() :
    m_totalClusterCountHasBeenSet(false),
    m_alarmClusterCountHasBeenSet(false),
    m_riskClusterCountHasBeenSet(false),
    m_totalNodeCountHasBeenSet(false),
    m_totalCoreCountHasBeenSet(false),
    m_alarmEventCountHasBeenSet(false),
    m_criticalAlarmEventCountHasBeenSet(false),
    m_highAlarmEventCountHasBeenSet(false),
    m_middleAlarmEventCountHasBeenSet(false),
    m_lowAlarmEventCountHasBeenSet(false),
    m_riskEventCountHasBeenSet(false),
    m_criticalRiskEventCountHasBeenSet(false),
    m_highRiskEventCountHasBeenSet(false),
    m_middleRiskEventCountHasBeenSet(false),
    m_lowRiskEventCountHasBeenSet(false),
    m_usedCoreQuotaHasBeenSet(false),
    m_purchasedCoreQuotaHasBeenSet(false),
    m_elasticCoreQuotaHasBeenSet(false),
    m_unprotectedCoreCountHasBeenSet(false),
    m_protectedCoreCountHasBeenSet(false),
    m_unprotectedClusterCountHasBeenSet(false),
    m_protectedClusterCountHasBeenSet(false),
    m_tkeClusterCountHasBeenSet(false),
    m_selfBuiltClusterCountHasBeenSet(false),
    m_criticalAlarmClusterCountHasBeenSet(false),
    m_highAlarmClusterCountHasBeenSet(false),
    m_criticalRiskClusterCountHasBeenSet(false),
    m_highRiskClusterCountHasBeenSet(false),
    m_unboundUltimateNodeCountHasBeenSet(false)
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


    if (rsp.HasMember("TotalClusterCount") && !rsp["TotalClusterCount"].IsNull())
    {
        if (!rsp["TotalClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalClusterCount = rsp["TotalClusterCount"].GetUint64();
        m_totalClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmClusterCount") && !rsp["AlarmClusterCount"].IsNull())
    {
        if (!rsp["AlarmClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmClusterCount = rsp["AlarmClusterCount"].GetUint64();
        m_alarmClusterCountHasBeenSet = true;
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

    if (rsp.HasMember("TotalNodeCount") && !rsp["TotalNodeCount"].IsNull())
    {
        if (!rsp["TotalNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNodeCount = rsp["TotalNodeCount"].GetUint64();
        m_totalNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCoreCount") && !rsp["TotalCoreCount"].IsNull())
    {
        if (!rsp["TotalCoreCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCoreCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCoreCount = rsp["TotalCoreCount"].GetUint64();
        m_totalCoreCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEventCount") && !rsp["AlarmEventCount"].IsNull())
    {
        if (!rsp["AlarmEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventCount = rsp["AlarmEventCount"].GetUint64();
        m_alarmEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalAlarmEventCount") && !rsp["CriticalAlarmEventCount"].IsNull())
    {
        if (!rsp["CriticalAlarmEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalAlarmEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalAlarmEventCount = rsp["CriticalAlarmEventCount"].GetUint64();
        m_criticalAlarmEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighAlarmEventCount") && !rsp["HighAlarmEventCount"].IsNull())
    {
        if (!rsp["HighAlarmEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighAlarmEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highAlarmEventCount = rsp["HighAlarmEventCount"].GetUint64();
        m_highAlarmEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleAlarmEventCount") && !rsp["MiddleAlarmEventCount"].IsNull())
    {
        if (!rsp["MiddleAlarmEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiddleAlarmEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_middleAlarmEventCount = rsp["MiddleAlarmEventCount"].GetUint64();
        m_middleAlarmEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("LowAlarmEventCount") && !rsp["LowAlarmEventCount"].IsNull())
    {
        if (!rsp["LowAlarmEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LowAlarmEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowAlarmEventCount = rsp["LowAlarmEventCount"].GetUint64();
        m_lowAlarmEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventCount") && !rsp["RiskEventCount"].IsNull())
    {
        if (!rsp["RiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCount = rsp["RiskEventCount"].GetUint64();
        m_riskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalRiskEventCount") && !rsp["CriticalRiskEventCount"].IsNull())
    {
        if (!rsp["CriticalRiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalRiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRiskEventCount = rsp["CriticalRiskEventCount"].GetUint64();
        m_criticalRiskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskEventCount") && !rsp["HighRiskEventCount"].IsNull())
    {
        if (!rsp["HighRiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskEventCount = rsp["HighRiskEventCount"].GetUint64();
        m_highRiskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleRiskEventCount") && !rsp["MiddleRiskEventCount"].IsNull())
    {
        if (!rsp["MiddleRiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiddleRiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_middleRiskEventCount = rsp["MiddleRiskEventCount"].GetUint64();
        m_middleRiskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("LowRiskEventCount") && !rsp["LowRiskEventCount"].IsNull())
    {
        if (!rsp["LowRiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LowRiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowRiskEventCount = rsp["LowRiskEventCount"].GetUint64();
        m_lowRiskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("UsedCoreQuota") && !rsp["UsedCoreQuota"].IsNull())
    {
        if (!rsp["UsedCoreQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedCoreQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCoreQuota = rsp["UsedCoreQuota"].GetUint64();
        m_usedCoreQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("PurchasedCoreQuota") && !rsp["PurchasedCoreQuota"].IsNull())
    {
        if (!rsp["PurchasedCoreQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PurchasedCoreQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_purchasedCoreQuota = rsp["PurchasedCoreQuota"].GetUint64();
        m_purchasedCoreQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("ElasticCoreQuota") && !rsp["ElasticCoreQuota"].IsNull())
    {
        if (!rsp["ElasticCoreQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticCoreQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticCoreQuota = rsp["ElasticCoreQuota"].GetUint64();
        m_elasticCoreQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("UnprotectedCoreCount") && !rsp["UnprotectedCoreCount"].IsNull())
    {
        if (!rsp["UnprotectedCoreCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnprotectedCoreCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unprotectedCoreCount = rsp["UnprotectedCoreCount"].GetUint64();
        m_unprotectedCoreCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectedCoreCount") && !rsp["ProtectedCoreCount"].IsNull())
    {
        if (!rsp["ProtectedCoreCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedCoreCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCoreCount = rsp["ProtectedCoreCount"].GetUint64();
        m_protectedCoreCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnprotectedClusterCount") && !rsp["UnprotectedClusterCount"].IsNull())
    {
        if (!rsp["UnprotectedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnprotectedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unprotectedClusterCount = rsp["UnprotectedClusterCount"].GetUint64();
        m_unprotectedClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectedClusterCount") && !rsp["ProtectedClusterCount"].IsNull())
    {
        if (!rsp["ProtectedClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedClusterCount = rsp["ProtectedClusterCount"].GetUint64();
        m_protectedClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("TkeClusterCount") && !rsp["TkeClusterCount"].IsNull())
    {
        if (!rsp["TkeClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tkeClusterCount = rsp["TkeClusterCount"].GetUint64();
        m_tkeClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("SelfBuiltClusterCount") && !rsp["SelfBuiltClusterCount"].IsNull())
    {
        if (!rsp["SelfBuiltClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SelfBuiltClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuiltClusterCount = rsp["SelfBuiltClusterCount"].GetUint64();
        m_selfBuiltClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalAlarmClusterCount") && !rsp["CriticalAlarmClusterCount"].IsNull())
    {
        if (!rsp["CriticalAlarmClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalAlarmClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalAlarmClusterCount = rsp["CriticalAlarmClusterCount"].GetUint64();
        m_criticalAlarmClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighAlarmClusterCount") && !rsp["HighAlarmClusterCount"].IsNull())
    {
        if (!rsp["HighAlarmClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighAlarmClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highAlarmClusterCount = rsp["HighAlarmClusterCount"].GetUint64();
        m_highAlarmClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalRiskClusterCount") && !rsp["CriticalRiskClusterCount"].IsNull())
    {
        if (!rsp["CriticalRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRiskClusterCount = rsp["CriticalRiskClusterCount"].GetUint64();
        m_criticalRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskClusterCount") && !rsp["HighRiskClusterCount"].IsNull())
    {
        if (!rsp["HighRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskClusterCount = rsp["HighRiskClusterCount"].GetUint64();
        m_highRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnboundUltimateNodeCount") && !rsp["UnboundUltimateNodeCount"].IsNull())
    {
        if (!rsp["UnboundUltimateNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnboundUltimateNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unboundUltimateNodeCount = rsp["UnboundUltimateNodeCount"].GetUint64();
        m_unboundUltimateNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalClusterCount, allocator);
    }

    if (m_alarmClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmClusterCount, allocator);
    }

    if (m_riskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskClusterCount, allocator);
    }

    if (m_totalNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNodeCount, allocator);
    }

    if (m_totalCoreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCoreCount, allocator);
    }

    if (m_alarmEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventCount, allocator);
    }

    if (m_criticalAlarmEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalAlarmEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalAlarmEventCount, allocator);
    }

    if (m_highAlarmEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighAlarmEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highAlarmEventCount, allocator);
    }

    if (m_middleAlarmEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleAlarmEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleAlarmEventCount, allocator);
    }

    if (m_lowAlarmEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowAlarmEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowAlarmEventCount, allocator);
    }

    if (m_riskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventCount, allocator);
    }

    if (m_criticalRiskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRiskEventCount, allocator);
    }

    if (m_highRiskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskEventCount, allocator);
    }

    if (m_middleRiskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleRiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleRiskEventCount, allocator);
    }

    if (m_lowRiskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowRiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowRiskEventCount, allocator);
    }

    if (m_usedCoreQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCoreQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCoreQuota, allocator);
    }

    if (m_purchasedCoreQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchasedCoreQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_purchasedCoreQuota, allocator);
    }

    if (m_elasticCoreQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticCoreQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticCoreQuota, allocator);
    }

    if (m_unprotectedCoreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnprotectedCoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unprotectedCoreCount, allocator);
    }

    if (m_protectedCoreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedCoreCount, allocator);
    }

    if (m_unprotectedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnprotectedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unprotectedClusterCount, allocator);
    }

    if (m_protectedClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedClusterCount, allocator);
    }

    if (m_tkeClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tkeClusterCount, allocator);
    }

    if (m_selfBuiltClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuiltClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuiltClusterCount, allocator);
    }

    if (m_criticalAlarmClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalAlarmClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalAlarmClusterCount, allocator);
    }

    if (m_highAlarmClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighAlarmClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highAlarmClusterCount, allocator);
    }

    if (m_criticalRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRiskClusterCount, allocator);
    }

    if (m_highRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskClusterCount, allocator);
    }

    if (m_unboundUltimateNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnboundUltimateNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unboundUltimateNodeCount, allocator);
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


uint64_t DescribeClusterSummaryResponse::GetTotalClusterCount() const
{
    return m_totalClusterCount;
}

bool DescribeClusterSummaryResponse::TotalClusterCountHasBeenSet() const
{
    return m_totalClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetAlarmClusterCount() const
{
    return m_alarmClusterCount;
}

bool DescribeClusterSummaryResponse::AlarmClusterCountHasBeenSet() const
{
    return m_alarmClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetRiskClusterCount() const
{
    return m_riskClusterCount;
}

bool DescribeClusterSummaryResponse::RiskClusterCountHasBeenSet() const
{
    return m_riskClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetTotalNodeCount() const
{
    return m_totalNodeCount;
}

bool DescribeClusterSummaryResponse::TotalNodeCountHasBeenSet() const
{
    return m_totalNodeCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetTotalCoreCount() const
{
    return m_totalCoreCount;
}

bool DescribeClusterSummaryResponse::TotalCoreCountHasBeenSet() const
{
    return m_totalCoreCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetAlarmEventCount() const
{
    return m_alarmEventCount;
}

bool DescribeClusterSummaryResponse::AlarmEventCountHasBeenSet() const
{
    return m_alarmEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetCriticalAlarmEventCount() const
{
    return m_criticalAlarmEventCount;
}

bool DescribeClusterSummaryResponse::CriticalAlarmEventCountHasBeenSet() const
{
    return m_criticalAlarmEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetHighAlarmEventCount() const
{
    return m_highAlarmEventCount;
}

bool DescribeClusterSummaryResponse::HighAlarmEventCountHasBeenSet() const
{
    return m_highAlarmEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetMiddleAlarmEventCount() const
{
    return m_middleAlarmEventCount;
}

bool DescribeClusterSummaryResponse::MiddleAlarmEventCountHasBeenSet() const
{
    return m_middleAlarmEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetLowAlarmEventCount() const
{
    return m_lowAlarmEventCount;
}

bool DescribeClusterSummaryResponse::LowAlarmEventCountHasBeenSet() const
{
    return m_lowAlarmEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetRiskEventCount() const
{
    return m_riskEventCount;
}

bool DescribeClusterSummaryResponse::RiskEventCountHasBeenSet() const
{
    return m_riskEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetCriticalRiskEventCount() const
{
    return m_criticalRiskEventCount;
}

bool DescribeClusterSummaryResponse::CriticalRiskEventCountHasBeenSet() const
{
    return m_criticalRiskEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetHighRiskEventCount() const
{
    return m_highRiskEventCount;
}

bool DescribeClusterSummaryResponse::HighRiskEventCountHasBeenSet() const
{
    return m_highRiskEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetMiddleRiskEventCount() const
{
    return m_middleRiskEventCount;
}

bool DescribeClusterSummaryResponse::MiddleRiskEventCountHasBeenSet() const
{
    return m_middleRiskEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetLowRiskEventCount() const
{
    return m_lowRiskEventCount;
}

bool DescribeClusterSummaryResponse::LowRiskEventCountHasBeenSet() const
{
    return m_lowRiskEventCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetUsedCoreQuota() const
{
    return m_usedCoreQuota;
}

bool DescribeClusterSummaryResponse::UsedCoreQuotaHasBeenSet() const
{
    return m_usedCoreQuotaHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetPurchasedCoreQuota() const
{
    return m_purchasedCoreQuota;
}

bool DescribeClusterSummaryResponse::PurchasedCoreQuotaHasBeenSet() const
{
    return m_purchasedCoreQuotaHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetElasticCoreQuota() const
{
    return m_elasticCoreQuota;
}

bool DescribeClusterSummaryResponse::ElasticCoreQuotaHasBeenSet() const
{
    return m_elasticCoreQuotaHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetUnprotectedCoreCount() const
{
    return m_unprotectedCoreCount;
}

bool DescribeClusterSummaryResponse::UnprotectedCoreCountHasBeenSet() const
{
    return m_unprotectedCoreCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetProtectedCoreCount() const
{
    return m_protectedCoreCount;
}

bool DescribeClusterSummaryResponse::ProtectedCoreCountHasBeenSet() const
{
    return m_protectedCoreCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetUnprotectedClusterCount() const
{
    return m_unprotectedClusterCount;
}

bool DescribeClusterSummaryResponse::UnprotectedClusterCountHasBeenSet() const
{
    return m_unprotectedClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetProtectedClusterCount() const
{
    return m_protectedClusterCount;
}

bool DescribeClusterSummaryResponse::ProtectedClusterCountHasBeenSet() const
{
    return m_protectedClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetTkeClusterCount() const
{
    return m_tkeClusterCount;
}

bool DescribeClusterSummaryResponse::TkeClusterCountHasBeenSet() const
{
    return m_tkeClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetSelfBuiltClusterCount() const
{
    return m_selfBuiltClusterCount;
}

bool DescribeClusterSummaryResponse::SelfBuiltClusterCountHasBeenSet() const
{
    return m_selfBuiltClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetCriticalAlarmClusterCount() const
{
    return m_criticalAlarmClusterCount;
}

bool DescribeClusterSummaryResponse::CriticalAlarmClusterCountHasBeenSet() const
{
    return m_criticalAlarmClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetHighAlarmClusterCount() const
{
    return m_highAlarmClusterCount;
}

bool DescribeClusterSummaryResponse::HighAlarmClusterCountHasBeenSet() const
{
    return m_highAlarmClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetCriticalRiskClusterCount() const
{
    return m_criticalRiskClusterCount;
}

bool DescribeClusterSummaryResponse::CriticalRiskClusterCountHasBeenSet() const
{
    return m_criticalRiskClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetHighRiskClusterCount() const
{
    return m_highRiskClusterCount;
}

bool DescribeClusterSummaryResponse::HighRiskClusterCountHasBeenSet() const
{
    return m_highRiskClusterCountHasBeenSet;
}

uint64_t DescribeClusterSummaryResponse::GetUnboundUltimateNodeCount() const
{
    return m_unboundUltimateNodeCount;
}

bool DescribeClusterSummaryResponse::UnboundUltimateNodeCountHasBeenSet() const
{
    return m_unboundUltimateNodeCountHasBeenSet;
}


