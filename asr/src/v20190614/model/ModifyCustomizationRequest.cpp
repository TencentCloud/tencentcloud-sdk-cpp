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

#include <tencentcloud/asr/v20190614/model/ModifyCustomizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

ModifyCustomizationRequest::ModifyCustomizationRequest() :
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_textUrlHasBeenSet(false)
{
}

string ModifyCustomizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_textUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string ModifyCustomizationRequest::GetModelName() const
{
    return m_modelName;
}

void ModifyCustomizationRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModifyCustomizationRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModifyCustomizationRequest::GetModelType() const
{
    return m_modelType;
}

void ModifyCustomizationRequest::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool ModifyCustomizationRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
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


