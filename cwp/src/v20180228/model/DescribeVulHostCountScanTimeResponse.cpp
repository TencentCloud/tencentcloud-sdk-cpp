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

#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulHostCountScanTimeResponse::DescribeVulHostCountScanTimeResponse() :
    m_totalVulCountHasBeenSet(false),
    m_vulHostCountHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_ifFirstScanHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_lastFixTimeHasBeenSet(false),
    m_hadAutoFixVulHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulHostCountScanTimeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalVulCount") && !rsp["TotalVulCount"].IsNull())
    {
        if (!rsp["TotalVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalVulCount = rsp["TotalVulCount"].GetUint64();
        m_totalVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("VulHostCount") && !rsp["VulHostCount"].IsNull())
    {
        if (!rsp["VulHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulHostCount = rsp["VulHostCount"].GetUint64();
        m_vulHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(rsp["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IfFirstScan") && !rsp["IfFirstScan"].IsNull())
    {
        if (!rsp["IfFirstScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IfFirstScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ifFirstScan = rsp["IfFirstScan"].GetBool();
        m_ifFirstScanHasBeenSet = true;
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

    if (rsp.HasMember("LastFixTime") && !rsp["LastFixTime"].IsNull())
    {
        if (!rsp["LastFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFixTime = string(rsp["LastFixTime"].GetString());
        m_lastFixTimeHasBeenSet = true;
    }

    if (rsp.HasMember("hadAutoFixVul") && !rsp["hadAutoFixVul"].IsNull())
    {
        if (!rsp["hadAutoFixVul"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `hadAutoFixVul` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hadAutoFixVul = rsp["hadAutoFixVul"].GetBool();
        m_hadAutoFixVulHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulHostCountScanTimeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalVulCount, allocator);
    }

    if (m_vulHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulHostCount, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ifFirstScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfFirstScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifFirstScan, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_lastFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hadAutoFixVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "hadAutoFixVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hadAutoFixVul, allocator);
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


uint64_t DescribeVulHostCountScanTimeResponse::GetTotalVulCount() const
{
    return m_totalVulCount;
}

bool DescribeVulHostCountScanTimeResponse::TotalVulCountHasBeenSet() const
{
    return m_totalVulCountHasBeenSet;
}

uint64_t DescribeVulHostCountScanTimeResponse::GetVulHostCount() const
{
    return m_vulHostCount;
}

bool DescribeVulHostCountScanTimeResponse::VulHostCountHasBeenSet() const
{
    return m_vulHostCountHasBeenSet;
}

string DescribeVulHostCountScanTimeResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeVulHostCountScanTimeResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

bool DescribeVulHostCountScanTimeResponse::GetIfFirstScan() const
{
    return m_ifFirstScan;
}

bool DescribeVulHostCountScanTimeResponse::IfFirstScanHasBeenSet() const
{
    return m_ifFirstScanHasBeenSet;
}

uint64_t DescribeVulHostCountScanTimeResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeVulHostCountScanTimeResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeVulHostCountScanTimeResponse::GetLastFixTime() const
{
    return m_lastFixTime;
}

bool DescribeVulHostCountScanTimeResponse::LastFixTimeHasBeenSet() const
{
    return m_lastFixTimeHasBeenSet;
}

bool DescribeVulHostCountScanTimeResponse::GethadAutoFixVul() const
{
    return m_hadAutoFixVul;
}

bool DescribeVulHostCountScanTimeResponse::hadAutoFixVulHasBeenSet() const
{
    return m_hadAutoFixVulHasBeenSet;
}


