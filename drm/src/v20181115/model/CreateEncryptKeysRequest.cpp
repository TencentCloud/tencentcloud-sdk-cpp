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

#include <tencentcloud/drm/v20181115/model/CreateEncryptKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

CreateEncryptKeysRequest::CreateEncryptKeysRequest() :
    m_drmTypeHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

string CreateEncryptKeysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEncryptKeysRequest::GetDrmType() const
{
    return m_drmType;
}

void CreateEncryptKeysRequest::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool CreateEncryptKeysRequest::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

vector<KeyParam> CreateEncryptKeysRequest::GetKeys() const
{
    return m_keys;
}

void CreateEncryptKeysRequest::SetKeys(const vector<KeyParam>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool CreateEncryptKeysRequest::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string CreateEncryptKeysRequest::GetContentId() const
{
    return m_contentId;
}

void CreateEncryptKeysRequest::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool CreateEncryptKeysRequest::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string CreateEncryptKeysRequest::GetContentType() const
{
    return m_contentType;
}

void CreateEncryptKeysRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateEncryptKeysRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}


