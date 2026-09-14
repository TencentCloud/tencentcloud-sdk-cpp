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

#include <tencentcloud/adp/v20260520/model/ModifyKBRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyKBRequest::ModifyKBRequest() :
    m_kbIdHasBeenSet(false),
    m_specHasBeenSet(false),
    m_updateMaskHasBeenSet(false),
    m_extendFieldsHasBeenSet(false)
{
}

string ModifyKBRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extendFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extendFields.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyKBRequest::GetKbId() const
{
    return m_kbId;
}

void ModifyKBRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyKBRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

KBSpec ModifyKBRequest::GetSpec() const
{
    return m_spec;
}

void ModifyKBRequest::SetSpec(const KBSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ModifyKBRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

FieldMask ModifyKBRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyKBRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyKBRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}

KBModifyExtendFields ModifyKBRequest::GetExtendFields() const
{
    return m_extendFields;
}

void ModifyKBRequest::SetExtendFields(const KBModifyExtendFields& _extendFields)
{
    m_extendFields = _extendFields;
    m_extendFieldsHasBeenSet = true;
}

bool ModifyKBRequest::ExtendFieldsHasBeenSet() const
{
    return m_extendFieldsHasBeenSet;
}


