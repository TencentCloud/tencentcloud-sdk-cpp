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

#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMultiViewImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcHunyuan3DMultiViewImageInfo::AigcHunyuan3DMultiViewImageInfo() :
    m_typeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_viewTypeHasBeenSet(false)
{
}

CoreInternalOutcome AigcHunyuan3DMultiViewImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DMultiViewImageInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DMultiViewImageInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DMultiViewImageInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ViewType") && !value["ViewType"].IsNull())
    {
        if (!value["ViewType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DMultiViewImageInfo.ViewType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewType = string(value["ViewType"].GetString());
        m_viewTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcHunyuan3DMultiViewImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewType.c_str(), allocator).Move(), allocator);
    }

}


string AigcHunyuan3DMultiViewImageInfo::GetType() const
{
    return m_type;
}

void AigcHunyuan3DMultiViewImageInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AigcHunyuan3DMultiViewImageInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AigcHunyuan3DMultiViewImageInfo::GetFileId() const
{
    return m_fileId;
}

void AigcHunyuan3DMultiViewImageInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AigcHunyuan3DMultiViewImageInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AigcHunyuan3DMultiViewImageInfo::GetUrl() const
{
    return m_url;
}

void AigcHunyuan3DMultiViewImageInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AigcHunyuan3DMultiViewImageInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AigcHunyuan3DMultiViewImageInfo::GetViewType() const
{
    return m_viewType;
}

void AigcHunyuan3DMultiViewImageInfo::SetViewType(const string& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool AigcHunyuan3DMultiViewImageInfo::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

