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

#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVulScanTaskDetailResponse::DescribeVulScanTaskDetailResponse() :
    m_listHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_vulsHasBeenSet(false),
    m_scannedHasBeenSet(false),
    m_riskHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_taskPdfHasBeenSet(false),
    m_taskExcelHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_kbNoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulScanTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulScanTaskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Vuls") && !rsp["Vuls"].IsNull())
    {
        if (!rsp["Vuls"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vuls` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vuls = rsp["Vuls"].GetUint64();
        m_vulsHasBeenSet = true;
    }

    if (rsp.HasMember("Scanned") && !rsp["Scanned"].IsNull())
    {
        if (!rsp["Scanned"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Scanned` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanned = rsp["Scanned"].GetUint64();
        m_scannedHasBeenSet = true;
    }

    if (rsp.HasMember("Risk") && !rsp["Risk"].IsNull())
    {
        if (!rsp["Risk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Risk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_risk = rsp["Risk"].GetUint64();
        m_riskHasBeenSet = true;
    }

    if (rsp.HasMember("Failed") && !rsp["Failed"].IsNull())
    {
        if (!rsp["Failed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Failed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failed = rsp["Failed"].GetUint64();
        m_failedHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("TaskPdf") && !rsp["TaskPdf"].IsNull())
    {
        if (!rsp["TaskPdf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskPdf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPdf = string(rsp["TaskPdf"].GetString());
        m_taskPdfHasBeenSet = true;
    }

    if (rsp.HasMember("TaskExcel") && !rsp["TaskExcel"].IsNull())
    {
        if (!rsp["TaskExcel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskExcel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskExcel = string(rsp["TaskExcel"].GetString());
        m_taskExcelHasBeenSet = true;
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

    if (rsp.HasMember("VulId") && !rsp["VulId"].IsNull())
    {
        if (!rsp["VulId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulId` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulId.push_back((*itr).GetUint64());
        }
        m_vulIdHasBeenSet = true;
    }

    if (rsp.HasMember("KbNo") && !rsp["KbNo"].IsNull())
    {
        if (!rsp["KbNo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KbNo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KbNo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kbNo.push_back((*itr).GetString());
        }
        m_kbNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulScanTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_vulsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vuls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vuls, allocator);
    }

    if (m_scannedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scanned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanned, allocator);
    }

    if (m_riskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_risk, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_taskPdfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPdf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPdf.c_str(), allocator).Move(), allocator);
    }

    if (m_taskExcelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExcel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskExcel.c_str(), allocator).Move(), allocator);
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

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulId.begin(); itr != m_vulId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_kbNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kbNo.begin(); itr != m_kbNo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


vector<VulScanTaskDetail> DescribeVulScanTaskDetailResponse::GetList() const
{
    return m_list;
}

bool DescribeVulScanTaskDetailResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetTotal() const
{
    return m_total;
}

bool DescribeVulScanTaskDetailResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetVuls() const
{
    return m_vuls;
}

bool DescribeVulScanTaskDetailResponse::VulsHasBeenSet() const
{
    return m_vulsHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetScanned() const
{
    return m_scanned;
}

bool DescribeVulScanTaskDetailResponse::ScannedHasBeenSet() const
{
    return m_scannedHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetRisk() const
{
    return m_risk;
}

bool DescribeVulScanTaskDetailResponse::RiskHasBeenSet() const
{
    return m_riskHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetFailed() const
{
    return m_failed;
}

bool DescribeVulScanTaskDetailResponse::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

uint64_t DescribeVulScanTaskDetailResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeVulScanTaskDetailResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string DescribeVulScanTaskDetailResponse::GetTaskPdf() const
{
    return m_taskPdf;
}

bool DescribeVulScanTaskDetailResponse::TaskPdfHasBeenSet() const
{
    return m_taskPdfHasBeenSet;
}

string DescribeVulScanTaskDetailResponse::GetTaskExcel() const
{
    return m_taskExcel;
}

bool DescribeVulScanTaskDetailResponse::TaskExcelHasBeenSet() const
{
    return m_taskExcelHasBeenSet;
}

string DescribeVulScanTaskDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeVulScanTaskDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeVulScanTaskDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeVulScanTaskDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> DescribeVulScanTaskDetailResponse::GetVulId() const
{
    return m_vulId;
}

bool DescribeVulScanTaskDetailResponse::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<string> DescribeVulScanTaskDetailResponse::GetKbNo() const
{
    return m_kbNo;
}

bool DescribeVulScanTaskDetailResponse::KbNoHasBeenSet() const
{
    return m_kbNoHasBeenSet;
}


