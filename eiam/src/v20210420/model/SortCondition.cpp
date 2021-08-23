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

#include <tencentcloud/eiam/v20210420/model/SortCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

SortCondition::SortCondition() :
    m_sortKeyHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

CoreInternalOutcome SortCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SortKey") && !value["SortKey"].IsNull())
    {
        if (!value["SortKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortCondition.SortKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortKey = string(value["SortKey"].GetString());
        m_sortKeyHasBeenSet = true;
    }

    if (value.HasMember("SortOrder") && !value["SortOrder"].IsNull())
    {
        if (!value["SortOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortCondition.SortOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortOrder = string(value["SortOrder"].GetString());
        m_sortOrderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SortCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sortKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

}


string SortCondition::GetSortKey() const
{
    return m_sortKey;
}

void SortCondition::SetSortKey(const string& _sortKey)
{
    m_sortKey = _sortKey;
    m_sortKeyHasBeenSet = true;
}

bool SortCondition::SortKeyHasBeenSet() const
{
    return m_sortKeyHasBeenSet;
}

string SortCondition::GetSortOrder() const
{
    return m_sortOrder;
}

void SortCondition::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool SortCondition::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

