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

#include <tencentcloud/hunyuan/v20230901/model/File3D.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

File3D::File3D() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_previewImageUrlHasBeenSet(false)
{
}

CoreInternalOutcome File3D::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File3D.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File3D.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PreviewImageUrl") && !value["PreviewImageUrl"].IsNull())
    {
        if (!value["PreviewImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File3D.PreviewImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewImageUrl = string(value["PreviewImageUrl"].GetString());
        m_previewImageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void File3D::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_previewImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewImageUrl.c_str(), allocator).Move(), allocator);
    }

}


string File3D::GetType() const
{
    return m_type;
}

void File3D::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool File3D::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string File3D::GetUrl() const
{
    return m_url;
}

void File3D::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool File3D::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string File3D::GetPreviewImageUrl() const
{
    return m_previewImageUrl;
}

void File3D::SetPreviewImageUrl(const string& _previewImageUrl)
{
    m_previewImageUrl = _previewImageUrl;
    m_previewImageUrlHasBeenSet = true;
}

bool File3D::PreviewImageUrlHasBeenSet() const
{
    return m_previewImageUrlHasBeenSet;
}

