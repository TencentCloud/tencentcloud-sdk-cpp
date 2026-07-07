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

#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectIdentifyStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCosAuditObjectIdentifyStatusRequest::ModifyCosAuditObjectIdentifyStatusRequest() :
    m_resourceIdHasBeenSet(false),
    m_textIdentifyStatusHasBeenSet(false),
    m_imageIdentifyStatusHasBeenSet(false)
{
}

string ModifyCosAuditObjectIdentifyStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_textIdentifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextIdentifyStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_textIdentifyStatus, allocator);
    }

    if (m_imageIdentifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIdentifyStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageIdentifyStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCosAuditObjectIdentifyStatusRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyCosAuditObjectIdentifyStatusRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyCosAuditObjectIdentifyStatusRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t ModifyCosAuditObjectIdentifyStatusRequest::GetTextIdentifyStatus() const
{
    return m_textIdentifyStatus;
}

void ModifyCosAuditObjectIdentifyStatusRequest::SetTextIdentifyStatus(const int64_t& _textIdentifyStatus)
{
    m_textIdentifyStatus = _textIdentifyStatus;
    m_textIdentifyStatusHasBeenSet = true;
}

bool ModifyCosAuditObjectIdentifyStatusRequest::TextIdentifyStatusHasBeenSet() const
{
    return m_textIdentifyStatusHasBeenSet;
}

int64_t ModifyCosAuditObjectIdentifyStatusRequest::GetImageIdentifyStatus() const
{
    return m_imageIdentifyStatus;
}

void ModifyCosAuditObjectIdentifyStatusRequest::SetImageIdentifyStatus(const int64_t& _imageIdentifyStatus)
{
    m_imageIdentifyStatus = _imageIdentifyStatus;
    m_imageIdentifyStatusHasBeenSet = true;
}

bool ModifyCosAuditObjectIdentifyStatusRequest::ImageIdentifyStatusHasBeenSet() const
{
    return m_imageIdentifyStatusHasBeenSet;
}


