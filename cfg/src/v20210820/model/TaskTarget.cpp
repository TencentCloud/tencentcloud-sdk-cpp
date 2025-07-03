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

#include <tencentcloud/cfg/v20210820/model/TaskTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskTarget::TaskTarget() :
    m_targetIdHasBeenSet(false),
    m_targetDescHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome TaskTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTarget.TargetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = value["TargetId"].GetInt64();
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetDesc") && !value["TargetDesc"].IsNull())
    {
        if (!value["TargetDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTarget.TargetDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDesc = string(value["TargetDesc"].GetString());
        m_targetDescHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTarget.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTarget.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetId, allocator);
    }

    if (m_targetDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

}


int64_t TaskTarget::GetTargetId() const
{
    return m_targetId;
}

void TaskTarget::SetTargetId(const int64_t& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool TaskTarget::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string TaskTarget::GetTargetDesc() const
{
    return m_targetDesc;
}

void TaskTarget::SetTargetDesc(const string& _targetDesc)
{
    m_targetDesc = _targetDesc;
    m_targetDescHasBeenSet = true;
}

bool TaskTarget::TargetDescHasBeenSet() const
{
    return m_targetDescHasBeenSet;
}

int64_t TaskTarget::GetType() const
{
    return m_type;
}

void TaskTarget::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TaskTarget::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t TaskTarget::GetSource() const
{
    return m_source;
}

void TaskTarget::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TaskTarget::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

