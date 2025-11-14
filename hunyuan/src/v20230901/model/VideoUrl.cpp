/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/hunyuan/v20230901/model/VideoUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

VideoUrl::VideoUrl() :
    m_urlHasBeenSet(false),
    m_fpsHasBeenSet(false)
{
}

CoreInternalOutcome VideoUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoUrl.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoUrl.Fps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetDouble();
        m_fpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

}


string VideoUrl::GetUrl() const
{
    return m_url;
}

void VideoUrl::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VideoUrl::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

double VideoUrl::GetFps() const
{
    return m_fps;
}

void VideoUrl::SetFps(const double& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoUrl::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

