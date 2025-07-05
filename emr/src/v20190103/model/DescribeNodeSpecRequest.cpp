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

#include <tencentcloud/emr/v20190103/model/DescribeNodeSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeNodeSpecRequest::DescribeNodeSpecRequest() :
    m_zoneIdHasBeenSet(false),
    m_cvmPayModeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_resourceBaseTypeHasBeenSet(false),
    m_computeResourceIdHasBeenSet(false)
{
}

string DescribeNodeSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_cvmPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cvmPayMode, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tradeType, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceBaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceBaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeNodeSpecRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeNodeSpecRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeNodeSpecRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t DescribeNodeSpecRequest::GetCvmPayMode() const
{
    return m_cvmPayMode;
}

void DescribeNodeSpecRequest::SetCvmPayMode(const uint64_t& _cvmPayMode)
{
    m_cvmPayMode = _cvmPayMode;
    m_cvmPayModeHasBeenSet = true;
}

bool DescribeNodeSpecRequest::CvmPayModeHasBeenSet() const
{
    return m_cvmPayModeHasBeenSet;
}

string DescribeNodeSpecRequest::GetNodeType() const
{
    return m_nodeType;
}

void DescribeNodeSpecRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeNodeSpecRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t DescribeNodeSpecRequest::GetTradeType() const
{
    return m_tradeType;
}

void DescribeNodeSpecRequest::SetTradeType(const uint64_t& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool DescribeNodeSpecRequest::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

uint64_t DescribeNodeSpecRequest::GetProductId() const
{
    return m_productId;
}

void DescribeNodeSpecRequest::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeNodeSpecRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeNodeSpecRequest::GetSceneName() const
{
    return m_sceneName;
}

void DescribeNodeSpecRequest::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool DescribeNodeSpecRequest::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

string DescribeNodeSpecRequest::GetResourceBaseType() const
{
    return m_resourceBaseType;
}

void DescribeNodeSpecRequest::SetResourceBaseType(const string& _resourceBaseType)
{
    m_resourceBaseType = _resourceBaseType;
    m_resourceBaseTypeHasBeenSet = true;
}

bool DescribeNodeSpecRequest::ResourceBaseTypeHasBeenSet() const
{
    return m_resourceBaseTypeHasBeenSet;
}

string DescribeNodeSpecRequest::GetComputeResourceId() const
{
    return m_computeResourceId;
}

void DescribeNodeSpecRequest::SetComputeResourceId(const string& _computeResourceId)
{
    m_computeResourceId = _computeResourceId;
    m_computeResourceIdHasBeenSet = true;
}

bool DescribeNodeSpecRequest::ComputeResourceIdHasBeenSet() const
{
    return m_computeResourceIdHasBeenSet;
}


