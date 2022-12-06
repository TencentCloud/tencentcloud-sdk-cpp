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

#include <tencentcloud/trtc/v20190722/model/McuAudioParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuAudioParams::McuAudioParams() :
    m_audioEncodeHasBeenSet(false),
    m_subscribeAudioListHasBeenSet(false),
    m_unSubscribeAudioListHasBeenSet(false)
{
}

CoreInternalOutcome McuAudioParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioEncode") && !value["AudioEncode"].IsNull())
    {
        if (!value["AudioEncode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuAudioParams.AudioEncode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioEncode.Deserialize(value["AudioEncode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioEncodeHasBeenSet = true;
    }

    if (value.HasMember("SubscribeAudioList") && !value["SubscribeAudioList"].IsNull())
    {
        if (!value["SubscribeAudioList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McuAudioParams.SubscribeAudioList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeAudioList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McuUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribeAudioList.push_back(item);
        }
        m_subscribeAudioListHasBeenSet = true;
    }

    if (value.HasMember("UnSubscribeAudioList") && !value["UnSubscribeAudioList"].IsNull())
    {
        if (!value["UnSubscribeAudioList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McuAudioParams.UnSubscribeAudioList` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeAudioList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McuUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unSubscribeAudioList.push_back(item);
        }
        m_unSubscribeAudioListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuAudioParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEncode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioEncode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subscribeAudioListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeAudioList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribeAudioList.begin(); itr != m_subscribeAudioList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unSubscribeAudioListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeAudioList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unSubscribeAudioList.begin(); itr != m_unSubscribeAudioList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


AudioEncode McuAudioParams::GetAudioEncode() const
{
    return m_audioEncode;
}

void McuAudioParams::SetAudioEncode(const AudioEncode& _audioEncode)
{
    m_audioEncode = _audioEncode;
    m_audioEncodeHasBeenSet = true;
}

bool McuAudioParams::AudioEncodeHasBeenSet() const
{
    return m_audioEncodeHasBeenSet;
}

vector<McuUserInfoParams> McuAudioParams::GetSubscribeAudioList() const
{
    return m_subscribeAudioList;
}

void McuAudioParams::SetSubscribeAudioList(const vector<McuUserInfoParams>& _subscribeAudioList)
{
    m_subscribeAudioList = _subscribeAudioList;
    m_subscribeAudioListHasBeenSet = true;
}

bool McuAudioParams::SubscribeAudioListHasBeenSet() const
{
    return m_subscribeAudioListHasBeenSet;
}

vector<McuUserInfoParams> McuAudioParams::GetUnSubscribeAudioList() const
{
    return m_unSubscribeAudioList;
}

void McuAudioParams::SetUnSubscribeAudioList(const vector<McuUserInfoParams>& _unSubscribeAudioList)
{
    m_unSubscribeAudioList = _unSubscribeAudioList;
    m_unSubscribeAudioListHasBeenSet = true;
}

bool McuAudioParams::UnSubscribeAudioListHasBeenSet() const
{
    return m_unSubscribeAudioListHasBeenSet;
}

