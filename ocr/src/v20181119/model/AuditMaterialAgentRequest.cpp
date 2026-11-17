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

#include <tencentcloud/ocr/v20181119/model/AuditMaterialAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AuditMaterialAgentRequest::AuditMaterialAgentRequest() :
    m_agentTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_needSceneTypeHasBeenSet(false),
    m_storeInfoHintHasBeenSet(false),
    m_ignoreWatermarkCategoriesHasBeenSet(false)
{
}

string AuditMaterialAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_needSceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSceneType, allocator);
    }

    if (m_storeInfoHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreInfoHint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storeInfoHint.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreWatermarkCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreWatermarkCategories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ignoreWatermarkCategories.begin(); itr != m_ignoreWatermarkCategories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AuditMaterialAgentRequest::GetAgentType() const
{
    return m_agentType;
}

void AuditMaterialAgentRequest::SetAgentType(const string& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool AuditMaterialAgentRequest::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string AuditMaterialAgentRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void AuditMaterialAgentRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool AuditMaterialAgentRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string AuditMaterialAgentRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void AuditMaterialAgentRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool AuditMaterialAgentRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool AuditMaterialAgentRequest::GetNeedSceneType() const
{
    return m_needSceneType;
}

void AuditMaterialAgentRequest::SetNeedSceneType(const bool& _needSceneType)
{
    m_needSceneType = _needSceneType;
    m_needSceneTypeHasBeenSet = true;
}

bool AuditMaterialAgentRequest::NeedSceneTypeHasBeenSet() const
{
    return m_needSceneTypeHasBeenSet;
}

string AuditMaterialAgentRequest::GetStoreInfoHint() const
{
    return m_storeInfoHint;
}

void AuditMaterialAgentRequest::SetStoreInfoHint(const string& _storeInfoHint)
{
    m_storeInfoHint = _storeInfoHint;
    m_storeInfoHintHasBeenSet = true;
}

bool AuditMaterialAgentRequest::StoreInfoHintHasBeenSet() const
{
    return m_storeInfoHintHasBeenSet;
}

vector<string> AuditMaterialAgentRequest::GetIgnoreWatermarkCategories() const
{
    return m_ignoreWatermarkCategories;
}

void AuditMaterialAgentRequest::SetIgnoreWatermarkCategories(const vector<string>& _ignoreWatermarkCategories)
{
    m_ignoreWatermarkCategories = _ignoreWatermarkCategories;
    m_ignoreWatermarkCategoriesHasBeenSet = true;
}

bool AuditMaterialAgentRequest::IgnoreWatermarkCategoriesHasBeenSet() const
{
    return m_ignoreWatermarkCategoriesHasBeenSet;
}


