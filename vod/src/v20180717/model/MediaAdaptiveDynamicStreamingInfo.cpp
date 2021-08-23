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

#include <tencentcloud/vod/v20180717/model/MediaAdaptiveDynamicStreamingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaAdaptiveDynamicStreamingInfo::MediaAdaptiveDynamicStreamingInfo() :
    m_adaptiveDynamicStreamingSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaAdaptiveDynamicStreamingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdaptiveDynamicStreamingSet") && !value["AdaptiveDynamicStreamingSet"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAdaptiveDynamicStreamingInfo.AdaptiveDynamicStreamingSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AdaptiveDynamicStreamingSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdaptiveDynamicStreamingInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_adaptiveDynamicStreamingSet.push_back(item);
        }
        m_adaptiveDynamicStreamingSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAdaptiveDynamicStreamingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adaptiveDynamicStreamingSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_adaptiveDynamicStreamingSet.begin(); itr != m_adaptiveDynamicStreamingSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AdaptiveDynamicStreamingInfoItem> MediaAdaptiveDynamicStreamingInfo::GetAdaptiveDynamicStreamingSet() const
{
    return m_adaptiveDynamicStreamingSet;
}

void MediaAdaptiveDynamicStreamingInfo::SetAdaptiveDynamicStreamingSet(const vector<AdaptiveDynamicStreamingInfoItem>& _adaptiveDynamicStreamingSet)
{
    m_adaptiveDynamicStreamingSet = _adaptiveDynamicStreamingSet;
    m_adaptiveDynamicStreamingSetHasBeenSet = true;
}

bool MediaAdaptiveDynamicStreamingInfo::AdaptiveDynamicStreamingSetHasBeenSet() const
{
    return m_adaptiveDynamicStreamingSetHasBeenSet;
}

