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

#include <tencentcloud/vod/v20180717/model/UserDefineConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

UserDefineConfigureInfo::UserDefineConfigureInfo() :
    m_faceReviewInfoHasBeenSet(false),
    m_asrReviewInfoHasBeenSet(false),
    m_ocrReviewInfoHasBeenSet(false)
{
}

CoreInternalOutcome UserDefineConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceReviewInfo") && !value["FaceReviewInfo"].IsNull())
    {
        if (!value["FaceReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineConfigureInfo.FaceReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceReviewInfo.Deserialize(value["FaceReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceReviewInfoHasBeenSet = true;
    }

    if (value.HasMember("AsrReviewInfo") && !value["AsrReviewInfo"].IsNull())
    {
        if (!value["AsrReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineConfigureInfo.AsrReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrReviewInfo.Deserialize(value["AsrReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrReviewInfoHasBeenSet = true;
    }

    if (value.HasMember("OcrReviewInfo") && !value["OcrReviewInfo"].IsNull())
    {
        if (!value["OcrReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefineConfigureInfo.OcrReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocrReviewInfo.Deserialize(value["OcrReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocrReviewInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDefineConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrReviewInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


UserDefineFaceReviewTemplateInfo UserDefineConfigureInfo::GetFaceReviewInfo() const
{
    return m_faceReviewInfo;
}

void UserDefineConfigureInfo::SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfo& _faceReviewInfo)
{
    m_faceReviewInfo = _faceReviewInfo;
    m_faceReviewInfoHasBeenSet = true;
}

bool UserDefineConfigureInfo::FaceReviewInfoHasBeenSet() const
{
    return m_faceReviewInfoHasBeenSet;
}

UserDefineAsrTextReviewTemplateInfo UserDefineConfigureInfo::GetAsrReviewInfo() const
{
    return m_asrReviewInfo;
}

void UserDefineConfigureInfo::SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfo& _asrReviewInfo)
{
    m_asrReviewInfo = _asrReviewInfo;
    m_asrReviewInfoHasBeenSet = true;
}

bool UserDefineConfigureInfo::AsrReviewInfoHasBeenSet() const
{
    return m_asrReviewInfoHasBeenSet;
}

UserDefineOcrTextReviewTemplateInfo UserDefineConfigureInfo::GetOcrReviewInfo() const
{
    return m_ocrReviewInfo;
}

void UserDefineConfigureInfo::SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfo& _ocrReviewInfo)
{
    m_ocrReviewInfo = _ocrReviewInfo;
    m_ocrReviewInfoHasBeenSet = true;
}

bool UserDefineConfigureInfo::OcrReviewInfoHasBeenSet() const
{
    return m_ocrReviewInfoHasBeenSet;
}

