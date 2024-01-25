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

#include <tencentcloud/vod/v20180717/model/MediaCastEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaCastEvent::MediaCastEvent() :
    m_castIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CastId") && !value["CastId"].IsNull())
    {
        if (!value["CastId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastEvent.CastId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_castId = string(value["CastId"].GetString());
        m_castIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastEvent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_castIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CastId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_castId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string MediaCastEvent::GetCastId() const
{
    return m_castId;
}

void MediaCastEvent::SetCastId(const string& _castId)
{
    m_castId = _castId;
    m_castIdHasBeenSet = true;
}

bool MediaCastEvent::CastIdHasBeenSet() const
{
    return m_castIdHasBeenSet;
}

string MediaCastEvent::GetStatus() const
{
    return m_status;
}

void MediaCastEvent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaCastEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

