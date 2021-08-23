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

#include <tencentcloud/vod/v20180717/model/MediaAnimatedGraphicsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaAnimatedGraphicsInfo::MediaAnimatedGraphicsInfo() :
    m_animatedGraphicsSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaAnimatedGraphicsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnimatedGraphicsSet") && !value["AnimatedGraphicsSet"].IsNull())
    {
        if (!value["AnimatedGraphicsSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAnimatedGraphicsInfo.AnimatedGraphicsSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AnimatedGraphicsSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAnimatedGraphicsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_animatedGraphicsSet.push_back(item);
        }
        m_animatedGraphicsSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAnimatedGraphicsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_animatedGraphicsSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnimatedGraphicsSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_animatedGraphicsSet.begin(); itr != m_animatedGraphicsSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaAnimatedGraphicsItem> MediaAnimatedGraphicsInfo::GetAnimatedGraphicsSet() const
{
    return m_animatedGraphicsSet;
}

void MediaAnimatedGraphicsInfo::SetAnimatedGraphicsSet(const vector<MediaAnimatedGraphicsItem>& _animatedGraphicsSet)
{
    m_animatedGraphicsSet = _animatedGraphicsSet;
    m_animatedGraphicsSetHasBeenSet = true;
}

bool MediaAnimatedGraphicsInfo::AnimatedGraphicsSetHasBeenSet() const
{
    return m_animatedGraphicsSetHasBeenSet;
}

