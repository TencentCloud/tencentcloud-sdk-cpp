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

#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplateVersionControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

ModifyCustomizeTemplateVersionControlRequest::ModifyCustomizeTemplateVersionControlRequest() :
    m_cloudStudioSessionTeamHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_refHasBeenSet(false),
    m_refTypeHasBeenSet(false)
{
}

string ModifyCustomizeTemplateVersionControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudStudioSessionTeamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStudioSessionTeam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudStudioSessionTeam.c_str(), allocator).Move(), allocator);
    }

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

    if (m_refHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ref";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ref.c_str(), allocator).Move(), allocator);
    }

    if (m_refTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_refType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomizeTemplateVersionControlRequest::GetCloudStudioSessionTeam() const
{
    return m_cloudStudioSessionTeam;
}

void ModifyCustomizeTemplateVersionControlRequest::SetCloudStudioSessionTeam(const string& _cloudStudioSessionTeam)
{
    m_cloudStudioSessionTeam = _cloudStudioSessionTeam;
    m_cloudStudioSessionTeamHasBeenSet = true;
}

bool ModifyCustomizeTemplateVersionControlRequest::CloudStudioSessionTeamHasBeenSet() const
{
    return m_cloudStudioSessionTeamHasBeenSet;
}

int64_t ModifyCustomizeTemplateVersionControlRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyCustomizeTemplateVersionControlRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyCustomizeTemplateVersionControlRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyCustomizeTemplateVersionControlRequest::GetUrl() const
{
    return m_url;
}

void ModifyCustomizeTemplateVersionControlRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyCustomizeTemplateVersionControlRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyCustomizeTemplateVersionControlRequest::GetRef() const
{
    return m_ref;
}

void ModifyCustomizeTemplateVersionControlRequest::SetRef(const string& _ref)
{
    m_ref = _ref;
    m_refHasBeenSet = true;
}

bool ModifyCustomizeTemplateVersionControlRequest::RefHasBeenSet() const
{
    return m_refHasBeenSet;
}

string ModifyCustomizeTemplateVersionControlRequest::GetRefType() const
{
    return m_refType;
}

void ModifyCustomizeTemplateVersionControlRequest::SetRefType(const string& _refType)
{
    m_refType = _refType;
    m_refTypeHasBeenSet = true;
}

bool ModifyCustomizeTemplateVersionControlRequest::RefTypeHasBeenSet() const
{
    return m_refTypeHasBeenSet;
}


