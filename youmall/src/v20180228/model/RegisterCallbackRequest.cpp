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

#include <tencentcloud/youmall/v20180228/model/RegisterCallbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

RegisterCallbackRequest::RegisterCallbackRequest() :
    m_companyIdHasBeenSet(false),
    m_backUrlHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_needFacePicHasBeenSet(false)
{
}

string RegisterCallbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_backUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }

    if (m_needFacePicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedFacePic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needFacePic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterCallbackRequest::GetCompanyId() const
{
    return m_companyId;
}

void RegisterCallbackRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool RegisterCallbackRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string RegisterCallbackRequest::GetBackUrl() const
{
    return m_backUrl;
}

void RegisterCallbackRequest::SetBackUrl(const string& _backUrl)
{
    m_backUrl = _backUrl;
    m_backUrlHasBeenSet = true;
}

bool RegisterCallbackRequest::BackUrlHasBeenSet() const
{
    return m_backUrlHasBeenSet;
}

uint64_t RegisterCallbackRequest::GetTime() const
{
    return m_time;
}

void RegisterCallbackRequest::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool RegisterCallbackRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t RegisterCallbackRequest::GetNeedFacePic() const
{
    return m_needFacePic;
}

void RegisterCallbackRequest::SetNeedFacePic(const uint64_t& _needFacePic)
{
    m_needFacePic = _needFacePic;
    m_needFacePicHasBeenSet = true;
}

bool RegisterCallbackRequest::NeedFacePicHasBeenSet() const
{
    return m_needFacePicHasBeenSet;
}


