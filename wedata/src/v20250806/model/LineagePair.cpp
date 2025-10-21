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

#include <tencentcloud/wedata/v20250806/model/LineagePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

LineagePair::LineagePair() :
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_processesHasBeenSet(false)
{
}

CoreInternalOutcome LineagePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LineagePair.Source` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_source.Deserialize(value["Source"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LineagePair.Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(value["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Processes") && !value["Processes"].IsNull())
    {
        if (!value["Processes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineagePair.Processes` is not array type"));

        const rapidjson::Value &tmpValue = value["Processes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageProcess item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_processes.push_back(item);
        }
        m_processesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineagePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_processesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_processes.begin(); itr != m_processes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


LineageResouce LineagePair::GetSource() const
{
    return m_source;
}

void LineagePair::SetSource(const LineageResouce& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool LineagePair::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

LineageResouce LineagePair::GetTarget() const
{
    return m_target;
}

void LineagePair::SetTarget(const LineageResouce& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool LineagePair::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<LineageProcess> LineagePair::GetProcesses() const
{
    return m_processes;
}

void LineagePair::SetProcesses(const vector<LineageProcess>& _processes)
{
    m_processes = _processes;
    m_processesHasBeenSet = true;
}

bool LineagePair::ProcessesHasBeenSet() const
{
    return m_processesHasBeenSet;
}

