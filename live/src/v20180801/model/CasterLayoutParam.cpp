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

#include <tencentcloud/live/v20180801/model/CasterLayoutParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterLayoutParam::CasterLayoutParam() :
    m_layerIdHasBeenSet(false),
    m_layerWidthHasBeenSet(false),
    m_layerHeightHasBeenSet(false),
    m_layerLocationXHasBeenSet(false),
    m_layerLocationYHasBeenSet(false),
    m_usePortraitSegmentHasBeenSet(false)
{
}

CoreInternalOutcome CasterLayoutParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.LayerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = value["LayerId"].GetInt64();
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("LayerWidth") && !value["LayerWidth"].IsNull())
    {
        if (!value["LayerWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.LayerWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_layerWidth = value["LayerWidth"].GetDouble();
        m_layerWidthHasBeenSet = true;
    }

    if (value.HasMember("LayerHeight") && !value["LayerHeight"].IsNull())
    {
        if (!value["LayerHeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.LayerHeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_layerHeight = value["LayerHeight"].GetDouble();
        m_layerHeightHasBeenSet = true;
    }

    if (value.HasMember("LayerLocationX") && !value["LayerLocationX"].IsNull())
    {
        if (!value["LayerLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.LayerLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_layerLocationX = value["LayerLocationX"].GetDouble();
        m_layerLocationXHasBeenSet = true;
    }

    if (value.HasMember("LayerLocationY") && !value["LayerLocationY"].IsNull())
    {
        if (!value["LayerLocationY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.LayerLocationY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_layerLocationY = value["LayerLocationY"].GetDouble();
        m_layerLocationYHasBeenSet = true;
    }

    if (value.HasMember("UsePortraitSegment") && !value["UsePortraitSegment"].IsNull())
    {
        if (!value["UsePortraitSegment"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutParam.UsePortraitSegment` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_usePortraitSegment = value["UsePortraitSegment"].GetBool();
        m_usePortraitSegmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterLayoutParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerId, allocator);
    }

    if (m_layerWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerWidth, allocator);
    }

    if (m_layerHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerHeight, allocator);
    }

    if (m_layerLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerLocationX, allocator);
    }

    if (m_layerLocationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerLocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerLocationY, allocator);
    }

    if (m_usePortraitSegmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePortraitSegment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usePortraitSegment, allocator);
    }

}


int64_t CasterLayoutParam::GetLayerId() const
{
    return m_layerId;
}

void CasterLayoutParam::SetLayerId(const int64_t& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool CasterLayoutParam::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

double CasterLayoutParam::GetLayerWidth() const
{
    return m_layerWidth;
}

void CasterLayoutParam::SetLayerWidth(const double& _layerWidth)
{
    m_layerWidth = _layerWidth;
    m_layerWidthHasBeenSet = true;
}

bool CasterLayoutParam::LayerWidthHasBeenSet() const
{
    return m_layerWidthHasBeenSet;
}

double CasterLayoutParam::GetLayerHeight() const
{
    return m_layerHeight;
}

void CasterLayoutParam::SetLayerHeight(const double& _layerHeight)
{
    m_layerHeight = _layerHeight;
    m_layerHeightHasBeenSet = true;
}

bool CasterLayoutParam::LayerHeightHasBeenSet() const
{
    return m_layerHeightHasBeenSet;
}

double CasterLayoutParam::GetLayerLocationX() const
{
    return m_layerLocationX;
}

void CasterLayoutParam::SetLayerLocationX(const double& _layerLocationX)
{
    m_layerLocationX = _layerLocationX;
    m_layerLocationXHasBeenSet = true;
}

bool CasterLayoutParam::LayerLocationXHasBeenSet() const
{
    return m_layerLocationXHasBeenSet;
}

double CasterLayoutParam::GetLayerLocationY() const
{
    return m_layerLocationY;
}

void CasterLayoutParam::SetLayerLocationY(const double& _layerLocationY)
{
    m_layerLocationY = _layerLocationY;
    m_layerLocationYHasBeenSet = true;
}

bool CasterLayoutParam::LayerLocationYHasBeenSet() const
{
    return m_layerLocationYHasBeenSet;
}

bool CasterLayoutParam::GetUsePortraitSegment() const
{
    return m_usePortraitSegment;
}

void CasterLayoutParam::SetUsePortraitSegment(const bool& _usePortraitSegment)
{
    m_usePortraitSegment = _usePortraitSegment;
    m_usePortraitSegmentHasBeenSet = true;
}

bool CasterLayoutParam::UsePortraitSegmentHasBeenSet() const
{
    return m_usePortraitSegmentHasBeenSet;
}

