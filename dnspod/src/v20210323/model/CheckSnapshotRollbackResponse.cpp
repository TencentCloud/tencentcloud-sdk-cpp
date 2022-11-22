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

#include <tencentcloud/dnspod/v20210323/model/CheckSnapshotRollbackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CheckSnapshotRollbackResponse::CheckSnapshotRollbackResponse() :
    m_snapshotIdHasBeenSet(false),
    m_costMinutesHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_failedRecordListHasBeenSet(false)
{
}

CoreInternalOutcome CheckSnapshotRollbackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SnapshotId") && !rsp["SnapshotId"].IsNull())
    {
        if (!rsp["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(rsp["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (rsp.HasMember("CostMinutes") && !rsp["CostMinutes"].IsNull())
    {
        if (!rsp["CostMinutes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CostMinutes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costMinutes = rsp["CostMinutes"].GetUint64();
        m_costMinutesHasBeenSet = true;
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

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string CheckSnapshotRollbackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_costMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMinutes, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CheckSnapshotRollbackResponse::GetSnapshotId() const
{
    return m_snapshotId;
}

bool CheckSnapshotRollbackResponse::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

uint64_t CheckSnapshotRollbackResponse::GetCostMinutes() const
{
    return m_costMinutes;
}

bool CheckSnapshotRollbackResponse::CostMinutesHasBeenSet() const
{
    return m_costMinutesHasBeenSet;
}

string CheckSnapshotRollbackResponse::GetDomain() const
{
    return m_domain;
}

bool CheckSnapshotRollbackResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CheckSnapshotRollbackResponse::GetTotal() const
{
    return m_total;
}

bool CheckSnapshotRollbackResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t CheckSnapshotRollbackResponse::GetTimeout() const
{
    return m_timeout;
}

bool CheckSnapshotRollbackResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t CheckSnapshotRollbackResponse::GetFailed() const
{
    return m_failed;
}

bool CheckSnapshotRollbackResponse::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

vector<SnapshotRecord> CheckSnapshotRollbackResponse::GetFailedRecordList() const
{
    return m_failedRecordList;
}

bool CheckSnapshotRollbackResponse::FailedRecordListHasBeenSet() const
{
    return m_failedRecordListHasBeenSet;
}


