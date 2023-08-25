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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPAMetaResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPAMetaResourcesRequest::CreateDSPAMetaResourcesRequest() :
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_dspaIdHasBeenSet(false),
    m_updateStatusHasBeenSet(false),
    m_updateIdHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

string CreateDSPAMetaResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_updateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
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


string CreateDSPAMetaResourcesRequest::GetMetaType() const
{
    return m_metaType;
}

void CreateDSPAMetaResourcesRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CreateDSPAMetaResourcesRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPAMetaResourcesRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateDSPAMetaResourcesRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPAMetaResourcesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPAMetaResourcesRequest::GetUpdateStatus() const
{
    return m_updateStatus;
}

void CreateDSPAMetaResourcesRequest::SetUpdateStatus(const string& _updateStatus)
{
    m_updateStatus = _updateStatus;
    m_updateStatusHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::UpdateStatusHasBeenSet() const
{
    return m_updateStatusHasBeenSet;
}

string CreateDSPAMetaResourcesRequest::GetUpdateId() const
{
    return m_updateId;
}

void CreateDSPAMetaResourcesRequest::SetUpdateId(const string& _updateId)
{
    m_updateId = _updateId;
    m_updateIdHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::UpdateIdHasBeenSet() const
{
    return m_updateIdHasBeenSet;
}

vector<DspaUserResourceMeta> CreateDSPAMetaResourcesRequest::GetItems() const
{
    return m_items;
}

void CreateDSPAMetaResourcesRequest::SetItems(const vector<DspaUserResourceMeta>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CreateDSPAMetaResourcesRequest::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}


