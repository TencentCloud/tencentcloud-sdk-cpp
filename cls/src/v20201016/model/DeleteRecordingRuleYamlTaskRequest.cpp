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

#include <tencentcloud/cls/v20201016/model/DeleteRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DeleteRecordingRuleYamlTaskRequest::DeleteRecordingRuleYamlTaskRequest() :
    m_yamlIdHasBeenSet(false),
    m_topicIdHasBeenSet(false)
{
}

string DeleteRecordingRuleYamlTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_yamlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yamlId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRecordingRuleYamlTaskRequest::GetYamlId() const
{
    return m_yamlId;
}

void DeleteRecordingRuleYamlTaskRequest::SetYamlId(const string& _yamlId)
{
    m_yamlId = _yamlId;
    m_yamlIdHasBeenSet = true;
}

bool DeleteRecordingRuleYamlTaskRequest::YamlIdHasBeenSet() const
{
    return m_yamlIdHasBeenSet;
}

string DeleteRecordingRuleYamlTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void DeleteRecordingRuleYamlTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DeleteRecordingRuleYamlTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}


