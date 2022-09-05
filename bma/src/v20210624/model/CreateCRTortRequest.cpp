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

#include <tencentcloud/bma/v20210624/model/CreateCRTortRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRTortRequest::CreateCRTortRequest() :
    m_workIdHasBeenSet(false),
    m_tortURLHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_tortTitleHasBeenSet(false)
{
}

string CreateCRTortRequest::ToJsonString() const
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

    if (m_tortURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortURL.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_tortTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tortTitle.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCRTortRequest::GetWorkId() const
{
    return m_workId;
}

void CreateCRTortRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool CreateCRTortRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string CreateCRTortRequest::GetTortURL() const
{
    return m_tortURL;
}

void CreateCRTortRequest::SetTortURL(const string& _tortURL)
{
    m_tortURL = _tortURL;
    m_tortURLHasBeenSet = true;
}

bool CreateCRTortRequest::TortURLHasBeenSet() const
{
    return m_tortURLHasBeenSet;
}

string CreateCRTortRequest::GetTortPlat() const
{
    return m_tortPlat;
}

void CreateCRTortRequest::SetTortPlat(const string& _tortPlat)
{
    m_tortPlat = _tortPlat;
    m_tortPlatHasBeenSet = true;
}

bool CreateCRTortRequest::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

string CreateCRTortRequest::GetTortTitle() const
{
    return m_tortTitle;
}

void CreateCRTortRequest::SetTortTitle(const string& _tortTitle)
{
    m_tortTitle = _tortTitle;
    m_tortTitleHasBeenSet = true;
}

bool CreateCRTortRequest::TortTitleHasBeenSet() const
{
    return m_tortTitleHasBeenSet;
}


