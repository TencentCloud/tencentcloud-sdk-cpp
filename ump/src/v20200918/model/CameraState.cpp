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

#include <tencentcloud/ump/v20200918/model/CameraState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CameraState::CameraState() :
    m_cameraIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome CameraState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CameraId") && !value["CameraId"].IsNull())
    {
        if (!value["CameraId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraState.CameraId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = value["CameraId"].GetUint64();
        m_cameraIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraState.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


uint64_t CameraState::GetCameraId() const
{
    return m_cameraId;
}

void CameraState::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool CameraState::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

uint64_t CameraState::GetState() const
{
    return m_state;
}

void CameraState::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CameraState::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

