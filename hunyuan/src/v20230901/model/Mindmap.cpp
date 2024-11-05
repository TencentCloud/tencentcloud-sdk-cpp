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

#include <tencentcloud/hunyuan/v20230901/model/Mindmap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Mindmap::Mindmap() :
    m_thumbUrlHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome Mindmap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThumbUrl") && !value["ThumbUrl"].IsNull())
    {
        if (!value["ThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mindmap.ThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbUrl = string(value["ThumbUrl"].GetString());
        m_thumbUrlHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mindmap.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Mindmap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thumbUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string Mindmap::GetThumbUrl() const
{
    return m_thumbUrl;
}

void Mindmap::SetThumbUrl(const string& _thumbUrl)
{
    m_thumbUrl = _thumbUrl;
    m_thumbUrlHasBeenSet = true;
}

bool Mindmap::ThumbUrlHasBeenSet() const
{
    return m_thumbUrlHasBeenSet;
}

string Mindmap::GetUrl() const
{
    return m_url;
}

void Mindmap::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Mindmap::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

