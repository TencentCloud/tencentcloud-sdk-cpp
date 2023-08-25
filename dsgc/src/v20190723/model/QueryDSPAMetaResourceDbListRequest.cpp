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

#include <tencentcloud/dsgc/v20190723/model/QueryDSPAMetaResourceDbListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

QueryDSPAMetaResourceDbListRequest::QueryDSPAMetaResourceDbListRequest() :
    m_dspaIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_metaTypeHasBeenSet(false)
{
}

string QueryDSPAMetaResourceDbListRequest::ToJsonString() const
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

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryDSPAMetaResourceDbListRequest::GetDspaId() const
{
    return m_dspaId;
}

void QueryDSPAMetaResourceDbListRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool QueryDSPAMetaResourceDbListRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string QueryDSPAMetaResourceDbListRequest::GetResourceId() const
{
    return m_resourceId;
}

void QueryDSPAMetaResourceDbListRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool QueryDSPAMetaResourceDbListRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string QueryDSPAMetaResourceDbListRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void QueryDSPAMetaResourceDbListRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool QueryDSPAMetaResourceDbListRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string QueryDSPAMetaResourceDbListRequest::GetMetaType() const
{
    return m_metaType;
}

void QueryDSPAMetaResourceDbListRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool QueryDSPAMetaResourceDbListRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}


