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

#include <tencentcloud/lowcode/v20210108/model/RoleListPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

RoleListPage::RoleListPage() :
    m_roleListHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome RoleListPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleList") && !value["RoleList"].IsNull())
    {
        if (!value["RoleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleListPage.RoleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WedaRole item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roleList.push_back(item);
        }
        m_roleListHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleListPage.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleListPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roleList.begin(); itr != m_roleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


vector<WedaRole> RoleListPage::GetRoleList() const
{
    return m_roleList;
}

void RoleListPage::SetRoleList(const vector<WedaRole>& _roleList)
{
    m_roleList = _roleList;
    m_roleListHasBeenSet = true;
}

bool RoleListPage::RoleListHasBeenSet() const
{
    return m_roleListHasBeenSet;
}

int64_t RoleListPage::GetTotal() const
{
    return m_total;
}

void RoleListPage::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool RoleListPage::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

