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

#include <tencentcloud/databuddy/v20260715/model/ListCatalogsRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListCatalogsRsp::ListCatalogsRsp() :
    m_itemsHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

CoreInternalOutcome ListCatalogsRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListCatalogsRsp.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Catalog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("NextPageToken") && !value["NextPageToken"].IsNull())
    {
        if (!value["NextPageToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListCatalogsRsp.NextPageToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextPageToken = string(value["NextPageToken"].GetString());
        m_nextPageTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListCatalogsRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nextPageTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextPageToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextPageToken.c_str(), allocator).Move(), allocator);
    }

}


vector<Catalog> ListCatalogsRsp::GetItems() const
{
    return m_items;
}

void ListCatalogsRsp::SetItems(const vector<Catalog>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool ListCatalogsRsp::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string ListCatalogsRsp::GetNextPageToken() const
{
    return m_nextPageToken;
}

void ListCatalogsRsp::SetNextPageToken(const string& _nextPageToken)
{
    m_nextPageToken = _nextPageToken;
    m_nextPageTokenHasBeenSet = true;
}

bool ListCatalogsRsp::NextPageTokenHasBeenSet() const
{
    return m_nextPageTokenHasBeenSet;
}

