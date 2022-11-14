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

#include <tencentcloud/wedata/v20210820/model/CommitRuleGroupExecResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CommitRuleGroupExecResultRequest::CommitRuleGroupExecResultRequest() :
    m_projectIdHasBeenSet(false),
    m_ruleGroupExecIdHasBeenSet(false),
    m_ruleGroupStateHasBeenSet(false),
    m_ruleExecResultsHasBeenSet(false)
{
}

string CommitRuleGroupExecResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupExecId, allocator);
    }

    if (m_ruleGroupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleGroupState.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExecResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleExecResults.begin(); itr != m_ruleExecResults.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CommitRuleGroupExecResultRequest::GetProjectId() const
{
    return m_projectId;
}

void CommitRuleGroupExecResultRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CommitRuleGroupExecResultRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CommitRuleGroupExecResultRequest::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void CommitRuleGroupExecResultRequest::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool CommitRuleGroupExecResultRequest::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

string CommitRuleGroupExecResultRequest::GetRuleGroupState() const
{
    return m_ruleGroupState;
}

void CommitRuleGroupExecResultRequest::SetRuleGroupState(const string& _ruleGroupState)
{
    m_ruleGroupState = _ruleGroupState;
    m_ruleGroupStateHasBeenSet = true;
}

bool CommitRuleGroupExecResultRequest::RuleGroupStateHasBeenSet() const
{
    return m_ruleGroupStateHasBeenSet;
}

vector<RunnerRuleExecResult> CommitRuleGroupExecResultRequest::GetRuleExecResults() const
{
    return m_ruleExecResults;
}

void CommitRuleGroupExecResultRequest::SetRuleExecResults(const vector<RunnerRuleExecResult>& _ruleExecResults)
{
    m_ruleExecResults = _ruleExecResults;
    m_ruleExecResultsHasBeenSet = true;
}

bool CommitRuleGroupExecResultRequest::RuleExecResultsHasBeenSet() const
{
    return m_ruleExecResultsHasBeenSet;
}


