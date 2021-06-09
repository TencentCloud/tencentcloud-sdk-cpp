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

#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveCallbackTemplateRequest::CreateLiveCallbackTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_streamBeginNotifyUrlHasBeenSet(false),
    m_streamEndNotifyUrlHasBeenSet(false),
    m_recordNotifyUrlHasBeenSet(false),
    m_snapshotNotifyUrlHasBeenSet(false),
    m_pornCensorshipNotifyUrlHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_streamMixNotifyUrlHasBeenSet(false)
{
}

string CreateLiveCallbackTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_streamMixNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamMixNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamMixNotifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveCallbackTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveCallbackTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveCallbackTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetStreamBeginNotifyUrl() const
{
    return m_streamBeginNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetStreamBeginNotifyUrl(const string& _streamBeginNotifyUrl)
{
    m_streamBeginNotifyUrl = _streamBeginNotifyUrl;
    m_streamBeginNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::StreamBeginNotifyUrlHasBeenSet() const
{
    return m_streamBeginNotifyUrlHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetStreamEndNotifyUrl() const
{
    return m_streamEndNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetStreamEndNotifyUrl(const string& _streamEndNotifyUrl)
{
    m_streamEndNotifyUrl = _streamEndNotifyUrl;
    m_streamEndNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::StreamEndNotifyUrlHasBeenSet() const
{
    return m_streamEndNotifyUrlHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetRecordNotifyUrl() const
{
    return m_recordNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetRecordNotifyUrl(const string& _recordNotifyUrl)
{
    m_recordNotifyUrl = _recordNotifyUrl;
    m_recordNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::RecordNotifyUrlHasBeenSet() const
{
    return m_recordNotifyUrlHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetSnapshotNotifyUrl() const
{
    return m_snapshotNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetSnapshotNotifyUrl(const string& _snapshotNotifyUrl)
{
    m_snapshotNotifyUrl = _snapshotNotifyUrl;
    m_snapshotNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::SnapshotNotifyUrlHasBeenSet() const
{
    return m_snapshotNotifyUrlHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetPornCensorshipNotifyUrl() const
{
    return m_pornCensorshipNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetPornCensorshipNotifyUrl(const string& _pornCensorshipNotifyUrl)
{
    m_pornCensorshipNotifyUrl = _pornCensorshipNotifyUrl;
    m_pornCensorshipNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::PornCensorshipNotifyUrlHasBeenSet() const
{
    return m_pornCensorshipNotifyUrlHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void CreateLiveCallbackTemplateRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

string CreateLiveCallbackTemplateRequest::GetStreamMixNotifyUrl() const
{
    return m_streamMixNotifyUrl;
}

void CreateLiveCallbackTemplateRequest::SetStreamMixNotifyUrl(const string& _streamMixNotifyUrl)
{
    m_streamMixNotifyUrl = _streamMixNotifyUrl;
    m_streamMixNotifyUrlHasBeenSet = true;
}

bool CreateLiveCallbackTemplateRequest::StreamMixNotifyUrlHasBeenSet() const
{
    return m_streamMixNotifyUrlHasBeenSet;
}


