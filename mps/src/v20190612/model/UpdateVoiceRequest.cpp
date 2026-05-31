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

#include <tencentcloud/mps/v20190612/model/UpdateVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

UpdateVoiceRequest::UpdateVoiceRequest() :
    m_voiceIdHasBeenSet(false),
    m_voiceFieldsHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string UpdateVoiceRequest::ToJsonString() const
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

    if (m_voiceFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceFields.ToJsonObject(d[key.c_str()], allocator);
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


string UpdateVoiceRequest::GetVoiceId() const
{
    return m_voiceId;
}

void UpdateVoiceRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool UpdateVoiceRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

VoiceUpdateFields UpdateVoiceRequest::GetVoiceFields() const
{
    return m_voiceFields;
}

void UpdateVoiceRequest::SetVoiceFields(const VoiceUpdateFields& _voiceFields)
{
    m_voiceFields = _voiceFields;
    m_voiceFieldsHasBeenSet = true;
}

bool UpdateVoiceRequest::VoiceFieldsHasBeenSet() const
{
    return m_voiceFieldsHasBeenSet;
}

string UpdateVoiceRequest::GetExtParam() const
{
    return m_extParam;
}

void UpdateVoiceRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool UpdateVoiceRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


