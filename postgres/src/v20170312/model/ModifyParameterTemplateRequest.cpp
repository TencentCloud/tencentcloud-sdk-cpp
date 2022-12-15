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

#include <tencentcloud/postgres/v20170312/model/ModifyParameterTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyParameterTemplateRequest::ModifyParameterTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_modifyParamEntrySetHasBeenSet(false),
    m_deleteParamSetHasBeenSet(false)
{
}

string ModifyParameterTemplateRequest::ToJsonString() const
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

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyParamEntrySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyParamEntrySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyParamEntrySet.begin(); itr != m_modifyParamEntrySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteParamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteParamSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteParamSet.begin(); itr != m_deleteParamSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyParameterTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyParameterTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyParameterTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyParameterTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyParameterTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyParameterTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyParameterTemplateRequest::GetTemplateDescription() const
{
    return m_templateDescription;
}

void ModifyParameterTemplateRequest::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool ModifyParameterTemplateRequest::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

vector<ParamEntry> ModifyParameterTemplateRequest::GetModifyParamEntrySet() const
{
    return m_modifyParamEntrySet;
}

void ModifyParameterTemplateRequest::SetModifyParamEntrySet(const vector<ParamEntry>& _modifyParamEntrySet)
{
    m_modifyParamEntrySet = _modifyParamEntrySet;
    m_modifyParamEntrySetHasBeenSet = true;
}

bool ModifyParameterTemplateRequest::ModifyParamEntrySetHasBeenSet() const
{
    return m_modifyParamEntrySetHasBeenSet;
}

vector<string> ModifyParameterTemplateRequest::GetDeleteParamSet() const
{
    return m_deleteParamSet;
}

void ModifyParameterTemplateRequest::SetDeleteParamSet(const vector<string>& _deleteParamSet)
{
    m_deleteParamSet = _deleteParamSet;
    m_deleteParamSetHasBeenSet = true;
}

bool ModifyParameterTemplateRequest::DeleteParamSetHasBeenSet() const
{
    return m_deleteParamSetHasBeenSet;
}


