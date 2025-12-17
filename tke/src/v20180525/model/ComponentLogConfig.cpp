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

#include <tencentcloud/tke/v20180525/model/ComponentLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ComponentLogConfig::ComponentLogConfig() :
    m_nameHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicRegionHasBeenSet(false)
{
}

CoreInternalOutcome ComponentLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLogConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLogConfig.LogLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = value["LogLevel"].GetInt64();
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLogConfig.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLogConfig.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicRegion") && !value["TopicRegion"].IsNull())
    {
        if (!value["TopicRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLogConfig.TopicRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicRegion = string(value["TopicRegion"].GetString());
        m_topicRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicRegion.c_str(), allocator).Move(), allocator);
    }

}


string ComponentLogConfig::GetName() const
{
    return m_name;
}

void ComponentLogConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComponentLogConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ComponentLogConfig::GetLogLevel() const
{
    return m_logLevel;
}

void ComponentLogConfig::SetLogLevel(const int64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool ComponentLogConfig::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string ComponentLogConfig::GetLogSetId() const
{
    return m_logSetId;
}

void ComponentLogConfig::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool ComponentLogConfig::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string ComponentLogConfig::GetTopicId() const
{
    return m_topicId;
}

void ComponentLogConfig::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ComponentLogConfig::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ComponentLogConfig::GetTopicRegion() const
{
    return m_topicRegion;
}

void ComponentLogConfig::SetTopicRegion(const string& _topicRegion)
{
    m_topicRegion = _topicRegion;
    m_topicRegionHasBeenSet = true;
}

bool ComponentLogConfig::TopicRegionHasBeenSet() const
{
    return m_topicRegionHasBeenSet;
}

