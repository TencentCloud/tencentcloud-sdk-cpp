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

#include <tencentcloud/vclm/v20240523/model/FaceMergeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

FaceMergeInfo::FaceMergeInfo() :
    m_mergeFaceImageHasBeenSet(false),
    m_mergeFaceRectHasBeenSet(false),
    m_templateFaceIDHasBeenSet(false)
{
}

CoreInternalOutcome FaceMergeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MergeFaceImage") && !value["MergeFaceImage"].IsNull())
    {
        if (!value["MergeFaceImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMergeInfo.MergeFaceImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mergeFaceImage.Deserialize(value["MergeFaceImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mergeFaceImageHasBeenSet = true;
    }

    if (value.HasMember("MergeFaceRect") && !value["MergeFaceRect"].IsNull())
    {
        if (!value["MergeFaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMergeInfo.MergeFaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mergeFaceRect.Deserialize(value["MergeFaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mergeFaceRectHasBeenSet = true;
    }

    if (value.HasMember("TemplateFaceID") && !value["TemplateFaceID"].IsNull())
    {
        if (!value["TemplateFaceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMergeInfo.TemplateFaceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateFaceID = string(value["TemplateFaceID"].GetString());
        m_templateFaceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceMergeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mergeFaceImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeFaceImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mergeFaceImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mergeFaceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeFaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mergeFaceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateFaceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateFaceID.c_str(), allocator).Move(), allocator);
    }

}


Image FaceMergeInfo::GetMergeFaceImage() const
{
    return m_mergeFaceImage;
}

void FaceMergeInfo::SetMergeFaceImage(const Image& _mergeFaceImage)
{
    m_mergeFaceImage = _mergeFaceImage;
    m_mergeFaceImageHasBeenSet = true;
}

bool FaceMergeInfo::MergeFaceImageHasBeenSet() const
{
    return m_mergeFaceImageHasBeenSet;
}

FaceRect FaceMergeInfo::GetMergeFaceRect() const
{
    return m_mergeFaceRect;
}

void FaceMergeInfo::SetMergeFaceRect(const FaceRect& _mergeFaceRect)
{
    m_mergeFaceRect = _mergeFaceRect;
    m_mergeFaceRectHasBeenSet = true;
}

bool FaceMergeInfo::MergeFaceRectHasBeenSet() const
{
    return m_mergeFaceRectHasBeenSet;
}

string FaceMergeInfo::GetTemplateFaceID() const
{
    return m_templateFaceID;
}

void FaceMergeInfo::SetTemplateFaceID(const string& _templateFaceID)
{
    m_templateFaceID = _templateFaceID;
    m_templateFaceIDHasBeenSet = true;
}

bool FaceMergeInfo::TemplateFaceIDHasBeenSet() const
{
    return m_templateFaceIDHasBeenSet;
}

