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

#include <tencentcloud/cme/v20191029/model/MediaCastProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastProjectInput::MediaCastProjectInput() :
    m_sourceInfosHasBeenSet(false),
    m_destinationInfosHasBeenSet(false),
    m_outputMediaSettingHasBeenSet(false),
    m_playSettingHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceInfos") && !value["SourceInfos"].IsNull())
    {
        if (!value["SourceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInput.SourceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaCastSourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceInfos.push_back(item);
        }
        m_sourceInfosHasBeenSet = true;
    }

    if (value.HasMember("DestinationInfos") && !value["DestinationInfos"].IsNull())
    {
        if (!value["DestinationInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInput.DestinationInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaCastDestinationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinationInfos.push_back(item);
        }
        m_destinationInfosHasBeenSet = true;
    }

    if (value.HasMember("OutputMediaSetting") && !value["OutputMediaSetting"].IsNull())
    {
        if (!value["OutputMediaSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInput.OutputMediaSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputMediaSetting.Deserialize(value["OutputMediaSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputMediaSettingHasBeenSet = true;
    }

    if (value.HasMember("PlaySetting") && !value["PlaySetting"].IsNull())
    {
        if (!value["PlaySetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInput.PlaySetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playSetting.Deserialize(value["PlaySetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playSettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfos.begin(); itr != m_sourceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destinationInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationInfos.begin(); itr != m_destinationInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputMediaSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMediaSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputMediaSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_playSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaySetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playSetting.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<MediaCastSourceInfo> MediaCastProjectInput::GetSourceInfos() const
{
    return m_sourceInfos;
}

void MediaCastProjectInput::SetSourceInfos(const vector<MediaCastSourceInfo>& _sourceInfos)
{
    m_sourceInfos = _sourceInfos;
    m_sourceInfosHasBeenSet = true;
}

bool MediaCastProjectInput::SourceInfosHasBeenSet() const
{
    return m_sourceInfosHasBeenSet;
}

vector<MediaCastDestinationInfo> MediaCastProjectInput::GetDestinationInfos() const
{
    return m_destinationInfos;
}

void MediaCastProjectInput::SetDestinationInfos(const vector<MediaCastDestinationInfo>& _destinationInfos)
{
    m_destinationInfos = _destinationInfos;
    m_destinationInfosHasBeenSet = true;
}

bool MediaCastProjectInput::DestinationInfosHasBeenSet() const
{
    return m_destinationInfosHasBeenSet;
}

MediaCastOutputMediaSetting MediaCastProjectInput::GetOutputMediaSetting() const
{
    return m_outputMediaSetting;
}

void MediaCastProjectInput::SetOutputMediaSetting(const MediaCastOutputMediaSetting& _outputMediaSetting)
{
    m_outputMediaSetting = _outputMediaSetting;
    m_outputMediaSettingHasBeenSet = true;
}

bool MediaCastProjectInput::OutputMediaSettingHasBeenSet() const
{
    return m_outputMediaSettingHasBeenSet;
}

MediaCastPlaySetting MediaCastProjectInput::GetPlaySetting() const
{
    return m_playSetting;
}

void MediaCastProjectInput::SetPlaySetting(const MediaCastPlaySetting& _playSetting)
{
    m_playSetting = _playSetting;
    m_playSettingHasBeenSet = true;
}

bool MediaCastProjectInput::PlaySettingHasBeenSet() const
{
    return m_playSettingHasBeenSet;
}

