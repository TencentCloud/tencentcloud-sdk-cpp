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

#include <tencentcloud/mps/v20190612/model/PidSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PidSelector::PidSelector() :
    m_audioPIDHasBeenSet(false),
    m_videoPIDHasBeenSet(false)
{
}

CoreInternalOutcome PidSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioPID") && !value["AudioPID"].IsNull())
    {
        if (!value["AudioPID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PidSelector.AudioPID` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioPID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioPID.push_back((*itr).GetInt64());
        }
        m_audioPIDHasBeenSet = true;
    }

    if (value.HasMember("VideoPID") && !value["VideoPID"].IsNull())
    {
        if (!value["VideoPID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PidSelector.VideoPID` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoPID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoPID.push_back((*itr).GetInt64());
        }
        m_videoPIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PidSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioPID.begin(); itr != m_audioPID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_videoPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoPID.begin(); itr != m_videoPID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> PidSelector::GetAudioPID() const
{
    return m_audioPID;
}

void PidSelector::SetAudioPID(const vector<int64_t>& _audioPID)
{
    m_audioPID = _audioPID;
    m_audioPIDHasBeenSet = true;
}

bool PidSelector::AudioPIDHasBeenSet() const
{
    return m_audioPIDHasBeenSet;
}

vector<int64_t> PidSelector::GetVideoPID() const
{
    return m_videoPID;
}

void PidSelector::SetVideoPID(const vector<int64_t>& _videoPID)
{
    m_videoPID = _videoPID;
    m_videoPIDHasBeenSet = true;
}

bool PidSelector::VideoPIDHasBeenSet() const
{
    return m_videoPIDHasBeenSet;
}

