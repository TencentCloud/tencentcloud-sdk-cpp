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

#include <tencentcloud/dnspod/v20210323/model/DescribeRecordSnapshotRollbackResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeRecordSnapshotRollbackResultResponse::DescribeRecordSnapshotRollbackResultResponse() :
    m_jobIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failedRecordListHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_leftMinutesHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_successHasBeenSet(false),
    m_cosUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRecordSnapshotRollbackResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetUint64();
        m_jobIdHasBeenSet = true;
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

    if (rsp.HasMember("FailedRecordList") && !rsp["FailedRecordList"].IsNull())
    {
        if (!rsp["FailedRecordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedRecordList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedRecordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SnapshotRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedRecordList.push_back(item);
        }
        m_failedRecordListHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
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

    if (rsp.HasMember("LeftMinutes") && !rsp["LeftMinutes"].IsNull())
    {
        if (!rsp["LeftMinutes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftMinutes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftMinutes = rsp["LeftMinutes"].GetUint64();
        m_leftMinutesHasBeenSet = true;
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

    if (rsp.HasMember("Failed") && !rsp["Failed"].IsNull())
    {
        if (!rsp["Failed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Failed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failed = rsp["Failed"].GetUint64();
        m_failedHasBeenSet = true;
    }

    if (rsp.HasMember("Success") && !rsp["Success"].IsNull())
    {
        if (!rsp["Success"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Success` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_success = rsp["Success"].GetUint64();
        m_successHasBeenSet = true;
    }

    if (rsp.HasMember("CosUrl") && !rsp["CosUrl"].IsNull())
    {
        if (!rsp["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(rsp["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRecordSnapshotRollbackResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failedRecordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedRecordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedRecordList.begin(); itr != m_failedRecordList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_leftMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftMinutes, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeRecordSnapshotRollbackResultResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeRecordSnapshotRollbackResultResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeRecordSnapshotRollbackResultResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRecordSnapshotRollbackResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<SnapshotRecord> DescribeRecordSnapshotRollbackResultResponse::GetFailedRecordList() const
{
    return m_failedRecordList;
}

bool DescribeRecordSnapshotRollbackResultResponse::FailedRecordListHasBeenSet() const
{
    return m_failedRecordListHasBeenSet;
}

string DescribeRecordSnapshotRollbackResultResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeRecordSnapshotRollbackResultResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeRecordSnapshotRollbackResultResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeRecordSnapshotRollbackResultResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t DescribeRecordSnapshotRollbackResultResponse::GetLeftMinutes() const
{
    return m_leftMinutes;
}

bool DescribeRecordSnapshotRollbackResultResponse::LeftMinutesHasBeenSet() const
{
    return m_leftMinutesHasBeenSet;
}

uint64_t DescribeRecordSnapshotRollbackResultResponse::GetTotal() const
{
    return m_total;
}

bool DescribeRecordSnapshotRollbackResultResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t DescribeRecordSnapshotRollbackResultResponse::GetFailed() const
{
    return m_failed;
}

bool DescribeRecordSnapshotRollbackResultResponse::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

uint64_t DescribeRecordSnapshotRollbackResultResponse::GetSuccess() const
{
    return m_success;
}

bool DescribeRecordSnapshotRollbackResultResponse::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string DescribeRecordSnapshotRollbackResultResponse::GetCosUrl() const
{
    return m_cosUrl;
}

bool DescribeRecordSnapshotRollbackResultResponse::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}


