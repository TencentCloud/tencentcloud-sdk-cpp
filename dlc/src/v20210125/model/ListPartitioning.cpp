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

#include <tencentcloud/dlc/v20210125/model/ListPartitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ListPartitioning::ListPartitioning() :
    m_fieldNamesHasBeenSet(false),
    m_assignmentsHasBeenSet(false)
{
}

CoreInternalOutcome ListPartitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldNames") && !value["FieldNames"].IsNull())
    {
        if (!value["FieldNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListPartitioning.FieldNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldNames.push_back((*itr).GetString());
        }
        m_fieldNamesHasBeenSet = true;
    }

    if (value.HasMember("Assignments") && !value["Assignments"].IsNull())
    {
        if (!value["Assignments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListPartitioning.Assignments` is not array type"));

        const rapidjson::Value &tmpValue = value["Assignments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ListPartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assignments.push_back(item);
        }
        m_assignmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListPartitioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldNames.begin(); itr != m_fieldNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assignmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assignments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assignments.begin(); itr != m_assignments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> ListPartitioning::GetFieldNames() const
{
    return m_fieldNames;
}

void ListPartitioning::SetFieldNames(const vector<string>& _fieldNames)
{
    m_fieldNames = _fieldNames;
    m_fieldNamesHasBeenSet = true;
}

bool ListPartitioning::FieldNamesHasBeenSet() const
{
    return m_fieldNamesHasBeenSet;
}

vector<ListPartition> ListPartitioning::GetAssignments() const
{
    return m_assignments;
}

void ListPartitioning::SetAssignments(const vector<ListPartition>& _assignments)
{
    m_assignments = _assignments;
    m_assignmentsHasBeenSet = true;
}

bool ListPartitioning::AssignmentsHasBeenSet() const
{
    return m_assignmentsHasBeenSet;
}

