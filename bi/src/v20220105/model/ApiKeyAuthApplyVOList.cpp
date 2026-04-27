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

#include <tencentcloud/bi/v20220105/model/ApiKeyAuthApplyVOList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ApiKeyAuthApplyVOList::ApiKeyAuthApplyVOList() :
    m_totalHasBeenSet(false),
    m_totalPagesHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome ApiKeyAuthApplyVOList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVOList.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TotalPages") && !value["TotalPages"].IsNull())
    {
        if (!value["TotalPages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVOList.TotalPages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPages = value["TotalPages"].GetInt64();
        m_totalPagesHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthApplyVOList.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiKeyAuthApplyVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKeyAuthApplyVOList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_totalPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPages, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ApiKeyAuthApplyVOList::GetTotal() const
{
    return m_total;
}

void ApiKeyAuthApplyVOList::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ApiKeyAuthApplyVOList::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t ApiKeyAuthApplyVOList::GetTotalPages() const
{
    return m_totalPages;
}

void ApiKeyAuthApplyVOList::SetTotalPages(const int64_t& _totalPages)
{
    m_totalPages = _totalPages;
    m_totalPagesHasBeenSet = true;
}

bool ApiKeyAuthApplyVOList::TotalPagesHasBeenSet() const
{
    return m_totalPagesHasBeenSet;
}

vector<ApiKeyAuthApplyVO> ApiKeyAuthApplyVOList::GetList() const
{
    return m_list;
}

void ApiKeyAuthApplyVOList::SetList(const vector<ApiKeyAuthApplyVO>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool ApiKeyAuthApplyVOList::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

