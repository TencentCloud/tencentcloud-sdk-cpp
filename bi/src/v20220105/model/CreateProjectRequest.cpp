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

#include <tencentcloud/bi/v20220105/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_nameHasBeenSet(false),
    m_colorCodeHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_markHasBeenSet(false),
    m_isApplyHasBeenSet(false),
    m_defaultPanelTypeHasBeenSet(false),
    m_managePlatformHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_colorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_colorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mark.c_str(), allocator).Move(), allocator);
    }

    if (m_isApplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsApply";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isApply, allocator);
    }

    if (m_defaultPanelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultPanelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultPanelType, allocator);
    }

    if (m_managePlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagePlatform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managePlatform.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProjectRequest::GetName() const
{
    return m_name;
}

void CreateProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateProjectRequest::GetColorCode() const
{
    return m_colorCode;
}

void CreateProjectRequest::SetColorCode(const string& _colorCode)
{
    m_colorCode = _colorCode;
    m_colorCodeHasBeenSet = true;
}

bool CreateProjectRequest::ColorCodeHasBeenSet() const
{
    return m_colorCodeHasBeenSet;
}

string CreateProjectRequest::GetLogo() const
{
    return m_logo;
}

void CreateProjectRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool CreateProjectRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string CreateProjectRequest::GetMark() const
{
    return m_mark;
}

void CreateProjectRequest::SetMark(const string& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool CreateProjectRequest::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

bool CreateProjectRequest::GetIsApply() const
{
    return m_isApply;
}

void CreateProjectRequest::SetIsApply(const bool& _isApply)
{
    m_isApply = _isApply;
    m_isApplyHasBeenSet = true;
}

bool CreateProjectRequest::IsApplyHasBeenSet() const
{
    return m_isApplyHasBeenSet;
}

int64_t CreateProjectRequest::GetDefaultPanelType() const
{
    return m_defaultPanelType;
}

void CreateProjectRequest::SetDefaultPanelType(const int64_t& _defaultPanelType)
{
    m_defaultPanelType = _defaultPanelType;
    m_defaultPanelTypeHasBeenSet = true;
}

bool CreateProjectRequest::DefaultPanelTypeHasBeenSet() const
{
    return m_defaultPanelTypeHasBeenSet;
}

string CreateProjectRequest::GetManagePlatform() const
{
    return m_managePlatform;
}

void CreateProjectRequest::SetManagePlatform(const string& _managePlatform)
{
    m_managePlatform = _managePlatform;
    m_managePlatformHasBeenSet = true;
}

bool CreateProjectRequest::ManagePlatformHasBeenSet() const
{
    return m_managePlatformHasBeenSet;
}


