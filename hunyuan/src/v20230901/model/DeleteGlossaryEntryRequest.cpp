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

#include <tencentcloud/hunyuan/v20230901/model/DeleteGlossaryEntryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

DeleteGlossaryEntryRequest::DeleteGlossaryEntryRequest() :
    m_glossaryIdHasBeenSet(false),
    m_entriesHasBeenSet(false)
{
}

string DeleteGlossaryEntryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_glossaryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlossaryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_glossaryId.c_str(), allocator).Move(), allocator);
    }

    if (m_entriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_entries.begin(); itr != m_entries.end(); ++itr, ++i)
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


string DeleteGlossaryEntryRequest::GetGlossaryId() const
{
    return m_glossaryId;
}

void DeleteGlossaryEntryRequest::SetGlossaryId(const string& _glossaryId)
{
    m_glossaryId = _glossaryId;
    m_glossaryIdHasBeenSet = true;
}

bool DeleteGlossaryEntryRequest::GlossaryIdHasBeenSet() const
{
    return m_glossaryIdHasBeenSet;
}

vector<GlossaryEntryDeleteItem> DeleteGlossaryEntryRequest::GetEntries() const
{
    return m_entries;
}

void DeleteGlossaryEntryRequest::SetEntries(const vector<GlossaryEntryDeleteItem>& _entries)
{
    m_entries = _entries;
    m_entriesHasBeenSet = true;
}

bool DeleteGlossaryEntryRequest::EntriesHasBeenSet() const
{
    return m_entriesHasBeenSet;
}


