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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPACosMetaResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPACosMetaResourcesRequest::CreateDSPACosMetaResourcesRequest() :
    m_dspaIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_bucketsHasBeenSet(false),
    m_cosBucketItemsHasBeenSet(false)
{
}

string CreateDSPACosMetaResourcesRequest::ToJsonString() const
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

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buckets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_buckets.begin(); itr != m_buckets.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cosBucketItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cosBucketItems.begin(); itr != m_cosBucketItems.end(); ++itr, ++i)
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


string CreateDSPACosMetaResourcesRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPACosMetaResourcesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPACosMetaResourcesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPACosMetaResourcesRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPACosMetaResourcesRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPACosMetaResourcesRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<string> CreateDSPACosMetaResourcesRequest::GetBuckets() const
{
    return m_buckets;
}

void CreateDSPACosMetaResourcesRequest::SetBuckets(const vector<string>& _buckets)
{
    m_buckets = _buckets;
    m_bucketsHasBeenSet = true;
}

bool CreateDSPACosMetaResourcesRequest::BucketsHasBeenSet() const
{
    return m_bucketsHasBeenSet;
}

vector<CosBucketItem> CreateDSPACosMetaResourcesRequest::GetCosBucketItems() const
{
    return m_cosBucketItems;
}

void CreateDSPACosMetaResourcesRequest::SetCosBucketItems(const vector<CosBucketItem>& _cosBucketItems)
{
    m_cosBucketItems = _cosBucketItems;
    m_cosBucketItemsHasBeenSet = true;
}

bool CreateDSPACosMetaResourcesRequest::CosBucketItemsHasBeenSet() const
{
    return m_cosBucketItemsHasBeenSet;
}


