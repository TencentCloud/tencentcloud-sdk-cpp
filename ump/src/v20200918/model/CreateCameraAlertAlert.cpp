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

#include <tencentcloud/ump/v20200918/model/CreateCameraAlertAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CreateCameraAlertAlert::CreateCameraAlertAlert() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_moveAlertHasBeenSet(false),
    m_coverAlertHasBeenSet(false)
{
}

CoreInternalOutcome CreateCameraAlertAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupCode") && !value["GroupCode"].IsNull())
    {
        if (!value["GroupCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.GroupCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupCode = string(value["GroupCode"].GetString());
        m_groupCodeHasBeenSet = true;
    }

    if (value.HasMember("MallId") && !value["MallId"].IsNull())
    {
        if (!value["MallId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.MallId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mallId = value["MallId"].GetUint64();
        m_mallIdHasBeenSet = true;
    }

    if (value.HasMember("CameraId") && !value["CameraId"].IsNull())
    {
        if (!value["CameraId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.CameraId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = value["CameraId"].GetUint64();
        m_cameraIdHasBeenSet = true;
    }

    if (value.HasMember("CaptureTime") && !value["CaptureTime"].IsNull())
    {
        if (!value["CaptureTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.CaptureTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captureTime = value["CaptureTime"].GetInt64();
        m_captureTimeHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("MoveAlert") && !value["MoveAlert"].IsNull())
    {
        if (!value["MoveAlert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.MoveAlert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_moveAlert.Deserialize(value["MoveAlert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moveAlertHasBeenSet = true;
    }

    if (value.HasMember("CoverAlert") && !value["CoverAlert"].IsNull())
    {
        if (!value["CoverAlert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCameraAlertAlert.CoverAlert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverAlert.Deserialize(value["CoverAlert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverAlertHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateCameraAlertAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallId, allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_captureTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptureTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captureTime, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_moveAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoveAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_moveAlert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverAlert.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CreateCameraAlertAlert::GetGroupCode() const
{
    return m_groupCode;
}

void CreateCameraAlertAlert::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool CreateCameraAlertAlert::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t CreateCameraAlertAlert::GetMallId() const
{
    return m_mallId;
}

void CreateCameraAlertAlert::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool CreateCameraAlertAlert::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

uint64_t CreateCameraAlertAlert::GetCameraId() const
{
    return m_cameraId;
}

void CreateCameraAlertAlert::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool CreateCameraAlertAlert::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

int64_t CreateCameraAlertAlert::GetCaptureTime() const
{
    return m_captureTime;
}

void CreateCameraAlertAlert::SetCaptureTime(const int64_t& _captureTime)
{
    m_captureTime = _captureTime;
    m_captureTimeHasBeenSet = true;
}

bool CreateCameraAlertAlert::CaptureTimeHasBeenSet() const
{
    return m_captureTimeHasBeenSet;
}

string CreateCameraAlertAlert::GetImage() const
{
    return m_image;
}

void CreateCameraAlertAlert::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateCameraAlertAlert::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

CreateCameraAlertsMoveAlert CreateCameraAlertAlert::GetMoveAlert() const
{
    return m_moveAlert;
}

void CreateCameraAlertAlert::SetMoveAlert(const CreateCameraAlertsMoveAlert& _moveAlert)
{
    m_moveAlert = _moveAlert;
    m_moveAlertHasBeenSet = true;
}

bool CreateCameraAlertAlert::MoveAlertHasBeenSet() const
{
    return m_moveAlertHasBeenSet;
}

CreateCameraAlertsCoverAlert CreateCameraAlertAlert::GetCoverAlert() const
{
    return m_coverAlert;
}

void CreateCameraAlertAlert::SetCoverAlert(const CreateCameraAlertsCoverAlert& _coverAlert)
{
    m_coverAlert = _coverAlert;
    m_coverAlertHasBeenSet = true;
}

bool CreateCameraAlertAlert::CoverAlertHasBeenSet() const
{
    return m_coverAlertHasBeenSet;
}

