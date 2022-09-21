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

#include <tencentcloud/ivld/v20210903/model/ImageData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ImageData::ImageData() :
    m_ocrSetHasBeenSet(false),
    m_frameTagSetHasBeenSet(false),
    m_multiLevelPersonInfoSetHasBeenSet(false),
    m_tvLogoHasBeenSet(false),
    m_sourceLogoHasBeenSet(false)
{
}

CoreInternalOutcome ImageData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OcrSet") && !value["OcrSet"].IsNull())
    {
        if (!value["OcrSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageData.OcrSet` is not array type"));

        const rapidjson::Value &tmpValue = value["OcrSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageOcr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ocrSet.push_back(item);
        }
        m_ocrSetHasBeenSet = true;
    }

    if (value.HasMember("FrameTagSet") && !value["FrameTagSet"].IsNull())
    {
        if (!value["FrameTagSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.FrameTagSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagSet.Deserialize(value["FrameTagSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagSetHasBeenSet = true;
    }

    if (value.HasMember("MultiLevelPersonInfoSet") && !value["MultiLevelPersonInfoSet"].IsNull())
    {
        if (!value["MultiLevelPersonInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageData.MultiLevelPersonInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiLevelPersonInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiLevelPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiLevelPersonInfoSet.push_back(item);
        }
        m_multiLevelPersonInfoSetHasBeenSet = true;
    }

    if (value.HasMember("TvLogo") && !value["TvLogo"].IsNull())
    {
        if (!value["TvLogo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.TvLogo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tvLogo.Deserialize(value["TvLogo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tvLogoHasBeenSet = true;
    }

    if (value.HasMember("SourceLogo") && !value["SourceLogo"].IsNull())
    {
        if (!value["SourceLogo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.SourceLogo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceLogo.Deserialize(value["SourceLogo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceLogoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ocrSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ocrSet.begin(); itr != m_ocrSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_frameTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagSet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiLevelPersonInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiLevelPersonInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiLevelPersonInfoSet.begin(); itr != m_multiLevelPersonInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tvLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TvLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tvLogo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceLogo.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ImageOcr> ImageData::GetOcrSet() const
{
    return m_ocrSet;
}

void ImageData::SetOcrSet(const vector<ImageOcr>& _ocrSet)
{
    m_ocrSet = _ocrSet;
    m_ocrSetHasBeenSet = true;
}

bool ImageData::OcrSetHasBeenSet() const
{
    return m_ocrSetHasBeenSet;
}

MultiLevelTag ImageData::GetFrameTagSet() const
{
    return m_frameTagSet;
}

void ImageData::SetFrameTagSet(const MultiLevelTag& _frameTagSet)
{
    m_frameTagSet = _frameTagSet;
    m_frameTagSetHasBeenSet = true;
}

bool ImageData::FrameTagSetHasBeenSet() const
{
    return m_frameTagSetHasBeenSet;
}

vector<MultiLevelPersonInfo> ImageData::GetMultiLevelPersonInfoSet() const
{
    return m_multiLevelPersonInfoSet;
}

void ImageData::SetMultiLevelPersonInfoSet(const vector<MultiLevelPersonInfo>& _multiLevelPersonInfoSet)
{
    m_multiLevelPersonInfoSet = _multiLevelPersonInfoSet;
    m_multiLevelPersonInfoSetHasBeenSet = true;
}

bool ImageData::MultiLevelPersonInfoSetHasBeenSet() const
{
    return m_multiLevelPersonInfoSetHasBeenSet;
}

ImageLogo ImageData::GetTvLogo() const
{
    return m_tvLogo;
}

void ImageData::SetTvLogo(const ImageLogo& _tvLogo)
{
    m_tvLogo = _tvLogo;
    m_tvLogoHasBeenSet = true;
}

bool ImageData::TvLogoHasBeenSet() const
{
    return m_tvLogoHasBeenSet;
}

ImageLogo ImageData::GetSourceLogo() const
{
    return m_sourceLogo;
}

void ImageData::SetSourceLogo(const ImageLogo& _sourceLogo)
{
    m_sourceLogo = _sourceLogo;
    m_sourceLogoHasBeenSet = true;
}

bool ImageData::SourceLogoHasBeenSet() const
{
    return m_sourceLogoHasBeenSet;
}

