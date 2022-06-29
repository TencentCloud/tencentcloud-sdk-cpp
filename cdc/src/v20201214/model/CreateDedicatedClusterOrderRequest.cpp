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

#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

CreateDedicatedClusterOrderRequest::CreateDedicatedClusterOrderRequest() :
    m_dedicatedClusterIdHasBeenSet(false),
    m_dedicatedClusterTypesHasBeenSet(false),
    m_cosInfoHasBeenSet(false),
    m_cbsInfoHasBeenSet(false),
    m_purchaseSourceHasBeenSet(false),
    m_dedicatedClusterOrderIdHasBeenSet(false)
{
}

string CreateDedicatedClusterOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dedicatedClusterTypes.begin(); itr != m_dedicatedClusterTypes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cbsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cbsInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_purchaseSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchaseSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_purchaseSource.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterOrderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDedicatedClusterOrderRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void CreateDedicatedClusterOrderRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

vector<DedicatedClusterTypeInfo> CreateDedicatedClusterOrderRequest::GetDedicatedClusterTypes() const
{
    return m_dedicatedClusterTypes;
}

void CreateDedicatedClusterOrderRequest::SetDedicatedClusterTypes(const vector<DedicatedClusterTypeInfo>& _dedicatedClusterTypes)
{
    m_dedicatedClusterTypes = _dedicatedClusterTypes;
    m_dedicatedClusterTypesHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::DedicatedClusterTypesHasBeenSet() const
{
    return m_dedicatedClusterTypesHasBeenSet;
}

CosInfo CreateDedicatedClusterOrderRequest::GetCosInfo() const
{
    return m_cosInfo;
}

void CreateDedicatedClusterOrderRequest::SetCosInfo(const CosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}

CbsInfo CreateDedicatedClusterOrderRequest::GetCbsInfo() const
{
    return m_cbsInfo;
}

void CreateDedicatedClusterOrderRequest::SetCbsInfo(const CbsInfo& _cbsInfo)
{
    m_cbsInfo = _cbsInfo;
    m_cbsInfoHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::CbsInfoHasBeenSet() const
{
    return m_cbsInfoHasBeenSet;
}

string CreateDedicatedClusterOrderRequest::GetPurchaseSource() const
{
    return m_purchaseSource;
}

void CreateDedicatedClusterOrderRequest::SetPurchaseSource(const string& _purchaseSource)
{
    m_purchaseSource = _purchaseSource;
    m_purchaseSourceHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::PurchaseSourceHasBeenSet() const
{
    return m_purchaseSourceHasBeenSet;
}

string CreateDedicatedClusterOrderRequest::GetDedicatedClusterOrderId() const
{
    return m_dedicatedClusterOrderId;
}

void CreateDedicatedClusterOrderRequest::SetDedicatedClusterOrderId(const string& _dedicatedClusterOrderId)
{
    m_dedicatedClusterOrderId = _dedicatedClusterOrderId;
    m_dedicatedClusterOrderIdHasBeenSet = true;
}

bool CreateDedicatedClusterOrderRequest::DedicatedClusterOrderIdHasBeenSet() const
{
    return m_dedicatedClusterOrderIdHasBeenSet;
}


