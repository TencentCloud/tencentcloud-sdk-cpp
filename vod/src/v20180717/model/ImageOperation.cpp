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

#include <tencentcloud/vod/v20180717/model/ImageOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageOperation::ImageOperation() :
    m_typeHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_centerCutHasBeenSet(false),
    m_blurHasBeenSet(false)
{
}

CoreInternalOutcome ImageOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOperation.Scale` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scale.Deserialize(value["Scale"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("CenterCut") && !value["CenterCut"].IsNull())
    {
        if (!value["CenterCut"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOperation.CenterCut` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_centerCut.Deserialize(value["CenterCut"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_centerCutHasBeenSet = true;
    }

    if (value.HasMember("Blur") && !value["Blur"].IsNull())
    {
        if (!value["Blur"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOperation.Blur` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blur.Deserialize(value["Blur"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blurHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scale.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_centerCutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CenterCut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_centerCut.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blur.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ImageOperation::GetType() const
{
    return m_type;
}

void ImageOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ImageScale ImageOperation::GetScale() const
{
    return m_scale;
}

void ImageOperation::SetScale(const ImageScale& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool ImageOperation::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

ImageCenterCut ImageOperation::GetCenterCut() const
{
    return m_centerCut;
}

void ImageOperation::SetCenterCut(const ImageCenterCut& _centerCut)
{
    m_centerCut = _centerCut;
    m_centerCutHasBeenSet = true;
}

bool ImageOperation::CenterCutHasBeenSet() const
{
    return m_centerCutHasBeenSet;
}

ImageBlur ImageOperation::GetBlur() const
{
    return m_blur;
}

void ImageOperation::SetBlur(const ImageBlur& _blur)
{
    m_blur = _blur;
    m_blurHasBeenSet = true;
}

bool ImageOperation::BlurHasBeenSet() const
{
    return m_blurHasBeenSet;
}

