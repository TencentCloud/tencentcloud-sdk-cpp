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

#include <tencentcloud/cls/v20201016/model/ModifyIndexRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyIndexRequest::ModifyIndexRequest() :
    m_topicIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_includeInternalFieldsHasBeenSet(false),
    m_metadataFlagHasBeenSet(false)
{
}

string ModifyIndexRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_includeInternalFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeInternalFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeInternalFields, allocator);
    }

    if (m_metadataFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metadataFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIndexRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyIndexRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyIndexRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

bool ModifyIndexRequest::GetStatus() const
{
    return m_status;
}

void ModifyIndexRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyIndexRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

RuleInfo ModifyIndexRequest::GetRule() const
{
    return m_rule;
}

void ModifyIndexRequest::SetRule(const RuleInfo& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyIndexRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

bool ModifyIndexRequest::GetIncludeInternalFields() const
{
    return m_includeInternalFields;
}

void ModifyIndexRequest::SetIncludeInternalFields(const bool& _includeInternalFields)
{
    m_includeInternalFields = _includeInternalFields;
    m_includeInternalFieldsHasBeenSet = true;
}

bool ModifyIndexRequest::IncludeInternalFieldsHasBeenSet() const
{
    return m_includeInternalFieldsHasBeenSet;
}

uint64_t ModifyIndexRequest::GetMetadataFlag() const
{
    return m_metadataFlag;
}

void ModifyIndexRequest::SetMetadataFlag(const uint64_t& _metadataFlag)
{
    m_metadataFlag = _metadataFlag;
    m_metadataFlagHasBeenSet = true;
}

bool ModifyIndexRequest::MetadataFlagHasBeenSet() const
{
    return m_metadataFlagHasBeenSet;
}


