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

#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyGlobalAcceleratorRequest::ModifyGlobalAcceleratorRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_crossBorderTypeHasBeenSet(false),
    m_crossBorderPromiseFlagHasBeenSet(false)
{
}

string ModifyGlobalAcceleratorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBorderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBorderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossBorderType.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBorderPromiseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBorderPromiseFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossBorderPromiseFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGlobalAcceleratorRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyGlobalAcceleratorRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyGlobalAcceleratorRequest::GetName() const
{
    return m_name;
}

void ModifyGlobalAcceleratorRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyGlobalAcceleratorRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyGlobalAcceleratorRequest::GetDescription() const
{
    return m_description;
}

void ModifyGlobalAcceleratorRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyGlobalAcceleratorRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyGlobalAcceleratorRequest::GetCrossBorderType() const
{
    return m_crossBorderType;
}

void ModifyGlobalAcceleratorRequest::SetCrossBorderType(const string& _crossBorderType)
{
    m_crossBorderType = _crossBorderType;
    m_crossBorderTypeHasBeenSet = true;
}

bool ModifyGlobalAcceleratorRequest::CrossBorderTypeHasBeenSet() const
{
    return m_crossBorderTypeHasBeenSet;
}

bool ModifyGlobalAcceleratorRequest::GetCrossBorderPromiseFlag() const
{
    return m_crossBorderPromiseFlag;
}

void ModifyGlobalAcceleratorRequest::SetCrossBorderPromiseFlag(const bool& _crossBorderPromiseFlag)
{
    m_crossBorderPromiseFlag = _crossBorderPromiseFlag;
    m_crossBorderPromiseFlagHasBeenSet = true;
}

bool ModifyGlobalAcceleratorRequest::CrossBorderPromiseFlagHasBeenSet() const
{
    return m_crossBorderPromiseFlagHasBeenSet;
}


