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

#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsCoverAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CreateCameraAlertsCoverAlert::CreateCameraAlertsCoverAlert() :
    m_coverHasBeenSet(false),
    m_coverConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome CreateCameraAlertsCoverAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cover") && !value["Cover"].IsNull())
    {
        if (!value["Cover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertsCoverAlert.Cover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cover = value["Cover"].GetBool();
        m_coverHasBeenSet = true;
    }

    if (value.HasMember("CoverConfidence") && !value["CoverConfidence"].IsNull())
    {
        if (!value["CoverConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertsCoverAlert.CoverConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_coverConfidence = value["CoverConfidence"].GetDouble();
        m_coverConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateCameraAlertsCoverAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cover, allocator);
    }

    if (m_coverConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coverConfidence, allocator);
    }

}


bool CreateCameraAlertsCoverAlert::GetCover() const
{
    return m_cover;
}

void CreateCameraAlertsCoverAlert::SetCover(const bool& _cover)
{
    m_cover = _cover;
    m_coverHasBeenSet = true;
}

bool CreateCameraAlertsCoverAlert::CoverHasBeenSet() const
{
    return m_coverHasBeenSet;
}

double CreateCameraAlertsCoverAlert::GetCoverConfidence() const
{
    return m_coverConfidence;
}

void CreateCameraAlertsCoverAlert::SetCoverConfidence(const double& _coverConfidence)
{
    m_coverConfidence = _coverConfidence;
    m_coverConfidenceHasBeenSet = true;
}

bool CreateCameraAlertsCoverAlert::CoverConfidenceHasBeenSet() const
{
    return m_coverConfidenceHasBeenSet;
}

