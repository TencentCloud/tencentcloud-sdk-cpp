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

#include <tencentcloud/csip/v20221121/model/LogTopicIndexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogTopicIndexInfo::LogTopicIndexInfo() :
    m_topicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_includeInternalFieldsHasBeenSet(false),
    m_metadataFlagHasBeenSet(false)
{
}

CoreInternalOutcome LogTopicIndexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.Rule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rule.Deserialize(value["Rule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IncludeInternalFields") && !value["IncludeInternalFields"].IsNull())
    {
        if (!value["IncludeInternalFields"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.IncludeInternalFields` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_includeInternalFields = value["IncludeInternalFields"].GetBool();
        m_includeInternalFieldsHasBeenSet = true;
    }

    if (value.HasMember("MetadataFlag") && !value["MetadataFlag"].IsNull())
    {
        if (!value["MetadataFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicIndexInfo.MetadataFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metadataFlag = value["MetadataFlag"].GetInt64();
        m_metadataFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogTopicIndexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_includeInternalFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeInternalFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_includeInternalFields, allocator);
    }

    if (m_metadataFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metadataFlag, allocator);
    }

}


string LogTopicIndexInfo::GetTopicId() const
{
    return m_topicId;
}

void LogTopicIndexInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogTopicIndexInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool LogTopicIndexInfo::GetStatus() const
{
    return m_status;
}

void LogTopicIndexInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LogTopicIndexInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

LogIndexRuleInfo LogTopicIndexInfo::GetRule() const
{
    return m_rule;
}

void LogTopicIndexInfo::SetRule(const LogIndexRuleInfo& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool LogTopicIndexInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string LogTopicIndexInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void LogTopicIndexInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool LogTopicIndexInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool LogTopicIndexInfo::GetIncludeInternalFields() const
{
    return m_includeInternalFields;
}

void LogTopicIndexInfo::SetIncludeInternalFields(const bool& _includeInternalFields)
{
    m_includeInternalFields = _includeInternalFields;
    m_includeInternalFieldsHasBeenSet = true;
}

bool LogTopicIndexInfo::IncludeInternalFieldsHasBeenSet() const
{
    return m_includeInternalFieldsHasBeenSet;
}

int64_t LogTopicIndexInfo::GetMetadataFlag() const
{
    return m_metadataFlag;
}

void LogTopicIndexInfo::SetMetadataFlag(const int64_t& _metadataFlag)
{
    m_metadataFlag = _metadataFlag;
    m_metadataFlagHasBeenSet = true;
}

bool LogTopicIndexInfo::MetadataFlagHasBeenSet() const
{
    return m_metadataFlagHasBeenSet;
}

