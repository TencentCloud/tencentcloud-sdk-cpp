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

#include <tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

RollbackTablesRequest::RollbackTablesRequest() :
    m_clusterIdHasBeenSet(false),
    m_selectedTablesHasBeenSet(false),
    m_rollbackTimeHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string RollbackTablesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedTablesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SelectedTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectedTables.begin(); itr != m_selectedTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rollbackTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RollbackTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rollbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackTablesRequest::GetClusterId() const
{
    return m_clusterId;
}

void RollbackTablesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RollbackTablesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<SelectedTableInfoNew> RollbackTablesRequest::GetSelectedTables() const
{
    return m_selectedTables;
}

void RollbackTablesRequest::SetSelectedTables(const vector<SelectedTableInfoNew>& _selectedTables)
{
    m_selectedTables = _selectedTables;
    m_selectedTablesHasBeenSet = true;
}

bool RollbackTablesRequest::SelectedTablesHasBeenSet() const
{
    return m_selectedTablesHasBeenSet;
}

string RollbackTablesRequest::GetRollbackTime() const
{
    return m_rollbackTime;
}

void RollbackTablesRequest::SetRollbackTime(const string& _rollbackTime)
{
    m_rollbackTime = _rollbackTime;
    m_rollbackTimeHasBeenSet = true;
}

bool RollbackTablesRequest::RollbackTimeHasBeenSet() const
{
    return m_rollbackTimeHasBeenSet;
}

string RollbackTablesRequest::GetMode() const
{
    return m_mode;
}

void RollbackTablesRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RollbackTablesRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}


