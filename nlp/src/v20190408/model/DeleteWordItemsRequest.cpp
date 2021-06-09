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

#include <tencentcloud/nlp/v20190408/model/DeleteWordItemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

DeleteWordItemsRequest::DeleteWordItemsRequest() :
    m_dictIdHasBeenSet(false),
    m_wordItemsHasBeenSet(false)
{
}

string DeleteWordItemsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dictIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dictId.c_str(), allocator).Move(), allocator);
    }

    if (m_wordItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordItems.begin(); itr != m_wordItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteWordItemsRequest::GetDictId() const
{
    return m_dictId;
}

void DeleteWordItemsRequest::SetDictId(const string& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool DeleteWordItemsRequest::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}

vector<WordItem> DeleteWordItemsRequest::GetWordItems() const
{
    return m_wordItems;
}

void DeleteWordItemsRequest::SetWordItems(const vector<WordItem>& _wordItems)
{
    m_wordItems = _wordItems;
    m_wordItemsHasBeenSet = true;
}

bool DeleteWordItemsRequest::WordItemsHasBeenSet() const
{
    return m_wordItemsHasBeenSet;
}


