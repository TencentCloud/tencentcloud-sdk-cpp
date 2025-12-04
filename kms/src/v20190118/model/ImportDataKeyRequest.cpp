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

#include <tencentcloud/kms/v20190118/model/ImportDataKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ImportDataKeyRequest::ImportDataKeyRequest() :
    m_dataKeyNameHasBeenSet(false),
    m_importKeyMaterialHasBeenSet(false),
    m_importTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string ImportDataKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_importKeyMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportKeyMaterial";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importKeyMaterial.c_str(), allocator).Move(), allocator);
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_importType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string ImportDataKeyRequest::GetDataKeyName() const
{
    return m_dataKeyName;
}

void ImportDataKeyRequest::SetDataKeyName(const string& _dataKeyName)
{
    m_dataKeyName = _dataKeyName;
    m_dataKeyNameHasBeenSet = true;
}

bool ImportDataKeyRequest::DataKeyNameHasBeenSet() const
{
    return m_dataKeyNameHasBeenSet;
}

string ImportDataKeyRequest::GetImportKeyMaterial() const
{
    return m_importKeyMaterial;
}

void ImportDataKeyRequest::SetImportKeyMaterial(const string& _importKeyMaterial)
{
    m_importKeyMaterial = _importKeyMaterial;
    m_importKeyMaterialHasBeenSet = true;
}

bool ImportDataKeyRequest::ImportKeyMaterialHasBeenSet() const
{
    return m_importKeyMaterialHasBeenSet;
}

uint64_t ImportDataKeyRequest::GetImportType() const
{
    return m_importType;
}

void ImportDataKeyRequest::SetImportType(const uint64_t& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool ImportDataKeyRequest::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

string ImportDataKeyRequest::GetDescription() const
{
    return m_description;
}

void ImportDataKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImportDataKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImportDataKeyRequest::GetKeyId() const
{
    return m_keyId;
}

void ImportDataKeyRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ImportDataKeyRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ImportDataKeyRequest::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void ImportDataKeyRequest::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool ImportDataKeyRequest::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

vector<Tag> ImportDataKeyRequest::GetTags() const
{
    return m_tags;
}

void ImportDataKeyRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ImportDataKeyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


