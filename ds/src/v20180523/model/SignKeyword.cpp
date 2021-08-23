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

#include <tencentcloud/ds/v20180523/model/SignKeyword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

SignKeyword::SignKeyword() :
    m_keywordHasBeenSet(false),
    m_offsetCoordXHasBeenSet(false),
    m_offsetCoordYHasBeenSet(false),
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false)
{
}

CoreInternalOutcome SignKeyword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignKeyword.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("OffsetCoordX") && !value["OffsetCoordX"].IsNull())
    {
        if (!value["OffsetCoordX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignKeyword.OffsetCoordX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetCoordX = string(value["OffsetCoordX"].GetString());
        m_offsetCoordXHasBeenSet = true;
    }

    if (value.HasMember("OffsetCoordY") && !value["OffsetCoordY"].IsNull())
    {
        if (!value["OffsetCoordY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignKeyword.OffsetCoordY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetCoordY = string(value["OffsetCoordY"].GetString());
        m_offsetCoordYHasBeenSet = true;
    }

    if (value.HasMember("ImageWidth") && !value["ImageWidth"].IsNull())
    {
        if (!value["ImageWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignKeyword.ImageWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = string(value["ImageWidth"].GetString());
        m_imageWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageHeight") && !value["ImageHeight"].IsNull())
    {
        if (!value["ImageHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignKeyword.ImageHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = string(value["ImageHeight"].GetString());
        m_imageHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignKeyword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetCoordXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetCoordX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetCoordX.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetCoordYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetCoordY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetCoordY.c_str(), allocator).Move(), allocator);
    }

    if (m_imageWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageHeight.c_str(), allocator).Move(), allocator);
    }

}


string SignKeyword::GetKeyword() const
{
    return m_keyword;
}

void SignKeyword::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool SignKeyword::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string SignKeyword::GetOffsetCoordX() const
{
    return m_offsetCoordX;
}

void SignKeyword::SetOffsetCoordX(const string& _offsetCoordX)
{
    m_offsetCoordX = _offsetCoordX;
    m_offsetCoordXHasBeenSet = true;
}

bool SignKeyword::OffsetCoordXHasBeenSet() const
{
    return m_offsetCoordXHasBeenSet;
}

string SignKeyword::GetOffsetCoordY() const
{
    return m_offsetCoordY;
}

void SignKeyword::SetOffsetCoordY(const string& _offsetCoordY)
{
    m_offsetCoordY = _offsetCoordY;
    m_offsetCoordYHasBeenSet = true;
}

bool SignKeyword::OffsetCoordYHasBeenSet() const
{
    return m_offsetCoordYHasBeenSet;
}

string SignKeyword::GetImageWidth() const
{
    return m_imageWidth;
}

void SignKeyword::SetImageWidth(const string& _imageWidth)
{
    m_imageWidth = _imageWidth;
    m_imageWidthHasBeenSet = true;
}

bool SignKeyword::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

string SignKeyword::GetImageHeight() const
{
    return m_imageHeight;
}

void SignKeyword::SetImageHeight(const string& _imageHeight)
{
    m_imageHeight = _imageHeight;
    m_imageHeightHasBeenSet = true;
}

bool SignKeyword::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

