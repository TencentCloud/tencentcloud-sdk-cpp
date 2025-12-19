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

#include <tencentcloud/wedata/v20210820/model/LineageRelationVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LineageRelationVO::LineageRelationVO() :
    m_relationIdHasBeenSet(false),
    m_sourceQualifiedIdHasBeenSet(false),
    m_targetQualifiedIdHasBeenSet(false),
    m_processesHasBeenSet(false)
{
}

CoreInternalOutcome LineageRelationVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelationVO.RelationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = string(value["RelationId"].GetString());
        m_relationIdHasBeenSet = true;
    }

    if (value.HasMember("SourceQualifiedId") && !value["SourceQualifiedId"].IsNull())
    {
        if (!value["SourceQualifiedId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelationVO.SourceQualifiedId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceQualifiedId = string(value["SourceQualifiedId"].GetString());
        m_sourceQualifiedIdHasBeenSet = true;
    }

    if (value.HasMember("TargetQualifiedId") && !value["TargetQualifiedId"].IsNull())
    {
        if (!value["TargetQualifiedId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageRelationVO.TargetQualifiedId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetQualifiedId = string(value["TargetQualifiedId"].GetString());
        m_targetQualifiedIdHasBeenSet = true;
    }

    if (value.HasMember("Processes") && !value["Processes"].IsNull())
    {
        if (!value["Processes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageRelationVO.Processes` is not array type"));

        const rapidjson::Value &tmpValue = value["Processes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageProcessVO item;
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

void LineageRelationVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceQualifiedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceQualifiedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceQualifiedId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetQualifiedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetQualifiedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetQualifiedId.c_str(), allocator).Move(), allocator);
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


string LineageRelationVO::GetRelationId() const
{
    return m_relationId;
}

void LineageRelationVO::SetRelationId(const string& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool LineageRelationVO::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

string LineageRelationVO::GetSourceQualifiedId() const
{
    return m_sourceQualifiedId;
}

void LineageRelationVO::SetSourceQualifiedId(const string& _sourceQualifiedId)
{
    m_sourceQualifiedId = _sourceQualifiedId;
    m_sourceQualifiedIdHasBeenSet = true;
}

bool LineageRelationVO::SourceQualifiedIdHasBeenSet() const
{
    return m_sourceQualifiedIdHasBeenSet;
}

string LineageRelationVO::GetTargetQualifiedId() const
{
    return m_targetQualifiedId;
}

void LineageRelationVO::SetTargetQualifiedId(const string& _targetQualifiedId)
{
    m_targetQualifiedId = _targetQualifiedId;
    m_targetQualifiedIdHasBeenSet = true;
}

bool LineageRelationVO::TargetQualifiedIdHasBeenSet() const
{
    return m_targetQualifiedIdHasBeenSet;
}

vector<LineageProcessVO> LineageRelationVO::GetProcesses() const
{
    return m_processes;
}

void LineageRelationVO::SetProcesses(const vector<LineageProcessVO>& _processes)
{
    m_processes = _processes;
    m_processesHasBeenSet = true;
}

bool LineageRelationVO::ProcessesHasBeenSet() const
{
    return m_processesHasBeenSet;
}

