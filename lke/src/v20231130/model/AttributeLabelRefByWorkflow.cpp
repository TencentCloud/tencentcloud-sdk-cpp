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

#include <tencentcloud/lke/v20231130/model/AttributeLabelRefByWorkflow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AttributeLabelRefByWorkflow::AttributeLabelRefByWorkflow() :
    m_attributeLabelBizIdHasBeenSet(false),
    m_workflowListHasBeenSet(false)
{
}

CoreInternalOutcome AttributeLabelRefByWorkflow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeLabelBizId") && !value["AttributeLabelBizId"].IsNull())
    {
        if (!value["AttributeLabelBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeLabelRefByWorkflow.AttributeLabelBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeLabelBizId = string(value["AttributeLabelBizId"].GetString());
        m_attributeLabelBizIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowList") && !value["WorkflowList"].IsNull())
    {
        if (!value["WorkflowList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttributeLabelRefByWorkflow.WorkflowList` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkflowList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowRef item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workflowList.push_back(item);
        }
        m_workflowListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeLabelRefByWorkflow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeLabelBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabelBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeLabelBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflowList.begin(); itr != m_workflowList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AttributeLabelRefByWorkflow::GetAttributeLabelBizId() const
{
    return m_attributeLabelBizId;
}

void AttributeLabelRefByWorkflow::SetAttributeLabelBizId(const string& _attributeLabelBizId)
{
    m_attributeLabelBizId = _attributeLabelBizId;
    m_attributeLabelBizIdHasBeenSet = true;
}

bool AttributeLabelRefByWorkflow::AttributeLabelBizIdHasBeenSet() const
{
    return m_attributeLabelBizIdHasBeenSet;
}

vector<WorkflowRef> AttributeLabelRefByWorkflow::GetWorkflowList() const
{
    return m_workflowList;
}

void AttributeLabelRefByWorkflow::SetWorkflowList(const vector<WorkflowRef>& _workflowList)
{
    m_workflowList = _workflowList;
    m_workflowListHasBeenSet = true;
}

bool AttributeLabelRefByWorkflow::WorkflowListHasBeenSet() const
{
    return m_workflowListHasBeenSet;
}

