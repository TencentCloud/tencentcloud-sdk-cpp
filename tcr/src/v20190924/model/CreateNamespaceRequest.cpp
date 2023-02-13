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

#include <tencentcloud/tcr/v20190924/model/CreateNamespaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateNamespaceRequest::CreateNamespaceRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_isAutoScanHasBeenSet(false),
    m_isPreventVULHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_cVEWhitelistItemsHasBeenSet(false)
{
}

string CreateNamespaceRequest::ToJsonString() const
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

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecification.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isAutoScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAutoScan, allocator);
    }

    if (m_isPreventVULHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreventVUL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPreventVUL, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEWhitelistItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEWhitelistItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cVEWhitelistItems.begin(); itr != m_cVEWhitelistItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNamespaceRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateNamespaceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateNamespaceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateNamespaceRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void CreateNamespaceRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

bool CreateNamespaceRequest::GetIsPublic() const
{
    return m_isPublic;
}

void CreateNamespaceRequest::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool CreateNamespaceRequest::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

TagSpecification CreateNamespaceRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateNamespaceRequest::SetTagSpecification(const TagSpecification& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateNamespaceRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

bool CreateNamespaceRequest::GetIsAutoScan() const
{
    return m_isAutoScan;
}

void CreateNamespaceRequest::SetIsAutoScan(const bool& _isAutoScan)
{
    m_isAutoScan = _isAutoScan;
    m_isAutoScanHasBeenSet = true;
}

bool CreateNamespaceRequest::IsAutoScanHasBeenSet() const
{
    return m_isAutoScanHasBeenSet;
}

bool CreateNamespaceRequest::GetIsPreventVUL() const
{
    return m_isPreventVUL;
}

void CreateNamespaceRequest::SetIsPreventVUL(const bool& _isPreventVUL)
{
    m_isPreventVUL = _isPreventVUL;
    m_isPreventVULHasBeenSet = true;
}

bool CreateNamespaceRequest::IsPreventVULHasBeenSet() const
{
    return m_isPreventVULHasBeenSet;
}

string CreateNamespaceRequest::GetSeverity() const
{
    return m_severity;
}

void CreateNamespaceRequest::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool CreateNamespaceRequest::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

vector<CVEWhitelistItem> CreateNamespaceRequest::GetCVEWhitelistItems() const
{
    return m_cVEWhitelistItems;
}

void CreateNamespaceRequest::SetCVEWhitelistItems(const vector<CVEWhitelistItem>& _cVEWhitelistItems)
{
    m_cVEWhitelistItems = _cVEWhitelistItems;
    m_cVEWhitelistItemsHasBeenSet = true;
}

bool CreateNamespaceRequest::CVEWhitelistItemsHasBeenSet() const
{
    return m_cVEWhitelistItemsHasBeenSet;
}


