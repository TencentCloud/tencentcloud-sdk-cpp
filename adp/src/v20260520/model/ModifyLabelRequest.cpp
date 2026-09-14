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

#include <tencentcloud/adp/v20260520/model/ModifyLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyLabelRequest::ModifyLabelRequest() :
    m_fieldsHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyLabelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fields.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


LabelModifyFields ModifyLabelRequest::GetFields() const
{
    return m_fields;
}

void ModifyLabelRequest::SetFields(const LabelModifyFields& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ModifyLabelRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

string ModifyLabelRequest::GetKbId() const
{
    return m_kbId;
}

void ModifyLabelRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyLabelRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string ModifyLabelRequest::GetLabelId() const
{
    return m_labelId;
}

void ModifyLabelRequest::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool ModifyLabelRequest::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

FieldMask ModifyLabelRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyLabelRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyLabelRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


