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

#include <tencentcloud/vod/v20180717/model/MediaTrack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaTrack::MediaTrack() :
    m_typeHasBeenSet(false),
    m_trackItemsHasBeenSet(false)
{
}

CoreInternalOutcome MediaTrack::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaTrack.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TrackItems") && !value["TrackItems"].IsNull())
    {
        if (!value["TrackItems"].IsArray())
            return CoreInternalOutcome(Error("response `MediaTrack.TrackItems` is not array type"));

        const Value &tmpValue = value["TrackItems"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaTrackItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trackItems.push_back(item);
        }
        m_trackItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTrack::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_trackItemsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrackItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trackItems.begin(); itr != m_trackItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MediaTrack::GetType() const
{
    return m_type;
}

void MediaTrack::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaTrack::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<MediaTrackItem> MediaTrack::GetTrackItems() const
{
    return m_trackItems;
}

void MediaTrack::SetTrackItems(const vector<MediaTrackItem>& _trackItems)
{
    m_trackItems = _trackItems;
    m_trackItemsHasBeenSet = true;
}

bool MediaTrack::TrackItemsHasBeenSet() const
{
    return m_trackItemsHasBeenSet;
}

