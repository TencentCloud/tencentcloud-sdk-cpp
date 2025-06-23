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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeVideosKeywordsAnalyzerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeVideosKeywordsAnalyzerRequest::InvokeVideosKeywordsAnalyzerRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_keywordsMaxNumHasBeenSet(false)
{
}

string InvokeVideosKeywordsAnalyzerRequest::ToJsonString() const
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

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_keywordsMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordsMaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keywordsMaxNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeVideosKeywordsAnalyzerRequest::GetProductId() const
{
    return m_productId;
}

void InvokeVideosKeywordsAnalyzerRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InvokeVideosKeywordsAnalyzerRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InvokeVideosKeywordsAnalyzerRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InvokeVideosKeywordsAnalyzerRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InvokeVideosKeywordsAnalyzerRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t InvokeVideosKeywordsAnalyzerRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void InvokeVideosKeywordsAnalyzerRequest::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool InvokeVideosKeywordsAnalyzerRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t InvokeVideosKeywordsAnalyzerRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void InvokeVideosKeywordsAnalyzerRequest::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool InvokeVideosKeywordsAnalyzerRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

uint64_t InvokeVideosKeywordsAnalyzerRequest::GetKeywordsMaxNum() const
{
    return m_keywordsMaxNum;
}

void InvokeVideosKeywordsAnalyzerRequest::SetKeywordsMaxNum(const uint64_t& _keywordsMaxNum)
{
    m_keywordsMaxNum = _keywordsMaxNum;
    m_keywordsMaxNumHasBeenSet = true;
}

bool InvokeVideosKeywordsAnalyzerRequest::KeywordsMaxNumHasBeenSet() const
{
    return m_keywordsMaxNumHasBeenSet;
}


