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

#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBaselineStrategyDetailResponse::DescribeBaselineStrategyDetailResponse() :
    m_passRateHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_scanCycleHasBeenSet(false),
    m_scanAtHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_ifScannedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineStrategyDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PassRate") && !rsp["PassRate"].IsNull())
    {
        if (!rsp["PassRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PassRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = rsp["PassRate"].GetUint64();
        m_passRateHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyName") && !rsp["StrategyName"].IsNull())
    {
        if (!rsp["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(rsp["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (rsp.HasMember("ScanCycle") && !rsp["ScanCycle"].IsNull())
    {
        if (!rsp["ScanCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanCycle = string(rsp["ScanCycle"].GetString());
        m_scanCycleHasBeenSet = true;
    }

    if (rsp.HasMember("ScanAt") && !rsp["ScanAt"].IsNull())
    {
        if (!rsp["ScanAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanAt = string(rsp["ScanAt"].GetString());
        m_scanAtHasBeenSet = true;
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

    if (rsp.HasMember("MachineType") && !rsp["MachineType"].IsNull())
    {
        if (!rsp["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(rsp["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("Quuids") && !rsp["Quuids"].IsNull())
    {
        if (!rsp["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Quuids` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }

    if (rsp.HasMember("CategoryIds") && !rsp["CategoryIds"].IsNull())
    {
        if (!rsp["CategoryIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CategoryIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIds.push_back((*itr).GetString());
        }
        m_categoryIdsHasBeenSet = true;
    }

    if (rsp.HasMember("IfScanned") && !rsp["IfScanned"].IsNull())
    {
        if (!rsp["IfScanned"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IfScanned` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ifScanned = rsp["IfScanned"].GetUint64();
        m_ifScannedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineStrategyDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_scanAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ifScannedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfScanned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifScanned, allocator);
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


uint64_t DescribeBaselineStrategyDetailResponse::GetPassRate() const
{
    return m_passRate;
}

bool DescribeBaselineStrategyDetailResponse::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

string DescribeBaselineStrategyDetailResponse::GetStrategyName() const
{
    return m_strategyName;
}

bool DescribeBaselineStrategyDetailResponse::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string DescribeBaselineStrategyDetailResponse::GetScanCycle() const
{
    return m_scanCycle;
}

bool DescribeBaselineStrategyDetailResponse::ScanCycleHasBeenSet() const
{
    return m_scanCycleHasBeenSet;
}

string DescribeBaselineStrategyDetailResponse::GetScanAt() const
{
    return m_scanAt;
}

bool DescribeBaselineStrategyDetailResponse::ScanAtHasBeenSet() const
{
    return m_scanAtHasBeenSet;
}

uint64_t DescribeBaselineStrategyDetailResponse::GetIsGlobal() const
{
    return m_isGlobal;
}

bool DescribeBaselineStrategyDetailResponse::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string DescribeBaselineStrategyDetailResponse::GetMachineType() const
{
    return m_machineType;
}

bool DescribeBaselineStrategyDetailResponse::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string DescribeBaselineStrategyDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeBaselineStrategyDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> DescribeBaselineStrategyDetailResponse::GetQuuids() const
{
    return m_quuids;
}

bool DescribeBaselineStrategyDetailResponse::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> DescribeBaselineStrategyDetailResponse::GetCategoryIds() const
{
    return m_categoryIds;
}

bool DescribeBaselineStrategyDetailResponse::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

uint64_t DescribeBaselineStrategyDetailResponse::GetIfScanned() const
{
    return m_ifScanned;
}

bool DescribeBaselineStrategyDetailResponse::IfScannedHasBeenSet() const
{
    return m_ifScannedHasBeenSet;
}


