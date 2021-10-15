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

#include <tencentcloud/cdn/v20180606/model/CreateDiagnoseUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CreateDiagnoseUrlRequest::CreateDiagnoseUrlRequest() :
    m_urlHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

string CreateDiagnoseUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDiagnoseUrlRequest::GetUrl() const
{
    return m_url;
}

void CreateDiagnoseUrlRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateDiagnoseUrlRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateDiagnoseUrlRequest::GetOrigin() const
{
    return m_origin;
}

void CreateDiagnoseUrlRequest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool CreateDiagnoseUrlRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}


