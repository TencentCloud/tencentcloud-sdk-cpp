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

#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTypeOpsDto::TaskTypeOpsDto() :
    m_typeDescHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_typeSortHasBeenSet(false)
{
}

CoreInternalOutcome TaskTypeOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeDesc") && !value["TypeDesc"].IsNull())
    {
        if (!value["TypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeOpsDto.TypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeDesc = string(value["TypeDesc"].GetString());
        m_typeDescHasBeenSet = true;
    }

    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeOpsDto.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("TypeSort") && !value["TypeSort"].IsNull())
    {
        if (!value["TypeSort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeOpsDto.TypeSort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeSort = string(value["TypeSort"].GetString());
        m_typeSortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_typeSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeSort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeSort.c_str(), allocator).Move(), allocator);
    }

}


string TaskTypeOpsDto::GetTypeDesc() const
{
    return m_typeDesc;
}

void TaskTypeOpsDto::SetTypeDesc(const string& _typeDesc)
{
    m_typeDesc = _typeDesc;
    m_typeDescHasBeenSet = true;
}

bool TaskTypeOpsDto::TypeDescHasBeenSet() const
{
    return m_typeDescHasBeenSet;
}

int64_t TaskTypeOpsDto::GetTypeId() const
{
    return m_typeId;
}

void TaskTypeOpsDto::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool TaskTypeOpsDto::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string TaskTypeOpsDto::GetTypeSort() const
{
    return m_typeSort;
}

void TaskTypeOpsDto::SetTypeSort(const string& _typeSort)
{
    m_typeSort = _typeSort;
    m_typeSortHasBeenSet = true;
}

bool TaskTypeOpsDto::TypeSortHasBeenSet() const
{
    return m_typeSortHasBeenSet;
}

