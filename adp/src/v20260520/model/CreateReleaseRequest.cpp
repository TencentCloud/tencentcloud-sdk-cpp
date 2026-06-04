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

#include <tencentcloud/adp/v20260520/model/CreateReleaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateReleaseRequest::CreateReleaseRequest() :
    m_appIdHasBeenSet(false),
    m_channelIdListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isDevToReleaseHasBeenSet(false),
    m_isPublishAsTemplateHasBeenSet(false)
{
}

string CreateReleaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIdList.begin(); itr != m_channelIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isDevToReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDevToRelease";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDevToRelease, allocator);
    }

    if (m_isPublishAsTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublishAsTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublishAsTemplate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateReleaseRequest::GetAppId() const
{
    return m_appId;
}

void CreateReleaseRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateReleaseRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<string> CreateReleaseRequest::GetChannelIdList() const
{
    return m_channelIdList;
}

void CreateReleaseRequest::SetChannelIdList(const vector<string>& _channelIdList)
{
    m_channelIdList = _channelIdList;
    m_channelIdListHasBeenSet = true;
}

bool CreateReleaseRequest::ChannelIdListHasBeenSet() const
{
    return m_channelIdListHasBeenSet;
}

string CreateReleaseRequest::GetDescription() const
{
    return m_description;
}

void CreateReleaseRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateReleaseRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateReleaseRequest::GetIsDevToRelease() const
{
    return m_isDevToRelease;
}

void CreateReleaseRequest::SetIsDevToRelease(const bool& _isDevToRelease)
{
    m_isDevToRelease = _isDevToRelease;
    m_isDevToReleaseHasBeenSet = true;
}

bool CreateReleaseRequest::IsDevToReleaseHasBeenSet() const
{
    return m_isDevToReleaseHasBeenSet;
}

bool CreateReleaseRequest::GetIsPublishAsTemplate() const
{
    return m_isPublishAsTemplate;
}

void CreateReleaseRequest::SetIsPublishAsTemplate(const bool& _isPublishAsTemplate)
{
    m_isPublishAsTemplate = _isPublishAsTemplate;
    m_isPublishAsTemplateHasBeenSet = true;
}

bool CreateReleaseRequest::IsPublishAsTemplateHasBeenSet() const
{
    return m_isPublishAsTemplateHasBeenSet;
}


