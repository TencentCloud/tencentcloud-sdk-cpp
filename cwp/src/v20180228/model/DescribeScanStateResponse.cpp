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

#include <tencentcloud/cwp/v20180228/model/DescribeScanStateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeScanStateResponse::DescribeScanStateResponse() :
    m_scanStateHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_scanBeginTimeHasBeenSet(false),
    m_riskEventCountHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanStateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ScanState") && !rsp["ScanState"].IsNull())
    {
        if (!rsp["ScanState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanState = rsp["ScanState"].GetUint64();
        m_scanStateHasBeenSet = true;
    }

    if (rsp.HasMember("Schedule") && !rsp["Schedule"].IsNull())
    {
        if (!rsp["Schedule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Schedule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_schedule = rsp["Schedule"].GetUint64();
        m_scheduleHasBeenSet = true;
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

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanBeginTime") && !rsp["ScanBeginTime"].IsNull())
    {
        if (!rsp["ScanBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanBeginTime = string(rsp["ScanBeginTime"].GetString());
        m_scanBeginTimeHasBeenSet = true;
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

    if (rsp.HasMember("ScanEndTime") && !rsp["ScanEndTime"].IsNull())
    {
        if (!rsp["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(rsp["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScanStateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_scanStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanState, allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schedule, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_scanBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventCount, allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeScanStateResponse::GetScanState() const
{
    return m_scanState;
}

bool DescribeScanStateResponse::ScanStateHasBeenSet() const
{
    return m_scanStateHasBeenSet;
}

uint64_t DescribeScanStateResponse::GetSchedule() const
{
    return m_schedule;
}

bool DescribeScanStateResponse::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

uint64_t DescribeScanStateResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeScanStateResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<uint64_t> DescribeScanStateResponse::GetVulId() const
{
    return m_vulId;
}

bool DescribeScanStateResponse::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

uint64_t DescribeScanStateResponse::GetType() const
{
    return m_type;
}

bool DescribeScanStateResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeScanStateResponse::GetScanBeginTime() const
{
    return m_scanBeginTime;
}

bool DescribeScanStateResponse::ScanBeginTimeHasBeenSet() const
{
    return m_scanBeginTimeHasBeenSet;
}

uint64_t DescribeScanStateResponse::GetRiskEventCount() const
{
    return m_riskEventCount;
}

bool DescribeScanStateResponse::RiskEventCountHasBeenSet() const
{
    return m_riskEventCountHasBeenSet;
}

string DescribeScanStateResponse::GetScanEndTime() const
{
    return m_scanEndTime;
}

bool DescribeScanStateResponse::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}


