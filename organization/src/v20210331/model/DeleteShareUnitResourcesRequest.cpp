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

#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DeleteShareUnitResourcesRequest::DeleteShareUnitResourcesRequest() :
    m_unitIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

string DeleteShareUnitResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
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


string DeleteShareUnitResourcesRequest::GetUnitId() const
{
    return m_unitId;
}

void DeleteShareUnitResourcesRequest::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool DeleteShareUnitResourcesRequest::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string DeleteShareUnitResourcesRequest::GetArea() const
{
    return m_area;
}

void DeleteShareUnitResourcesRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DeleteShareUnitResourcesRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DeleteShareUnitResourcesRequest::GetType() const
{
    return m_type;
}

void DeleteShareUnitResourcesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteShareUnitResourcesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<ShareResource> DeleteShareUnitResourcesRequest::GetResources() const
{
    return m_resources;
}

void DeleteShareUnitResourcesRequest::SetResources(const vector<ShareResource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool DeleteShareUnitResourcesRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}


