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

#include <tencentcloud/vod/v20180717/model/MediaTranscodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaTranscodeInfo::MediaTranscodeInfo() :
    m_transcodeSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaTranscodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranscodeSet") && !value["TranscodeSet"].IsNull())
    {
        if (!value["TranscodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaTranscodeInfo.TranscodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TranscodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaTranscodeItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transcodeSet.push_back(item);
        }
        m_transcodeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTranscodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transcodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transcodeSet.begin(); itr != m_transcodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaTranscodeItem> MediaTranscodeInfo::GetTranscodeSet() const
{
    return m_transcodeSet;
}

void MediaTranscodeInfo::SetTranscodeSet(const vector<MediaTranscodeItem>& _transcodeSet)
{
    m_transcodeSet = _transcodeSet;
    m_transcodeSetHasBeenSet = true;
}

bool MediaTranscodeInfo::TranscodeSetHasBeenSet() const
{
    return m_transcodeSetHasBeenSet;
}

