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

#include <tencentcloud/cynosdb/v20190107/model/InquirePriceMultiSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InquirePriceMultiSpecRequest::InquirePriceMultiSpecRequest() :
    m_zoneHasBeenSet(false),
    m_instancePayModeHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_goodsSpecsHasBeenSet(false)
{
}

string InquirePriceMultiSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instancePayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storagePayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsSpecs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_goodsSpecs.begin(); itr != m_goodsSpecs.end(); ++itr, ++i)
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


string InquirePriceMultiSpecRequest::GetZone() const
{
    return m_zone;
}

void InquirePriceMultiSpecRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquirePriceMultiSpecRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InquirePriceMultiSpecRequest::GetInstancePayMode() const
{
    return m_instancePayMode;
}

void InquirePriceMultiSpecRequest::SetInstancePayMode(const string& _instancePayMode)
{
    m_instancePayMode = _instancePayMode;
    m_instancePayModeHasBeenSet = true;
}

bool InquirePriceMultiSpecRequest::InstancePayModeHasBeenSet() const
{
    return m_instancePayModeHasBeenSet;
}

string InquirePriceMultiSpecRequest::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void InquirePriceMultiSpecRequest::SetStoragePayMode(const string& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool InquirePriceMultiSpecRequest::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

vector<GoodsSpec> InquirePriceMultiSpecRequest::GetGoodsSpecs() const
{
    return m_goodsSpecs;
}

void InquirePriceMultiSpecRequest::SetGoodsSpecs(const vector<GoodsSpec>& _goodsSpecs)
{
    m_goodsSpecs = _goodsSpecs;
    m_goodsSpecsHasBeenSet = true;
}

bool InquirePriceMultiSpecRequest::GoodsSpecsHasBeenSet() const
{
    return m_goodsSpecsHasBeenSet;
}


