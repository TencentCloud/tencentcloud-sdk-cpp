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

#include <tencentcloud/wedata/v20210820/model/TaskLineageInfoPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskLineageInfoPair::TaskLineageInfoPair() :
    m_sourceTableHasBeenSet(false),
    m_targetTableHasBeenSet(false)
{
}

CoreInternalOutcome TaskLineageInfoPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceTable") && !value["SourceTable"].IsNull())
    {
        if (!value["SourceTable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLineageInfoPair.SourceTable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceTable.Deserialize(value["SourceTable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceTableHasBeenSet = true;
    }

    if (value.HasMember("TargetTable") && !value["TargetTable"].IsNull())
    {
        if (!value["TargetTable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLineageInfoPair.TargetTable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetTable.Deserialize(value["TargetTable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetTableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLineageInfoPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceTable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetTable.ToJsonObject(value[key.c_str()], allocator);
    }

}


TaskLineageInfo TaskLineageInfoPair::GetSourceTable() const
{
    return m_sourceTable;
}

void TaskLineageInfoPair::SetSourceTable(const TaskLineageInfo& _sourceTable)
{
    m_sourceTable = _sourceTable;
    m_sourceTableHasBeenSet = true;
}

bool TaskLineageInfoPair::SourceTableHasBeenSet() const
{
    return m_sourceTableHasBeenSet;
}

TaskLineageInfo TaskLineageInfoPair::GetTargetTable() const
{
    return m_targetTable;
}

void TaskLineageInfoPair::SetTargetTable(const TaskLineageInfo& _targetTable)
{
    m_targetTable = _targetTable;
    m_targetTableHasBeenSet = true;
}

bool TaskLineageInfoPair::TargetTableHasBeenSet() const
{
    return m_targetTableHasBeenSet;
}

