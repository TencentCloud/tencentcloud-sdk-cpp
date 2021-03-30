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

#include <tencentcloud/vod/v20180717/model/MediaSubtitleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaSubtitleInfo::MediaSubtitleInfo() :
    m_subtitleSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaSubtitleInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleSet") && !value["SubtitleSet"].IsNull())
    {
        if (!value["SubtitleSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaSubtitleInfo.SubtitleSet` is not array type"));

        const Value &tmpValue = value["SubtitleSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSubtitleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitleSet.push_back(item);
        }
        m_subtitleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSubtitleInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_subtitleSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubtitleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleSet.begin(); itr != m_subtitleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaSubtitleItem> MediaSubtitleInfo::GetSubtitleSet() const
{
    return m_subtitleSet;
}

void MediaSubtitleInfo::SetSubtitleSet(const vector<MediaSubtitleItem>& _subtitleSet)
{
    m_subtitleSet = _subtitleSet;
    m_subtitleSetHasBeenSet = true;
}

bool MediaSubtitleInfo::SubtitleSetHasBeenSet() const
{
    return m_subtitleSetHasBeenSet;
}

