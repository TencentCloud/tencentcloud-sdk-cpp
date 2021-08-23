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

#include <tencentcloud/vod/v20180717/model/ImageTransform.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageTransform::ImageTransform() :
    m_typeHasBeenSet(false),
    m_rotateAngleHasBeenSet(false),
    m_flipHasBeenSet(false)
{
}

CoreInternalOutcome ImageTransform::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTransform.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RotateAngle") && !value["RotateAngle"].IsNull())
    {
        if (!value["RotateAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTransform.RotateAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotateAngle = value["RotateAngle"].GetDouble();
        m_rotateAngleHasBeenSet = true;
    }

    if (value.HasMember("Flip") && !value["Flip"].IsNull())
    {
        if (!value["Flip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTransform.Flip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flip = string(value["Flip"].GetString());
        m_flipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTransform::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotateAngle, allocator);
    }

    if (m_flipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flip.c_str(), allocator).Move(), allocator);
    }

}


string ImageTransform::GetType() const
{
    return m_type;
}

void ImageTransform::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageTransform::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double ImageTransform::GetRotateAngle() const
{
    return m_rotateAngle;
}

void ImageTransform::SetRotateAngle(const double& _rotateAngle)
{
    m_rotateAngle = _rotateAngle;
    m_rotateAngleHasBeenSet = true;
}

bool ImageTransform::RotateAngleHasBeenSet() const
{
    return m_rotateAngleHasBeenSet;
}

string ImageTransform::GetFlip() const
{
    return m_flip;
}

void ImageTransform::SetFlip(const string& _flip)
{
    m_flip = _flip;
    m_flipHasBeenSet = true;
}

bool ImageTransform::FlipHasBeenSet() const
{
    return m_flipHasBeenSet;
}

