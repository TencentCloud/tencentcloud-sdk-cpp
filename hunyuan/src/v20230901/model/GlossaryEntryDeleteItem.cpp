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

#include <tencentcloud/hunyuan/v20230901/model/GlossaryEntryDeleteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GlossaryEntryDeleteItem::GlossaryEntryDeleteItem() :
    m_entryIdHasBeenSet(false)
{
}

CoreInternalOutcome GlossaryEntryDeleteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntryId") && !value["EntryId"].IsNull())
    {
        if (!value["EntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlossaryEntryDeleteItem.EntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryId = string(value["EntryId"].GetString());
        m_entryIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlossaryEntryDeleteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryId.c_str(), allocator).Move(), allocator);
    }

}


string GlossaryEntryDeleteItem::GetEntryId() const
{
    return m_entryId;
}

void GlossaryEntryDeleteItem::SetEntryId(const string& _entryId)
{
    m_entryId = _entryId;
    m_entryIdHasBeenSet = true;
}

bool GlossaryEntryDeleteItem::EntryIdHasBeenSet() const
{
    return m_entryIdHasBeenSet;
}

