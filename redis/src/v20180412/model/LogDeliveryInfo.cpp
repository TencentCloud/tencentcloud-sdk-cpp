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

#include <tencentcloud/redis/v20180412/model/LogDeliveryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

LogDeliveryInfo::LogDeliveryInfo() :
    m_enabledHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logRegionHasBeenSet(false)
{
}

CoreInternalOutcome LogDeliveryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogRegion") && !value["LogRegion"].IsNull())
    {
        if (!value["LogRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryInfo.LogRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegion = string(value["LogRegion"].GetString());
        m_logRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDeliveryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

}


bool LogDeliveryInfo::GetEnabled() const
{
    return m_enabled;
}

void LogDeliveryInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool LogDeliveryInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string LogDeliveryInfo::GetLogsetId() const
{
    return m_logsetId;
}

void LogDeliveryInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool LogDeliveryInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string LogDeliveryInfo::GetTopicId() const
{
    return m_topicId;
}

void LogDeliveryInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogDeliveryInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogDeliveryInfo::GetLogRegion() const
{
    return m_logRegion;
}

void LogDeliveryInfo::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool LogDeliveryInfo::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

