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

#include <tencentcloud/cls/v20201016/model/AgentTopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AgentTopicInfo::AgentTopicInfo() :
    m_topicIdHasBeenSet(false),
    m_flagHasBeenSet(false)
{
}

CoreInternalOutcome AgentTopicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTopicInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTopicInfo.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentTopicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

}


string AgentTopicInfo::GetTopicId() const
{
    return m_topicId;
}

void AgentTopicInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AgentTopicInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string AgentTopicInfo::GetFlag() const
{
    return m_flag;
}

void AgentTopicInfo::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool AgentTopicInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

