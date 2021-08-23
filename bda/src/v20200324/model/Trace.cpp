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

#include <tencentcloud/bda/v20200324/model/Trace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

Trace::Trace() :
    m_imagesHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_bodyRectsHasBeenSet(false)
{
}

CoreInternalOutcome Trace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Trace.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_images.push_back((*itr).GetString());
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("Urls") && !value["Urls"].IsNull())
    {
        if (!value["Urls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Trace.Urls` is not array type"));

        const rapidjson::Value &tmpValue = value["Urls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urls.push_back((*itr).GetString());
        }
        m_urlsHasBeenSet = true;
    }

    if (value.HasMember("BodyRects") && !value["BodyRects"].IsNull())
    {
        if (!value["BodyRects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Trace.BodyRects` is not array type"));

        const rapidjson::Value &tmpValue = value["BodyRects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BodyRect item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bodyRects.push_back(item);
        }
        m_bodyRectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Trace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bodyRectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyRects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bodyRects.begin(); itr != m_bodyRects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> Trace::GetImages() const
{
    return m_images;
}

void Trace::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool Trace::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<string> Trace::GetUrls() const
{
    return m_urls;
}

void Trace::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool Trace::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

vector<BodyRect> Trace::GetBodyRects() const
{
    return m_bodyRects;
}

void Trace::SetBodyRects(const vector<BodyRect>& _bodyRects)
{
    m_bodyRects = _bodyRects;
    m_bodyRectsHasBeenSet = true;
}

bool Trace::BodyRectsHasBeenSet() const
{
    return m_bodyRectsHasBeenSet;
}

