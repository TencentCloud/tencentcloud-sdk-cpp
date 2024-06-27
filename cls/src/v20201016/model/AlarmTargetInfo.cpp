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

#include <tencentcloud/cls/v20201016/model/AlarmTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmTargetInfo::AlarmTargetInfo() :
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_bizTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.Number` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_number = value["Number"].GetInt64();
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.StartTimeOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetInt64();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.EndTimeOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetInt64();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("SyntaxRule") && !value["SyntaxRule"].IsNull())
    {
        if (!value["SyntaxRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.SyntaxRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syntaxRule = value["SyntaxRule"].GetUint64();
        m_syntaxRuleHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTargetInfo.BizType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetUint64();
        m_bizTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_number, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syntaxRule, allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

}


string AlarmTargetInfo::GetLogsetId() const
{
    return m_logsetId;
}

void AlarmTargetInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool AlarmTargetInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string AlarmTargetInfo::GetLogsetName() const
{
    return m_logsetName;
}

void AlarmTargetInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool AlarmTargetInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string AlarmTargetInfo::GetTopicId() const
{
    return m_topicId;
}

void AlarmTargetInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AlarmTargetInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string AlarmTargetInfo::GetTopicName() const
{
    return m_topicName;
}

void AlarmTargetInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool AlarmTargetInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string AlarmTargetInfo::GetQuery() const
{
    return m_query;
}

void AlarmTargetInfo::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool AlarmTargetInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t AlarmTargetInfo::GetNumber() const
{
    return m_number;
}

void AlarmTargetInfo::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool AlarmTargetInfo::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

int64_t AlarmTargetInfo::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void AlarmTargetInfo::SetStartTimeOffset(const int64_t& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool AlarmTargetInfo::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

int64_t AlarmTargetInfo::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void AlarmTargetInfo::SetEndTimeOffset(const int64_t& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool AlarmTargetInfo::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

uint64_t AlarmTargetInfo::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void AlarmTargetInfo::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool AlarmTargetInfo::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

uint64_t AlarmTargetInfo::GetBizType() const
{
    return m_bizType;
}

void AlarmTargetInfo::SetBizType(const uint64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool AlarmTargetInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

