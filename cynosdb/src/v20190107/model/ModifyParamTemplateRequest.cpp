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

#include <tencentcloud/cynosdb/v20190107/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyParamTemplateRequest::ModifyParamTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_paramListHasBeenSet(false)
{
}

string ModifyParamTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
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

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyParamTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyParamTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyParamTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyParamTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyParamTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyParamTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyParamTemplateRequest::GetTemplateDescription() const
{
    return m_templateDescription;
}

void ModifyParamTemplateRequest::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool ModifyParamTemplateRequest::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

vector<ModifyParamItem> ModifyParamTemplateRequest::GetParamList() const
{
    return m_paramList;
}

void ModifyParamTemplateRequest::SetParamList(const vector<ModifyParamItem>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool ModifyParamTemplateRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}


