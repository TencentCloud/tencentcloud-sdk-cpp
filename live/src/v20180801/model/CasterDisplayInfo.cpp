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

#include <tencentcloud/live/v20180801/model/CasterDisplayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterDisplayInfo::CasterDisplayInfo() :
    m_layoutIndexHasBeenSet(false),
    m_markPicIndexListHasBeenSet(false),
    m_markWordIndexListHasBeenSet(false),
    m_transitionTypeHasBeenSet(false),
    m_audioIndexListHasBeenSet(false),
    m_inputStartTypeHasBeenSet(false),
    m_layoutIndexTypeHasBeenSet(false)
{
}

CoreInternalOutcome CasterDisplayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayoutIndex") && !value["LayoutIndex"].IsNull())
    {
        if (!value["LayoutIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.LayoutIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutIndex = value["LayoutIndex"].GetUint64();
        m_layoutIndexHasBeenSet = true;
    }

    if (value.HasMember("MarkPicIndexList") && !value["MarkPicIndexList"].IsNull())
    {
        if (!value["MarkPicIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.MarkPicIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["MarkPicIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_markPicIndexList.push_back((*itr).GetUint64());
        }
        m_markPicIndexListHasBeenSet = true;
    }

    if (value.HasMember("MarkWordIndexList") && !value["MarkWordIndexList"].IsNull())
    {
        if (!value["MarkWordIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.MarkWordIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["MarkWordIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_markWordIndexList.push_back((*itr).GetUint64());
        }
        m_markWordIndexListHasBeenSet = true;
    }

    if (value.HasMember("TransitionType") && !value["TransitionType"].IsNull())
    {
        if (!value["TransitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.TransitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transitionType = string(value["TransitionType"].GetString());
        m_transitionTypeHasBeenSet = true;
    }

    if (value.HasMember("AudioIndexList") && !value["AudioIndexList"].IsNull())
    {
        if (!value["AudioIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.AudioIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioIndexList.push_back((*itr).GetUint64());
        }
        m_audioIndexListHasBeenSet = true;
    }

    if (value.HasMember("InputStartType") && !value["InputStartType"].IsNull())
    {
        if (!value["InputStartType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.InputStartType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputStartType = value["InputStartType"].GetInt64();
        m_inputStartTypeHasBeenSet = true;
    }

    if (value.HasMember("LayoutIndexType") && !value["LayoutIndexType"].IsNull())
    {
        if (!value["LayoutIndexType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterDisplayInfo.LayoutIndexType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutIndexType = value["LayoutIndexType"].GetInt64();
        m_layoutIndexTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterDisplayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layoutIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutIndex, allocator);
    }

    if (m_markPicIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_markPicIndexList.begin(); itr != m_markPicIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_markWordIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_markWordIndexList.begin(); itr != m_markWordIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_transitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioIndexList.begin(); itr != m_audioIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_inputStartTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStartType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputStartType, allocator);
    }

    if (m_layoutIndexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutIndexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutIndexType, allocator);
    }

}


uint64_t CasterDisplayInfo::GetLayoutIndex() const
{
    return m_layoutIndex;
}

void CasterDisplayInfo::SetLayoutIndex(const uint64_t& _layoutIndex)
{
    m_layoutIndex = _layoutIndex;
    m_layoutIndexHasBeenSet = true;
}

bool CasterDisplayInfo::LayoutIndexHasBeenSet() const
{
    return m_layoutIndexHasBeenSet;
}

vector<uint64_t> CasterDisplayInfo::GetMarkPicIndexList() const
{
    return m_markPicIndexList;
}

void CasterDisplayInfo::SetMarkPicIndexList(const vector<uint64_t>& _markPicIndexList)
{
    m_markPicIndexList = _markPicIndexList;
    m_markPicIndexListHasBeenSet = true;
}

bool CasterDisplayInfo::MarkPicIndexListHasBeenSet() const
{
    return m_markPicIndexListHasBeenSet;
}

vector<uint64_t> CasterDisplayInfo::GetMarkWordIndexList() const
{
    return m_markWordIndexList;
}

void CasterDisplayInfo::SetMarkWordIndexList(const vector<uint64_t>& _markWordIndexList)
{
    m_markWordIndexList = _markWordIndexList;
    m_markWordIndexListHasBeenSet = true;
}

bool CasterDisplayInfo::MarkWordIndexListHasBeenSet() const
{
    return m_markWordIndexListHasBeenSet;
}

string CasterDisplayInfo::GetTransitionType() const
{
    return m_transitionType;
}

void CasterDisplayInfo::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool CasterDisplayInfo::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

vector<uint64_t> CasterDisplayInfo::GetAudioIndexList() const
{
    return m_audioIndexList;
}

void CasterDisplayInfo::SetAudioIndexList(const vector<uint64_t>& _audioIndexList)
{
    m_audioIndexList = _audioIndexList;
    m_audioIndexListHasBeenSet = true;
}

bool CasterDisplayInfo::AudioIndexListHasBeenSet() const
{
    return m_audioIndexListHasBeenSet;
}

int64_t CasterDisplayInfo::GetInputStartType() const
{
    return m_inputStartType;
}

void CasterDisplayInfo::SetInputStartType(const int64_t& _inputStartType)
{
    m_inputStartType = _inputStartType;
    m_inputStartTypeHasBeenSet = true;
}

bool CasterDisplayInfo::InputStartTypeHasBeenSet() const
{
    return m_inputStartTypeHasBeenSet;
}

int64_t CasterDisplayInfo::GetLayoutIndexType() const
{
    return m_layoutIndexType;
}

void CasterDisplayInfo::SetLayoutIndexType(const int64_t& _layoutIndexType)
{
    m_layoutIndexType = _layoutIndexType;
    m_layoutIndexTypeHasBeenSet = true;
}

bool CasterDisplayInfo::LayoutIndexTypeHasBeenSet() const
{
    return m_layoutIndexTypeHasBeenSet;
}

