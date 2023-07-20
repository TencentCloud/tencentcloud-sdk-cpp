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

#include <tencentcloud/wedata/v20210820/model/WorkflowTaskCountOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowTaskCountOpsDto::WorkflowTaskCountOpsDto() :
    m_countHasBeenSet(false),
    m_typeCountHasBeenSet(false),
    m_cycleCountHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTaskCountOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskCountOpsDto.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("TypeCount") && !value["TypeCount"].IsNull())
    {
        if (!value["TypeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskCountOpsDto.TypeCount` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PairDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_typeCount.push_back(item);
        }
        m_typeCountHasBeenSet = true;
    }

    if (value.HasMember("CycleCount") && !value["CycleCount"].IsNull())
    {
        if (!value["CycleCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskCountOpsDto.CycleCount` is not array type"));

        const rapidjson::Value &tmpValue = value["CycleCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PairDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cycleCount.push_back(item);
        }
        m_cycleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTaskCountOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_typeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_typeCount.begin(); itr != m_typeCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cycleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cycleCount.begin(); itr != m_cycleCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t WorkflowTaskCountOpsDto::GetCount() const
{
    return m_count;
}

void WorkflowTaskCountOpsDto::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool WorkflowTaskCountOpsDto::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<PairDto> WorkflowTaskCountOpsDto::GetTypeCount() const
{
    return m_typeCount;
}

void WorkflowTaskCountOpsDto::SetTypeCount(const vector<PairDto>& _typeCount)
{
    m_typeCount = _typeCount;
    m_typeCountHasBeenSet = true;
}

bool WorkflowTaskCountOpsDto::TypeCountHasBeenSet() const
{
    return m_typeCountHasBeenSet;
}

vector<PairDto> WorkflowTaskCountOpsDto::GetCycleCount() const
{
    return m_cycleCount;
}

void WorkflowTaskCountOpsDto::SetCycleCount(const vector<PairDto>& _cycleCount)
{
    m_cycleCount = _cycleCount;
    m_cycleCountHasBeenSet = true;
}

bool WorkflowTaskCountOpsDto::CycleCountHasBeenSet() const
{
    return m_cycleCountHasBeenSet;
}

