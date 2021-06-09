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

#include <tencentcloud/solar/v20181011/model/ReplenishProjectStockRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ReplenishProjectStockRequest::ReplenishProjectStockRequest() :
    m_subProjectIdHasBeenSet(false),
    m_prizeIdHasBeenSet(false),
    m_prizeNumHasBeenSet(false),
    m_poolIndexHasBeenSet(false),
    m_poolNameHasBeenSet(false)
{
}

string ReplenishProjectStockRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_prizeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrizeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prizeId.c_str(), allocator).Move(), allocator);
    }

    if (m_prizeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrizeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_prizeNum, allocator);
    }

    if (m_poolIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_poolIndex, allocator);
    }

    if (m_poolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_poolName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplenishProjectStockRequest::GetSubProjectId() const
{
    return m_subProjectId;
}

void ReplenishProjectStockRequest::SetSubProjectId(const string& _subProjectId)
{
    m_subProjectId = _subProjectId;
    m_subProjectIdHasBeenSet = true;
}

bool ReplenishProjectStockRequest::SubProjectIdHasBeenSet() const
{
    return m_subProjectIdHasBeenSet;
}

string ReplenishProjectStockRequest::GetPrizeId() const
{
    return m_prizeId;
}

void ReplenishProjectStockRequest::SetPrizeId(const string& _prizeId)
{
    m_prizeId = _prizeId;
    m_prizeIdHasBeenSet = true;
}

bool ReplenishProjectStockRequest::PrizeIdHasBeenSet() const
{
    return m_prizeIdHasBeenSet;
}

uint64_t ReplenishProjectStockRequest::GetPrizeNum() const
{
    return m_prizeNum;
}

void ReplenishProjectStockRequest::SetPrizeNum(const uint64_t& _prizeNum)
{
    m_prizeNum = _prizeNum;
    m_prizeNumHasBeenSet = true;
}

bool ReplenishProjectStockRequest::PrizeNumHasBeenSet() const
{
    return m_prizeNumHasBeenSet;
}

uint64_t ReplenishProjectStockRequest::GetPoolIndex() const
{
    return m_poolIndex;
}

void ReplenishProjectStockRequest::SetPoolIndex(const uint64_t& _poolIndex)
{
    m_poolIndex = _poolIndex;
    m_poolIndexHasBeenSet = true;
}

bool ReplenishProjectStockRequest::PoolIndexHasBeenSet() const
{
    return m_poolIndexHasBeenSet;
}

string ReplenishProjectStockRequest::GetPoolName() const
{
    return m_poolName;
}

void ReplenishProjectStockRequest::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool ReplenishProjectStockRequest::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}


