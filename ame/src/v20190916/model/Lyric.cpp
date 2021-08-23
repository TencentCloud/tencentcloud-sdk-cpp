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

#include <tencentcloud/ame/v20190916/model/Lyric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Lyric::Lyric() :
    m_urlHasBeenSet(false),
    m_fileNameExtHasBeenSet(false),
    m_subItemTypeHasBeenSet(false)
{
}

CoreInternalOutcome Lyric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Lyric.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("FileNameExt") && !value["FileNameExt"].IsNull())
    {
        if (!value["FileNameExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Lyric.FileNameExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNameExt = string(value["FileNameExt"].GetString());
        m_fileNameExtHasBeenSet = true;
    }

    if (value.HasMember("SubItemType") && !value["SubItemType"].IsNull())
    {
        if (!value["SubItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Lyric.SubItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subItemType = string(value["SubItemType"].GetString());
        m_subItemTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Lyric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNameExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNameExt.c_str(), allocator).Move(), allocator);
    }

    if (m_subItemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subItemType.c_str(), allocator).Move(), allocator);
    }

}


string Lyric::GetUrl() const
{
    return m_url;
}

void Lyric::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Lyric::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string Lyric::GetFileNameExt() const
{
    return m_fileNameExt;
}

void Lyric::SetFileNameExt(const string& _fileNameExt)
{
    m_fileNameExt = _fileNameExt;
    m_fileNameExtHasBeenSet = true;
}

bool Lyric::FileNameExtHasBeenSet() const
{
    return m_fileNameExtHasBeenSet;
}

string Lyric::GetSubItemType() const
{
    return m_subItemType;
}

void Lyric::SetSubItemType(const string& _subItemType)
{
    m_subItemType = _subItemType;
    m_subItemTypeHasBeenSet = true;
}

bool Lyric::SubItemTypeHasBeenSet() const
{
    return m_subItemTypeHasBeenSet;
}

