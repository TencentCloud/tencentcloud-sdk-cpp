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

#include <tencentcloud/adp/v20260520/model/LabelRefIdentityList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelRefIdentityList::LabelRefIdentityList() :
    m_itemListHasBeenSet(false)
{
}

CoreInternalOutcome LabelRefIdentityList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemList") && !value["ItemList"].IsNull())
    {
        if (!value["ItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelRefIdentityList.ItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelRefIdentity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_itemList.push_back(item);
        }
        m_itemListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelRefIdentityList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemList.begin(); itr != m_itemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<LabelRefIdentity> LabelRefIdentityList::GetItemList() const
{
    return m_itemList;
}

void LabelRefIdentityList::SetItemList(const vector<LabelRefIdentity>& _itemList)
{
    m_itemList = _itemList;
    m_itemListHasBeenSet = true;
}

bool LabelRefIdentityList::ItemListHasBeenSet() const
{
    return m_itemListHasBeenSet;
}

