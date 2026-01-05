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

#include <tencentcloud/wedata/v20250806/model/CreateQualityRuleGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateQualityRuleGroupRequest::CreateQualityRuleGroupRequest() :
    m_ruleGroupExecStrategyBOListHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string CreateQualityRuleGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleGroupExecStrategyBOListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecStrategyBOList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleGroupExecStrategyBOList.begin(); itr != m_ruleGroupExecStrategyBOList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<QualityRuleGroupExecStrategy> CreateQualityRuleGroupRequest::GetRuleGroupExecStrategyBOList() const
{
    return m_ruleGroupExecStrategyBOList;
}

void CreateQualityRuleGroupRequest::SetRuleGroupExecStrategyBOList(const vector<QualityRuleGroupExecStrategy>& _ruleGroupExecStrategyBOList)
{
    m_ruleGroupExecStrategyBOList = _ruleGroupExecStrategyBOList;
    m_ruleGroupExecStrategyBOListHasBeenSet = true;
}

bool CreateQualityRuleGroupRequest::RuleGroupExecStrategyBOListHasBeenSet() const
{
    return m_ruleGroupExecStrategyBOListHasBeenSet;
}

string CreateQualityRuleGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateQualityRuleGroupRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateQualityRuleGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


