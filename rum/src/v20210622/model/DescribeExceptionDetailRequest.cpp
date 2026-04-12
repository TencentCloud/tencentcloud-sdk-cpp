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

#include <tencentcloud/rum/v20210622/model/DescribeExceptionDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeExceptionDetailRequest::DescribeExceptionDetailRequest() :
    m_productIdHasBeenSet(false),
    m_clientIdentifyHasBeenSet(false),
    m_clusterStackTypeHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_startEventTimeHasBeenSet(false),
    m_endEventTimeHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeExceptionDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIdentify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientIdentify.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterStackType, allocator);
    }

    if (m_featureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feature.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_issueType, allocator);
    }

    if (m_startEventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartEventTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startEventTime, allocator);
    }

    if (m_endEventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndEventTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endEventTime, allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestHeader.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExceptionDetailRequest::GetProductId() const
{
    return m_productId;
}

void DescribeExceptionDetailRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeExceptionDetailRequest::GetClientIdentify() const
{
    return m_clientIdentify;
}

void DescribeExceptionDetailRequest::SetClientIdentify(const string& _clientIdentify)
{
    m_clientIdentify = _clientIdentify;
    m_clientIdentifyHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::ClientIdentifyHasBeenSet() const
{
    return m_clientIdentifyHasBeenSet;
}

int64_t DescribeExceptionDetailRequest::GetClusterStackType() const
{
    return m_clusterStackType;
}

void DescribeExceptionDetailRequest::SetClusterStackType(const int64_t& _clusterStackType)
{
    m_clusterStackType = _clusterStackType;
    m_clusterStackTypeHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::ClusterStackTypeHasBeenSet() const
{
    return m_clusterStackTypeHasBeenSet;
}

string DescribeExceptionDetailRequest::GetFeature() const
{
    return m_feature;
}

void DescribeExceptionDetailRequest::SetFeature(const string& _feature)
{
    m_feature = _feature;
    m_featureHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::FeatureHasBeenSet() const
{
    return m_featureHasBeenSet;
}

int64_t DescribeExceptionDetailRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeExceptionDetailRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

int64_t DescribeExceptionDetailRequest::GetStartEventTime() const
{
    return m_startEventTime;
}

void DescribeExceptionDetailRequest::SetStartEventTime(const int64_t& _startEventTime)
{
    m_startEventTime = _startEventTime;
    m_startEventTimeHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::StartEventTimeHasBeenSet() const
{
    return m_startEventTimeHasBeenSet;
}

int64_t DescribeExceptionDetailRequest::GetEndEventTime() const
{
    return m_endEventTime;
}

void DescribeExceptionDetailRequest::SetEndEventTime(const int64_t& _endEventTime)
{
    m_endEventTime = _endEventTime;
    m_endEventTimeHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::EndEventTimeHasBeenSet() const
{
    return m_endEventTimeHasBeenSet;
}

string DescribeExceptionDetailRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeExceptionDetailRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeExceptionDetailRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeExceptionDetailRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeExceptionDetailRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


