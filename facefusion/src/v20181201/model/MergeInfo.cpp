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

#include <tencentcloud/facefusion/v20181201/model/MergeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

MergeInfo::MergeInfo() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_inputImageFaceRectHasBeenSet(false),
    m_templateFaceIDHasBeenSet(false)
{
}

CoreInternalOutcome MergeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MergeInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MergeInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("InputImageFaceRect") && !value["InputImageFaceRect"].IsNull())
    {
        if (!value["InputImageFaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MergeInfo.InputImageFaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputImageFaceRect.Deserialize(value["InputImageFaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputImageFaceRectHasBeenSet = true;
    }

    if (value.HasMember("TemplateFaceID") && !value["TemplateFaceID"].IsNull())
    {
        if (!value["TemplateFaceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MergeInfo.TemplateFaceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateFaceID = string(value["TemplateFaceID"].GetString());
        m_templateFaceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MergeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_inputImageFaceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImageFaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputImageFaceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateFaceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateFaceID.c_str(), allocator).Move(), allocator);
    }

}


string MergeInfo::GetImage() const
{
    return m_image;
}

void MergeInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool MergeInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string MergeInfo::GetUrl() const
{
    return m_url;
}

void MergeInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MergeInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

FaceRect MergeInfo::GetInputImageFaceRect() const
{
    return m_inputImageFaceRect;
}

void MergeInfo::SetInputImageFaceRect(const FaceRect& _inputImageFaceRect)
{
    m_inputImageFaceRect = _inputImageFaceRect;
    m_inputImageFaceRectHasBeenSet = true;
}

bool MergeInfo::InputImageFaceRectHasBeenSet() const
{
    return m_inputImageFaceRectHasBeenSet;
}

string MergeInfo::GetTemplateFaceID() const
{
    return m_templateFaceID;
}

void MergeInfo::SetTemplateFaceID(const string& _templateFaceID)
{
    m_templateFaceID = _templateFaceID;
    m_templateFaceIDHasBeenSet = true;
}

bool MergeInfo::TemplateFaceIDHasBeenSet() const
{
    return m_templateFaceIDHasBeenSet;
}

