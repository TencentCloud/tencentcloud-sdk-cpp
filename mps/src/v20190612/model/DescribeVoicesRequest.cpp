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

#include <tencentcloud/mps/v20190612/model/DescribeVoicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeVoicesRequest::DescribeVoicesRequest() :
    m_voiceTypeHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string DescribeVoicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVoicesRequest::GetVoiceType() const
{
    return m_voiceType;
}

void DescribeVoicesRequest::SetVoiceType(const string& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool DescribeVoicesRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string DescribeVoicesRequest::GetExtParam() const
{
    return m_extParam;
}

void DescribeVoicesRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool DescribeVoicesRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


