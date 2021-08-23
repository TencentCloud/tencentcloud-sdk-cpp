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

#include <tencentcloud/iot/v20180123/model/Topic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

Topic::Topic() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_msgLifeHasBeenSet(false),
    m_msgSizeHasBeenSet(false),
    m_msgCountHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Topic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("MsgLife") && !value["MsgLife"].IsNull())
    {
        if (!value["MsgLife"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgLife` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgLife = value["MsgLife"].GetUint64();
        m_msgLifeHasBeenSet = true;
    }

    if (value.HasMember("MsgSize") && !value["MsgSize"].IsNull())
    {
        if (!value["MsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgSize = value["MsgSize"].GetUint64();
        m_msgSizeHasBeenSet = true;
    }

    if (value.HasMember("MsgCount") && !value["MsgCount"].IsNull())
    {
        if (!value["MsgCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCount = value["MsgCount"].GetUint64();
        m_msgCountHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.Deleted` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetUint64();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Topic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgLifeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgLife";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgLife, allocator);
    }

    if (m_msgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgSize, allocator);
    }

    if (m_msgCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCount, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string Topic::GetTopicId() const
{
    return m_topicId;
}

void Topic::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool Topic::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string Topic::GetTopicName() const
{
    return m_topicName;
}

void Topic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Topic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string Topic::GetProductId() const
{
    return m_productId;
}

void Topic::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Topic::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t Topic::GetMsgLife() const
{
    return m_msgLife;
}

void Topic::SetMsgLife(const uint64_t& _msgLife)
{
    m_msgLife = _msgLife;
    m_msgLifeHasBeenSet = true;
}

bool Topic::MsgLifeHasBeenSet() const
{
    return m_msgLifeHasBeenSet;
}

uint64_t Topic::GetMsgSize() const
{
    return m_msgSize;
}

void Topic::SetMsgSize(const uint64_t& _msgSize)
{
    m_msgSize = _msgSize;
    m_msgSizeHasBeenSet = true;
}

bool Topic::MsgSizeHasBeenSet() const
{
    return m_msgSizeHasBeenSet;
}

uint64_t Topic::GetMsgCount() const
{
    return m_msgCount;
}

void Topic::SetMsgCount(const uint64_t& _msgCount)
{
    m_msgCount = _msgCount;
    m_msgCountHasBeenSet = true;
}

bool Topic::MsgCountHasBeenSet() const
{
    return m_msgCountHasBeenSet;
}

uint64_t Topic::GetDeleted() const
{
    return m_deleted;
}

void Topic::SetDeleted(const uint64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool Topic::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string Topic::GetPath() const
{
    return m_path;
}

void Topic::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool Topic::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string Topic::GetCreateTime() const
{
    return m_createTime;
}

void Topic::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Topic::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Topic::GetUpdateTime() const
{
    return m_updateTime;
}

void Topic::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Topic::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

