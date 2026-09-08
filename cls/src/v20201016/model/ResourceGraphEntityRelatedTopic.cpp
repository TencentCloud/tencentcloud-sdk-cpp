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

#include <tencentcloud/cls/v20201016/model/ResourceGraphEntityRelatedTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ResourceGraphEntityRelatedTopic::ResourceGraphEntityRelatedTopic() :
    m_topicIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_bizTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGraphEntityRelatedTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphEntityRelatedTopic.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphEntityRelatedTopic.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphEntityRelatedTopic.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphEntityRelatedTopic.BizType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetInt64();
        m_bizTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGraphEntityRelatedTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

}


string ResourceGraphEntityRelatedTopic::GetTopicId() const
{
    return m_topicId;
}

void ResourceGraphEntityRelatedTopic::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ResourceGraphEntityRelatedTopic::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ResourceGraphEntityRelatedTopic::GetRegion() const
{
    return m_region;
}

void ResourceGraphEntityRelatedTopic::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceGraphEntityRelatedTopic::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ResourceGraphEntityRelatedTopic::GetLogType() const
{
    return m_logType;
}

void ResourceGraphEntityRelatedTopic::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ResourceGraphEntityRelatedTopic::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t ResourceGraphEntityRelatedTopic::GetBizType() const
{
    return m_bizType;
}

void ResourceGraphEntityRelatedTopic::SetBizType(const int64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ResourceGraphEntityRelatedTopic::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

