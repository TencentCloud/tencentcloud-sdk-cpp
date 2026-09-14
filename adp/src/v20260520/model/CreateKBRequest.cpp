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

#include <tencentcloud/adp/v20260520/model/CreateKBRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateKBRequest::CreateKBRequest() :
    m_kbTypeHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_sharedSubTypeHasBeenSet(false)
{
}

string CreateKBRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kbType, allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sharedSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sharedSubType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateKBRequest::GetKbType() const
{
    return m_kbType;
}

void CreateKBRequest::SetKbType(const int64_t& _kbType)
{
    m_kbType = _kbType;
    m_kbTypeHasBeenSet = true;
}

bool CreateKBRequest::KbTypeHasBeenSet() const
{
    return m_kbTypeHasBeenSet;
}

string CreateKBRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateKBRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateKBRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

KBSpec CreateKBRequest::GetSpec() const
{
    return m_spec;
}

void CreateKBRequest::SetSpec(const KBSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool CreateKBRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t CreateKBRequest::GetSharedSubType() const
{
    return m_sharedSubType;
}

void CreateKBRequest::SetSharedSubType(const int64_t& _sharedSubType)
{
    m_sharedSubType = _sharedSubType;
    m_sharedSubTypeHasBeenSet = true;
}

bool CreateKBRequest::SharedSubTypeHasBeenSet() const
{
    return m_sharedSubTypeHasBeenSet;
}


