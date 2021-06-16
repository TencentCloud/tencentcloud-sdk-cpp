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

#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebPageProtectSettingRequest::ModifyWebPageProtectSettingRequest() :
    m_modifyTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string ModifyWebPageProtectSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyType, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyWebPageProtectSettingRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyWebPageProtectSettingRequest::SetModifyType(const uint64_t& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyWebPageProtectSettingRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

string ModifyWebPageProtectSettingRequest::GetValue() const
{
    return m_value;
}

void ModifyWebPageProtectSettingRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyWebPageProtectSettingRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ModifyWebPageProtectSettingRequest::GetId() const
{
    return m_id;
}

void ModifyWebPageProtectSettingRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyWebPageProtectSettingRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


