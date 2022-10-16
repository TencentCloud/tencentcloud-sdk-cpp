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

#include <tencentcloud/bma/v20210624/model/CreateCRObtainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRObtainRequest::CreateCRObtainRequest() :
    m_workIdHasBeenSet(false),
    m_tortUrlHasBeenSet(false),
    m_obtainTypeHasBeenSet(false),
    m_workTitleHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_obtainDurationHasBeenSet(false),
    m_obtainUrlHasBeenSet(false),
    m_workCategoryHasBeenSet(false),
    m_workTypeHasBeenSet(false)
{
}

string CreateCRObtainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_tortUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_obtainType, allocator);
    }

    if (m_workTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_obtainDuration, allocator);
    }

    if (m_obtainUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_obtainUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_workCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_workTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCRObtainRequest::GetWorkId() const
{
    return m_workId;
}

void CreateCRObtainRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool CreateCRObtainRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string CreateCRObtainRequest::GetTortUrl() const
{
    return m_tortUrl;
}

void CreateCRObtainRequest::SetTortUrl(const string& _tortUrl)
{
    m_tortUrl = _tortUrl;
    m_tortUrlHasBeenSet = true;
}

bool CreateCRObtainRequest::TortUrlHasBeenSet() const
{
    return m_tortUrlHasBeenSet;
}

int64_t CreateCRObtainRequest::GetObtainType() const
{
    return m_obtainType;
}

void CreateCRObtainRequest::SetObtainType(const int64_t& _obtainType)
{
    m_obtainType = _obtainType;
    m_obtainTypeHasBeenSet = true;
}

bool CreateCRObtainRequest::ObtainTypeHasBeenSet() const
{
    return m_obtainTypeHasBeenSet;
}

string CreateCRObtainRequest::GetWorkTitle() const
{
    return m_workTitle;
}

void CreateCRObtainRequest::SetWorkTitle(const string& _workTitle)
{
    m_workTitle = _workTitle;
    m_workTitleHasBeenSet = true;
}

bool CreateCRObtainRequest::WorkTitleHasBeenSet() const
{
    return m_workTitleHasBeenSet;
}

string CreateCRObtainRequest::GetTortPlat() const
{
    return m_tortPlat;
}

void CreateCRObtainRequest::SetTortPlat(const string& _tortPlat)
{
    m_tortPlat = _tortPlat;
    m_tortPlatHasBeenSet = true;
}

bool CreateCRObtainRequest::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

int64_t CreateCRObtainRequest::GetObtainDuration() const
{
    return m_obtainDuration;
}

void CreateCRObtainRequest::SetObtainDuration(const int64_t& _obtainDuration)
{
    m_obtainDuration = _obtainDuration;
    m_obtainDurationHasBeenSet = true;
}

bool CreateCRObtainRequest::ObtainDurationHasBeenSet() const
{
    return m_obtainDurationHasBeenSet;
}

string CreateCRObtainRequest::GetObtainUrl() const
{
    return m_obtainUrl;
}

void CreateCRObtainRequest::SetObtainUrl(const string& _obtainUrl)
{
    m_obtainUrl = _obtainUrl;
    m_obtainUrlHasBeenSet = true;
}

bool CreateCRObtainRequest::ObtainUrlHasBeenSet() const
{
    return m_obtainUrlHasBeenSet;
}

string CreateCRObtainRequest::GetWorkCategory() const
{
    return m_workCategory;
}

void CreateCRObtainRequest::SetWorkCategory(const string& _workCategory)
{
    m_workCategory = _workCategory;
    m_workCategoryHasBeenSet = true;
}

bool CreateCRObtainRequest::WorkCategoryHasBeenSet() const
{
    return m_workCategoryHasBeenSet;
}

string CreateCRObtainRequest::GetWorkType() const
{
    return m_workType;
}

void CreateCRObtainRequest::SetWorkType(const string& _workType)
{
    m_workType = _workType;
    m_workTypeHasBeenSet = true;
}

bool CreateCRObtainRequest::WorkTypeHasBeenSet() const
{
    return m_workTypeHasBeenSet;
}


