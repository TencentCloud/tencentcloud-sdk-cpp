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

#include <tencentcloud/yinsuda/v20220527/model/MusicAlbumCoverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

MusicAlbumCoverInfo::MusicAlbumCoverInfo() :
    m_dimensionHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome MusicAlbumCoverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dimension") && !value["Dimension"].IsNull())
    {
        if (!value["Dimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicAlbumCoverInfo.Dimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimension = string(value["Dimension"].GetString());
        m_dimensionHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicAlbumCoverInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicAlbumCoverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string MusicAlbumCoverInfo::GetDimension() const
{
    return m_dimension;
}

void MusicAlbumCoverInfo::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool MusicAlbumCoverInfo::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string MusicAlbumCoverInfo::GetUrl() const
{
    return m_url;
}

void MusicAlbumCoverInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MusicAlbumCoverInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

