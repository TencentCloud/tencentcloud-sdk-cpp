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

#include <tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPubList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace rapidjson;
using namespace std;

SaDivulgeDataQueryPubList::SaDivulgeDataQueryPubList() :
    m_countHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome SaDivulgeDataQueryPubList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPubList.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Error("response `SaDivulgeDataQueryPubList.List` is not array type"));

        const Value &tmpValue = value["List"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SaDivulgeDataQueryPub item;
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

void SaDivulgeDataQueryPubList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_listHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SaDivulgeDataQueryPubList::GetCount() const
{
    return m_count;
}

void SaDivulgeDataQueryPubList::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SaDivulgeDataQueryPubList::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<SaDivulgeDataQueryPub> SaDivulgeDataQueryPubList::GetList() const
{
    return m_list;
}

void SaDivulgeDataQueryPubList::SetList(const vector<SaDivulgeDataQueryPub>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool SaDivulgeDataQueryPubList::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

