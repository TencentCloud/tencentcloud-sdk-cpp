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

#include <tencentcloud/cms/v20190321/model/ImagePolityDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

ImagePolityDetect::ImagePolityDetect() :
    m_evilTypeHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_faceNamesHasBeenSet(false),
    m_polityLogoDetailHasBeenSet(false),
    m_polityItemsHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome ImagePolityDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("FaceNames") && !value["FaceNames"].IsNull())
    {
        if (!value["FaceNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.FaceNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceNames.push_back((*itr).GetString());
        }
        m_faceNamesHasBeenSet = true;
    }

    if (value.HasMember("PolityLogoDetail") && !value["PolityLogoDetail"].IsNull())
    {
        if (!value["PolityLogoDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.PolityLogoDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["PolityLogoDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Logo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polityLogoDetail.push_back(item);
        }
        m_polityLogoDetailHasBeenSet = true;
    }

    if (value.HasMember("PolityItems") && !value["PolityItems"].IsNull())
    {
        if (!value["PolityItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.PolityItems` is not array type"));

        const rapidjson::Value &tmpValue = value["PolityItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_polityItems.push_back((*itr).GetString());
        }
        m_polityItemsHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePolityDetect.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImagePolityDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_faceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_faceNames.begin(); itr != m_faceNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_polityLogoDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolityLogoDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polityLogoDetail.begin(); itr != m_polityLogoDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_polityItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolityItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_polityItems.begin(); itr != m_polityItems.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t ImagePolityDetect::GetEvilType() const
{
    return m_evilType;
}

void ImagePolityDetect::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool ImagePolityDetect::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

int64_t ImagePolityDetect::GetHitFlag() const
{
    return m_hitFlag;
}

void ImagePolityDetect::SetHitFlag(const int64_t& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool ImagePolityDetect::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

vector<string> ImagePolityDetect::GetFaceNames() const
{
    return m_faceNames;
}

void ImagePolityDetect::SetFaceNames(const vector<string>& _faceNames)
{
    m_faceNames = _faceNames;
    m_faceNamesHasBeenSet = true;
}

bool ImagePolityDetect::FaceNamesHasBeenSet() const
{
    return m_faceNamesHasBeenSet;
}

vector<Logo> ImagePolityDetect::GetPolityLogoDetail() const
{
    return m_polityLogoDetail;
}

void ImagePolityDetect::SetPolityLogoDetail(const vector<Logo>& _polityLogoDetail)
{
    m_polityLogoDetail = _polityLogoDetail;
    m_polityLogoDetailHasBeenSet = true;
}

bool ImagePolityDetect::PolityLogoDetailHasBeenSet() const
{
    return m_polityLogoDetailHasBeenSet;
}

vector<string> ImagePolityDetect::GetPolityItems() const
{
    return m_polityItems;
}

void ImagePolityDetect::SetPolityItems(const vector<string>& _polityItems)
{
    m_polityItems = _polityItems;
    m_polityItemsHasBeenSet = true;
}

bool ImagePolityDetect::PolityItemsHasBeenSet() const
{
    return m_polityItemsHasBeenSet;
}

int64_t ImagePolityDetect::GetScore() const
{
    return m_score;
}

void ImagePolityDetect::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ImagePolityDetect::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> ImagePolityDetect::GetKeywords() const
{
    return m_keywords;
}

void ImagePolityDetect::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool ImagePolityDetect::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

