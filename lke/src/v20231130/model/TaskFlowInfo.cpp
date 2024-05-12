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

#include <tencentcloud/lke/v20231130/model/TaskFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

TaskFlowInfo::TaskFlowInfo() :
    m_taskFlowIdHasBeenSet(false),
    m_taskFlowNameHasBeenSet(false),
    m_queryRewriteHasBeenSet(false),
    m_hitIntentHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome TaskFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskFlowId") && !value["TaskFlowId"].IsNull())
    {
        if (!value["TaskFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowInfo.TaskFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFlowId = string(value["TaskFlowId"].GetString());
        m_taskFlowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFlowName") && !value["TaskFlowName"].IsNull())
    {
        if (!value["TaskFlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowInfo.TaskFlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFlowName = string(value["TaskFlowName"].GetString());
        m_taskFlowNameHasBeenSet = true;
    }

    if (value.HasMember("QueryRewrite") && !value["QueryRewrite"].IsNull())
    {
        if (!value["QueryRewrite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowInfo.QueryRewrite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryRewrite = string(value["QueryRewrite"].GetString());
        m_queryRewriteHasBeenSet = true;
    }

    if (value.HasMember("HitIntent") && !value["HitIntent"].IsNull())
    {
        if (!value["HitIntent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowInfo.HitIntent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitIntent = string(value["HitIntent"].GetString());
        m_hitIntentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryRewrite.c_str(), allocator).Move(), allocator);
    }

    if (m_hitIntentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitIntent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitIntent.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string TaskFlowInfo::GetTaskFlowId() const
{
    return m_taskFlowId;
}

void TaskFlowInfo::SetTaskFlowId(const string& _taskFlowId)
{
    m_taskFlowId = _taskFlowId;
    m_taskFlowIdHasBeenSet = true;
}

bool TaskFlowInfo::TaskFlowIdHasBeenSet() const
{
    return m_taskFlowIdHasBeenSet;
}

string TaskFlowInfo::GetTaskFlowName() const
{
    return m_taskFlowName;
}

void TaskFlowInfo::SetTaskFlowName(const string& _taskFlowName)
{
    m_taskFlowName = _taskFlowName;
    m_taskFlowNameHasBeenSet = true;
}

bool TaskFlowInfo::TaskFlowNameHasBeenSet() const
{
    return m_taskFlowNameHasBeenSet;
}

string TaskFlowInfo::GetQueryRewrite() const
{
    return m_queryRewrite;
}

void TaskFlowInfo::SetQueryRewrite(const string& _queryRewrite)
{
    m_queryRewrite = _queryRewrite;
    m_queryRewriteHasBeenSet = true;
}

bool TaskFlowInfo::QueryRewriteHasBeenSet() const
{
    return m_queryRewriteHasBeenSet;
}

string TaskFlowInfo::GetHitIntent() const
{
    return m_hitIntent;
}

void TaskFlowInfo::SetHitIntent(const string& _hitIntent)
{
    m_hitIntent = _hitIntent;
    m_hitIntentHasBeenSet = true;
}

bool TaskFlowInfo::HitIntentHasBeenSet() const
{
    return m_hitIntentHasBeenSet;
}

uint64_t TaskFlowInfo::GetType() const
{
    return m_type;
}

void TaskFlowInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TaskFlowInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

