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
using namespace std;

MediaMiniProgramReviewInfo::MediaMiniProgramReviewInfo() :
    m_miniProgramReviewListHasBeenSet(false)
{
}

CoreInternalOutcome MediaMiniProgramReviewInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MiniProgramReviewList") && !value["MiniProgramReviewList"].IsNull())
    {
        if (!value["MiniProgramReviewList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaMiniProgramReviewInfo.MiniProgramReviewList` is not array type"));

        const rapidjson::Value &tmpValue = value["MiniProgramReviewList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaMiniProgramReviewInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_miniProgramReviewList.push_back(item);
        }
        m_miniProgramReviewListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaMiniProgramReviewInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_miniProgramReviewListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramReviewList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_miniProgramReviewList.begin(); itr != m_miniProgramReviewList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaMiniProgramReviewInfoItem> MediaMiniProgramReviewInfo::GetMiniProgramReviewList() const
{
    return m_miniProgramReviewList;
}

void MediaMiniProgramReviewInfo::SetMiniProgramReviewList(const vector<MediaMiniProgramReviewInfoItem>& _miniProgramReviewList)
{
    m_miniProgramReviewList = _miniProgramReviewList;
    m_miniProgramReviewListHasBeenSet = true;
}

bool MediaMiniProgramReviewInfo::MiniProgramReviewListHasBeenSet() const
{
    return m_miniProgramReviewListHasBeenSet;
}

