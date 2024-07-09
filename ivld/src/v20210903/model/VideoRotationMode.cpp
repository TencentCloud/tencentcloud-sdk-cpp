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

#include <tencentcloud/ivld/v20210903/model/VideoRotationMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

VideoRotationMode::VideoRotationMode() :
    m_activeVideoRotationHasBeenSet(false)
{
}

CoreInternalOutcome VideoRotationMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActiveVideoRotation") && !value["ActiveVideoRotation"].IsNull())
    {
        if (!value["ActiveVideoRotation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRotationMode.ActiveVideoRotation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_activeVideoRotation = value["ActiveVideoRotation"].GetBool();
        m_activeVideoRotationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoRotationMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeVideoRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveVideoRotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeVideoRotation, allocator);
    }

}


bool VideoRotationMode::GetActiveVideoRotation() const
{
    return m_activeVideoRotation;
}

void VideoRotationMode::SetActiveVideoRotation(const bool& _activeVideoRotation)
{
    m_activeVideoRotation = _activeVideoRotation;
    m_activeVideoRotationHasBeenSet = true;
}

bool VideoRotationMode::ActiveVideoRotationHasBeenSet() const
{
    return m_activeVideoRotationHasBeenSet;
}

