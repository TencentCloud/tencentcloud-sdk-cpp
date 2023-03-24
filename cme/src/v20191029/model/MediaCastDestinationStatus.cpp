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

#include <tencentcloud/cme/v20191029/model/MediaCastDestinationStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastDestinationStatus::MediaCastDestinationStatus() :
    m_idHasBeenSet(false),
    m_pushUrlHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastDestinationStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationStatus.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PushUrl") && !value["PushUrl"].IsNull())
    {
        if (!value["PushUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationStatus.PushUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUrl = string(value["PushUrl"].GetString());
        m_pushUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastDestinationStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pushUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string MediaCastDestinationStatus::GetId() const
{
    return m_id;
}

void MediaCastDestinationStatus::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MediaCastDestinationStatus::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MediaCastDestinationStatus::GetPushUrl() const
{
    return m_pushUrl;
}

void MediaCastDestinationStatus::SetPushUrl(const string& _pushUrl)
{
    m_pushUrl = _pushUrl;
    m_pushUrlHasBeenSet = true;
}

bool MediaCastDestinationStatus::PushUrlHasBeenSet() const
{
    return m_pushUrlHasBeenSet;
}

string MediaCastDestinationStatus::GetStatus() const
{
    return m_status;
}

void MediaCastDestinationStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaCastDestinationStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

