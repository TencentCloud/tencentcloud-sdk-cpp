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

#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplyWebVerificationTokenRequest::ApplyWebVerificationTokenRequest() :
    m_redirectUrlHasBeenSet(false),
    m_compareImageUrlHasBeenSet(false),
    m_compareImageMd5HasBeenSet(false)
{
}

string ApplyWebVerificationTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_compareImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_compareImageMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareImageMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareImageMd5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyWebVerificationTokenRequest::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void ApplyWebVerificationTokenRequest::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool ApplyWebVerificationTokenRequest::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

string ApplyWebVerificationTokenRequest::GetCompareImageUrl() const
{
    return m_compareImageUrl;
}

void ApplyWebVerificationTokenRequest::SetCompareImageUrl(const string& _compareImageUrl)
{
    m_compareImageUrl = _compareImageUrl;
    m_compareImageUrlHasBeenSet = true;
}

bool ApplyWebVerificationTokenRequest::CompareImageUrlHasBeenSet() const
{
    return m_compareImageUrlHasBeenSet;
}

string ApplyWebVerificationTokenRequest::GetCompareImageMd5() const
{
    return m_compareImageMd5;
}

void ApplyWebVerificationTokenRequest::SetCompareImageMd5(const string& _compareImageMd5)
{
    m_compareImageMd5 = _compareImageMd5;
    m_compareImageMd5HasBeenSet = true;
}

bool ApplyWebVerificationTokenRequest::CompareImageMd5HasBeenSet() const
{
    return m_compareImageMd5HasBeenSet;
}


