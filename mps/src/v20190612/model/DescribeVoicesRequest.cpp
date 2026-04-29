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

#include <tencentcloud/mps/v20190612/model/DescribeVoicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeVoicesRequest::DescribeVoicesRequest() :
    m_voiceIdHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_languagesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scenesHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string DescribeVoicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_languagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Languages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_languages.begin(); itr != m_languages.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenes.begin(); itr != m_scenes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVoicesRequest::GetVoiceId() const
{
    return m_voiceId;
}

void DescribeVoicesRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool DescribeVoicesRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string DescribeVoicesRequest::GetVoiceType() const
{
    return m_voiceType;
}

void DescribeVoicesRequest::SetVoiceType(const string& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool DescribeVoicesRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string DescribeVoicesRequest::GetVoiceName() const
{
    return m_voiceName;
}

void DescribeVoicesRequest::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool DescribeVoicesRequest::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

string DescribeVoicesRequest::GetDescription() const
{
    return m_description;
}

void DescribeVoicesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeVoicesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeVoicesRequest::GetGender() const
{
    return m_gender;
}

void DescribeVoicesRequest::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool DescribeVoicesRequest::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string DescribeVoicesRequest::GetAge() const
{
    return m_age;
}

void DescribeVoicesRequest::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool DescribeVoicesRequest::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

vector<string> DescribeVoicesRequest::GetLanguages() const
{
    return m_languages;
}

void DescribeVoicesRequest::SetLanguages(const vector<string>& _languages)
{
    m_languages = _languages;
    m_languagesHasBeenSet = true;
}

bool DescribeVoicesRequest::LanguagesHasBeenSet() const
{
    return m_languagesHasBeenSet;
}

vector<string> DescribeVoicesRequest::GetLabels() const
{
    return m_labels;
}

void DescribeVoicesRequest::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DescribeVoicesRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<string> DescribeVoicesRequest::GetScenes() const
{
    return m_scenes;
}

void DescribeVoicesRequest::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool DescribeVoicesRequest::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

string DescribeVoicesRequest::GetExtParam() const
{
    return m_extParam;
}

void DescribeVoicesRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool DescribeVoicesRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


