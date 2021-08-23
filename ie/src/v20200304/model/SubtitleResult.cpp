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

#include <tencentcloud/ie/v20200304/model/SubtitleResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SubtitleResult::SubtitleResult() :
    m_subtitleItemsHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleItems") && !value["SubtitleItems"].IsNull())
    {
        if (!value["SubtitleItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubtitleResult.SubtitleItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubtitleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitleItems.push_back(item);
        }
        m_subtitleItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleItems.begin(); itr != m_subtitleItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SubtitleItem> SubtitleResult::GetSubtitleItems() const
{
    return m_subtitleItems;
}

void SubtitleResult::SetSubtitleItems(const vector<SubtitleItem>& _subtitleItems)
{
    m_subtitleItems = _subtitleItems;
    m_subtitleItemsHasBeenSet = true;
}

bool SubtitleResult::SubtitleItemsHasBeenSet() const
{
    return m_subtitleItemsHasBeenSet;
}

