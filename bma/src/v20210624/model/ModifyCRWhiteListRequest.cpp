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

#include <tencentcloud/bma/v20210624/model/ModifyCRWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

ModifyCRWhiteListRequest::ModifyCRWhiteListRequest() :
    m_whiteListIdHasBeenSet(false),
    m_platFormHasBeenSet(false),
    m_platUrlHasBeenSet(false),
    m_authorIdHasBeenSet(false),
    m_worksIdHasBeenSet(false),
    m_workIdHasBeenSet(false),
    m_whiteSitesHasBeenSet(false)
{
}

string ModifyCRWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_whiteListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whiteListId, allocator);
    }

    if (m_platFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatForm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platForm.c_str(), allocator).Move(), allocator);
    }

    if (m_platUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorId.c_str(), allocator).Move(), allocator);
    }

    if (m_worksIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorksId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_worksId, allocator);
    }

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_whiteSitesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteSites";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteSites.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCRWhiteListRequest::GetWhiteListId() const
{
    return m_whiteListId;
}

void ModifyCRWhiteListRequest::SetWhiteListId(const int64_t& _whiteListId)
{
    m_whiteListId = _whiteListId;
    m_whiteListIdHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::WhiteListIdHasBeenSet() const
{
    return m_whiteListIdHasBeenSet;
}

string ModifyCRWhiteListRequest::GetPlatForm() const
{
    return m_platForm;
}

void ModifyCRWhiteListRequest::SetPlatForm(const string& _platForm)
{
    m_platForm = _platForm;
    m_platFormHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::PlatFormHasBeenSet() const
{
    return m_platFormHasBeenSet;
}

string ModifyCRWhiteListRequest::GetPlatUrl() const
{
    return m_platUrl;
}

void ModifyCRWhiteListRequest::SetPlatUrl(const string& _platUrl)
{
    m_platUrl = _platUrl;
    m_platUrlHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::PlatUrlHasBeenSet() const
{
    return m_platUrlHasBeenSet;
}

string ModifyCRWhiteListRequest::GetAuthorId() const
{
    return m_authorId;
}

void ModifyCRWhiteListRequest::SetAuthorId(const string& _authorId)
{
    m_authorId = _authorId;
    m_authorIdHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::AuthorIdHasBeenSet() const
{
    return m_authorIdHasBeenSet;
}

int64_t ModifyCRWhiteListRequest::GetWorksId() const
{
    return m_worksId;
}

void ModifyCRWhiteListRequest::SetWorksId(const int64_t& _worksId)
{
    m_worksId = _worksId;
    m_worksIdHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::WorksIdHasBeenSet() const
{
    return m_worksIdHasBeenSet;
}

int64_t ModifyCRWhiteListRequest::GetWorkId() const
{
    return m_workId;
}

void ModifyCRWhiteListRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string ModifyCRWhiteListRequest::GetWhiteSites() const
{
    return m_whiteSites;
}

void ModifyCRWhiteListRequest::SetWhiteSites(const string& _whiteSites)
{
    m_whiteSites = _whiteSites;
    m_whiteSitesHasBeenSet = true;
}

bool ModifyCRWhiteListRequest::WhiteSitesHasBeenSet() const
{
    return m_whiteSitesHasBeenSet;
}


