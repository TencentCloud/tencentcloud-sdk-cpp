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

#include <tencentcloud/mps/v20190612/model/CreateOutputRTMPSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateOutputRTMPSettings::CreateOutputRTMPSettings() :
    m_destinationsHasBeenSet(false),
    m_chunkSizeHasBeenSet(false)
{
}

CoreInternalOutcome CreateOutputRTMPSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOutputRTMPSettings.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateOutputRtmpSettingsDestinations item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("ChunkSize") && !value["ChunkSize"].IsNull())
    {
        if (!value["ChunkSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputRTMPSettings.ChunkSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chunkSize = value["ChunkSize"].GetInt64();
        m_chunkSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOutputRTMPSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chunkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chunkSize, allocator);
    }

}


vector<CreateOutputRtmpSettingsDestinations> CreateOutputRTMPSettings::GetDestinations() const
{
    return m_destinations;
}

void CreateOutputRTMPSettings::SetDestinations(const vector<CreateOutputRtmpSettingsDestinations>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool CreateOutputRTMPSettings::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

int64_t CreateOutputRTMPSettings::GetChunkSize() const
{
    return m_chunkSize;
}

void CreateOutputRTMPSettings::SetChunkSize(const int64_t& _chunkSize)
{
    m_chunkSize = _chunkSize;
    m_chunkSizeHasBeenSet = true;
}

bool CreateOutputRTMPSettings::ChunkSizeHasBeenSet() const
{
    return m_chunkSizeHasBeenSet;
}

