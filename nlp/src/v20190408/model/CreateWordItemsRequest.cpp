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

#include <tencentcloud/nlp/v20190408/model/CreateWordItemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

CreateWordItemsRequest::CreateWordItemsRequest() :
    m_wordItemsHasBeenSet(false),
    m_dictIdHasBeenSet(false)
{
}

string CreateWordItemsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wordItemsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WordItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordItems.begin(); itr != m_wordItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dictIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dictId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<WordItem> CreateWordItemsRequest::GetWordItems() const
{
    return m_wordItems;
}

void CreateWordItemsRequest::SetWordItems(const vector<WordItem>& _wordItems)
{
    m_wordItems = _wordItems;
    m_wordItemsHasBeenSet = true;
}

bool CreateWordItemsRequest::WordItemsHasBeenSet() const
{
    return m_wordItemsHasBeenSet;
}

string CreateWordItemsRequest::GetDictId() const
{
    return m_dictId;
}

void CreateWordItemsRequest::SetDictId(const string& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool CreateWordItemsRequest::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}


