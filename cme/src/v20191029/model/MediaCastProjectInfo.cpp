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

#include <tencentcloud/cme/v20191029/model/MediaCastProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastProjectInfo::MediaCastProjectInfo() :
    m_statusHasBeenSet(false),
    m_sourceInfosHasBeenSet(false),
    m_destinationInfosHasBeenSet(false),
    m_outputMediaSettingHasBeenSet(false),
    m_playSettingHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceInfos") && !value["SourceInfos"].IsNull())
    {
        if (!value["SourceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.SourceInfos` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.DestinationInfos` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.OutputMediaSetting` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.PlaySetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playSetting.Deserialize(value["PlaySetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playSettingHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.StopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = string(value["StopTime"].GetString());
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastProjectInfo.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string MediaCastProjectInfo::GetStatus() const
{
    return m_status;
}

void MediaCastProjectInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaCastProjectInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<MediaCastSourceInfo> MediaCastProjectInfo::GetSourceInfos() const
{
    return m_sourceInfos;
}

void MediaCastProjectInfo::SetSourceInfos(const vector<MediaCastSourceInfo>& _sourceInfos)
{
    m_sourceInfos = _sourceInfos;
    m_sourceInfosHasBeenSet = true;
}

bool MediaCastProjectInfo::SourceInfosHasBeenSet() const
{
    return m_sourceInfosHasBeenSet;
}

vector<MediaCastDestinationInfo> MediaCastProjectInfo::GetDestinationInfos() const
{
    return m_destinationInfos;
}

void MediaCastProjectInfo::SetDestinationInfos(const vector<MediaCastDestinationInfo>& _destinationInfos)
{
    m_destinationInfos = _destinationInfos;
    m_destinationInfosHasBeenSet = true;
}

bool MediaCastProjectInfo::DestinationInfosHasBeenSet() const
{
    return m_destinationInfosHasBeenSet;
}

MediaCastOutputMediaSetting MediaCastProjectInfo::GetOutputMediaSetting() const
{
    return m_outputMediaSetting;
}

void MediaCastProjectInfo::SetOutputMediaSetting(const MediaCastOutputMediaSetting& _outputMediaSetting)
{
    m_outputMediaSetting = _outputMediaSetting;
    m_outputMediaSettingHasBeenSet = true;
}

bool MediaCastProjectInfo::OutputMediaSettingHasBeenSet() const
{
    return m_outputMediaSettingHasBeenSet;
}

MediaCastPlaySetting MediaCastProjectInfo::GetPlaySetting() const
{
    return m_playSetting;
}

void MediaCastProjectInfo::SetPlaySetting(const MediaCastPlaySetting& _playSetting)
{
    m_playSetting = _playSetting;
    m_playSettingHasBeenSet = true;
}

bool MediaCastProjectInfo::PlaySettingHasBeenSet() const
{
    return m_playSettingHasBeenSet;
}

string MediaCastProjectInfo::GetStartTime() const
{
    return m_startTime;
}

void MediaCastProjectInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MediaCastProjectInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MediaCastProjectInfo::GetStopTime() const
{
    return m_stopTime;
}

void MediaCastProjectInfo::SetStopTime(const string& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool MediaCastProjectInfo::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

double MediaCastProjectInfo::GetDuration() const
{
    return m_duration;
}

void MediaCastProjectInfo::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaCastProjectInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

