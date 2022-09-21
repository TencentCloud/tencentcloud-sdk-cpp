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

#include <tencentcloud/ivld/v20210903/model/ImportMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ImportMediaRequest::ImportMediaRequest() :
    m_uRLHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_nameHasBeenSet(false),
    m_writeBackCosPathHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_callbackURLHasBeenSet(false),
    m_mediaTypeHasBeenSet(false)
{
}

string ImportMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_writeBackCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteBackCosPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_writeBackCosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mediaType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportMediaRequest::GetURL() const
{
    return m_uRL;
}

void ImportMediaRequest::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool ImportMediaRequest::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string ImportMediaRequest::GetMD5() const
{
    return m_mD5;
}

void ImportMediaRequest::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool ImportMediaRequest::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

string ImportMediaRequest::GetName() const
{
    return m_name;
}

void ImportMediaRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportMediaRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImportMediaRequest::GetWriteBackCosPath() const
{
    return m_writeBackCosPath;
}

void ImportMediaRequest::SetWriteBackCosPath(const string& _writeBackCosPath)
{
    m_writeBackCosPath = _writeBackCosPath;
    m_writeBackCosPathHasBeenSet = true;
}

bool ImportMediaRequest::WriteBackCosPathHasBeenSet() const
{
    return m_writeBackCosPathHasBeenSet;
}

string ImportMediaRequest::GetLabel() const
{
    return m_label;
}

void ImportMediaRequest::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ImportMediaRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImportMediaRequest::GetCallbackURL() const
{
    return m_callbackURL;
}

void ImportMediaRequest::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool ImportMediaRequest::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

int64_t ImportMediaRequest::GetMediaType() const
{
    return m_mediaType;
}

void ImportMediaRequest::SetMediaType(const int64_t& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool ImportMediaRequest::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}


