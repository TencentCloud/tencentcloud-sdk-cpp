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

#include <tencentcloud/ame/v20190916/model/DescribeMusicSaleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeMusicSaleStatusRequest::DescribeMusicSaleStatusRequest() :
    m_musicIdsHasBeenSet(false),
    m_purchaseTypeHasBeenSet(false)
{
}

string DescribeMusicSaleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_musicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_musicIds.begin(); itr != m_musicIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_purchaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_purchaseType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeMusicSaleStatusRequest::GetMusicIds() const
{
    return m_musicIds;
}

void DescribeMusicSaleStatusRequest::SetMusicIds(const vector<string>& _musicIds)
{
    m_musicIds = _musicIds;
    m_musicIdsHasBeenSet = true;
}

bool DescribeMusicSaleStatusRequest::MusicIdsHasBeenSet() const
{
    return m_musicIdsHasBeenSet;
}

int64_t DescribeMusicSaleStatusRequest::GetPurchaseType() const
{
    return m_purchaseType;
}

void DescribeMusicSaleStatusRequest::SetPurchaseType(const int64_t& _purchaseType)
{
    m_purchaseType = _purchaseType;
    m_purchaseTypeHasBeenSet = true;
}

bool DescribeMusicSaleStatusRequest::PurchaseTypeHasBeenSet() const
{
    return m_purchaseTypeHasBeenSet;
}


