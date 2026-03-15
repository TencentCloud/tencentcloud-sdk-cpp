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

#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcSubjectInput::CreateAigcSubjectInput() :
    m_subjectNameHasBeenSet(false),
    m_subjectImagesHasBeenSet(false),
    m_subjectVideosHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcSubjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectName") && !value["SubjectName"].IsNull())
    {
        if (!value["SubjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectInput.SubjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectName = string(value["SubjectName"].GetString());
        m_subjectNameHasBeenSet = true;
    }

    if (value.HasMember("SubjectImages") && !value["SubjectImages"].IsNull())
    {
        if (!value["SubjectImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectInput.SubjectImages` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectImages.push_back((*itr).GetString());
        }
        m_subjectImagesHasBeenSet = true;
    }

    if (value.HasMember("SubjectVideos") && !value["SubjectVideos"].IsNull())
    {
        if (!value["SubjectVideos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectInput.SubjectVideos` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectVideos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectVideos.push_back((*itr).GetString());
        }
        m_subjectVideosHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcSubjectInput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcSubjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectImages.begin(); itr != m_subjectImages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subjectVideosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectVideos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectVideos.begin(); itr != m_subjectVideos.end(); ++itr)
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


string CreateAigcSubjectInput::GetSubjectName() const
{
    return m_subjectName;
}

void CreateAigcSubjectInput::SetSubjectName(const string& _subjectName)
{
    m_subjectName = _subjectName;
    m_subjectNameHasBeenSet = true;
}

bool CreateAigcSubjectInput::SubjectNameHasBeenSet() const
{
    return m_subjectNameHasBeenSet;
}

vector<string> CreateAigcSubjectInput::GetSubjectImages() const
{
    return m_subjectImages;
}

void CreateAigcSubjectInput::SetSubjectImages(const vector<string>& _subjectImages)
{
    m_subjectImages = _subjectImages;
    m_subjectImagesHasBeenSet = true;
}

bool CreateAigcSubjectInput::SubjectImagesHasBeenSet() const
{
    return m_subjectImagesHasBeenSet;
}

vector<string> CreateAigcSubjectInput::GetSubjectVideos() const
{
    return m_subjectVideos;
}

void CreateAigcSubjectInput::SetSubjectVideos(const vector<string>& _subjectVideos)
{
    m_subjectVideos = _subjectVideos;
    m_subjectVideosHasBeenSet = true;
}

bool CreateAigcSubjectInput::SubjectVideosHasBeenSet() const
{
    return m_subjectVideosHasBeenSet;
}

string CreateAigcSubjectInput::GetVoiceId() const
{
    return m_voiceId;
}

void CreateAigcSubjectInput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CreateAigcSubjectInput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

