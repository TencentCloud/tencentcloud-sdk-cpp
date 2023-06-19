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

#include <tencentcloud/cloudstudio/v20230508/model/LifeCycle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20230508::Model;
using namespace std;

LifeCycle::LifeCycle() :
    m_initHasBeenSet(false),
    m_startHasBeenSet(false),
    m_destroyHasBeenSet(false)
{
}

CoreInternalOutcome LifeCycle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Init") && !value["Init"].IsNull())
    {
        if (!value["Init"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifeCycle.Init` is not array type"));

        const rapidjson::Value &tmpValue = value["Init"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifeCycleCommand item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_init.push_back(item);
        }
        m_initHasBeenSet = true;
    }

    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifeCycle.Start` is not array type"));

        const rapidjson::Value &tmpValue = value["Start"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifeCycleCommand item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_start.push_back(item);
        }
        m_startHasBeenSet = true;
    }

    if (value.HasMember("Destroy") && !value["Destroy"].IsNull())
    {
        if (!value["Destroy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifeCycle.Destroy` is not array type"));

        const rapidjson::Value &tmpValue = value["Destroy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifeCycleCommand item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destroy.push_back(item);
        }
        m_destroyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifeCycle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_initHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Init";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_init.begin(); itr != m_init.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_start.begin(); itr != m_start.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destroyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destroy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destroy.begin(); itr != m_destroy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<LifeCycleCommand> LifeCycle::GetInit() const
{
    return m_init;
}

void LifeCycle::SetInit(const vector<LifeCycleCommand>& _init)
{
    m_init = _init;
    m_initHasBeenSet = true;
}

bool LifeCycle::InitHasBeenSet() const
{
    return m_initHasBeenSet;
}

vector<LifeCycleCommand> LifeCycle::GetStart() const
{
    return m_start;
}

void LifeCycle::SetStart(const vector<LifeCycleCommand>& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool LifeCycle::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

vector<LifeCycleCommand> LifeCycle::GetDestroy() const
{
    return m_destroy;
}

void LifeCycle::SetDestroy(const vector<LifeCycleCommand>& _destroy)
{
    m_destroy = _destroy;
    m_destroyHasBeenSet = true;
}

bool LifeCycle::DestroyHasBeenSet() const
{
    return m_destroyHasBeenSet;
}

