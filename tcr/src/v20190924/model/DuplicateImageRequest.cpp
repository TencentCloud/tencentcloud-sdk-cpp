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

#include <tencentcloud/tcr/v20190924/model/DuplicateImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DuplicateImageRequest::DuplicateImageRequest() :
    m_registryIdHasBeenSet(false),
    m_sourceNamespaceHasBeenSet(false),
    m_sourceRepoHasBeenSet(false),
    m_sourceReferenceHasBeenSet(false),
    m_destinationTagHasBeenSet(false),
    m_destinationNamespaceHasBeenSet(false),
    m_destinationRepoHasBeenSet(false),
    m_overrideHasBeenSet(false)
{
}

string DuplicateImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRepo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceReferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceReference";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceReference.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationTag.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRepo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_override, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DuplicateImageRequest::GetRegistryId() const
{
    return m_registryId;
}

void DuplicateImageRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DuplicateImageRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DuplicateImageRequest::GetSourceNamespace() const
{
    return m_sourceNamespace;
}

void DuplicateImageRequest::SetSourceNamespace(const string& _sourceNamespace)
{
    m_sourceNamespace = _sourceNamespace;
    m_sourceNamespaceHasBeenSet = true;
}

bool DuplicateImageRequest::SourceNamespaceHasBeenSet() const
{
    return m_sourceNamespaceHasBeenSet;
}

string DuplicateImageRequest::GetSourceRepo() const
{
    return m_sourceRepo;
}

void DuplicateImageRequest::SetSourceRepo(const string& _sourceRepo)
{
    m_sourceRepo = _sourceRepo;
    m_sourceRepoHasBeenSet = true;
}

bool DuplicateImageRequest::SourceRepoHasBeenSet() const
{
    return m_sourceRepoHasBeenSet;
}

string DuplicateImageRequest::GetSourceReference() const
{
    return m_sourceReference;
}

void DuplicateImageRequest::SetSourceReference(const string& _sourceReference)
{
    m_sourceReference = _sourceReference;
    m_sourceReferenceHasBeenSet = true;
}

bool DuplicateImageRequest::SourceReferenceHasBeenSet() const
{
    return m_sourceReferenceHasBeenSet;
}

string DuplicateImageRequest::GetDestinationTag() const
{
    return m_destinationTag;
}

void DuplicateImageRequest::SetDestinationTag(const string& _destinationTag)
{
    m_destinationTag = _destinationTag;
    m_destinationTagHasBeenSet = true;
}

bool DuplicateImageRequest::DestinationTagHasBeenSet() const
{
    return m_destinationTagHasBeenSet;
}

string DuplicateImageRequest::GetDestinationNamespace() const
{
    return m_destinationNamespace;
}

void DuplicateImageRequest::SetDestinationNamespace(const string& _destinationNamespace)
{
    m_destinationNamespace = _destinationNamespace;
    m_destinationNamespaceHasBeenSet = true;
}

bool DuplicateImageRequest::DestinationNamespaceHasBeenSet() const
{
    return m_destinationNamespaceHasBeenSet;
}

string DuplicateImageRequest::GetDestinationRepo() const
{
    return m_destinationRepo;
}

void DuplicateImageRequest::SetDestinationRepo(const string& _destinationRepo)
{
    m_destinationRepo = _destinationRepo;
    m_destinationRepoHasBeenSet = true;
}

bool DuplicateImageRequest::DestinationRepoHasBeenSet() const
{
    return m_destinationRepoHasBeenSet;
}

bool DuplicateImageRequest::GetOverride() const
{
    return m_override;
}

void DuplicateImageRequest::SetOverride(const bool& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool DuplicateImageRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}


