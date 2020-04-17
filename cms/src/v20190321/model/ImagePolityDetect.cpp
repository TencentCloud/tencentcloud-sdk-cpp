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
using namespace rapidjson;
using namespace std;

ImagePolityDetect::ImagePolityDetect() :
    m_evilTypeHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_polityLogoDetailHasBeenSet(false),
    m_faceNamesHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_polityItemsHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome ImagePolityDetect::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImagePolityDetect.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImagePolityDetect.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("PolityLogoDetail") && !value["PolityLogoDetail"].IsNull())
    {
        if (!value["PolityLogoDetail"].IsArray())
            return CoreInternalOutcome(Error("response `ImagePolityDetect.PolityLogoDetail` is not array type"));

        const Value &tmpValue = value["PolityLogoDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("FaceNames") && !value["FaceNames"].IsNull())
    {
        if (!value["FaceNames"].IsArray())
            return CoreInternalOutcome(Error("response `ImagePolityDetect.FaceNames` is not array type"));

        const Value &tmpValue = value["FaceNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceNames.push_back((*itr).GetString());
        }
        m_faceNamesHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `ImagePolityDetect.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("PolityItems") && !value["PolityItems"].IsNull())
    {
        if (!value["PolityItems"].IsArray())
            return CoreInternalOutcome(Error("response `ImagePolityDetect.PolityItems` is not array type"));

        const Value &tmpValue = value["PolityItems"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_polityItems.push_back((*itr).GetString());
        }
        m_polityItemsHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImagePolityDetect.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImagePolityDetect::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_polityLogoDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolityLogoDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polityLogoDetail.begin(); itr != m_polityLogoDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_faceNames.begin(); itr != m_faceNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_polityItemsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolityItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_polityItems.begin(); itr != m_polityItems.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
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

