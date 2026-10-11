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

#include <tencentcloud/databuddy/v20260715/model/ListPartitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListPartitioning::ListPartitioning() :
    m_filedNamesHasBeenSet(false),
    m_assignmentsHasBeenSet(false)
{
}

CoreInternalOutcome ListPartitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FiledNames") && !value["FiledNames"].IsNull())
    {
        if (!value["FiledNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListPartitioning.FiledNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FiledNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filedNames.push_back((*itr).GetString());
        }
        m_filedNamesHasBeenSet = true;
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

    if (m_filedNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiledNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filedNames.begin(); itr != m_filedNames.end(); ++itr)
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


vector<string> ListPartitioning::GetFiledNames() const
{
    return m_filedNames;
}

void ListPartitioning::SetFiledNames(const vector<string>& _filedNames)
{
    m_filedNames = _filedNames;
    m_filedNamesHasBeenSet = true;
}

bool ListPartitioning::FiledNamesHasBeenSet() const
{
    return m_filedNamesHasBeenSet;
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

