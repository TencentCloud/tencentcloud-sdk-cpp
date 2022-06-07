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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusSummaryResponse::DescribeVirusSummaryResponse() :
    m_taskIdHasBeenSet(false),
    m_riskContainerCntHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_virusDataBaseModifyTimeHasBeenSet(false),
    m_riskContainerIncreaseHasBeenSet(false),
    m_riskIncreaseHasBeenSet(false),
    m_isolateIncreaseHasBeenSet(false),
    m_isolateCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusSummaryResponse::Deserialize(const string &payload)
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
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("RiskContainerCnt") && !rsp["RiskContainerCnt"].IsNull())
    {
        if (!rsp["RiskContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerCnt = rsp["RiskContainerCnt"].GetUint64();
        m_riskContainerCntHasBeenSet = true;
    }

    if (rsp.HasMember("RiskCnt") && !rsp["RiskCnt"].IsNull())
    {
        if (!rsp["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = rsp["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (rsp.HasMember("VirusDataBaseModifyTime") && !rsp["VirusDataBaseModifyTime"].IsNull())
    {
        if (!rsp["VirusDataBaseModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusDataBaseModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusDataBaseModifyTime = string(rsp["VirusDataBaseModifyTime"].GetString());
        m_virusDataBaseModifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RiskContainerIncrease") && !rsp["RiskContainerIncrease"].IsNull())
    {
        if (!rsp["RiskContainerIncrease"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskContainerIncrease` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerIncrease = rsp["RiskContainerIncrease"].GetInt64();
        m_riskContainerIncreaseHasBeenSet = true;
    }

    if (rsp.HasMember("RiskIncrease") && !rsp["RiskIncrease"].IsNull())
    {
        if (!rsp["RiskIncrease"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskIncrease` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskIncrease = rsp["RiskIncrease"].GetInt64();
        m_riskIncreaseHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateIncrease") && !rsp["IsolateIncrease"].IsNull())
    {
        if (!rsp["IsolateIncrease"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateIncrease` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolateIncrease = rsp["IsolateIncrease"].GetInt64();
        m_isolateIncreaseHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateCnt") && !rsp["IsolateCnt"].IsNull())
    {
        if (!rsp["IsolateCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolateCnt = rsp["IsolateCnt"].GetInt64();
        m_isolateCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskContainerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerCnt, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_virusDataBaseModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusDataBaseModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusDataBaseModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskContainerIncreaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerIncrease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerIncrease, allocator);
    }

    if (m_riskIncreaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIncrease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskIncrease, allocator);
    }

    if (m_isolateIncreaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateIncrease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolateIncrease, allocator);
    }

    if (m_isolateCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolateCnt, allocator);
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


string DescribeVirusSummaryResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeVirusSummaryResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeVirusSummaryResponse::GetRiskContainerCnt() const
{
    return m_riskContainerCnt;
}

bool DescribeVirusSummaryResponse::RiskContainerCntHasBeenSet() const
{
    return m_riskContainerCntHasBeenSet;
}

uint64_t DescribeVirusSummaryResponse::GetRiskCnt() const
{
    return m_riskCnt;
}

bool DescribeVirusSummaryResponse::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

string DescribeVirusSummaryResponse::GetVirusDataBaseModifyTime() const
{
    return m_virusDataBaseModifyTime;
}

bool DescribeVirusSummaryResponse::VirusDataBaseModifyTimeHasBeenSet() const
{
    return m_virusDataBaseModifyTimeHasBeenSet;
}

int64_t DescribeVirusSummaryResponse::GetRiskContainerIncrease() const
{
    return m_riskContainerIncrease;
}

bool DescribeVirusSummaryResponse::RiskContainerIncreaseHasBeenSet() const
{
    return m_riskContainerIncreaseHasBeenSet;
}

int64_t DescribeVirusSummaryResponse::GetRiskIncrease() const
{
    return m_riskIncrease;
}

bool DescribeVirusSummaryResponse::RiskIncreaseHasBeenSet() const
{
    return m_riskIncreaseHasBeenSet;
}

int64_t DescribeVirusSummaryResponse::GetIsolateIncrease() const
{
    return m_isolateIncrease;
}

bool DescribeVirusSummaryResponse::IsolateIncreaseHasBeenSet() const
{
    return m_isolateIncreaseHasBeenSet;
}

int64_t DescribeVirusSummaryResponse::GetIsolateCnt() const
{
    return m_isolateCnt;
}

bool DescribeVirusSummaryResponse::IsolateCntHasBeenSet() const
{
    return m_isolateCntHasBeenSet;
}


