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

#include <tencentcloud/rum/v20210622/model/DescribeLagANRProblemAccountDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeLagANRProblemAccountDetailRequest::DescribeLagANRProblemAccountDetailRequest() :
    m_productIdHasBeenSet(false),
    m_clientIdentifyHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_startEventTimeHasBeenSet(false),
    m_endEventTimeHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeLagANRProblemAccountDetailRequest::ToJsonString() const
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

    if (m_featureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feature.c_str(), allocator).Move(), allocator);
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


string DescribeLagANRProblemAccountDetailRequest::GetProductId() const
{
    return m_productId;
}

void DescribeLagANRProblemAccountDetailRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeLagANRProblemAccountDetailRequest::GetClientIdentify() const
{
    return m_clientIdentify;
}

void DescribeLagANRProblemAccountDetailRequest::SetClientIdentify(const string& _clientIdentify)
{
    m_clientIdentify = _clientIdentify;
    m_clientIdentifyHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::ClientIdentifyHasBeenSet() const
{
    return m_clientIdentifyHasBeenSet;
}

string DescribeLagANRProblemAccountDetailRequest::GetFeature() const
{
    return m_feature;
}

void DescribeLagANRProblemAccountDetailRequest::SetFeature(const string& _feature)
{
    m_feature = _feature;
    m_featureHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::FeatureHasBeenSet() const
{
    return m_featureHasBeenSet;
}

int64_t DescribeLagANRProblemAccountDetailRequest::GetStartEventTime() const
{
    return m_startEventTime;
}

void DescribeLagANRProblemAccountDetailRequest::SetStartEventTime(const int64_t& _startEventTime)
{
    m_startEventTime = _startEventTime;
    m_startEventTimeHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::StartEventTimeHasBeenSet() const
{
    return m_startEventTimeHasBeenSet;
}

int64_t DescribeLagANRProblemAccountDetailRequest::GetEndEventTime() const
{
    return m_endEventTime;
}

void DescribeLagANRProblemAccountDetailRequest::SetEndEventTime(const int64_t& _endEventTime)
{
    m_endEventTime = _endEventTime;
    m_endEventTimeHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::EndEventTimeHasBeenSet() const
{
    return m_endEventTimeHasBeenSet;
}

string DescribeLagANRProblemAccountDetailRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeLagANRProblemAccountDetailRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeLagANRProblemAccountDetailRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeLagANRProblemAccountDetailRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeLagANRProblemAccountDetailRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


