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

#include <tencentcloud/csip/v20221121/model/DescribeEDRScanTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeEDRScanTaskDetailResponse::DescribeEDRScanTaskDetailResponse() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_customPathsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_enableMemShellScanHasBeenSet(false),
    m_createAppIDHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_totalAssetCountHasBeenSet(false),
    m_finishedAssetCountHasBeenSet(false),
    m_riskAssetCountHasBeenSet(false),
    m_hostListHasBeenSet(false),
    m_containerListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEDRScanTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TriggerType") && !rsp["TriggerType"].IsNull())
    {
        if (!rsp["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(rsp["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
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

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanType") && !rsp["ScanType"].IsNull())
    {
        if (!rsp["ScanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanType = string(rsp["ScanType"].GetString());
        m_scanTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CustomPaths") && !rsp["CustomPaths"].IsNull())
    {
        if (!rsp["CustomPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPaths` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customPaths.push_back((*itr).GetString());
        }
        m_customPathsHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("EnableMemShellScan") && !rsp["EnableMemShellScan"].IsNull())
    {
        if (!rsp["EnableMemShellScan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableMemShellScan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMemShellScan = rsp["EnableMemShellScan"].GetInt64();
        m_enableMemShellScanHasBeenSet = true;
    }

    if (rsp.HasMember("CreateAppID") && !rsp["CreateAppID"].IsNull())
    {
        if (!rsp["CreateAppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createAppID = rsp["CreateAppID"].GetUint64();
        m_createAppIDHasBeenSet = true;
    }

    if (rsp.HasMember("AccountName") && !rsp["AccountName"].IsNull())
    {
        if (!rsp["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(rsp["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (rsp.HasMember("CloudType") && !rsp["CloudType"].IsNull())
    {
        if (!rsp["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = rsp["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAssetCount") && !rsp["TotalAssetCount"].IsNull())
    {
        if (!rsp["TotalAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAssetCount = rsp["TotalAssetCount"].GetInt64();
        m_totalAssetCountHasBeenSet = true;
    }

    if (rsp.HasMember("FinishedAssetCount") && !rsp["FinishedAssetCount"].IsNull())
    {
        if (!rsp["FinishedAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FinishedAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAssetCount = rsp["FinishedAssetCount"].GetInt64();
        m_finishedAssetCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskAssetCount") && !rsp["RiskAssetCount"].IsNull())
    {
        if (!rsp["RiskAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssetCount = rsp["RiskAssetCount"].GetInt64();
        m_riskAssetCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostList") && !rsp["HostList"].IsNull())
    {
        if (!rsp["HostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EDRScanTaskHostItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostList.push_back(item);
        }
        m_hostListHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerList") && !rsp["ContainerList"].IsNull())
    {
        if (!rsp["ContainerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ContainerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EDRScanTaskContainerItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containerList.push_back(item);
        }
        m_containerListHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeEDRScanTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_customPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customPaths.begin(); itr != m_customPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_enableMemShellScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMemShellScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMemShellScan, allocator);
    }

    if (m_createAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAppID, allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_totalAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAssetCount, allocator);
    }

    if (m_finishedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedAssetCount, allocator);
    }

    if (m_riskAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskAssetCount, allocator);
    }

    if (m_hostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostList.begin(); itr != m_hostList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_containerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containerList.begin(); itr != m_containerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


uint64_t DescribeEDRScanTaskDetailResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeEDRScanTaskDetailResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeEDRScanTaskDetailResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeEDRScanTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeEDRScanTaskDetailResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetTriggerType() const
{
    return m_triggerType;
}

bool DescribeEDRScanTaskDetailResponse::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeEDRScanTaskDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeEDRScanTaskDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetScanType() const
{
    return m_scanType;
}

bool DescribeEDRScanTaskDetailResponse::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<string> DescribeEDRScanTaskDetailResponse::GetCustomPaths() const
{
    return m_customPaths;
}

bool DescribeEDRScanTaskDetailResponse::CustomPathsHasBeenSet() const
{
    return m_customPathsHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetTimeout() const
{
    return m_timeout;
}

bool DescribeEDRScanTaskDetailResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetEnableMemShellScan() const
{
    return m_enableMemShellScan;
}

bool DescribeEDRScanTaskDetailResponse::EnableMemShellScanHasBeenSet() const
{
    return m_enableMemShellScanHasBeenSet;
}

uint64_t DescribeEDRScanTaskDetailResponse::GetCreateAppID() const
{
    return m_createAppID;
}

bool DescribeEDRScanTaskDetailResponse::CreateAppIDHasBeenSet() const
{
    return m_createAppIDHasBeenSet;
}

string DescribeEDRScanTaskDetailResponse::GetAccountName() const
{
    return m_accountName;
}

bool DescribeEDRScanTaskDetailResponse::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetCloudType() const
{
    return m_cloudType;
}

bool DescribeEDRScanTaskDetailResponse::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetTotalAssetCount() const
{
    return m_totalAssetCount;
}

bool DescribeEDRScanTaskDetailResponse::TotalAssetCountHasBeenSet() const
{
    return m_totalAssetCountHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetFinishedAssetCount() const
{
    return m_finishedAssetCount;
}

bool DescribeEDRScanTaskDetailResponse::FinishedAssetCountHasBeenSet() const
{
    return m_finishedAssetCountHasBeenSet;
}

int64_t DescribeEDRScanTaskDetailResponse::GetRiskAssetCount() const
{
    return m_riskAssetCount;
}

bool DescribeEDRScanTaskDetailResponse::RiskAssetCountHasBeenSet() const
{
    return m_riskAssetCountHasBeenSet;
}

vector<EDRScanTaskHostItem> DescribeEDRScanTaskDetailResponse::GetHostList() const
{
    return m_hostList;
}

bool DescribeEDRScanTaskDetailResponse::HostListHasBeenSet() const
{
    return m_hostListHasBeenSet;
}

vector<EDRScanTaskContainerItem> DescribeEDRScanTaskDetailResponse::GetContainerList() const
{
    return m_containerList;
}

bool DescribeEDRScanTaskDetailResponse::ContainerListHasBeenSet() const
{
    return m_containerListHasBeenSet;
}

uint64_t DescribeEDRScanTaskDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeEDRScanTaskDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


