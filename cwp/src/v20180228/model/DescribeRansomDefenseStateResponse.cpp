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

#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeRansomDefenseStateResponse::DescribeRansomDefenseStateResponse() :
    m_strategyCountHasBeenSet(false),
    m_machineCountHasBeenSet(false),
    m_snapshotSizeHasBeenSet(false),
    m_rollBackTaskCountHasBeenSet(false),
    m_progressingSnapshotTaskCountHasBeenSet(false),
    m_progressingRollBackTaskCountHasBeenSet(false),
    m_machineTotalHasBeenSet(false),
    m_strategyTotalHasBeenSet(false),
    m_balanceStatusHasBeenSet(false),
    m_backupMachineCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRansomDefenseStateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StrategyCount") && !rsp["StrategyCount"].IsNull())
    {
        if (!rsp["StrategyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCount = rsp["StrategyCount"].GetUint64();
        m_strategyCountHasBeenSet = true;
    }

    if (rsp.HasMember("MachineCount") && !rsp["MachineCount"].IsNull())
    {
        if (!rsp["MachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCount = rsp["MachineCount"].GetUint64();
        m_machineCountHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotSize") && !rsp["SnapshotSize"].IsNull())
    {
        if (!rsp["SnapshotSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotSize = rsp["SnapshotSize"].GetUint64();
        m_snapshotSizeHasBeenSet = true;
    }

    if (rsp.HasMember("RollBackTaskCount") && !rsp["RollBackTaskCount"].IsNull())
    {
        if (!rsp["RollBackTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RollBackTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rollBackTaskCount = rsp["RollBackTaskCount"].GetUint64();
        m_rollBackTaskCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProgressingSnapshotTaskCount") && !rsp["ProgressingSnapshotTaskCount"].IsNull())
    {
        if (!rsp["ProgressingSnapshotTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgressingSnapshotTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progressingSnapshotTaskCount = rsp["ProgressingSnapshotTaskCount"].GetUint64();
        m_progressingSnapshotTaskCountHasBeenSet = true;
    }

    if (rsp.HasMember("ProgressingRollBackTaskCount") && !rsp["ProgressingRollBackTaskCount"].IsNull())
    {
        if (!rsp["ProgressingRollBackTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgressingRollBackTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progressingRollBackTaskCount = rsp["ProgressingRollBackTaskCount"].GetUint64();
        m_progressingRollBackTaskCountHasBeenSet = true;
    }

    if (rsp.HasMember("MachineTotal") && !rsp["MachineTotal"].IsNull())
    {
        if (!rsp["MachineTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineTotal = rsp["MachineTotal"].GetUint64();
        m_machineTotalHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyTotal") && !rsp["StrategyTotal"].IsNull())
    {
        if (!rsp["StrategyTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyTotal = rsp["StrategyTotal"].GetUint64();
        m_strategyTotalHasBeenSet = true;
    }

    if (rsp.HasMember("BalanceStatus") && !rsp["BalanceStatus"].IsNull())
    {
        if (!rsp["BalanceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_balanceStatus = rsp["BalanceStatus"].GetUint64();
        m_balanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BackupMachineCount") && !rsp["BackupMachineCount"].IsNull())
    {
        if (!rsp["BackupMachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupMachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupMachineCount = rsp["BackupMachineCount"].GetUint64();
        m_backupMachineCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRansomDefenseStateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_strategyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyCount, allocator);
    }

    if (m_machineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCount, allocator);
    }

    if (m_snapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotSize, allocator);
    }

    if (m_rollBackTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollBackTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollBackTaskCount, allocator);
    }

    if (m_progressingSnapshotTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressingSnapshotTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressingSnapshotTaskCount, allocator);
    }

    if (m_progressingRollBackTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressingRollBackTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressingRollBackTaskCount, allocator);
    }

    if (m_machineTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineTotal, allocator);
    }

    if (m_strategyTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyTotal, allocator);
    }

    if (m_balanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balanceStatus, allocator);
    }

    if (m_backupMachineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupMachineCount, allocator);
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


uint64_t DescribeRansomDefenseStateResponse::GetStrategyCount() const
{
    return m_strategyCount;
}

bool DescribeRansomDefenseStateResponse::StrategyCountHasBeenSet() const
{
    return m_strategyCountHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetMachineCount() const
{
    return m_machineCount;
}

bool DescribeRansomDefenseStateResponse::MachineCountHasBeenSet() const
{
    return m_machineCountHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetSnapshotSize() const
{
    return m_snapshotSize;
}

bool DescribeRansomDefenseStateResponse::SnapshotSizeHasBeenSet() const
{
    return m_snapshotSizeHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetRollBackTaskCount() const
{
    return m_rollBackTaskCount;
}

bool DescribeRansomDefenseStateResponse::RollBackTaskCountHasBeenSet() const
{
    return m_rollBackTaskCountHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetProgressingSnapshotTaskCount() const
{
    return m_progressingSnapshotTaskCount;
}

bool DescribeRansomDefenseStateResponse::ProgressingSnapshotTaskCountHasBeenSet() const
{
    return m_progressingSnapshotTaskCountHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetProgressingRollBackTaskCount() const
{
    return m_progressingRollBackTaskCount;
}

bool DescribeRansomDefenseStateResponse::ProgressingRollBackTaskCountHasBeenSet() const
{
    return m_progressingRollBackTaskCountHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetMachineTotal() const
{
    return m_machineTotal;
}

bool DescribeRansomDefenseStateResponse::MachineTotalHasBeenSet() const
{
    return m_machineTotalHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetStrategyTotal() const
{
    return m_strategyTotal;
}

bool DescribeRansomDefenseStateResponse::StrategyTotalHasBeenSet() const
{
    return m_strategyTotalHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetBalanceStatus() const
{
    return m_balanceStatus;
}

bool DescribeRansomDefenseStateResponse::BalanceStatusHasBeenSet() const
{
    return m_balanceStatusHasBeenSet;
}

uint64_t DescribeRansomDefenseStateResponse::GetBackupMachineCount() const
{
    return m_backupMachineCount;
}

bool DescribeRansomDefenseStateResponse::BackupMachineCountHasBeenSet() const
{
    return m_backupMachineCountHasBeenSet;
}


