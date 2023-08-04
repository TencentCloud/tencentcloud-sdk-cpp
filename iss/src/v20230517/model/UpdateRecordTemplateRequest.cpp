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

#include <tencentcloud/iss/v20230517/model/UpdateRecordTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateRecordTemplateRequest::UpdateRecordTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_modHasBeenSet(false)
{
}

string UpdateRecordTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_modHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mod.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRecordTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void UpdateRecordTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool UpdateRecordTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

UpdateRecordTemplateData UpdateRecordTemplateRequest::GetMod() const
{
    return m_mod;
}

void UpdateRecordTemplateRequest::SetMod(const UpdateRecordTemplateData& _mod)
{
    m_mod = _mod;
    m_modHasBeenSet = true;
}

bool UpdateRecordTemplateRequest::ModHasBeenSet() const
{
    return m_modHasBeenSet;
}


