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

#include <tencentcloud/domain/v20180808/model/ModifyTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ModifyTemplateRequest::ModifyTemplateRequest() :
    m_certificateInfoHasBeenSet(false),
    m_contactInfoHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string ModifyTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificateInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_contactInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


CertificateInfo ModifyTemplateRequest::GetCertificateInfo() const
{
    return m_certificateInfo;
}

void ModifyTemplateRequest::SetCertificateInfo(const CertificateInfo& _certificateInfo)
{
    m_certificateInfo = _certificateInfo;
    m_certificateInfoHasBeenSet = true;
}

bool ModifyTemplateRequest::CertificateInfoHasBeenSet() const
{
    return m_certificateInfoHasBeenSet;
}

ContactInfo ModifyTemplateRequest::GetContactInfo() const
{
    return m_contactInfo;
}

void ModifyTemplateRequest::SetContactInfo(const ContactInfo& _contactInfo)
{
    m_contactInfo = _contactInfo;
    m_contactInfoHasBeenSet = true;
}

bool ModifyTemplateRequest::ContactInfoHasBeenSet() const
{
    return m_contactInfoHasBeenSet;
}

string ModifyTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


