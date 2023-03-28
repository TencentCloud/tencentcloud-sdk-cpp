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

#include <tencentcloud/trtc/v20190722/model/McuLayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuLayoutParams::McuLayoutParams() :
    m_mixLayoutModeHasBeenSet(false),
    m_pureAudioHoldPlaceModeHasBeenSet(false),
    m_mixLayoutListHasBeenSet(false),
    m_maxVideoUserHasBeenSet(false),
    m_renderModeHasBeenSet(false)
{
}

CoreInternalOutcome McuLayoutParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MixLayoutMode") && !value["MixLayoutMode"].IsNull())
    {
        if (!value["MixLayoutMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutParams.MixLayoutMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mixLayoutMode = value["MixLayoutMode"].GetUint64();
        m_mixLayoutModeHasBeenSet = true;
    }

    if (value.HasMember("PureAudioHoldPlaceMode") && !value["PureAudioHoldPlaceMode"].IsNull())
    {
        if (!value["PureAudioHoldPlaceMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutParams.PureAudioHoldPlaceMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pureAudioHoldPlaceMode = value["PureAudioHoldPlaceMode"].GetUint64();
        m_pureAudioHoldPlaceModeHasBeenSet = true;
    }

    if (value.HasMember("MixLayoutList") && !value["MixLayoutList"].IsNull())
    {
        if (!value["MixLayoutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McuLayoutParams.MixLayoutList` is not array type"));

        const rapidjson::Value &tmpValue = value["MixLayoutList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McuLayout item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mixLayoutList.push_back(item);
        }
        m_mixLayoutListHasBeenSet = true;
    }

    if (value.HasMember("MaxVideoUser") && !value["MaxVideoUser"].IsNull())
    {
        if (!value["MaxVideoUser"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutParams.MaxVideoUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxVideoUser.Deserialize(value["MaxVideoUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxVideoUserHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuLayoutParams.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuLayoutParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mixLayoutModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixLayoutMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mixLayoutMode, allocator);
    }

    if (m_pureAudioHoldPlaceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudioHoldPlaceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pureAudioHoldPlaceMode, allocator);
    }

    if (m_mixLayoutListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixLayoutList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mixLayoutList.begin(); itr != m_mixLayoutList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxVideoUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVideoUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxVideoUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

}


uint64_t McuLayoutParams::GetMixLayoutMode() const
{
    return m_mixLayoutMode;
}

void McuLayoutParams::SetMixLayoutMode(const uint64_t& _mixLayoutMode)
{
    m_mixLayoutMode = _mixLayoutMode;
    m_mixLayoutModeHasBeenSet = true;
}

bool McuLayoutParams::MixLayoutModeHasBeenSet() const
{
    return m_mixLayoutModeHasBeenSet;
}

uint64_t McuLayoutParams::GetPureAudioHoldPlaceMode() const
{
    return m_pureAudioHoldPlaceMode;
}

void McuLayoutParams::SetPureAudioHoldPlaceMode(const uint64_t& _pureAudioHoldPlaceMode)
{
    m_pureAudioHoldPlaceMode = _pureAudioHoldPlaceMode;
    m_pureAudioHoldPlaceModeHasBeenSet = true;
}

bool McuLayoutParams::PureAudioHoldPlaceModeHasBeenSet() const
{
    return m_pureAudioHoldPlaceModeHasBeenSet;
}

vector<McuLayout> McuLayoutParams::GetMixLayoutList() const
{
    return m_mixLayoutList;
}

void McuLayoutParams::SetMixLayoutList(const vector<McuLayout>& _mixLayoutList)
{
    m_mixLayoutList = _mixLayoutList;
    m_mixLayoutListHasBeenSet = true;
}

bool McuLayoutParams::MixLayoutListHasBeenSet() const
{
    return m_mixLayoutListHasBeenSet;
}

MaxVideoUser McuLayoutParams::GetMaxVideoUser() const
{
    return m_maxVideoUser;
}

void McuLayoutParams::SetMaxVideoUser(const MaxVideoUser& _maxVideoUser)
{
    m_maxVideoUser = _maxVideoUser;
    m_maxVideoUserHasBeenSet = true;
}

bool McuLayoutParams::MaxVideoUserHasBeenSet() const
{
    return m_maxVideoUserHasBeenSet;
}

uint64_t McuLayoutParams::GetRenderMode() const
{
    return m_renderMode;
}

void McuLayoutParams::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool McuLayoutParams::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

