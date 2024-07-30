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

#include <tencentcloud/lke/v20231130/model/TokenStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

TokenStat::TokenStat() :
    m_sessionIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_usedCountHasBeenSet(false),
    m_freeCountHasBeenSet(false),
    m_orderCountHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_statusSummaryTitleHasBeenSet(false),
    m_elapsedHasBeenSet(false),
    m_tokenCountHasBeenSet(false),
    m_proceduresHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

CoreInternalOutcome TokenStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("UsedCount") && !value["UsedCount"].IsNull())
    {
        if (!value["UsedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.UsedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCount = value["UsedCount"].GetUint64();
        m_usedCountHasBeenSet = true;
    }

    if (value.HasMember("FreeCount") && !value["FreeCount"].IsNull())
    {
        if (!value["FreeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.FreeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeCount = value["FreeCount"].GetUint64();
        m_freeCountHasBeenSet = true;
    }

    if (value.HasMember("OrderCount") && !value["OrderCount"].IsNull())
    {
        if (!value["OrderCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.OrderCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderCount = value["OrderCount"].GetUint64();
        m_orderCountHasBeenSet = true;
    }

    if (value.HasMember("StatusSummary") && !value["StatusSummary"].IsNull())
    {
        if (!value["StatusSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.StatusSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusSummary = string(value["StatusSummary"].GetString());
        m_statusSummaryHasBeenSet = true;
    }

    if (value.HasMember("StatusSummaryTitle") && !value["StatusSummaryTitle"].IsNull())
    {
        if (!value["StatusSummaryTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.StatusSummaryTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusSummaryTitle = string(value["StatusSummaryTitle"].GetString());
        m_statusSummaryTitleHasBeenSet = true;
    }

    if (value.HasMember("Elapsed") && !value["Elapsed"].IsNull())
    {
        if (!value["Elapsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.Elapsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elapsed = value["Elapsed"].GetUint64();
        m_elapsedHasBeenSet = true;
    }

    if (value.HasMember("TokenCount") && !value["TokenCount"].IsNull())
    {
        if (!value["TokenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.TokenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenCount = value["TokenCount"].GetUint64();
        m_tokenCountHasBeenSet = true;
    }

    if (value.HasMember("Procedures") && !value["Procedures"].IsNull())
    {
        if (!value["Procedures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TokenStat.Procedures` is not array type"));

        const rapidjson::Value &tmpValue = value["Procedures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Procedure item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_procedures.push_back(item);
        }
        m_proceduresHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenStat.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_usedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCount, allocator);
    }

    if (m_freeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCount, allocator);
    }

    if (m_orderCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderCount, allocator);
    }

    if (m_statusSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_statusSummaryTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSummaryTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusSummaryTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_elapsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elapsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elapsed, allocator);
    }

    if (m_tokenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenCount, allocator);
    }

    if (m_proceduresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_procedures.begin(); itr != m_procedures.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

}


string TokenStat::GetSessionId() const
{
    return m_sessionId;
}

void TokenStat::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TokenStat::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TokenStat::GetRequestId() const
{
    return m_requestId;
}

void TokenStat::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool TokenStat::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string TokenStat::GetRecordId() const
{
    return m_recordId;
}

void TokenStat::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool TokenStat::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t TokenStat::GetUsedCount() const
{
    return m_usedCount;
}

void TokenStat::SetUsedCount(const uint64_t& _usedCount)
{
    m_usedCount = _usedCount;
    m_usedCountHasBeenSet = true;
}

bool TokenStat::UsedCountHasBeenSet() const
{
    return m_usedCountHasBeenSet;
}

uint64_t TokenStat::GetFreeCount() const
{
    return m_freeCount;
}

void TokenStat::SetFreeCount(const uint64_t& _freeCount)
{
    m_freeCount = _freeCount;
    m_freeCountHasBeenSet = true;
}

bool TokenStat::FreeCountHasBeenSet() const
{
    return m_freeCountHasBeenSet;
}

uint64_t TokenStat::GetOrderCount() const
{
    return m_orderCount;
}

void TokenStat::SetOrderCount(const uint64_t& _orderCount)
{
    m_orderCount = _orderCount;
    m_orderCountHasBeenSet = true;
}

bool TokenStat::OrderCountHasBeenSet() const
{
    return m_orderCountHasBeenSet;
}

string TokenStat::GetStatusSummary() const
{
    return m_statusSummary;
}

void TokenStat::SetStatusSummary(const string& _statusSummary)
{
    m_statusSummary = _statusSummary;
    m_statusSummaryHasBeenSet = true;
}

bool TokenStat::StatusSummaryHasBeenSet() const
{
    return m_statusSummaryHasBeenSet;
}

string TokenStat::GetStatusSummaryTitle() const
{
    return m_statusSummaryTitle;
}

void TokenStat::SetStatusSummaryTitle(const string& _statusSummaryTitle)
{
    m_statusSummaryTitle = _statusSummaryTitle;
    m_statusSummaryTitleHasBeenSet = true;
}

bool TokenStat::StatusSummaryTitleHasBeenSet() const
{
    return m_statusSummaryTitleHasBeenSet;
}

uint64_t TokenStat::GetElapsed() const
{
    return m_elapsed;
}

void TokenStat::SetElapsed(const uint64_t& _elapsed)
{
    m_elapsed = _elapsed;
    m_elapsedHasBeenSet = true;
}

bool TokenStat::ElapsedHasBeenSet() const
{
    return m_elapsedHasBeenSet;
}

uint64_t TokenStat::GetTokenCount() const
{
    return m_tokenCount;
}

void TokenStat::SetTokenCount(const uint64_t& _tokenCount)
{
    m_tokenCount = _tokenCount;
    m_tokenCountHasBeenSet = true;
}

bool TokenStat::TokenCountHasBeenSet() const
{
    return m_tokenCountHasBeenSet;
}

vector<Procedure> TokenStat::GetProcedures() const
{
    return m_procedures;
}

void TokenStat::SetProcedures(const vector<Procedure>& _procedures)
{
    m_procedures = _procedures;
    m_proceduresHasBeenSet = true;
}

bool TokenStat::ProceduresHasBeenSet() const
{
    return m_proceduresHasBeenSet;
}

string TokenStat::GetTraceId() const
{
    return m_traceId;
}

void TokenStat::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool TokenStat::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

