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

#include <tencentcloud/bi/v20220105/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_colorCodeHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_markHasBeenSet(false),
    m_isApplyHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_defaultPanelTypeHasBeenSet(false),
    m_panelScopeHasBeenSet(false),
    m_managePlatformHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_seed.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultPanelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultPanelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultPanelType, allocator);
    }

    if (m_panelScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PanelScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_panelScope.c_str(), allocator).Move(), allocator);
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


uint64_t ModifyProjectRequest::GetId() const
{
    return m_id;
}

void ModifyProjectRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyProjectRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyProjectRequest::GetName() const
{
    return m_name;
}

void ModifyProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyProjectRequest::GetColorCode() const
{
    return m_colorCode;
}

void ModifyProjectRequest::SetColorCode(const string& _colorCode)
{
    m_colorCode = _colorCode;
    m_colorCodeHasBeenSet = true;
}

bool ModifyProjectRequest::ColorCodeHasBeenSet() const
{
    return m_colorCodeHasBeenSet;
}

string ModifyProjectRequest::GetLogo() const
{
    return m_logo;
}

void ModifyProjectRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ModifyProjectRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string ModifyProjectRequest::GetMark() const
{
    return m_mark;
}

void ModifyProjectRequest::SetMark(const string& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool ModifyProjectRequest::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

bool ModifyProjectRequest::GetIsApply() const
{
    return m_isApply;
}

void ModifyProjectRequest::SetIsApply(const bool& _isApply)
{
    m_isApply = _isApply;
    m_isApplyHasBeenSet = true;
}

bool ModifyProjectRequest::IsApplyHasBeenSet() const
{
    return m_isApplyHasBeenSet;
}

string ModifyProjectRequest::GetSeed() const
{
    return m_seed;
}

void ModifyProjectRequest::SetSeed(const string& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool ModifyProjectRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

int64_t ModifyProjectRequest::GetDefaultPanelType() const
{
    return m_defaultPanelType;
}

void ModifyProjectRequest::SetDefaultPanelType(const int64_t& _defaultPanelType)
{
    m_defaultPanelType = _defaultPanelType;
    m_defaultPanelTypeHasBeenSet = true;
}

bool ModifyProjectRequest::DefaultPanelTypeHasBeenSet() const
{
    return m_defaultPanelTypeHasBeenSet;
}

string ModifyProjectRequest::GetPanelScope() const
{
    return m_panelScope;
}

void ModifyProjectRequest::SetPanelScope(const string& _panelScope)
{
    m_panelScope = _panelScope;
    m_panelScopeHasBeenSet = true;
}

bool ModifyProjectRequest::PanelScopeHasBeenSet() const
{
    return m_panelScopeHasBeenSet;
}

string ModifyProjectRequest::GetManagePlatform() const
{
    return m_managePlatform;
}

void ModifyProjectRequest::SetManagePlatform(const string& _managePlatform)
{
    m_managePlatform = _managePlatform;
    m_managePlatformHasBeenSet = true;
}

bool ModifyProjectRequest::ManagePlatformHasBeenSet() const
{
    return m_managePlatformHasBeenSet;
}


