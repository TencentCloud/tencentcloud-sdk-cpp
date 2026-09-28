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

#include <tencentcloud/mps/v20190612/model/ImageComposeLayer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageComposeLayer::ImageComposeLayer() :
    m_zIndexHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_boundingBoxUnitTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImageComposeLayer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZIndex") && !value["ZIndex"].IsNull())
    {
        if (!value["ZIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeLayer.ZIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zIndex = value["ZIndex"].GetInt64();
        m_zIndexHasBeenSet = true;
    }

    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeLayer.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("BoundingBox") && !value["BoundingBox"].IsNull())
    {
        if (!value["BoundingBox"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageComposeLayer.BoundingBox` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundingBox"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundingBox.push_back((*itr).GetDouble());
        }
        m_boundingBoxHasBeenSet = true;
    }

    if (value.HasMember("BoundingBoxUnitType") && !value["BoundingBoxUnitType"].IsNull())
    {
        if (!value["BoundingBoxUnitType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageComposeLayer.BoundingBoxUnitType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_boundingBoxUnitType = value["BoundingBoxUnitType"].GetUint64();
        m_boundingBoxUnitTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageComposeLayer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zIndex, allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_boundingBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundingBox.begin(); itr != m_boundingBox.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_boundingBoxUnitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBoxUnitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundingBoxUnitType, allocator);
    }

}


int64_t ImageComposeLayer::GetZIndex() const
{
    return m_zIndex;
}

void ImageComposeLayer::SetZIndex(const int64_t& _zIndex)
{
    m_zIndex = _zIndex;
    m_zIndexHasBeenSet = true;
}

bool ImageComposeLayer::ZIndexHasBeenSet() const
{
    return m_zIndexHasBeenSet;
}

MediaInputInfo ImageComposeLayer::GetInputInfo() const
{
    return m_inputInfo;
}

void ImageComposeLayer::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ImageComposeLayer::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

vector<double> ImageComposeLayer::GetBoundingBox() const
{
    return m_boundingBox;
}

void ImageComposeLayer::SetBoundingBox(const vector<double>& _boundingBox)
{
    m_boundingBox = _boundingBox;
    m_boundingBoxHasBeenSet = true;
}

bool ImageComposeLayer::BoundingBoxHasBeenSet() const
{
    return m_boundingBoxHasBeenSet;
}

uint64_t ImageComposeLayer::GetBoundingBoxUnitType() const
{
    return m_boundingBoxUnitType;
}

void ImageComposeLayer::SetBoundingBoxUnitType(const uint64_t& _boundingBoxUnitType)
{
    m_boundingBoxUnitType = _boundingBoxUnitType;
    m_boundingBoxUnitTypeHasBeenSet = true;
}

bool ImageComposeLayer::BoundingBoxUnitTypeHasBeenSet() const
{
    return m_boundingBoxUnitTypeHasBeenSet;
}

