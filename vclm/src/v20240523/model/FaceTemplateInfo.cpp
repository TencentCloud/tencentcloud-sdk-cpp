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

#include <tencentcloud/vclm/v20240523/model/FaceTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

FaceTemplateInfo::FaceTemplateInfo() :
    m_templateFaceIDHasBeenSet(false),
    m_templateFaceImageHasBeenSet(false),
    m_templateFaceRectHasBeenSet(false)
{
}

CoreInternalOutcome FaceTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateFaceID") && !value["TemplateFaceID"].IsNull())
    {
        if (!value["TemplateFaceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceTemplateInfo.TemplateFaceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateFaceID = string(value["TemplateFaceID"].GetString());
        m_templateFaceIDHasBeenSet = true;
    }

    if (value.HasMember("TemplateFaceImage") && !value["TemplateFaceImage"].IsNull())
    {
        if (!value["TemplateFaceImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceTemplateInfo.TemplateFaceImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateFaceImage.Deserialize(value["TemplateFaceImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateFaceImageHasBeenSet = true;
    }

    if (value.HasMember("TemplateFaceRect") && !value["TemplateFaceRect"].IsNull())
    {
        if (!value["TemplateFaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceTemplateInfo.TemplateFaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateFaceRect.Deserialize(value["TemplateFaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateFaceRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateFaceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateFaceID.c_str(), allocator).Move(), allocator);
    }

    if (m_templateFaceImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateFaceImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateFaceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateFaceRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FaceTemplateInfo::GetTemplateFaceID() const
{
    return m_templateFaceID;
}

void FaceTemplateInfo::SetTemplateFaceID(const string& _templateFaceID)
{
    m_templateFaceID = _templateFaceID;
    m_templateFaceIDHasBeenSet = true;
}

bool FaceTemplateInfo::TemplateFaceIDHasBeenSet() const
{
    return m_templateFaceIDHasBeenSet;
}

Image FaceTemplateInfo::GetTemplateFaceImage() const
{
    return m_templateFaceImage;
}

void FaceTemplateInfo::SetTemplateFaceImage(const Image& _templateFaceImage)
{
    m_templateFaceImage = _templateFaceImage;
    m_templateFaceImageHasBeenSet = true;
}

bool FaceTemplateInfo::TemplateFaceImageHasBeenSet() const
{
    return m_templateFaceImageHasBeenSet;
}

FaceRect FaceTemplateInfo::GetTemplateFaceRect() const
{
    return m_templateFaceRect;
}

void FaceTemplateInfo::SetTemplateFaceRect(const FaceRect& _templateFaceRect)
{
    m_templateFaceRect = _templateFaceRect;
    m_templateFaceRectHasBeenSet = true;
}

bool FaceTemplateInfo::TemplateFaceRectHasBeenSet() const
{
    return m_templateFaceRectHasBeenSet;
}

