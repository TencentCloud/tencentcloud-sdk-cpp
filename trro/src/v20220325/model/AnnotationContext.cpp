/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trro/v20220325/model/AnnotationContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

AnnotationContext::AnnotationContext() :
    m_taskGoalHasBeenSet(false),
    m_keyObjectsHasBeenSet(false),
    m_atomicVerbsHasBeenSet(false)
{
}

CoreInternalOutcome AnnotationContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGoal") && !value["TaskGoal"].IsNull())
    {
        if (!value["TaskGoal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnnotationContext.TaskGoal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGoal = string(value["TaskGoal"].GetString());
        m_taskGoalHasBeenSet = true;
    }

    if (value.HasMember("KeyObjects") && !value["KeyObjects"].IsNull())
    {
        if (!value["KeyObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnnotationContext.KeyObjects` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyObjects.push_back((*itr).GetString());
        }
        m_keyObjectsHasBeenSet = true;
    }

    if (value.HasMember("AtomicVerbs") && !value["AtomicVerbs"].IsNull())
    {
        if (!value["AtomicVerbs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnnotationContext.AtomicVerbs` is not array type"));

        const rapidjson::Value &tmpValue = value["AtomicVerbs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_atomicVerbs.push_back((*itr).GetString());
        }
        m_atomicVerbsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnnotationContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGoalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGoal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGoal.c_str(), allocator).Move(), allocator);
    }

    if (m_keyObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyObjects.begin(); itr != m_keyObjects.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_atomicVerbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AtomicVerbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_atomicVerbs.begin(); itr != m_atomicVerbs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AnnotationContext::GetTaskGoal() const
{
    return m_taskGoal;
}

void AnnotationContext::SetTaskGoal(const string& _taskGoal)
{
    m_taskGoal = _taskGoal;
    m_taskGoalHasBeenSet = true;
}

bool AnnotationContext::TaskGoalHasBeenSet() const
{
    return m_taskGoalHasBeenSet;
}

vector<string> AnnotationContext::GetKeyObjects() const
{
    return m_keyObjects;
}

void AnnotationContext::SetKeyObjects(const vector<string>& _keyObjects)
{
    m_keyObjects = _keyObjects;
    m_keyObjectsHasBeenSet = true;
}

bool AnnotationContext::KeyObjectsHasBeenSet() const
{
    return m_keyObjectsHasBeenSet;
}

vector<string> AnnotationContext::GetAtomicVerbs() const
{
    return m_atomicVerbs;
}

void AnnotationContext::SetAtomicVerbs(const vector<string>& _atomicVerbs)
{
    m_atomicVerbs = _atomicVerbs;
    m_atomicVerbsHasBeenSet = true;
}

bool AnnotationContext::AtomicVerbsHasBeenSet() const
{
    return m_atomicVerbsHasBeenSet;
}

