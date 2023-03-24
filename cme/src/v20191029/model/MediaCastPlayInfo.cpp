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

#include <tencentcloud/cme/v20191029/model/MediaCastPlayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastPlayInfo::MediaCastPlayInfo() :
    m_statusHasBeenSet(false),
    m_currentSourceIdHasBeenSet(false),
    m_currentSourcePositionHasBeenSet(false),
    m_currentSourceDurationHasBeenSet(false),
    m_destinationStatusSetHasBeenSet(false),
    m_loopCountHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastPlayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CurrentSourceId") && !value["CurrentSourceId"].IsNull())
    {
        if (!value["CurrentSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.CurrentSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentSourceId = string(value["CurrentSourceId"].GetString());
        m_currentSourceIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentSourcePosition") && !value["CurrentSourcePosition"].IsNull())
    {
        if (!value["CurrentSourcePosition"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.CurrentSourcePosition` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_currentSourcePosition = value["CurrentSourcePosition"].GetDouble();
        m_currentSourcePositionHasBeenSet = true;
    }

    if (value.HasMember("CurrentSourceDuration") && !value["CurrentSourceDuration"].IsNull())
    {
        if (!value["CurrentSourceDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.CurrentSourceDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_currentSourceDuration = value["CurrentSourceDuration"].GetDouble();
        m_currentSourceDurationHasBeenSet = true;
    }

    if (value.HasMember("DestinationStatusSet") && !value["DestinationStatusSet"].IsNull())
    {
        if (!value["DestinationStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.DestinationStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaCastDestinationStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinationStatusSet.push_back(item);
        }
        m_destinationStatusSetHasBeenSet = true;
    }

    if (value.HasMember("LoopCount") && !value["LoopCount"].IsNull())
    {
        if (!value["LoopCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlayInfo.LoopCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopCount = value["LoopCount"].GetInt64();
        m_loopCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastPlayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_currentSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_currentSourcePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSourcePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSourcePosition, allocator);
    }

    if (m_currentSourceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSourceDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSourceDuration, allocator);
    }

    if (m_destinationStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationStatusSet.begin(); itr != m_destinationStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopCount, allocator);
    }

}


string MediaCastPlayInfo::GetStatus() const
{
    return m_status;
}

void MediaCastPlayInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaCastPlayInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MediaCastPlayInfo::GetCurrentSourceId() const
{
    return m_currentSourceId;
}

void MediaCastPlayInfo::SetCurrentSourceId(const string& _currentSourceId)
{
    m_currentSourceId = _currentSourceId;
    m_currentSourceIdHasBeenSet = true;
}

bool MediaCastPlayInfo::CurrentSourceIdHasBeenSet() const
{
    return m_currentSourceIdHasBeenSet;
}

double MediaCastPlayInfo::GetCurrentSourcePosition() const
{
    return m_currentSourcePosition;
}

void MediaCastPlayInfo::SetCurrentSourcePosition(const double& _currentSourcePosition)
{
    m_currentSourcePosition = _currentSourcePosition;
    m_currentSourcePositionHasBeenSet = true;
}

bool MediaCastPlayInfo::CurrentSourcePositionHasBeenSet() const
{
    return m_currentSourcePositionHasBeenSet;
}

double MediaCastPlayInfo::GetCurrentSourceDuration() const
{
    return m_currentSourceDuration;
}

void MediaCastPlayInfo::SetCurrentSourceDuration(const double& _currentSourceDuration)
{
    m_currentSourceDuration = _currentSourceDuration;
    m_currentSourceDurationHasBeenSet = true;
}

bool MediaCastPlayInfo::CurrentSourceDurationHasBeenSet() const
{
    return m_currentSourceDurationHasBeenSet;
}

vector<MediaCastDestinationStatus> MediaCastPlayInfo::GetDestinationStatusSet() const
{
    return m_destinationStatusSet;
}

void MediaCastPlayInfo::SetDestinationStatusSet(const vector<MediaCastDestinationStatus>& _destinationStatusSet)
{
    m_destinationStatusSet = _destinationStatusSet;
    m_destinationStatusSetHasBeenSet = true;
}

bool MediaCastPlayInfo::DestinationStatusSetHasBeenSet() const
{
    return m_destinationStatusSetHasBeenSet;
}

int64_t MediaCastPlayInfo::GetLoopCount() const
{
    return m_loopCount;
}

void MediaCastPlayInfo::SetLoopCount(const int64_t& _loopCount)
{
    m_loopCount = _loopCount;
    m_loopCountHasBeenSet = true;
}

bool MediaCastPlayInfo::LoopCountHasBeenSet() const
{
    return m_loopCountHasBeenSet;
}

