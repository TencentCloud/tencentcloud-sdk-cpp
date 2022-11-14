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

#include <tencentcloud/wedata/v20210820/model/RuleExecExportResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecExportResult::RuleExecExportResult() :
    m_ruleExecIdHasBeenSet(false),
    m_exportTasksHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecExportResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleExecId") && !value["RuleExecId"].IsNull())
    {
        if (!value["RuleExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecExportResult.RuleExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExecId = value["RuleExecId"].GetUint64();
        m_ruleExecIdHasBeenSet = true;
    }

    if (value.HasMember("ExportTasks") && !value["ExportTasks"].IsNull())
    {
        if (!value["ExportTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleExecExportResult.ExportTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["ExportTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExportTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exportTasks.push_back(item);
        }
        m_exportTasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecExportResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExecId, allocator);
    }

    if (m_exportTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exportTasks.begin(); itr != m_exportTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t RuleExecExportResult::GetRuleExecId() const
{
    return m_ruleExecId;
}

void RuleExecExportResult::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool RuleExecExportResult::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

vector<ExportTaskInfo> RuleExecExportResult::GetExportTasks() const
{
    return m_exportTasks;
}

void RuleExecExportResult::SetExportTasks(const vector<ExportTaskInfo>& _exportTasks)
{
    m_exportTasks = _exportTasks;
    m_exportTasksHasBeenSet = true;
}

bool RuleExecExportResult::ExportTasksHasBeenSet() const
{
    return m_exportTasksHasBeenSet;
}

