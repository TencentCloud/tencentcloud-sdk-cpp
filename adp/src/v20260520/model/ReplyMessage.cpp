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

#include <tencentcloud/adp/v20260520/model/ReplyMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ReplyMessage::ReplyMessage() :
    m_contentListHasBeenSet(false)
{
}

CoreInternalOutcome ReplyMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentList") && !value["ContentList"].IsNull())
    {
        if (!value["ContentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReplyMessage.ContentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ContentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReplyContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contentList.push_back(item);
        }
        m_contentListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplyMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contentList.begin(); itr != m_contentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ReplyContent> ReplyMessage::GetContentList() const
{
    return m_contentList;
}

void ReplyMessage::SetContentList(const vector<ReplyContent>& _contentList)
{
    m_contentList = _contentList;
    m_contentListHasBeenSet = true;
}

bool ReplyMessage::ContentListHasBeenSet() const
{
    return m_contentListHasBeenSet;
}

