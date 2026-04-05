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

#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputSubjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoTaskInputSubjectInfo::AigcVideoTaskInputSubjectInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_imageUrlsHasBeenSet(false),
    m_videoUrlsHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoTaskInputSubjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputSubjectInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputSubjectInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputSubjectInfo.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("ImageUrls") && !value["ImageUrls"].IsNull())
    {
        if (!value["ImageUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputSubjectInfo.ImageUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrls.push_back((*itr).GetString());
        }
        m_imageUrlsHasBeenSet = true;
    }

    if (value.HasMember("VideoUrls") && !value["VideoUrls"].IsNull())
    {
        if (!value["VideoUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputSubjectInfo.VideoUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoUrls.push_back((*itr).GetString());
        }
        m_videoUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoTaskInputSubjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrls.begin(); itr != m_imageUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoUrls.begin(); itr != m_videoUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AigcVideoTaskInputSubjectInfo::GetId() const
{
    return m_id;
}

void AigcVideoTaskInputSubjectInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AigcVideoTaskInputSubjectInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AigcVideoTaskInputSubjectInfo::GetName() const
{
    return m_name;
}

void AigcVideoTaskInputSubjectInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AigcVideoTaskInputSubjectInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AigcVideoTaskInputSubjectInfo::GetVoiceId() const
{
    return m_voiceId;
}

void AigcVideoTaskInputSubjectInfo::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool AigcVideoTaskInputSubjectInfo::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

vector<string> AigcVideoTaskInputSubjectInfo::GetImageUrls() const
{
    return m_imageUrls;
}

void AigcVideoTaskInputSubjectInfo::SetImageUrls(const vector<string>& _imageUrls)
{
    m_imageUrls = _imageUrls;
    m_imageUrlsHasBeenSet = true;
}

bool AigcVideoTaskInputSubjectInfo::ImageUrlsHasBeenSet() const
{
    return m_imageUrlsHasBeenSet;
}

vector<string> AigcVideoTaskInputSubjectInfo::GetVideoUrls() const
{
    return m_videoUrls;
}

void AigcVideoTaskInputSubjectInfo::SetVideoUrls(const vector<string>& _videoUrls)
{
    m_videoUrls = _videoUrls;
    m_videoUrlsHasBeenSet = true;
}

bool AigcVideoTaskInputSubjectInfo::VideoUrlsHasBeenSet() const
{
    return m_videoUrlsHasBeenSet;
}

