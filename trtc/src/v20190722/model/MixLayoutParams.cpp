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

#include <tencentcloud/trtc/v20190722/model/MixLayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

MixLayoutParams::MixLayoutParams() :
    m_mixLayoutModeHasBeenSet(false),
    m_mixLayoutListHasBeenSet(false),
    m_backGroundColorHasBeenSet(false),
    m_maxResolutionUserIdHasBeenSet(false),
    m_mediaIdHasBeenSet(false),
    m_backgroundImageUrlHasBeenSet(false),
    m_placeHolderModeHasBeenSet(false),
    m_backgroundImageRenderModeHasBeenSet(false),
    m_defaultSubBackgroundImageHasBeenSet(false),
    m_waterMarkListHasBeenSet(false),
    m_renderModeHasBeenSet(false),
    m_maxResolutionUserAlignHasBeenSet(false)
{
}

CoreInternalOutcome MixLayoutParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MixLayoutMode") && !value["MixLayoutMode"].IsNull())
    {
        if (!value["MixLayoutMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.MixLayoutMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mixLayoutMode = value["MixLayoutMode"].GetUint64();
        m_mixLayoutModeHasBeenSet = true;
    }

    if (value.HasMember("MixLayoutList") && !value["MixLayoutList"].IsNull())
    {
        if (!value["MixLayoutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.MixLayoutList` is not array type"));

        const rapidjson::Value &tmpValue = value["MixLayoutList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MixLayout item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mixLayoutList.push_back(item);
        }
        m_mixLayoutListHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColor") && !value["BackGroundColor"].IsNull())
    {
        if (!value["BackGroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.BackGroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColor = string(value["BackGroundColor"].GetString());
        m_backGroundColorHasBeenSet = true;
    }

    if (value.HasMember("MaxResolutionUserId") && !value["MaxResolutionUserId"].IsNull())
    {
        if (!value["MaxResolutionUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.MaxResolutionUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxResolutionUserId = string(value["MaxResolutionUserId"].GetString());
        m_maxResolutionUserIdHasBeenSet = true;
    }

    if (value.HasMember("MediaId") && !value["MediaId"].IsNull())
    {
        if (!value["MediaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.MediaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaId = value["MediaId"].GetUint64();
        m_mediaIdHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImageUrl") && !value["BackgroundImageUrl"].IsNull())
    {
        if (!value["BackgroundImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.BackgroundImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImageUrl = string(value["BackgroundImageUrl"].GetString());
        m_backgroundImageUrlHasBeenSet = true;
    }

    if (value.HasMember("PlaceHolderMode") && !value["PlaceHolderMode"].IsNull())
    {
        if (!value["PlaceHolderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.PlaceHolderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_placeHolderMode = value["PlaceHolderMode"].GetUint64();
        m_placeHolderModeHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImageRenderMode") && !value["BackgroundImageRenderMode"].IsNull())
    {
        if (!value["BackgroundImageRenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.BackgroundImageRenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImageRenderMode = value["BackgroundImageRenderMode"].GetUint64();
        m_backgroundImageRenderModeHasBeenSet = true;
    }

    if (value.HasMember("DefaultSubBackgroundImage") && !value["DefaultSubBackgroundImage"].IsNull())
    {
        if (!value["DefaultSubBackgroundImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.DefaultSubBackgroundImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSubBackgroundImage = string(value["DefaultSubBackgroundImage"].GetString());
        m_defaultSubBackgroundImageHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkList") && !value["WaterMarkList"].IsNull())
    {
        if (!value["WaterMarkList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.WaterMarkList` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterMarkList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaterMark item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waterMarkList.push_back(item);
        }
        m_waterMarkListHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.RenderMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetUint64();
        m_renderModeHasBeenSet = true;
    }

    if (value.HasMember("MaxResolutionUserAlign") && !value["MaxResolutionUserAlign"].IsNull())
    {
        if (!value["MaxResolutionUserAlign"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixLayoutParams.MaxResolutionUserAlign` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResolutionUserAlign = value["MaxResolutionUserAlign"].GetUint64();
        m_maxResolutionUserAlignHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixLayoutParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mixLayoutModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixLayoutMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mixLayoutMode, allocator);
    }

    if (m_mixLayoutListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixLayoutList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mixLayoutList.begin(); itr != m_mixLayoutList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backGroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackGroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backGroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResolutionUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResolutionUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxResolutionUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaId, allocator);
    }

    if (m_backgroundImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_placeHolderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceHolderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_placeHolderMode, allocator);
    }

    if (m_backgroundImageRenderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImageRenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundImageRenderMode, allocator);
    }

    if (m_defaultSubBackgroundImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSubBackgroundImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultSubBackgroundImage.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waterMarkList.begin(); itr != m_waterMarkList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

    if (m_maxResolutionUserAlignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResolutionUserAlign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResolutionUserAlign, allocator);
    }

}


uint64_t MixLayoutParams::GetMixLayoutMode() const
{
    return m_mixLayoutMode;
}

void MixLayoutParams::SetMixLayoutMode(const uint64_t& _mixLayoutMode)
{
    m_mixLayoutMode = _mixLayoutMode;
    m_mixLayoutModeHasBeenSet = true;
}

bool MixLayoutParams::MixLayoutModeHasBeenSet() const
{
    return m_mixLayoutModeHasBeenSet;
}

vector<MixLayout> MixLayoutParams::GetMixLayoutList() const
{
    return m_mixLayoutList;
}

void MixLayoutParams::SetMixLayoutList(const vector<MixLayout>& _mixLayoutList)
{
    m_mixLayoutList = _mixLayoutList;
    m_mixLayoutListHasBeenSet = true;
}

bool MixLayoutParams::MixLayoutListHasBeenSet() const
{
    return m_mixLayoutListHasBeenSet;
}

string MixLayoutParams::GetBackGroundColor() const
{
    return m_backGroundColor;
}

void MixLayoutParams::SetBackGroundColor(const string& _backGroundColor)
{
    m_backGroundColor = _backGroundColor;
    m_backGroundColorHasBeenSet = true;
}

bool MixLayoutParams::BackGroundColorHasBeenSet() const
{
    return m_backGroundColorHasBeenSet;
}

string MixLayoutParams::GetMaxResolutionUserId() const
{
    return m_maxResolutionUserId;
}

void MixLayoutParams::SetMaxResolutionUserId(const string& _maxResolutionUserId)
{
    m_maxResolutionUserId = _maxResolutionUserId;
    m_maxResolutionUserIdHasBeenSet = true;
}

bool MixLayoutParams::MaxResolutionUserIdHasBeenSet() const
{
    return m_maxResolutionUserIdHasBeenSet;
}

uint64_t MixLayoutParams::GetMediaId() const
{
    return m_mediaId;
}

void MixLayoutParams::SetMediaId(const uint64_t& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool MixLayoutParams::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

string MixLayoutParams::GetBackgroundImageUrl() const
{
    return m_backgroundImageUrl;
}

void MixLayoutParams::SetBackgroundImageUrl(const string& _backgroundImageUrl)
{
    m_backgroundImageUrl = _backgroundImageUrl;
    m_backgroundImageUrlHasBeenSet = true;
}

bool MixLayoutParams::BackgroundImageUrlHasBeenSet() const
{
    return m_backgroundImageUrlHasBeenSet;
}

uint64_t MixLayoutParams::GetPlaceHolderMode() const
{
    return m_placeHolderMode;
}

void MixLayoutParams::SetPlaceHolderMode(const uint64_t& _placeHolderMode)
{
    m_placeHolderMode = _placeHolderMode;
    m_placeHolderModeHasBeenSet = true;
}

bool MixLayoutParams::PlaceHolderModeHasBeenSet() const
{
    return m_placeHolderModeHasBeenSet;
}

uint64_t MixLayoutParams::GetBackgroundImageRenderMode() const
{
    return m_backgroundImageRenderMode;
}

void MixLayoutParams::SetBackgroundImageRenderMode(const uint64_t& _backgroundImageRenderMode)
{
    m_backgroundImageRenderMode = _backgroundImageRenderMode;
    m_backgroundImageRenderModeHasBeenSet = true;
}

bool MixLayoutParams::BackgroundImageRenderModeHasBeenSet() const
{
    return m_backgroundImageRenderModeHasBeenSet;
}

string MixLayoutParams::GetDefaultSubBackgroundImage() const
{
    return m_defaultSubBackgroundImage;
}

void MixLayoutParams::SetDefaultSubBackgroundImage(const string& _defaultSubBackgroundImage)
{
    m_defaultSubBackgroundImage = _defaultSubBackgroundImage;
    m_defaultSubBackgroundImageHasBeenSet = true;
}

bool MixLayoutParams::DefaultSubBackgroundImageHasBeenSet() const
{
    return m_defaultSubBackgroundImageHasBeenSet;
}

vector<WaterMark> MixLayoutParams::GetWaterMarkList() const
{
    return m_waterMarkList;
}

void MixLayoutParams::SetWaterMarkList(const vector<WaterMark>& _waterMarkList)
{
    m_waterMarkList = _waterMarkList;
    m_waterMarkListHasBeenSet = true;
}

bool MixLayoutParams::WaterMarkListHasBeenSet() const
{
    return m_waterMarkListHasBeenSet;
}

uint64_t MixLayoutParams::GetRenderMode() const
{
    return m_renderMode;
}

void MixLayoutParams::SetRenderMode(const uint64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool MixLayoutParams::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

uint64_t MixLayoutParams::GetMaxResolutionUserAlign() const
{
    return m_maxResolutionUserAlign;
}

void MixLayoutParams::SetMaxResolutionUserAlign(const uint64_t& _maxResolutionUserAlign)
{
    m_maxResolutionUserAlign = _maxResolutionUserAlign;
    m_maxResolutionUserAlignHasBeenSet = true;
}

bool MixLayoutParams::MaxResolutionUserAlignHasBeenSet() const
{
    return m_maxResolutionUserAlignHasBeenSet;
}

