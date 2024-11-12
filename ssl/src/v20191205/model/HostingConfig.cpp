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

#include <tencentcloud/ssl/v20191205/model/HostingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

HostingConfig::HostingConfig() :
    m_replaceTimeHasBeenSet(false),
    m_messageTypesHasBeenSet(false),
    m_replaceStartTimeHasBeenSet(false),
    m_replaceEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome HostingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplaceTime") && !value["ReplaceTime"].IsNull())
    {
        if (!value["ReplaceTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostingConfig.ReplaceTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replaceTime = value["ReplaceTime"].GetInt64();
        m_replaceTimeHasBeenSet = true;
    }

    if (value.HasMember("MessageTypes") && !value["MessageTypes"].IsNull())
    {
        if (!value["MessageTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostingConfig.MessageTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["MessageTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_messageTypes.push_back((*itr).GetInt64());
        }
        m_messageTypesHasBeenSet = true;
    }

    if (value.HasMember("ReplaceStartTime") && !value["ReplaceStartTime"].IsNull())
    {
        if (!value["ReplaceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostingConfig.ReplaceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replaceStartTime = string(value["ReplaceStartTime"].GetString());
        m_replaceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ReplaceEndTime") && !value["ReplaceEndTime"].IsNull())
    {
        if (!value["ReplaceEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostingConfig.ReplaceEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replaceEndTime = string(value["ReplaceEndTime"].GetString());
        m_replaceEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replaceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaceTime, allocator);
    }

    if (m_messageTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_messageTypes.begin(); itr != m_messageTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_replaceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replaceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replaceEndTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t HostingConfig::GetReplaceTime() const
{
    return m_replaceTime;
}

void HostingConfig::SetReplaceTime(const int64_t& _replaceTime)
{
    m_replaceTime = _replaceTime;
    m_replaceTimeHasBeenSet = true;
}

bool HostingConfig::ReplaceTimeHasBeenSet() const
{
    return m_replaceTimeHasBeenSet;
}

vector<int64_t> HostingConfig::GetMessageTypes() const
{
    return m_messageTypes;
}

void HostingConfig::SetMessageTypes(const vector<int64_t>& _messageTypes)
{
    m_messageTypes = _messageTypes;
    m_messageTypesHasBeenSet = true;
}

bool HostingConfig::MessageTypesHasBeenSet() const
{
    return m_messageTypesHasBeenSet;
}

string HostingConfig::GetReplaceStartTime() const
{
    return m_replaceStartTime;
}

void HostingConfig::SetReplaceStartTime(const string& _replaceStartTime)
{
    m_replaceStartTime = _replaceStartTime;
    m_replaceStartTimeHasBeenSet = true;
}

bool HostingConfig::ReplaceStartTimeHasBeenSet() const
{
    return m_replaceStartTimeHasBeenSet;
}

string HostingConfig::GetReplaceEndTime() const
{
    return m_replaceEndTime;
}

void HostingConfig::SetReplaceEndTime(const string& _replaceEndTime)
{
    m_replaceEndTime = _replaceEndTime;
    m_replaceEndTimeHasBeenSet = true;
}

bool HostingConfig::ReplaceEndTimeHasBeenSet() const
{
    return m_replaceEndTimeHasBeenSet;
}

