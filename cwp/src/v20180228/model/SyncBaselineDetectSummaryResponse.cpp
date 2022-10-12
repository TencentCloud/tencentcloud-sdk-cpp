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

#include <tencentcloud/cwp/v20180228/model/SyncBaselineDetectSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SyncBaselineDetectSummaryResponse::SyncBaselineDetectSummaryResponse() :
    m_progressRateHasBeenSet(false),
    m_notPassPolicyCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_willFirstScanHasBeenSet(false),
    m_detectingTaskIdsHasBeenSet(false),
    m_leftMinsHasBeenSet(false)
{
}

CoreInternalOutcome SyncBaselineDetectSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProgressRate") && !rsp["ProgressRate"].IsNull())
    {
        if (!rsp["ProgressRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProgressRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progressRate = rsp["ProgressRate"].GetInt64();
        m_progressRateHasBeenSet = true;
    }

    if (rsp.HasMember("NotPassPolicyCount") && !rsp["NotPassPolicyCount"].IsNull())
    {
        if (!rsp["NotPassPolicyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassPolicyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassPolicyCount = rsp["NotPassPolicyCount"].GetInt64();
        m_notPassPolicyCountHasBeenSet = true;
    }

    if (rsp.HasMember("HostCount") && !rsp["HostCount"].IsNull())
    {
        if (!rsp["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = rsp["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
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

    if (rsp.HasMember("WillFirstScan") && !rsp["WillFirstScan"].IsNull())
    {
        if (!rsp["WillFirstScan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillFirstScan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willFirstScan = rsp["WillFirstScan"].GetInt64();
        m_willFirstScanHasBeenSet = true;
    }

    if (rsp.HasMember("DetectingTaskIds") && !rsp["DetectingTaskIds"].IsNull())
    {
        if (!rsp["DetectingTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectingTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DetectingTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectingTaskIds.push_back((*itr).GetInt64());
        }
        m_detectingTaskIdsHasBeenSet = true;
    }

    if (rsp.HasMember("LeftMins") && !rsp["LeftMins"].IsNull())
    {
        if (!rsp["LeftMins"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftMins` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leftMins = rsp["LeftMins"].GetInt64();
        m_leftMinsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SyncBaselineDetectSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_progressRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progressRate, allocator);
    }

    if (m_notPassPolicyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassPolicyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassPolicyCount, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
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

    if (m_willFirstScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillFirstScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willFirstScan, allocator);
    }

    if (m_detectingTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectingTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectingTaskIds.begin(); itr != m_detectingTaskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_leftMinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftMins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftMins, allocator);
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


int64_t SyncBaselineDetectSummaryResponse::GetProgressRate() const
{
    return m_progressRate;
}

bool SyncBaselineDetectSummaryResponse::ProgressRateHasBeenSet() const
{
    return m_progressRateHasBeenSet;
}

int64_t SyncBaselineDetectSummaryResponse::GetNotPassPolicyCount() const
{
    return m_notPassPolicyCount;
}

bool SyncBaselineDetectSummaryResponse::NotPassPolicyCountHasBeenSet() const
{
    return m_notPassPolicyCountHasBeenSet;
}

int64_t SyncBaselineDetectSummaryResponse::GetHostCount() const
{
    return m_hostCount;
}

bool SyncBaselineDetectSummaryResponse::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string SyncBaselineDetectSummaryResponse::GetStartTime() const
{
    return m_startTime;
}

bool SyncBaselineDetectSummaryResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SyncBaselineDetectSummaryResponse::GetEndTime() const
{
    return m_endTime;
}

bool SyncBaselineDetectSummaryResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t SyncBaselineDetectSummaryResponse::GetWillFirstScan() const
{
    return m_willFirstScan;
}

bool SyncBaselineDetectSummaryResponse::WillFirstScanHasBeenSet() const
{
    return m_willFirstScanHasBeenSet;
}

vector<int64_t> SyncBaselineDetectSummaryResponse::GetDetectingTaskIds() const
{
    return m_detectingTaskIds;
}

bool SyncBaselineDetectSummaryResponse::DetectingTaskIdsHasBeenSet() const
{
    return m_detectingTaskIdsHasBeenSet;
}

int64_t SyncBaselineDetectSummaryResponse::GetLeftMins() const
{
    return m_leftMins;
}

bool SyncBaselineDetectSummaryResponse::LeftMinsHasBeenSet() const
{
    return m_leftMinsHasBeenSet;
}


