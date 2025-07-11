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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeExternalSourceAIServiceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeExternalSourceAIServiceTaskRequest::InvokeExternalSourceAIServiceTaskRequest() :
    m_productIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_videoURLsHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_rOIHasBeenSet(false)
{
}

string InvokeExternalSourceAIServiceTaskRequest::ToJsonString() const
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

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_videoURLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURLs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoURLs.begin(); itr != m_videoURLs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_rOIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rOI.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeExternalSourceAIServiceTaskRequest::GetProductId() const
{
    return m_productId;
}

void InvokeExternalSourceAIServiceTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InvokeExternalSourceAIServiceTaskRequest::GetServiceType() const
{
    return m_serviceType;
}

void InvokeExternalSourceAIServiceTaskRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<string> InvokeExternalSourceAIServiceTaskRequest::GetVideoURLs() const
{
    return m_videoURLs;
}

void InvokeExternalSourceAIServiceTaskRequest::SetVideoURLs(const vector<string>& _videoURLs)
{
    m_videoURLs = _videoURLs;
    m_videoURLsHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::VideoURLsHasBeenSet() const
{
    return m_videoURLsHasBeenSet;
}

string InvokeExternalSourceAIServiceTaskRequest::GetCustomId() const
{
    return m_customId;
}

void InvokeExternalSourceAIServiceTaskRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

string InvokeExternalSourceAIServiceTaskRequest::GetConfig() const
{
    return m_config;
}

void InvokeExternalSourceAIServiceTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string InvokeExternalSourceAIServiceTaskRequest::GetROI() const
{
    return m_rOI;
}

void InvokeExternalSourceAIServiceTaskRequest::SetROI(const string& _rOI)
{
    m_rOI = _rOI;
    m_rOIHasBeenSet = true;
}

bool InvokeExternalSourceAIServiceTaskRequest::ROIHasBeenSet() const
{
    return m_rOIHasBeenSet;
}


