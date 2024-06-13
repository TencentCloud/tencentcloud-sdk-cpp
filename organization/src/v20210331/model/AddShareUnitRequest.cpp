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

#include <tencentcloud/organization/v20210331/model/AddShareUnitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AddShareUnitRequest::AddShareUnitRequest() :
    m_nameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_shareScopeHasBeenSet(false)
{
}

string AddShareUnitRequest::ToJsonString() const
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_shareScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shareScope, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddShareUnitRequest::GetName() const
{
    return m_name;
}

void AddShareUnitRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddShareUnitRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddShareUnitRequest::GetArea() const
{
    return m_area;
}

void AddShareUnitRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AddShareUnitRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string AddShareUnitRequest::GetDescription() const
{
    return m_description;
}

void AddShareUnitRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddShareUnitRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t AddShareUnitRequest::GetShareScope() const
{
    return m_shareScope;
}

void AddShareUnitRequest::SetShareScope(const uint64_t& _shareScope)
{
    m_shareScope = _shareScope;
    m_shareScopeHasBeenSet = true;
}

bool AddShareUnitRequest::ShareScopeHasBeenSet() const
{
    return m_shareScopeHasBeenSet;
}


