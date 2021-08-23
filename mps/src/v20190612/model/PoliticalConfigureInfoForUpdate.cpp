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

#include <tencentcloud/mps/v20190612/model/PoliticalConfigureInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PoliticalConfigureInfoForUpdate::PoliticalConfigureInfoForUpdate() :
    m_imgReviewInfoHasBeenSet(false),
    m_asrReviewInfoHasBeenSet(false),
    m_ocrReviewInfoHasBeenSet(false)
{
}

CoreInternalOutcome PoliticalConfigureInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImgReviewInfo") && !value["ImgReviewInfo"].IsNull())
    {
        if (!value["ImgReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticalConfigureInfoForUpdate.ImgReviewInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imgReviewInfo.Deserialize(value["ImgReviewInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imgReviewInfoHasBeenSet = true;
    }

    if (value.HasMember("AsrReviewInfo") && !value["AsrReviewInfo"].IsNull())
    {
        if (!value["AsrReviewInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PoliticalConfigureInfoForUpdate.AsrReviewInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `PoliticalConfigureInfoForUpdate.OcrReviewInfo` is not object type").SetRequestId(requestId));
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

void PoliticalConfigureInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imgReviewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgReviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imgReviewInfo.ToJsonObject(value[key.c_str()], allocator);
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


PoliticalImgReviewTemplateInfoForUpdate PoliticalConfigureInfoForUpdate::GetImgReviewInfo() const
{
    return m_imgReviewInfo;
}

void PoliticalConfigureInfoForUpdate::SetImgReviewInfo(const PoliticalImgReviewTemplateInfoForUpdate& _imgReviewInfo)
{
    m_imgReviewInfo = _imgReviewInfo;
    m_imgReviewInfoHasBeenSet = true;
}

bool PoliticalConfigureInfoForUpdate::ImgReviewInfoHasBeenSet() const
{
    return m_imgReviewInfoHasBeenSet;
}

PoliticalAsrReviewTemplateInfoForUpdate PoliticalConfigureInfoForUpdate::GetAsrReviewInfo() const
{
    return m_asrReviewInfo;
}

void PoliticalConfigureInfoForUpdate::SetAsrReviewInfo(const PoliticalAsrReviewTemplateInfoForUpdate& _asrReviewInfo)
{
    m_asrReviewInfo = _asrReviewInfo;
    m_asrReviewInfoHasBeenSet = true;
}

bool PoliticalConfigureInfoForUpdate::AsrReviewInfoHasBeenSet() const
{
    return m_asrReviewInfoHasBeenSet;
}

PoliticalOcrReviewTemplateInfoForUpdate PoliticalConfigureInfoForUpdate::GetOcrReviewInfo() const
{
    return m_ocrReviewInfo;
}

void PoliticalConfigureInfoForUpdate::SetOcrReviewInfo(const PoliticalOcrReviewTemplateInfoForUpdate& _ocrReviewInfo)
{
    m_ocrReviewInfo = _ocrReviewInfo;
    m_ocrReviewInfoHasBeenSet = true;
}

bool PoliticalConfigureInfoForUpdate::OcrReviewInfoHasBeenSet() const
{
    return m_ocrReviewInfoHasBeenSet;
}

