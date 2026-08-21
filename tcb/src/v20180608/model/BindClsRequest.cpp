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

#include <tencentcloud/tcb/v20180608/model/BindClsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BindClsRequest::BindClsRequest() :
    m_envIdHasBeenSet(false),
    m_clsRegionHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false)
{
}

string BindClsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindClsRequest::GetEnvId() const
{
    return m_envId;
}

void BindClsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool BindClsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string BindClsRequest::GetClsRegion() const
{
    return m_clsRegion;
}

void BindClsRequest::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool BindClsRequest::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}

string BindClsRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void BindClsRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool BindClsRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string BindClsRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void BindClsRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool BindClsRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}


