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

#include <tencentcloud/ocr/v20181119/model/GeneralHandwritingOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralHandwritingOCRRequest::GeneralHandwritingOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_enableWordPolygonHasBeenSet(false),
    m_enableDetectTextHasBeenSet(false)
{
}

string GeneralHandwritingOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_enableWordPolygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWordPolygon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWordPolygon, allocator);
    }

    if (m_enableDetectTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetectText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetectText, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GeneralHandwritingOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void GeneralHandwritingOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool GeneralHandwritingOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string GeneralHandwritingOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GeneralHandwritingOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GeneralHandwritingOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string GeneralHandwritingOCRRequest::GetScene() const
{
    return m_scene;
}

void GeneralHandwritingOCRRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool GeneralHandwritingOCRRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

bool GeneralHandwritingOCRRequest::GetEnableWordPolygon() const
{
    return m_enableWordPolygon;
}

void GeneralHandwritingOCRRequest::SetEnableWordPolygon(const bool& _enableWordPolygon)
{
    m_enableWordPolygon = _enableWordPolygon;
    m_enableWordPolygonHasBeenSet = true;
}

bool GeneralHandwritingOCRRequest::EnableWordPolygonHasBeenSet() const
{
    return m_enableWordPolygonHasBeenSet;
}

bool GeneralHandwritingOCRRequest::GetEnableDetectText() const
{
    return m_enableDetectText;
}

void GeneralHandwritingOCRRequest::SetEnableDetectText(const bool& _enableDetectText)
{
    m_enableDetectText = _enableDetectText;
    m_enableDetectTextHasBeenSet = true;
}

bool GeneralHandwritingOCRRequest::EnableDetectTextHasBeenSet() const
{
    return m_enableDetectTextHasBeenSet;
}


