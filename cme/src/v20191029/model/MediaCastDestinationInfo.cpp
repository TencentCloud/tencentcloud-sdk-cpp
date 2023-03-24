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

#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastDestinationInfo::MediaCastDestinationInfo() :
    m_idHasBeenSet(false),
    m_pushUrlHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastDestinationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PushUrl") && !value["PushUrl"].IsNull())
    {
        if (!value["PushUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationInfo.PushUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUrl = string(value["PushUrl"].GetString());
        m_pushUrlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastDestinationInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastDestinationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string MediaCastDestinationInfo::GetId() const
{
    return m_id;
}

void MediaCastDestinationInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MediaCastDestinationInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MediaCastDestinationInfo::GetPushUrl() const
{
    return m_pushUrl;
}

void MediaCastDestinationInfo::SetPushUrl(const string& _pushUrl)
{
    m_pushUrl = _pushUrl;
    m_pushUrlHasBeenSet = true;
}

bool MediaCastDestinationInfo::PushUrlHasBeenSet() const
{
    return m_pushUrlHasBeenSet;
}

string MediaCastDestinationInfo::GetName() const
{
    return m_name;
}

void MediaCastDestinationInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MediaCastDestinationInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

