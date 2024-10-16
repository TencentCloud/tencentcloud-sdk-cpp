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

#include <tencentcloud/vtc/v20240223/model/SubmitVideoTranslateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

SubmitVideoTranslateJobRequest::SubmitVideoTranslateJobRequest() :
    m_videoUrlHasBeenSet(false),
    m_srcLangHasBeenSet(false),
    m_dstLangHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_removeVocalHasBeenSet(false),
    m_confirmHasBeenSet(false),
    m_lipSyncHasBeenSet(false),
    m_voiceTypeHasBeenSet(false)
{
}

string SubmitVideoTranslateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcLang.c_str(), allocator).Move(), allocator);
    }

    if (m_dstLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstLang.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVocalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVocal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeVocal, allocator);
    }

    if (m_confirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confirm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_confirm, allocator);
    }

    if (m_lipSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LipSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lipSync, allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitVideoTranslateJobRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void SubmitVideoTranslateJobRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string SubmitVideoTranslateJobRequest::GetSrcLang() const
{
    return m_srcLang;
}

void SubmitVideoTranslateJobRequest::SetSrcLang(const string& _srcLang)
{
    m_srcLang = _srcLang;
    m_srcLangHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::SrcLangHasBeenSet() const
{
    return m_srcLangHasBeenSet;
}

string SubmitVideoTranslateJobRequest::GetDstLang() const
{
    return m_dstLang;
}

void SubmitVideoTranslateJobRequest::SetDstLang(const string& _dstLang)
{
    m_dstLang = _dstLang;
    m_dstLangHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::DstLangHasBeenSet() const
{
    return m_dstLangHasBeenSet;
}

string SubmitVideoTranslateJobRequest::GetAudioUrl() const
{
    return m_audioUrl;
}

void SubmitVideoTranslateJobRequest::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

int64_t SubmitVideoTranslateJobRequest::GetRemoveVocal() const
{
    return m_removeVocal;
}

void SubmitVideoTranslateJobRequest::SetRemoveVocal(const int64_t& _removeVocal)
{
    m_removeVocal = _removeVocal;
    m_removeVocalHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::RemoveVocalHasBeenSet() const
{
    return m_removeVocalHasBeenSet;
}

int64_t SubmitVideoTranslateJobRequest::GetConfirm() const
{
    return m_confirm;
}

void SubmitVideoTranslateJobRequest::SetConfirm(const int64_t& _confirm)
{
    m_confirm = _confirm;
    m_confirmHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::ConfirmHasBeenSet() const
{
    return m_confirmHasBeenSet;
}

int64_t SubmitVideoTranslateJobRequest::GetLipSync() const
{
    return m_lipSync;
}

void SubmitVideoTranslateJobRequest::SetLipSync(const int64_t& _lipSync)
{
    m_lipSync = _lipSync;
    m_lipSyncHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::LipSyncHasBeenSet() const
{
    return m_lipSyncHasBeenSet;
}

string SubmitVideoTranslateJobRequest::GetVoiceType() const
{
    return m_voiceType;
}

void SubmitVideoTranslateJobRequest::SetVoiceType(const string& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool SubmitVideoTranslateJobRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}


