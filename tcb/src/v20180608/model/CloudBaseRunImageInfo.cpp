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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunImageInfo::CloudBaseRunImageInfo() :
    m_repositoryNameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageInfo.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageInfo.IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("ServerAddr") && !value["ServerAddr"].IsNull())
    {
        if (!value["ServerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageInfo.ServerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverAddr = string(value["ServerAddr"].GetString());
        m_serverAddrHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseRunImageInfo::GetRepositoryName() const
{
    return m_repositoryName;
}

void CloudBaseRunImageInfo::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool CloudBaseRunImageInfo::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

bool CloudBaseRunImageInfo::GetIsPublic() const
{
    return m_isPublic;
}

void CloudBaseRunImageInfo::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool CloudBaseRunImageInfo::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string CloudBaseRunImageInfo::GetTagName() const
{
    return m_tagName;
}

void CloudBaseRunImageInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool CloudBaseRunImageInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string CloudBaseRunImageInfo::GetServerAddr() const
{
    return m_serverAddr;
}

void CloudBaseRunImageInfo::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool CloudBaseRunImageInfo::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

string CloudBaseRunImageInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void CloudBaseRunImageInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CloudBaseRunImageInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

