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

#include <tencentcloud/trocket/v20230308/model/MigrationTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MigrationTaskItem::MigrationTaskItem() :
    m_taskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome MigrationTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("GroupNum") && !value["GroupNum"].IsNull())
    {
        if (!value["GroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.GroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = value["GroupNum"].GetInt64();
        m_groupNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_groupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string MigrationTaskItem::GetTaskId() const
{
    return m_taskId;
}

void MigrationTaskItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MigrationTaskItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string MigrationTaskItem::GetInstanceId() const
{
    return m_instanceId;
}

void MigrationTaskItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MigrationTaskItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t MigrationTaskItem::GetType() const
{
    return m_type;
}

void MigrationTaskItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MigrationTaskItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t MigrationTaskItem::GetTopicNum() const
{
    return m_topicNum;
}

void MigrationTaskItem::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool MigrationTaskItem::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t MigrationTaskItem::GetGroupNum() const
{
    return m_groupNum;
}

void MigrationTaskItem::SetGroupNum(const int64_t& _groupNum)
{
    m_groupNum = _groupNum;
    m_groupNumHasBeenSet = true;
}

bool MigrationTaskItem::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

int64_t MigrationTaskItem::GetStatus() const
{
    return m_status;
}

void MigrationTaskItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrationTaskItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t MigrationTaskItem::GetCreateTime() const
{
    return m_createTime;
}

void MigrationTaskItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MigrationTaskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

