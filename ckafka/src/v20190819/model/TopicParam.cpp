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

#include <tencentcloud/ckafka/v20190819/model/TopicParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicParam::TopicParam() :
    m_resourceHasBeenSet(false),
    m_offsetTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_compressionTypeHasBeenSet(false),
    m_useAutoCreateTopicHasBeenSet(false),
    m_msgMultipleHasBeenSet(false)
{
}

CoreInternalOutcome TopicParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("OffsetType") && !value["OffsetType"].IsNull())
    {
        if (!value["OffsetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.OffsetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetType = string(value["OffsetType"].GetString());
        m_offsetTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("CompressionType") && !value["CompressionType"].IsNull())
    {
        if (!value["CompressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.CompressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressionType = string(value["CompressionType"].GetString());
        m_compressionTypeHasBeenSet = true;
    }

    if (value.HasMember("UseAutoCreateTopic") && !value["UseAutoCreateTopic"].IsNull())
    {
        if (!value["UseAutoCreateTopic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.UseAutoCreateTopic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useAutoCreateTopic = value["UseAutoCreateTopic"].GetBool();
        m_useAutoCreateTopicHasBeenSet = true;
    }

    if (value.HasMember("MsgMultiple") && !value["MsgMultiple"].IsNull())
    {
        if (!value["MsgMultiple"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicParam.MsgMultiple` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgMultiple = value["MsgMultiple"].GetInt64();
        m_msgMultipleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_useAutoCreateTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseAutoCreateTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useAutoCreateTopic, allocator);
    }

    if (m_msgMultipleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgMultiple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgMultiple, allocator);
    }

}


string TopicParam::GetResource() const
{
    return m_resource;
}

void TopicParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool TopicParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string TopicParam::GetOffsetType() const
{
    return m_offsetType;
}

void TopicParam::SetOffsetType(const string& _offsetType)
{
    m_offsetType = _offsetType;
    m_offsetTypeHasBeenSet = true;
}

bool TopicParam::OffsetTypeHasBeenSet() const
{
    return m_offsetTypeHasBeenSet;
}

uint64_t TopicParam::GetStartTime() const
{
    return m_startTime;
}

void TopicParam::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TopicParam::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TopicParam::GetTopicId() const
{
    return m_topicId;
}

void TopicParam::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicParam::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TopicParam::GetCompressionType() const
{
    return m_compressionType;
}

void TopicParam::SetCompressionType(const string& _compressionType)
{
    m_compressionType = _compressionType;
    m_compressionTypeHasBeenSet = true;
}

bool TopicParam::CompressionTypeHasBeenSet() const
{
    return m_compressionTypeHasBeenSet;
}

bool TopicParam::GetUseAutoCreateTopic() const
{
    return m_useAutoCreateTopic;
}

void TopicParam::SetUseAutoCreateTopic(const bool& _useAutoCreateTopic)
{
    m_useAutoCreateTopic = _useAutoCreateTopic;
    m_useAutoCreateTopicHasBeenSet = true;
}

bool TopicParam::UseAutoCreateTopicHasBeenSet() const
{
    return m_useAutoCreateTopicHasBeenSet;
}

int64_t TopicParam::GetMsgMultiple() const
{
    return m_msgMultiple;
}

void TopicParam::SetMsgMultiple(const int64_t& _msgMultiple)
{
    m_msgMultiple = _msgMultiple;
    m_msgMultipleHasBeenSet = true;
}

bool TopicParam::MsgMultipleHasBeenSet() const
{
    return m_msgMultipleHasBeenSet;
}

