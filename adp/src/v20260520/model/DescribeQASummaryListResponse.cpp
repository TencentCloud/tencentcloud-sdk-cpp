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

#include <tencentcloud/adp/v20260520/model/DescribeQASummaryListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeQASummaryListResponse::DescribeQASummaryListResponse() :
    m_notAcceptedCountHasBeenSet(false),
    m_pendingVerifyCountHasBeenSet(false),
    m_qaListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeQASummaryListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NotAcceptedCount") && !rsp["NotAcceptedCount"].IsNull())
    {
        if (!rsp["NotAcceptedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotAcceptedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notAcceptedCount = rsp["NotAcceptedCount"].GetUint64();
        m_notAcceptedCountHasBeenSet = true;
    }

    if (rsp.HasMember("PendingVerifyCount") && !rsp["PendingVerifyCount"].IsNull())
    {
        if (!rsp["PendingVerifyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PendingVerifyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pendingVerifyCount = rsp["PendingVerifyCount"].GetUint64();
        m_pendingVerifyCountHasBeenSet = true;
    }

    if (rsp.HasMember("QaList") && !rsp["QaList"].IsNull())
    {
        if (!rsp["QaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QaList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QASummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qaList.push_back(item);
        }
        m_qaListHasBeenSet = true;
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

string DescribeQASummaryListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_notAcceptedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAcceptedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAcceptedCount, allocator);
    }

    if (m_pendingVerifyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingVerifyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pendingVerifyCount, allocator);
    }

    if (m_qaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qaList.begin(); itr != m_qaList.end(); ++itr, ++i)
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


uint64_t DescribeQASummaryListResponse::GetNotAcceptedCount() const
{
    return m_notAcceptedCount;
}

bool DescribeQASummaryListResponse::NotAcceptedCountHasBeenSet() const
{
    return m_notAcceptedCountHasBeenSet;
}

uint64_t DescribeQASummaryListResponse::GetPendingVerifyCount() const
{
    return m_pendingVerifyCount;
}

bool DescribeQASummaryListResponse::PendingVerifyCountHasBeenSet() const
{
    return m_pendingVerifyCountHasBeenSet;
}

vector<QASummary> DescribeQASummaryListResponse::GetQaList() const
{
    return m_qaList;
}

bool DescribeQASummaryListResponse::QaListHasBeenSet() const
{
    return m_qaListHasBeenSet;
}

uint64_t DescribeQASummaryListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeQASummaryListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


