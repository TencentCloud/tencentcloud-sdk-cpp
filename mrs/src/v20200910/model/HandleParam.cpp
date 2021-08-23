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

#include <tencentcloud/mrs/v20200910/model/HandleParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

HandleParam::HandleParam() :
    m_ocrEngineTypeHasBeenSet(false),
    m_isReturnTextHasBeenSet(false),
    m_rotateTheAngleHasBeenSet(false),
    m_autoFitDirectionHasBeenSet(false),
    m_autoOptimizeCoordinateHasBeenSet(false),
    m_isScaleHasBeenSet(false),
    m_imageOriginalSizeHasBeenSet(false),
    m_scaleTargetSizeHasBeenSet(false)
{
}

CoreInternalOutcome HandleParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OcrEngineType") && !value["OcrEngineType"].IsNull())
    {
        if (!value["OcrEngineType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.OcrEngineType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ocrEngineType = value["OcrEngineType"].GetInt64();
        m_ocrEngineTypeHasBeenSet = true;
    }

    if (value.HasMember("IsReturnText") && !value["IsReturnText"].IsNull())
    {
        if (!value["IsReturnText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.IsReturnText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReturnText = value["IsReturnText"].GetBool();
        m_isReturnTextHasBeenSet = true;
    }

    if (value.HasMember("RotateTheAngle") && !value["RotateTheAngle"].IsNull())
    {
        if (!value["RotateTheAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.RotateTheAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotateTheAngle = value["RotateTheAngle"].GetDouble();
        m_rotateTheAngleHasBeenSet = true;
    }

    if (value.HasMember("AutoFitDirection") && !value["AutoFitDirection"].IsNull())
    {
        if (!value["AutoFitDirection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.AutoFitDirection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoFitDirection = value["AutoFitDirection"].GetBool();
        m_autoFitDirectionHasBeenSet = true;
    }

    if (value.HasMember("AutoOptimizeCoordinate") && !value["AutoOptimizeCoordinate"].IsNull())
    {
        if (!value["AutoOptimizeCoordinate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.AutoOptimizeCoordinate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoOptimizeCoordinate = value["AutoOptimizeCoordinate"].GetBool();
        m_autoOptimizeCoordinateHasBeenSet = true;
    }

    if (value.HasMember("IsScale") && !value["IsScale"].IsNull())
    {
        if (!value["IsScale"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.IsScale` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isScale = value["IsScale"].GetBool();
        m_isScaleHasBeenSet = true;
    }

    if (value.HasMember("ImageOriginalSize") && !value["ImageOriginalSize"].IsNull())
    {
        if (!value["ImageOriginalSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.ImageOriginalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageOriginalSize = value["ImageOriginalSize"].GetUint64();
        m_imageOriginalSizeHasBeenSet = true;
    }

    if (value.HasMember("ScaleTargetSize") && !value["ScaleTargetSize"].IsNull())
    {
        if (!value["ScaleTargetSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HandleParam.ScaleTargetSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleTargetSize = value["ScaleTargetSize"].GetUint64();
        m_scaleTargetSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HandleParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ocrEngineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrEngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ocrEngineType, allocator);
    }

    if (m_isReturnTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReturnText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReturnText, allocator);
    }

    if (m_rotateTheAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateTheAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotateTheAngle, allocator);
    }

    if (m_autoFitDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoFitDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoFitDirection, allocator);
    }

    if (m_autoOptimizeCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoOptimizeCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoOptimizeCoordinate, allocator);
    }

    if (m_isScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScale, allocator);
    }

    if (m_imageOriginalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOriginalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageOriginalSize, allocator);
    }

    if (m_scaleTargetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleTargetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleTargetSize, allocator);
    }

}


int64_t HandleParam::GetOcrEngineType() const
{
    return m_ocrEngineType;
}

void HandleParam::SetOcrEngineType(const int64_t& _ocrEngineType)
{
    m_ocrEngineType = _ocrEngineType;
    m_ocrEngineTypeHasBeenSet = true;
}

bool HandleParam::OcrEngineTypeHasBeenSet() const
{
    return m_ocrEngineTypeHasBeenSet;
}

bool HandleParam::GetIsReturnText() const
{
    return m_isReturnText;
}

void HandleParam::SetIsReturnText(const bool& _isReturnText)
{
    m_isReturnText = _isReturnText;
    m_isReturnTextHasBeenSet = true;
}

bool HandleParam::IsReturnTextHasBeenSet() const
{
    return m_isReturnTextHasBeenSet;
}

double HandleParam::GetRotateTheAngle() const
{
    return m_rotateTheAngle;
}

void HandleParam::SetRotateTheAngle(const double& _rotateTheAngle)
{
    m_rotateTheAngle = _rotateTheAngle;
    m_rotateTheAngleHasBeenSet = true;
}

bool HandleParam::RotateTheAngleHasBeenSet() const
{
    return m_rotateTheAngleHasBeenSet;
}

bool HandleParam::GetAutoFitDirection() const
{
    return m_autoFitDirection;
}

void HandleParam::SetAutoFitDirection(const bool& _autoFitDirection)
{
    m_autoFitDirection = _autoFitDirection;
    m_autoFitDirectionHasBeenSet = true;
}

bool HandleParam::AutoFitDirectionHasBeenSet() const
{
    return m_autoFitDirectionHasBeenSet;
}

bool HandleParam::GetAutoOptimizeCoordinate() const
{
    return m_autoOptimizeCoordinate;
}

void HandleParam::SetAutoOptimizeCoordinate(const bool& _autoOptimizeCoordinate)
{
    m_autoOptimizeCoordinate = _autoOptimizeCoordinate;
    m_autoOptimizeCoordinateHasBeenSet = true;
}

bool HandleParam::AutoOptimizeCoordinateHasBeenSet() const
{
    return m_autoOptimizeCoordinateHasBeenSet;
}

bool HandleParam::GetIsScale() const
{
    return m_isScale;
}

void HandleParam::SetIsScale(const bool& _isScale)
{
    m_isScale = _isScale;
    m_isScaleHasBeenSet = true;
}

bool HandleParam::IsScaleHasBeenSet() const
{
    return m_isScaleHasBeenSet;
}

uint64_t HandleParam::GetImageOriginalSize() const
{
    return m_imageOriginalSize;
}

void HandleParam::SetImageOriginalSize(const uint64_t& _imageOriginalSize)
{
    m_imageOriginalSize = _imageOriginalSize;
    m_imageOriginalSizeHasBeenSet = true;
}

bool HandleParam::ImageOriginalSizeHasBeenSet() const
{
    return m_imageOriginalSizeHasBeenSet;
}

uint64_t HandleParam::GetScaleTargetSize() const
{
    return m_scaleTargetSize;
}

void HandleParam::SetScaleTargetSize(const uint64_t& _scaleTargetSize)
{
    m_scaleTargetSize = _scaleTargetSize;
    m_scaleTargetSizeHasBeenSet = true;
}

bool HandleParam::ScaleTargetSizeHasBeenSet() const
{
    return m_scaleTargetSizeHasBeenSet;
}

