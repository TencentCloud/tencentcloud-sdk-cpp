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

#include <tencentcloud/ocr/v20181119/model/VerifyScenePhotoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyScenePhotoRequest::VerifyScenePhotoRequest() :
    m_sceneHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_reasoningPromptHasBeenSet(false),
    m_reasoningConfigHasBeenSet(false)
{
}

string VerifyScenePhotoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
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

    if (m_reasoningPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reasoningPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reasoningConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyScenePhotoRequest::GetScene() const
{
    return m_scene;
}

void VerifyScenePhotoRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool VerifyScenePhotoRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string VerifyScenePhotoRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VerifyScenePhotoRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VerifyScenePhotoRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VerifyScenePhotoRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void VerifyScenePhotoRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool VerifyScenePhotoRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string VerifyScenePhotoRequest::GetReasoningPrompt() const
{
    return m_reasoningPrompt;
}

void VerifyScenePhotoRequest::SetReasoningPrompt(const string& _reasoningPrompt)
{
    m_reasoningPrompt = _reasoningPrompt;
    m_reasoningPromptHasBeenSet = true;
}

bool VerifyScenePhotoRequest::ReasoningPromptHasBeenSet() const
{
    return m_reasoningPromptHasBeenSet;
}

ReasoningConfig VerifyScenePhotoRequest::GetReasoningConfig() const
{
    return m_reasoningConfig;
}

void VerifyScenePhotoRequest::SetReasoningConfig(const ReasoningConfig& _reasoningConfig)
{
    m_reasoningConfig = _reasoningConfig;
    m_reasoningConfigHasBeenSet = true;
}

bool VerifyScenePhotoRequest::ReasoningConfigHasBeenSet() const
{
    return m_reasoningConfigHasBeenSet;
}


