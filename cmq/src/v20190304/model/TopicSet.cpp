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

#include <tencentcloud/cmq/v20190304/model/TopicSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

TopicSet::TopicSet() :
    m_msgCountHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_migrateHasBeenSet(false)
{
}

CoreInternalOutcome TopicSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgCount") && !value["MsgCount"].IsNull())
    {
        if (!value["MsgCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.MsgCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCount = value["MsgCount"].GetUint64();
        m_msgCountHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgSize") && !value["MaxMsgSize"].IsNull())
    {
        if (!value["MaxMsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.MaxMsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgSize = value["MaxMsgSize"].GetUint64();
        m_maxMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("Trace") && !value["Trace"].IsNull())
    {
        if (!value["Trace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.Trace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trace = value["Trace"].GetBool();
        m_traceHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicSet.Tags` is not array type"));

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

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.FilterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetUint64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionSeconds") && !value["MsgRetentionSeconds"].IsNull())
    {
        if (!value["MsgRetentionSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.MsgRetentionSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionSeconds = value["MsgRetentionSeconds"].GetUint64();
        m_msgRetentionSecondsHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Migrate") && !value["Migrate"].IsNull())
    {
        if (!value["Migrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicSet.Migrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrate = value["Migrate"].GetInt64();
        m_migrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCount, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trace, allocator);
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

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_migrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Migrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrate, allocator);
    }

}


uint64_t TopicSet::GetMsgCount() const
{
    return m_msgCount;
}

void TopicSet::SetMsgCount(const uint64_t& _msgCount)
{
    m_msgCount = _msgCount;
    m_msgCountHasBeenSet = true;
}

bool TopicSet::MsgCountHasBeenSet() const
{
    return m_msgCountHasBeenSet;
}

string TopicSet::GetTopicId() const
{
    return m_topicId;
}

void TopicSet::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicSet::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t TopicSet::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void TopicSet::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool TopicSet::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

bool TopicSet::GetTrace() const
{
    return m_trace;
}

void TopicSet::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool TopicSet::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

vector<Tag> TopicSet::GetTags() const
{
    return m_tags;
}

void TopicSet::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TopicSet::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t TopicSet::GetCreateUin() const
{
    return m_createUin;
}

void TopicSet::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool TopicSet::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

uint64_t TopicSet::GetFilterType() const
{
    return m_filterType;
}

void TopicSet::SetFilterType(const uint64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool TopicSet::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string TopicSet::GetTopicName() const
{
    return m_topicName;
}

void TopicSet::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicSet::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t TopicSet::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void TopicSet::SetLastModifyTime(const uint64_t& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool TopicSet::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

uint64_t TopicSet::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void TopicSet::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool TopicSet::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t TopicSet::GetQps() const
{
    return m_qps;
}

void TopicSet::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool TopicSet::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t TopicSet::GetCreateTime() const
{
    return m_createTime;
}

void TopicSet::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TopicSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TopicSet::GetMigrate() const
{
    return m_migrate;
}

void TopicSet::SetMigrate(const int64_t& _migrate)
{
    m_migrate = _migrate;
    m_migrateHasBeenSet = true;
}

bool TopicSet::MigrateHasBeenSet() const
{
    return m_migrateHasBeenSet;
}

