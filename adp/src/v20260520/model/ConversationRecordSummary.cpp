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

#include <tencentcloud/adp/v20260520/model/ConversationRecordSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationRecordSummary::ConversationRecordSummary() :
    m_recordIdHasBeenSet(false),
    m_relatedRecordIdHasBeenSet(false),
    m_timeUsageHasBeenSet(false),
    m_tokenUsageHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ConversationRecordSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedRecordId") && !value["RelatedRecordId"].IsNull())
    {
        if (!value["RelatedRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.RelatedRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedRecordId = string(value["RelatedRecordId"].GetString());
        m_relatedRecordIdHasBeenSet = true;
    }

    if (value.HasMember("TimeUsage") && !value["TimeUsage"].IsNull())
    {
        if (!value["TimeUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.TimeUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeUsage.Deserialize(value["TimeUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeUsageHasBeenSet = true;
    }

    if (value.HasMember("TokenUsage") && !value["TokenUsage"].IsNull())
    {
        if (!value["TokenUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.TokenUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenUsage.Deserialize(value["TokenUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenUsageHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.ErrorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorInfo.Deserialize(value["ErrorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordSummary.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationRecordSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ConversationRecordSummary::GetRecordId() const
{
    return m_recordId;
}

void ConversationRecordSummary::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ConversationRecordSummary::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ConversationRecordSummary::GetRelatedRecordId() const
{
    return m_relatedRecordId;
}

void ConversationRecordSummary::SetRelatedRecordId(const string& _relatedRecordId)
{
    m_relatedRecordId = _relatedRecordId;
    m_relatedRecordIdHasBeenSet = true;
}

bool ConversationRecordSummary::RelatedRecordIdHasBeenSet() const
{
    return m_relatedRecordIdHasBeenSet;
}

ConversationRecordTimeUsage ConversationRecordSummary::GetTimeUsage() const
{
    return m_timeUsage;
}

void ConversationRecordSummary::SetTimeUsage(const ConversationRecordTimeUsage& _timeUsage)
{
    m_timeUsage = _timeUsage;
    m_timeUsageHasBeenSet = true;
}

bool ConversationRecordSummary::TimeUsageHasBeenSet() const
{
    return m_timeUsageHasBeenSet;
}

ConversationRecordTokenUsage ConversationRecordSummary::GetTokenUsage() const
{
    return m_tokenUsage;
}

void ConversationRecordSummary::SetTokenUsage(const ConversationRecordTokenUsage& _tokenUsage)
{
    m_tokenUsage = _tokenUsage;
    m_tokenUsageHasBeenSet = true;
}

bool ConversationRecordSummary::TokenUsageHasBeenSet() const
{
    return m_tokenUsageHasBeenSet;
}

ConversationRecordErrorInfo ConversationRecordSummary::GetErrorInfo() const
{
    return m_errorInfo;
}

void ConversationRecordSummary::SetErrorInfo(const ConversationRecordErrorInfo& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool ConversationRecordSummary::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string ConversationRecordSummary::GetStatus() const
{
    return m_status;
}

void ConversationRecordSummary::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConversationRecordSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

