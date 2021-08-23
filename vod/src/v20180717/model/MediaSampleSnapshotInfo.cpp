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

#include <tencentcloud/vod/v20180717/model/MediaSampleSnapshotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaSampleSnapshotInfo::MediaSampleSnapshotInfo() :
    m_sampleSnapshotSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaSampleSnapshotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SampleSnapshotSet") && !value["SampleSnapshotSet"].IsNull())
    {
        if (!value["SampleSnapshotSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSampleSnapshotInfo.SampleSnapshotSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SampleSnapshotSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSampleSnapshotItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sampleSnapshotSet.push_back(item);
        }
        m_sampleSnapshotSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSampleSnapshotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sampleSnapshotSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleSnapshotSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sampleSnapshotSet.begin(); itr != m_sampleSnapshotSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaSampleSnapshotItem> MediaSampleSnapshotInfo::GetSampleSnapshotSet() const
{
    return m_sampleSnapshotSet;
}

void MediaSampleSnapshotInfo::SetSampleSnapshotSet(const vector<MediaSampleSnapshotItem>& _sampleSnapshotSet)
{
    m_sampleSnapshotSet = _sampleSnapshotSet;
    m_sampleSnapshotSetHasBeenSet = true;
}

bool MediaSampleSnapshotInfo::SampleSnapshotSetHasBeenSet() const
{
    return m_sampleSnapshotSetHasBeenSet;
}

