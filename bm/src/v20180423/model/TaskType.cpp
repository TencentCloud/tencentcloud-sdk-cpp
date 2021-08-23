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

#include <tencentcloud/bm/v20180423/model/TaskType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

TaskType::TaskType() :
    m_typeIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_taskSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType.TypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetUint64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskSubType") && !value["TaskSubType"].IsNull())
    {
        if (!value["TaskSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType.TaskSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSubType = string(value["TaskSubType"].GetString());
        m_taskSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSubType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskType::GetTypeId() const
{
    return m_typeId;
}

void TaskType::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool TaskType::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string TaskType::GetTypeName() const
{
    return m_typeName;
}

void TaskType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool TaskType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string TaskType::GetTaskSubType() const
{
    return m_taskSubType;
}

void TaskType::SetTaskSubType(const string& _taskSubType)
{
    m_taskSubType = _taskSubType;
    m_taskSubTypeHasBeenSet = true;
}

bool TaskType::TaskSubTypeHasBeenSet() const
{
    return m_taskSubTypeHasBeenSet;
}

