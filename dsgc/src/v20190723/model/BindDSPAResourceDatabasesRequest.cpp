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

#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceDatabasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

BindDSPAResourceDatabasesRequest::BindDSPAResourceDatabasesRequest() :
    m_dspaIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_bindDbItemsHasBeenSet(false),
    m_unbindDbItemsHasBeenSet(false)
{
}

string BindDSPAResourceDatabasesRequest::ToJsonString() const
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDbItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDbItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindDbItems.begin(); itr != m_bindDbItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unbindDbItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindDbItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unbindDbItems.begin(); itr != m_unbindDbItems.end(); ++itr, ++i)
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


string BindDSPAResourceDatabasesRequest::GetDspaId() const
{
    return m_dspaId;
}

void BindDSPAResourceDatabasesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool BindDSPAResourceDatabasesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string BindDSPAResourceDatabasesRequest::GetResourceId() const
{
    return m_resourceId;
}

void BindDSPAResourceDatabasesRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BindDSPAResourceDatabasesRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BindDSPAResourceDatabasesRequest::GetMetaType() const
{
    return m_metaType;
}

void BindDSPAResourceDatabasesRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool BindDSPAResourceDatabasesRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

vector<DbResourceItem> BindDSPAResourceDatabasesRequest::GetBindDbItems() const
{
    return m_bindDbItems;
}

void BindDSPAResourceDatabasesRequest::SetBindDbItems(const vector<DbResourceItem>& _bindDbItems)
{
    m_bindDbItems = _bindDbItems;
    m_bindDbItemsHasBeenSet = true;
}

bool BindDSPAResourceDatabasesRequest::BindDbItemsHasBeenSet() const
{
    return m_bindDbItemsHasBeenSet;
}

vector<DbResourceItem> BindDSPAResourceDatabasesRequest::GetUnbindDbItems() const
{
    return m_unbindDbItems;
}

void BindDSPAResourceDatabasesRequest::SetUnbindDbItems(const vector<DbResourceItem>& _unbindDbItems)
{
    m_unbindDbItems = _unbindDbItems;
    m_unbindDbItemsHasBeenSet = true;
}

bool BindDSPAResourceDatabasesRequest::UnbindDbItemsHasBeenSet() const
{
    return m_unbindDbItemsHasBeenSet;
}


