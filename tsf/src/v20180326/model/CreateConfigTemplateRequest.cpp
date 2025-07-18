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

#include <tencentcloud/tsf/v20180326/model/CreateConfigTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateConfigTemplateRequest::CreateConfigTemplateRequest() :
    m_configTemplateNameHasBeenSet(false),
    m_configTemplateTypeHasBeenSet(false),
    m_configTemplateValueHasBeenSet(false),
    m_configTemplateDescHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateConfigTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configTemplateType.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configTemplateValue.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configTemplateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConfigTemplateRequest::GetConfigTemplateName() const
{
    return m_configTemplateName;
}

void CreateConfigTemplateRequest::SetConfigTemplateName(const string& _configTemplateName)
{
    m_configTemplateName = _configTemplateName;
    m_configTemplateNameHasBeenSet = true;
}

bool CreateConfigTemplateRequest::ConfigTemplateNameHasBeenSet() const
{
    return m_configTemplateNameHasBeenSet;
}

string CreateConfigTemplateRequest::GetConfigTemplateType() const
{
    return m_configTemplateType;
}

void CreateConfigTemplateRequest::SetConfigTemplateType(const string& _configTemplateType)
{
    m_configTemplateType = _configTemplateType;
    m_configTemplateTypeHasBeenSet = true;
}

bool CreateConfigTemplateRequest::ConfigTemplateTypeHasBeenSet() const
{
    return m_configTemplateTypeHasBeenSet;
}

string CreateConfigTemplateRequest::GetConfigTemplateValue() const
{
    return m_configTemplateValue;
}

void CreateConfigTemplateRequest::SetConfigTemplateValue(const string& _configTemplateValue)
{
    m_configTemplateValue = _configTemplateValue;
    m_configTemplateValueHasBeenSet = true;
}

bool CreateConfigTemplateRequest::ConfigTemplateValueHasBeenSet() const
{
    return m_configTemplateValueHasBeenSet;
}

string CreateConfigTemplateRequest::GetConfigTemplateDesc() const
{
    return m_configTemplateDesc;
}

void CreateConfigTemplateRequest::SetConfigTemplateDesc(const string& _configTemplateDesc)
{
    m_configTemplateDesc = _configTemplateDesc;
    m_configTemplateDescHasBeenSet = true;
}

bool CreateConfigTemplateRequest::ConfigTemplateDescHasBeenSet() const
{
    return m_configTemplateDescHasBeenSet;
}

vector<string> CreateConfigTemplateRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateConfigTemplateRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateConfigTemplateRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


