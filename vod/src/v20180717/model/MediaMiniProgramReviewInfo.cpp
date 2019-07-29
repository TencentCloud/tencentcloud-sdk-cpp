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

#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaMiniProgramReviewInfo::MediaMiniProgramReviewInfo() :
    m_miniProgramReivewListHasBeenSet(false)
{
}

CoreInternalOutcome MediaMiniProgramReviewInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MiniProgramReivewList") && !value["MiniProgramReivewList"].IsNull())
    {
        if (!value["MiniProgramReivewList"].IsArray())
            return CoreInternalOutcome(Error("response `MediaMiniProgramReviewInfo.MiniProgramReivewList` is not array type"));

        const Value &tmpValue = value["MiniProgramReivewList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaMiniProgramReviewInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_miniProgramReivewList.push_back(item);
        }
        m_miniProgramReivewListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaMiniProgramReviewInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_miniProgramReivewListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MiniProgramReivewList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_miniProgramReivewList.begin(); itr != m_miniProgramReivewList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaMiniProgramReviewInfoItem> MediaMiniProgramReviewInfo::GetMiniProgramReivewList() const
{
    return m_miniProgramReivewList;
}

void MediaMiniProgramReviewInfo::SetMiniProgramReivewList(const vector<MediaMiniProgramReviewInfoItem>& _miniProgramReivewList)
{
    m_miniProgramReivewList = _miniProgramReivewList;
    m_miniProgramReivewListHasBeenSet = true;
}

bool MediaMiniProgramReviewInfo::MiniProgramReivewListHasBeenSet() const
{
    return m_miniProgramReivewListHasBeenSet;
}

