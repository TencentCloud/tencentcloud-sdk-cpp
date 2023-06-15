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

#include <tencentcloud/live/v20180801/model/ModifyLivePadTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLivePadTemplateRequest::ModifyLivePadTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_waitDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string ModifyLivePadTemplateRequest::ToJsonString() const
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_waitDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitDuration, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLivePadTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyLivePadTemplateRequest::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyLivePadTemplateRequest::GetUrl() const
{
    return m_url;
}

void ModifyLivePadTemplateRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t ModifyLivePadTemplateRequest::GetWaitDuration() const
{
    return m_waitDuration;
}

void ModifyLivePadTemplateRequest::SetWaitDuration(const uint64_t& _waitDuration)
{
    m_waitDuration = _waitDuration;
    m_waitDurationHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::WaitDurationHasBeenSet() const
{
    return m_waitDurationHasBeenSet;
}

uint64_t ModifyLivePadTemplateRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void ModifyLivePadTemplateRequest::SetMaxDuration(const uint64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

string ModifyLivePadTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyLivePadTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyLivePadTemplateRequest::GetDescription() const
{
    return m_description;
}

void ModifyLivePadTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ModifyLivePadTemplateRequest::GetType() const
{
    return m_type;
}

void ModifyLivePadTemplateRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyLivePadTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


