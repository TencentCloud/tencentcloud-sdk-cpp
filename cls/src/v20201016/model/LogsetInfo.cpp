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

#include <tencentcloud/cls/v20201016/model/LogsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

LogsetInfo::LogsetInfo() :
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_assumerNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_topicCountHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

CoreInternalOutcome LogsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AssumerName") && !value["AssumerName"].IsNull())
    {
        if (!value["AssumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.AssumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assumerName = string(value["AssumerName"].GetString());
        m_assumerNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TopicCount") && !value["TopicCount"].IsNull())
    {
        if (!value["TopicCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.TopicCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicCount = value["TopicCount"].GetInt64();
        m_topicCountHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicCount, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

}


string LogsetInfo::GetLogsetId() const
{
    return m_logsetId;
}

void LogsetInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool LogsetInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string LogsetInfo::GetLogsetName() const
{
    return m_logsetName;
}

void LogsetInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool LogsetInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string LogsetInfo::GetCreateTime() const
{
    return m_createTime;
}

void LogsetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LogsetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LogsetInfo::GetAssumerName() const
{
    return m_assumerName;
}

void LogsetInfo::SetAssumerName(const string& _assumerName)
{
    m_assumerName = _assumerName;
    m_assumerNameHasBeenSet = true;
}

bool LogsetInfo::AssumerNameHasBeenSet() const
{
    return m_assumerNameHasBeenSet;
}

vector<Tag> LogsetInfo::GetTags() const
{
    return m_tags;
}

void LogsetInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LogsetInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t LogsetInfo::GetTopicCount() const
{
    return m_topicCount;
}

void LogsetInfo::SetTopicCount(const int64_t& _topicCount)
{
    m_topicCount = _topicCount;
    m_topicCountHasBeenSet = true;
}

bool LogsetInfo::TopicCountHasBeenSet() const
{
    return m_topicCountHasBeenSet;
}

string LogsetInfo::GetRoleName() const
{
    return m_roleName;
}

void LogsetInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool LogsetInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

