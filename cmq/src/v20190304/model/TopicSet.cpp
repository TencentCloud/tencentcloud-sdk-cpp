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
using namespace rapidjson;
using namespace std;

TopicSet::TopicSet() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_msgCountHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_traceHasBeenSet(false)
{
}

CoreInternalOutcome TopicSet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicSet.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicSet.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionSeconds") && !value["MsgRetentionSeconds"].IsNull())
    {
        if (!value["MsgRetentionSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.MsgRetentionSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionSeconds = value["MsgRetentionSeconds"].GetUint64();
        m_msgRetentionSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgSize") && !value["MaxMsgSize"].IsNull())
    {
        if (!value["MaxMsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.MaxMsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgSize = value["MaxMsgSize"].GetUint64();
        m_maxMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.FilterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetUint64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgCount") && !value["MsgCount"].IsNull())
    {
        if (!value["MsgCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.MsgCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCount = value["MsgCount"].GetUint64();
        m_msgCountHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TopicSet.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `TopicSet.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("Trace") && !value["Trace"].IsNull())
    {
        if (!value["Trace"].IsBool())
        {
            return CoreInternalOutcome(Error("response `TopicSet.Trace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trace = value["Trace"].GetBool();
        m_traceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicSet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_msgCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCount, allocator);
    }

    if (m_createUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trace, allocator);
    }

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

