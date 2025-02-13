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

#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveCallbackTemplateRequest::ModifyLiveCallbackTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_streamBeginNotifyUrlHasBeenSet(false),
    m_streamEndNotifyUrlHasBeenSet(false),
    m_recordNotifyUrlHasBeenSet(false),
    m_recordStatusNotifyUrlHasBeenSet(false),
    m_snapshotNotifyUrlHasBeenSet(false),
    m_pornCensorshipNotifyUrlHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_pushExceptionNotifyUrlHasBeenSet(false),
    m_audioAuditNotifyUrlHasBeenSet(false),
    m_recordExceptionNotifyUrlHasBeenSet(false),
    m_recordExceptionLevelsHasBeenSet(false)
{
}

string ModifyLiveCallbackTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_streamBeginNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamBeginNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamBeginNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamEndNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamEndNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamEndNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStatusNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatusNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordStatusNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pornCensorshipNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornCensorshipNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pornCensorshipNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pushExceptionNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushExceptionNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushExceptionNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioAuditNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioAuditNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioAuditNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordExceptionNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordExceptionNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordExceptionNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordExceptionLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordExceptionLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordExceptionLevels.begin(); itr != m_recordExceptionLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLiveCallbackTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyLiveCallbackTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyLiveCallbackTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetDescription() const
{
    return m_description;
}

void ModifyLiveCallbackTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetStreamBeginNotifyUrl() const
{
    return m_streamBeginNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetStreamBeginNotifyUrl(const string& _streamBeginNotifyUrl)
{
    m_streamBeginNotifyUrl = _streamBeginNotifyUrl;
    m_streamBeginNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::StreamBeginNotifyUrlHasBeenSet() const
{
    return m_streamBeginNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetStreamEndNotifyUrl() const
{
    return m_streamEndNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetStreamEndNotifyUrl(const string& _streamEndNotifyUrl)
{
    m_streamEndNotifyUrl = _streamEndNotifyUrl;
    m_streamEndNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::StreamEndNotifyUrlHasBeenSet() const
{
    return m_streamEndNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetRecordNotifyUrl() const
{
    return m_recordNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetRecordNotifyUrl(const string& _recordNotifyUrl)
{
    m_recordNotifyUrl = _recordNotifyUrl;
    m_recordNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::RecordNotifyUrlHasBeenSet() const
{
    return m_recordNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetRecordStatusNotifyUrl() const
{
    return m_recordStatusNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetRecordStatusNotifyUrl(const string& _recordStatusNotifyUrl)
{
    m_recordStatusNotifyUrl = _recordStatusNotifyUrl;
    m_recordStatusNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::RecordStatusNotifyUrlHasBeenSet() const
{
    return m_recordStatusNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetSnapshotNotifyUrl() const
{
    return m_snapshotNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetSnapshotNotifyUrl(const string& _snapshotNotifyUrl)
{
    m_snapshotNotifyUrl = _snapshotNotifyUrl;
    m_snapshotNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::SnapshotNotifyUrlHasBeenSet() const
{
    return m_snapshotNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetPornCensorshipNotifyUrl() const
{
    return m_pornCensorshipNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetPornCensorshipNotifyUrl(const string& _pornCensorshipNotifyUrl)
{
    m_pornCensorshipNotifyUrl = _pornCensorshipNotifyUrl;
    m_pornCensorshipNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::PornCensorshipNotifyUrlHasBeenSet() const
{
    return m_pornCensorshipNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void ModifyLiveCallbackTemplateRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetPushExceptionNotifyUrl() const
{
    return m_pushExceptionNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetPushExceptionNotifyUrl(const string& _pushExceptionNotifyUrl)
{
    m_pushExceptionNotifyUrl = _pushExceptionNotifyUrl;
    m_pushExceptionNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::PushExceptionNotifyUrlHasBeenSet() const
{
    return m_pushExceptionNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetAudioAuditNotifyUrl() const
{
    return m_audioAuditNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetAudioAuditNotifyUrl(const string& _audioAuditNotifyUrl)
{
    m_audioAuditNotifyUrl = _audioAuditNotifyUrl;
    m_audioAuditNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::AudioAuditNotifyUrlHasBeenSet() const
{
    return m_audioAuditNotifyUrlHasBeenSet;
}

string ModifyLiveCallbackTemplateRequest::GetRecordExceptionNotifyUrl() const
{
    return m_recordExceptionNotifyUrl;
}

void ModifyLiveCallbackTemplateRequest::SetRecordExceptionNotifyUrl(const string& _recordExceptionNotifyUrl)
{
    m_recordExceptionNotifyUrl = _recordExceptionNotifyUrl;
    m_recordExceptionNotifyUrlHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::RecordExceptionNotifyUrlHasBeenSet() const
{
    return m_recordExceptionNotifyUrlHasBeenSet;
}

vector<string> ModifyLiveCallbackTemplateRequest::GetRecordExceptionLevels() const
{
    return m_recordExceptionLevels;
}

void ModifyLiveCallbackTemplateRequest::SetRecordExceptionLevels(const vector<string>& _recordExceptionLevels)
{
    m_recordExceptionLevels = _recordExceptionLevels;
    m_recordExceptionLevelsHasBeenSet = true;
}

bool ModifyLiveCallbackTemplateRequest::RecordExceptionLevelsHasBeenSet() const
{
    return m_recordExceptionLevelsHasBeenSet;
}


