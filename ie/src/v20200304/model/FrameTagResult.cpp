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

#include <tencentcloud/ie/v20200304/model/FrameTagResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

FrameTagResult::FrameTagResult() :
    m_frameTagItemsHasBeenSet(false)
{
}

CoreInternalOutcome FrameTagResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrameTagItems") && !value["FrameTagItems"].IsNull())
    {
        if (!value["FrameTagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrameTagResult.FrameTagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FrameTagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FrameTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_frameTagItems.push_back(item);
        }
        m_frameTagItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameTagResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameTagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_frameTagItems.begin(); itr != m_frameTagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<FrameTagItem> FrameTagResult::GetFrameTagItems() const
{
    return m_frameTagItems;
}

void FrameTagResult::SetFrameTagItems(const vector<FrameTagItem>& _frameTagItems)
{
    m_frameTagItems = _frameTagItems;
    m_frameTagItemsHasBeenSet = true;
}

bool FrameTagResult::FrameTagItemsHasBeenSet() const
{
    return m_frameTagItemsHasBeenSet;
}

