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

#include <tencentcloud/vod/v20180717/model/ImageBlur.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageBlur::ImageBlur() :
    m_typeHasBeenSet(false),
    m_radiusHasBeenSet(false),
    m_sigmaHasBeenSet(false)
{
}

CoreInternalOutcome ImageBlur::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageBlur.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Radius") && !value["Radius"].IsNull())
    {
        if (!value["Radius"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageBlur.Radius` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_radius = value["Radius"].GetInt64();
        m_radiusHasBeenSet = true;
    }

    if (value.HasMember("Sigma") && !value["Sigma"].IsNull())
    {
        if (!value["Sigma"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageBlur.Sigma` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sigma = value["Sigma"].GetInt64();
        m_sigmaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageBlur::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_radiusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Radius";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_radius, allocator);
    }

    if (m_sigmaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sigma";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sigma, allocator);
    }

}


string ImageBlur::GetType() const
{
    return m_type;
}

void ImageBlur::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageBlur::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ImageBlur::GetRadius() const
{
    return m_radius;
}

void ImageBlur::SetRadius(const int64_t& _radius)
{
    m_radius = _radius;
    m_radiusHasBeenSet = true;
}

bool ImageBlur::RadiusHasBeenSet() const
{
    return m_radiusHasBeenSet;
}

int64_t ImageBlur::GetSigma() const
{
    return m_sigma;
}

void ImageBlur::SetSigma(const int64_t& _sigma)
{
    m_sigma = _sigma;
    m_sigmaHasBeenSet = true;
}

bool ImageBlur::SigmaHasBeenSet() const
{
    return m_sigmaHasBeenSet;
}

