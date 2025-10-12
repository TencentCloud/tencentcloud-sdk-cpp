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

#include <tencentcloud/wedata/v20250806/model/LineageRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

LineageRelation::LineageRelation() :
    m_relationIdHasBeenSet(false),
    m_sourceUniqueIdHasBeenSet(false),
    m_targetUniqueIdHasBeenSet(false),
    m_processesHasBeenSet(false)
{
}

CoreInternalOutcome LineageRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelation.RelationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = string(value["RelationId"].GetString());
        m_relationIdHasBeenSet = true;
    }

    if (value.HasMember("SourceUniqueId") && !value["SourceUniqueId"].IsNull())
    {
        if (!value["SourceUniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelation.SourceUniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUniqueId = string(value["SourceUniqueId"].GetString());
        m_sourceUniqueIdHasBeenSet = true;
    }

    if (value.HasMember("TargetUniqueId") && !value["TargetUniqueId"].IsNull())
    {
        if (!value["TargetUniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelation.TargetUniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUniqueId = string(value["TargetUniqueId"].GetString());
        m_targetUniqueIdHasBeenSet = true;
    }

    if (value.HasMember("Processes") && !value["Processes"].IsNull())
    {
        if (!value["Processes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageRelation.Processes` is not array type"));

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

void LineageRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUniqueId.c_str(), allocator).Move(), allocator);
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


string LineageRelation::GetRelationId() const
{
    return m_relationId;
}

void LineageRelation::SetRelationId(const string& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool LineageRelation::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

string LineageRelation::GetSourceUniqueId() const
{
    return m_sourceUniqueId;
}

void LineageRelation::SetSourceUniqueId(const string& _sourceUniqueId)
{
    m_sourceUniqueId = _sourceUniqueId;
    m_sourceUniqueIdHasBeenSet = true;
}

bool LineageRelation::SourceUniqueIdHasBeenSet() const
{
    return m_sourceUniqueIdHasBeenSet;
}

string LineageRelation::GetTargetUniqueId() const
{
    return m_targetUniqueId;
}

void LineageRelation::SetTargetUniqueId(const string& _targetUniqueId)
{
    m_targetUniqueId = _targetUniqueId;
    m_targetUniqueIdHasBeenSet = true;
}

bool LineageRelation::TargetUniqueIdHasBeenSet() const
{
    return m_targetUniqueIdHasBeenSet;
}

vector<LineageProcess> LineageRelation::GetProcesses() const
{
    return m_processes;
}

void LineageRelation::SetProcesses(const vector<LineageProcess>& _processes)
{
    m_processes = _processes;
    m_processesHasBeenSet = true;
}

bool LineageRelation::ProcessesHasBeenSet() const
{
    return m_processesHasBeenSet;
}

