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

#include <tencentcloud/ai3d/v20250513/model/ViewImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

ViewImage::ViewImage() :
    m_viewTypeHasBeenSet(false),
    m_viewImageUrlHasBeenSet(false),
    m_viewImageBase64HasBeenSet(false)
{
}

CoreInternalOutcome ViewImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewType") && !value["ViewType"].IsNull())
    {
        if (!value["ViewType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewImage.ViewType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewType = string(value["ViewType"].GetString());
        m_viewTypeHasBeenSet = true;
    }

    if (value.HasMember("ViewImageUrl") && !value["ViewImageUrl"].IsNull())
    {
        if (!value["ViewImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewImage.ViewImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewImageUrl = string(value["ViewImageUrl"].GetString());
        m_viewImageUrlHasBeenSet = true;
    }

    if (value.HasMember("ViewImageBase64") && !value["ViewImageBase64"].IsNull())
    {
        if (!value["ViewImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewImage.ViewImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewImageBase64 = string(value["ViewImageBase64"].GetString());
        m_viewImageBase64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewType.c_str(), allocator).Move(), allocator);
    }

    if (m_viewImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_viewImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewImageBase64.c_str(), allocator).Move(), allocator);
    }

}


string ViewImage::GetViewType() const
{
    return m_viewType;
}

void ViewImage::SetViewType(const string& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool ViewImage::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

string ViewImage::GetViewImageUrl() const
{
    return m_viewImageUrl;
}

void ViewImage::SetViewImageUrl(const string& _viewImageUrl)
{
    m_viewImageUrl = _viewImageUrl;
    m_viewImageUrlHasBeenSet = true;
}

bool ViewImage::ViewImageUrlHasBeenSet() const
{
    return m_viewImageUrlHasBeenSet;
}

string ViewImage::GetViewImageBase64() const
{
    return m_viewImageBase64;
}

void ViewImage::SetViewImageBase64(const string& _viewImageBase64)
{
    m_viewImageBase64 = _viewImageBase64;
    m_viewImageBase64HasBeenSet = true;
}

bool ViewImage::ViewImageBase64HasBeenSet() const
{
    return m_viewImageBase64HasBeenSet;
}

