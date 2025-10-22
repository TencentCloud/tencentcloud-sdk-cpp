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

#include <tencentcloud/gme/v20180711/model/ModifyCustomizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ModifyCustomizationRequest::ModifyCustomizationRequest() :
    m_bizIdHasBeenSet(false),
    m_textUrlHasBeenSet(false),
    m_modelIdHasBeenSet(false)
{
}

string ModifyCustomizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_textUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCustomizationRequest::GetBizId() const
{
    return m_bizId;
}

void ModifyCustomizationRequest::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ModifyCustomizationRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string ModifyCustomizationRequest::GetTextUrl() const
{
    return m_textUrl;
}

void ModifyCustomizationRequest::SetTextUrl(const string& _textUrl)
{
    m_textUrl = _textUrl;
    m_textUrlHasBeenSet = true;
}

bool ModifyCustomizationRequest::TextUrlHasBeenSet() const
{
    return m_textUrlHasBeenSet;
}

string ModifyCustomizationRequest::GetModelId() const
{
    return m_modelId;
}

void ModifyCustomizationRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModifyCustomizationRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}


