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

#include <tencentcloud/drm/v20181115/model/DescribeAllKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace rapidjson;
using namespace std;

DescribeAllKeysRequest::DescribeAllKeysRequest() :
    m_drmTypeHasBeenSet(false),
    m_rsaPublicKeyHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

string DescribeAllKeysRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drmTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_rsaPublicKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RsaPublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rsaPublicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contentType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAllKeysRequest::GetDrmType() const
{
    return m_drmType;
}

void DescribeAllKeysRequest::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool DescribeAllKeysRequest::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

string DescribeAllKeysRequest::GetRsaPublicKey() const
{
    return m_rsaPublicKey;
}

void DescribeAllKeysRequest::SetRsaPublicKey(const string& _rsaPublicKey)
{
    m_rsaPublicKey = _rsaPublicKey;
    m_rsaPublicKeyHasBeenSet = true;
}

bool DescribeAllKeysRequest::RsaPublicKeyHasBeenSet() const
{
    return m_rsaPublicKeyHasBeenSet;
}

string DescribeAllKeysRequest::GetContentId() const
{
    return m_contentId;
}

void DescribeAllKeysRequest::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool DescribeAllKeysRequest::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string DescribeAllKeysRequest::GetContentType() const
{
    return m_contentType;
}

void DescribeAllKeysRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool DescribeAllKeysRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}


