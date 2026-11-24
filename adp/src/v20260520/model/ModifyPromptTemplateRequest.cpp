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

#include <tencentcloud/adp/v20260520/model/ModifyPromptTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyPromptTemplateRequest::ModifyPromptTemplateRequest() :
    m_spaceIdHasBeenSet(false),
    m_promptTemplateIdHasBeenSet(false),
    m_updateMaskHasBeenSet(false),
    m_specHasBeenSet(false)
{
}

string ModifyPromptTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPromptTemplateRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifyPromptTemplateRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifyPromptTemplateRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ModifyPromptTemplateRequest::GetPromptTemplateId() const
{
    return m_promptTemplateId;
}

void ModifyPromptTemplateRequest::SetPromptTemplateId(const string& _promptTemplateId)
{
    m_promptTemplateId = _promptTemplateId;
    m_promptTemplateIdHasBeenSet = true;
}

bool ModifyPromptTemplateRequest::PromptTemplateIdHasBeenSet() const
{
    return m_promptTemplateIdHasBeenSet;
}

FieldMask ModifyPromptTemplateRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyPromptTemplateRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyPromptTemplateRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}

PromptTemplateSpec ModifyPromptTemplateRequest::GetSpec() const
{
    return m_spec;
}

void ModifyPromptTemplateRequest::SetSpec(const PromptTemplateSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ModifyPromptTemplateRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}


