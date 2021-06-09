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

#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

MergeTablesDataRequest::MergeTablesDataRequest() :
    m_selectedTablesHasBeenSet(false),
    m_isOnlyCompareHasBeenSet(false)
{
}

string MergeTablesDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_selectedTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectedTables.begin(); itr != m_selectedTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isOnlyCompareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOnlyCompare";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOnlyCompare, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<MergeTablesInfo> MergeTablesDataRequest::GetSelectedTables() const
{
    return m_selectedTables;
}

void MergeTablesDataRequest::SetSelectedTables(const vector<MergeTablesInfo>& _selectedTables)
{
    m_selectedTables = _selectedTables;
    m_selectedTablesHasBeenSet = true;
}

bool MergeTablesDataRequest::SelectedTablesHasBeenSet() const
{
    return m_selectedTablesHasBeenSet;
}

bool MergeTablesDataRequest::GetIsOnlyCompare() const
{
    return m_isOnlyCompare;
}

void MergeTablesDataRequest::SetIsOnlyCompare(const bool& _isOnlyCompare)
{
    m_isOnlyCompare = _isOnlyCompare;
    m_isOnlyCompareHasBeenSet = true;
}

bool MergeTablesDataRequest::IsOnlyCompareHasBeenSet() const
{
    return m_isOnlyCompareHasBeenSet;
}


