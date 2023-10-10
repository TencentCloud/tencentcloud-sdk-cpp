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

#include <tencentcloud/cwp/v20180228/model/DescribeVulFixStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulFixStatusResponse::DescribeVulFixStatusResponse() :
    m_fixStartTimeHasBeenSet(false),
    m_fixEndTimeHasBeenSet(false),
    m_fixSuccessCntHasBeenSet(false),
    m_fixFailCntHasBeenSet(false),
    m_hostCntHasBeenSet(false),
    m_fixIdHasBeenSet(false),
    m_snapshotListHasBeenSet(false),
    m_vulFixListHasBeenSet(false),
    m_snapshotProgressHasBeenSet(false),
    m_fixProgressHasBeenSet(false),
    m_remainingTimeHasBeenSet(false),
    m_isRetrySnapshotHasBeenSet(false),
    m_snapshotFailCntHasBeenSet(false),
    m_isAllowRetryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulFixStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FixStartTime") && !rsp["FixStartTime"].IsNull())
    {
        if (!rsp["FixStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FixStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixStartTime = string(rsp["FixStartTime"].GetString());
        m_fixStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FixEndTime") && !rsp["FixEndTime"].IsNull())
    {
        if (!rsp["FixEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FixEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixEndTime = string(rsp["FixEndTime"].GetString());
        m_fixEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FixSuccessCnt") && !rsp["FixSuccessCnt"].IsNull())
    {
        if (!rsp["FixSuccessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FixSuccessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuccessCnt = rsp["FixSuccessCnt"].GetUint64();
        m_fixSuccessCntHasBeenSet = true;
    }

    if (rsp.HasMember("FixFailCnt") && !rsp["FixFailCnt"].IsNull())
    {
        if (!rsp["FixFailCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FixFailCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixFailCnt = rsp["FixFailCnt"].GetUint64();
        m_fixFailCntHasBeenSet = true;
    }

    if (rsp.HasMember("HostCnt") && !rsp["HostCnt"].IsNull())
    {
        if (!rsp["HostCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCnt = rsp["HostCnt"].GetUint64();
        m_hostCntHasBeenSet = true;
    }

    if (rsp.HasMember("FixId") && !rsp["FixId"].IsNull())
    {
        if (!rsp["FixId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FixId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixId = rsp["FixId"].GetUint64();
        m_fixIdHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotList") && !rsp["SnapshotList"].IsNull())
    {
        if (!rsp["SnapshotList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SnapshotList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulFixStatusSnapshotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_snapshotList.push_back(item);
        }
        m_snapshotListHasBeenSet = true;
    }

    if (rsp.HasMember("VulFixList") && !rsp["VulFixList"].IsNull())
    {
        if (!rsp["VulFixList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulFixList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulFixStatusInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulFixList.push_back(item);
        }
        m_vulFixListHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotProgress") && !rsp["SnapshotProgress"].IsNull())
    {
        if (!rsp["SnapshotProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotProgress = rsp["SnapshotProgress"].GetUint64();
        m_snapshotProgressHasBeenSet = true;
    }

    if (rsp.HasMember("FixProgress") && !rsp["FixProgress"].IsNull())
    {
        if (!rsp["FixProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FixProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixProgress = rsp["FixProgress"].GetUint64();
        m_fixProgressHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingTime") && !rsp["RemainingTime"].IsNull())
    {
        if (!rsp["RemainingTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingTime = rsp["RemainingTime"].GetUint64();
        m_remainingTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsRetrySnapshot") && !rsp["IsRetrySnapshot"].IsNull())
    {
        if (!rsp["IsRetrySnapshot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsRetrySnapshot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRetrySnapshot = rsp["IsRetrySnapshot"].GetUint64();
        m_isRetrySnapshotHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotFailCnt") && !rsp["SnapshotFailCnt"].IsNull())
    {
        if (!rsp["SnapshotFailCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFailCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFailCnt = rsp["SnapshotFailCnt"].GetUint64();
        m_snapshotFailCntHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowRetry") && !rsp["IsAllowRetry"].IsNull())
    {
        if (!rsp["IsAllowRetry"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowRetry` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRetry = rsp["IsAllowRetry"].GetUint64();
        m_isAllowRetryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulFixStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fixStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fixEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fixSuccessCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSuccessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSuccessCnt, allocator);
    }

    if (m_fixFailCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixFailCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixFailCnt, allocator);
    }

    if (m_hostCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCnt, allocator);
    }

    if (m_fixIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixId, allocator);
    }

    if (m_snapshotListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotList.begin(); itr != m_snapshotList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulFixListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulFixList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulFixList.begin(); itr != m_vulFixList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_snapshotProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotProgress, allocator);
    }

    if (m_fixProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixProgress, allocator);
    }

    if (m_remainingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingTime, allocator);
    }

    if (m_isRetrySnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRetrySnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRetrySnapshot, allocator);
    }

    if (m_snapshotFailCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFailCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotFailCnt, allocator);
    }

    if (m_isAllowRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowRetry, allocator);
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


string DescribeVulFixStatusResponse::GetFixStartTime() const
{
    return m_fixStartTime;
}

bool DescribeVulFixStatusResponse::FixStartTimeHasBeenSet() const
{
    return m_fixStartTimeHasBeenSet;
}

string DescribeVulFixStatusResponse::GetFixEndTime() const
{
    return m_fixEndTime;
}

bool DescribeVulFixStatusResponse::FixEndTimeHasBeenSet() const
{
    return m_fixEndTimeHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetFixSuccessCnt() const
{
    return m_fixSuccessCnt;
}

bool DescribeVulFixStatusResponse::FixSuccessCntHasBeenSet() const
{
    return m_fixSuccessCntHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetFixFailCnt() const
{
    return m_fixFailCnt;
}

bool DescribeVulFixStatusResponse::FixFailCntHasBeenSet() const
{
    return m_fixFailCntHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetHostCnt() const
{
    return m_hostCnt;
}

bool DescribeVulFixStatusResponse::HostCntHasBeenSet() const
{
    return m_hostCntHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetFixId() const
{
    return m_fixId;
}

bool DescribeVulFixStatusResponse::FixIdHasBeenSet() const
{
    return m_fixIdHasBeenSet;
}

vector<VulFixStatusSnapshotInfo> DescribeVulFixStatusResponse::GetSnapshotList() const
{
    return m_snapshotList;
}

bool DescribeVulFixStatusResponse::SnapshotListHasBeenSet() const
{
    return m_snapshotListHasBeenSet;
}

vector<VulFixStatusInfo> DescribeVulFixStatusResponse::GetVulFixList() const
{
    return m_vulFixList;
}

bool DescribeVulFixStatusResponse::VulFixListHasBeenSet() const
{
    return m_vulFixListHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetSnapshotProgress() const
{
    return m_snapshotProgress;
}

bool DescribeVulFixStatusResponse::SnapshotProgressHasBeenSet() const
{
    return m_snapshotProgressHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetFixProgress() const
{
    return m_fixProgress;
}

bool DescribeVulFixStatusResponse::FixProgressHasBeenSet() const
{
    return m_fixProgressHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetRemainingTime() const
{
    return m_remainingTime;
}

bool DescribeVulFixStatusResponse::RemainingTimeHasBeenSet() const
{
    return m_remainingTimeHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetIsRetrySnapshot() const
{
    return m_isRetrySnapshot;
}

bool DescribeVulFixStatusResponse::IsRetrySnapshotHasBeenSet() const
{
    return m_isRetrySnapshotHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetSnapshotFailCnt() const
{
    return m_snapshotFailCnt;
}

bool DescribeVulFixStatusResponse::SnapshotFailCntHasBeenSet() const
{
    return m_snapshotFailCntHasBeenSet;
}

uint64_t DescribeVulFixStatusResponse::GetIsAllowRetry() const
{
    return m_isAllowRetry;
}

bool DescribeVulFixStatusResponse::IsAllowRetryHasBeenSet() const
{
    return m_isAllowRetryHasBeenSet;
}


