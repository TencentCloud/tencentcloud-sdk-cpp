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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPADbMetaResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPADbMetaResourcesRequest::CreateDSPADbMetaResourcesRequest() :
    m_dspaIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_updateStatusHasBeenSet(false),
    m_updateIdHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_cloudResourceItemsHasBeenSet(false)
{
}

string CreateDSPADbMetaResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_cloudResourceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudResourceItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudResourceItems.begin(); itr != m_cloudResourceItems.end(); ++itr, ++i)
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


string CreateDSPADbMetaResourcesRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPADbMetaResourcesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPADbMetaResourcesRequest::GetMetaType() const
{
    return m_metaType;
}

void CreateDSPADbMetaResourcesRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CreateDSPADbMetaResourcesRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPADbMetaResourcesRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateDSPADbMetaResourcesRequest::GetUpdateStatus() const
{
    return m_updateStatus;
}

void CreateDSPADbMetaResourcesRequest::SetUpdateStatus(const string& _updateStatus)
{
    m_updateStatus = _updateStatus;
    m_updateStatusHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::UpdateStatusHasBeenSet() const
{
    return m_updateStatusHasBeenSet;
}

string CreateDSPADbMetaResourcesRequest::GetUpdateId() const
{
    return m_updateId;
}

void CreateDSPADbMetaResourcesRequest::SetUpdateId(const string& _updateId)
{
    m_updateId = _updateId;
    m_updateIdHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::UpdateIdHasBeenSet() const
{
    return m_updateIdHasBeenSet;
}

vector<DspaCloudResourceMeta> CreateDSPADbMetaResourcesRequest::GetItems() const
{
    return m_items;
}

void CreateDSPADbMetaResourcesRequest::SetItems(const vector<DspaCloudResourceMeta>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

vector<CloudResourceItem> CreateDSPADbMetaResourcesRequest::GetCloudResourceItems() const
{
    return m_cloudResourceItems;
}

void CreateDSPADbMetaResourcesRequest::SetCloudResourceItems(const vector<CloudResourceItem>& _cloudResourceItems)
{
    m_cloudResourceItems = _cloudResourceItems;
    m_cloudResourceItemsHasBeenSet = true;
}

bool CreateDSPADbMetaResourcesRequest::CloudResourceItemsHasBeenSet() const
{
    return m_cloudResourceItemsHasBeenSet;
}


