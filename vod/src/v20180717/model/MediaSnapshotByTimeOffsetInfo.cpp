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

#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimeOffsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaSnapshotByTimeOffsetInfo::MediaSnapshotByTimeOffsetInfo() :
    m_snapshotByTimeOffsetSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaSnapshotByTimeOffsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotByTimeOffsetSet") && !value["SnapshotByTimeOffsetSet"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimeOffsetInfo.SnapshotByTimeOffsetSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SnapshotByTimeOffsetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSnapshotByTimeOffsetItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_snapshotByTimeOffsetSet.push_back(item);
        }
        m_snapshotByTimeOffsetSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSnapshotByTimeOffsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotByTimeOffsetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotByTimeOffsetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotByTimeOffsetSet.begin(); itr != m_snapshotByTimeOffsetSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaSnapshotByTimeOffsetItem> MediaSnapshotByTimeOffsetInfo::GetSnapshotByTimeOffsetSet() const
{
    return m_snapshotByTimeOffsetSet;
}

void MediaSnapshotByTimeOffsetInfo::SetSnapshotByTimeOffsetSet(const vector<MediaSnapshotByTimeOffsetItem>& _snapshotByTimeOffsetSet)
{
    m_snapshotByTimeOffsetSet = _snapshotByTimeOffsetSet;
    m_snapshotByTimeOffsetSetHasBeenSet = true;
}

bool MediaSnapshotByTimeOffsetInfo::SnapshotByTimeOffsetSetHasBeenSet() const
{
    return m_snapshotByTimeOffsetSetHasBeenSet;
}

