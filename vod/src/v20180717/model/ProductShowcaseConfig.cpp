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

#include <tencentcloud/vod/v20180717/model/ProductShowcaseConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProductShowcaseConfig::ProductShowcaseConfig() :
    m_cameraMovementHasBeenSet(false)
{
}

CoreInternalOutcome ProductShowcaseConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CameraMovement") && !value["CameraMovement"].IsNull())
    {
        if (!value["CameraMovement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductShowcaseConfig.CameraMovement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraMovement = string(value["CameraMovement"].GetString());
        m_cameraMovementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductShowcaseConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cameraMovementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraMovement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraMovement.c_str(), allocator).Move(), allocator);
    }

}


string ProductShowcaseConfig::GetCameraMovement() const
{
    return m_cameraMovement;
}

void ProductShowcaseConfig::SetCameraMovement(const string& _cameraMovement)
{
    m_cameraMovement = _cameraMovement;
    m_cameraMovementHasBeenSet = true;
}

bool ProductShowcaseConfig::CameraMovementHasBeenSet() const
{
    return m_cameraMovementHasBeenSet;
}

