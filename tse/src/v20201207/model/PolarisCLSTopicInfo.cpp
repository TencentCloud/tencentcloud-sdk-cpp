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

#include <tencentcloud/tse/v20201207/model/PolarisCLSTopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

PolarisCLSTopicInfo::PolarisCLSTopicInfo() :
    m_logSetIdHasBeenSet(false),
    m_logSetNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

CoreInternalOutcome PolarisCLSTopicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolarisCLSTopicInfo.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogSetName") && !value["LogSetName"].IsNull())
    {
        if (!value["LogSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolarisCLSTopicInfo.LogSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetName = string(value["LogSetName"].GetString());
        m_logSetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolarisCLSTopicInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolarisCLSTopicInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolarisCLSTopicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
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

}


string PolarisCLSTopicInfo::GetLogSetId() const
{
    return m_logSetId;
}

void PolarisCLSTopicInfo::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool PolarisCLSTopicInfo::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string PolarisCLSTopicInfo::GetLogSetName() const
{
    return m_logSetName;
}

void PolarisCLSTopicInfo::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool PolarisCLSTopicInfo::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}

string PolarisCLSTopicInfo::GetTopicId() const
{
    return m_topicId;
}

void PolarisCLSTopicInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool PolarisCLSTopicInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string PolarisCLSTopicInfo::GetTopicName() const
{
    return m_topicName;
}

void PolarisCLSTopicInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool PolarisCLSTopicInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

