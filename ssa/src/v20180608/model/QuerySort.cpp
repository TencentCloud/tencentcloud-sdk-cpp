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

#include <tencentcloud/ssa/v20180608/model/QuerySort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

QuerySort::QuerySort() :
    m_sortKeyHasBeenSet(false),
    m_sortTypeHasBeenSet(false)
{
}

CoreInternalOutcome QuerySort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SortKey") && !value["SortKey"].IsNull())
    {
        if (!value["SortKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySort.SortKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortKey = string(value["SortKey"].GetString());
        m_sortKeyHasBeenSet = true;
    }

    if (value.HasMember("SortType") && !value["SortType"].IsNull())
    {
        if (!value["SortType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuerySort.SortType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortType = value["SortType"].GetInt64();
        m_sortTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuerySort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sortKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortType, allocator);
    }

}


string QuerySort::GetSortKey() const
{
    return m_sortKey;
}

void QuerySort::SetSortKey(const string& _sortKey)
{
    m_sortKey = _sortKey;
    m_sortKeyHasBeenSet = true;
}

bool QuerySort::SortKeyHasBeenSet() const
{
    return m_sortKeyHasBeenSet;
}

int64_t QuerySort::GetSortType() const
{
    return m_sortType;
}

void QuerySort::SetSortType(const int64_t& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool QuerySort::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

