/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vclm/v20240523/model/ReferenceSubject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

ReferenceSubject::ReferenceSubject() :
    m_idHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_videosHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

CoreInternalOutcome ReferenceSubject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceSubject.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferenceSubject.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_images.push_back((*itr).GetString());
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceSubject.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Videos") && !value["Videos"].IsNull())
    {
        if (!value["Videos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferenceSubject.Videos` is not array type"));

        const rapidjson::Value &tmpValue = value["Videos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videos.push_back((*itr).GetString());
        }
        m_videosHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceSubject.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferenceSubject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_videosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Videos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videos.begin(); itr != m_videos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

}


string ReferenceSubject::GetId() const
{
    return m_id;
}

void ReferenceSubject::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReferenceSubject::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> ReferenceSubject::GetImages() const
{
    return m_images;
}

void ReferenceSubject::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool ReferenceSubject::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string ReferenceSubject::GetName() const
{
    return m_name;
}

void ReferenceSubject::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReferenceSubject::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ReferenceSubject::GetVideos() const
{
    return m_videos;
}

void ReferenceSubject::SetVideos(const vector<string>& _videos)
{
    m_videos = _videos;
    m_videosHasBeenSet = true;
}

bool ReferenceSubject::VideosHasBeenSet() const
{
    return m_videosHasBeenSet;
}

string ReferenceSubject::GetVoiceId() const
{
    return m_voiceId;
}

void ReferenceSubject::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool ReferenceSubject::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

