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

#include <tencentcloud/iai/v20200303/model/FaceDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

FaceDetailInfo::FaceDetailInfo() :
    m_faceRectHasBeenSet(false),
    m_faceDetailAttributesInfoHasBeenSet(false)
{
}

CoreInternalOutcome FaceDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailInfo.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (value.HasMember("FaceDetailAttributesInfo") && !value["FaceDetailAttributesInfo"].IsNull())
    {
        if (!value["FaceDetailAttributesInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailInfo.FaceDetailAttributesInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceDetailAttributesInfo.Deserialize(value["FaceDetailAttributesInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceDetailAttributesInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceDetailAttributesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceDetailAttributesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceDetailAttributesInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


FaceRect FaceDetailInfo::GetFaceRect() const
{
    return m_faceRect;
}

void FaceDetailInfo::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool FaceDetailInfo::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

FaceDetailAttributesInfo FaceDetailInfo::GetFaceDetailAttributesInfo() const
{
    return m_faceDetailAttributesInfo;
}

void FaceDetailInfo::SetFaceDetailAttributesInfo(const FaceDetailAttributesInfo& _faceDetailAttributesInfo)
{
    m_faceDetailAttributesInfo = _faceDetailAttributesInfo;
    m_faceDetailAttributesInfoHasBeenSet = true;
}

bool FaceDetailInfo::FaceDetailAttributesInfoHasBeenSet() const
{
    return m_faceDetailAttributesInfoHasBeenSet;
}

