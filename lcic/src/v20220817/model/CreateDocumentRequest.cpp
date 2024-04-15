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

#include <tencentcloud/lcic/v20220817/model/CreateDocumentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

CreateDocumentRequest::CreateDocumentRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_documentUrlHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_transcodeTypeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_documentSizeHasBeenSet(false),
    m_autoHandleUnsupportedElementHasBeenSet(false),
    m_minScaleResolutionHasBeenSet(false)
{
}

string CreateDocumentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_documentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_documentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transcodeType, allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permission, allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentType.c_str(), allocator).Move(), allocator);
    }

    if (m_documentSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_documentSize, allocator);
    }

    if (m_autoHandleUnsupportedElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoHandleUnsupportedElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoHandleUnsupportedElement, allocator);
    }

    if (m_minScaleResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinScaleResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minScaleResolution.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateDocumentRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateDocumentRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateDocumentRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateDocumentRequest::GetDocumentUrl() const
{
    return m_documentUrl;
}

void CreateDocumentRequest::SetDocumentUrl(const string& _documentUrl)
{
    m_documentUrl = _documentUrl;
    m_documentUrlHasBeenSet = true;
}

bool CreateDocumentRequest::DocumentUrlHasBeenSet() const
{
    return m_documentUrlHasBeenSet;
}

string CreateDocumentRequest::GetDocumentName() const
{
    return m_documentName;
}

void CreateDocumentRequest::SetDocumentName(const string& _documentName)
{
    m_documentName = _documentName;
    m_documentNameHasBeenSet = true;
}

bool CreateDocumentRequest::DocumentNameHasBeenSet() const
{
    return m_documentNameHasBeenSet;
}

string CreateDocumentRequest::GetOwner() const
{
    return m_owner;
}

void CreateDocumentRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateDocumentRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t CreateDocumentRequest::GetTranscodeType() const
{
    return m_transcodeType;
}

void CreateDocumentRequest::SetTranscodeType(const uint64_t& _transcodeType)
{
    m_transcodeType = _transcodeType;
    m_transcodeTypeHasBeenSet = true;
}

bool CreateDocumentRequest::TranscodeTypeHasBeenSet() const
{
    return m_transcodeTypeHasBeenSet;
}

uint64_t CreateDocumentRequest::GetPermission() const
{
    return m_permission;
}

void CreateDocumentRequest::SetPermission(const uint64_t& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool CreateDocumentRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string CreateDocumentRequest::GetDocumentType() const
{
    return m_documentType;
}

void CreateDocumentRequest::SetDocumentType(const string& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool CreateDocumentRequest::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

uint64_t CreateDocumentRequest::GetDocumentSize() const
{
    return m_documentSize;
}

void CreateDocumentRequest::SetDocumentSize(const uint64_t& _documentSize)
{
    m_documentSize = _documentSize;
    m_documentSizeHasBeenSet = true;
}

bool CreateDocumentRequest::DocumentSizeHasBeenSet() const
{
    return m_documentSizeHasBeenSet;
}

bool CreateDocumentRequest::GetAutoHandleUnsupportedElement() const
{
    return m_autoHandleUnsupportedElement;
}

void CreateDocumentRequest::SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement)
{
    m_autoHandleUnsupportedElement = _autoHandleUnsupportedElement;
    m_autoHandleUnsupportedElementHasBeenSet = true;
}

bool CreateDocumentRequest::AutoHandleUnsupportedElementHasBeenSet() const
{
    return m_autoHandleUnsupportedElementHasBeenSet;
}

string CreateDocumentRequest::GetMinScaleResolution() const
{
    return m_minScaleResolution;
}

void CreateDocumentRequest::SetMinScaleResolution(const string& _minScaleResolution)
{
    m_minScaleResolution = _minScaleResolution;
    m_minScaleResolutionHasBeenSet = true;
}

bool CreateDocumentRequest::MinScaleResolutionHasBeenSet() const
{
    return m_minScaleResolutionHasBeenSet;
}


