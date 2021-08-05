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

#include <tencentcloud/cpdp/v20190820/model/CreatePayMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreatePayMerchantRequest::CreatePayMerchantRequest() :
    m_platformCodeHasBeenSet(false),
    m_channelMerchantNoHasBeenSet(false),
    m_channelCheckFlagHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_businessPayFlagHasBeenSet(false)
{
}

string CreatePayMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformCode.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelCheckFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCheckFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelCheckFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessPayFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessPayFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessPayFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePayMerchantRequest::GetPlatformCode() const
{
    return m_platformCode;
}

void CreatePayMerchantRequest::SetPlatformCode(const string& _platformCode)
{
    m_platformCode = _platformCode;
    m_platformCodeHasBeenSet = true;
}

bool CreatePayMerchantRequest::PlatformCodeHasBeenSet() const
{
    return m_platformCodeHasBeenSet;
}

string CreatePayMerchantRequest::GetChannelMerchantNo() const
{
    return m_channelMerchantNo;
}

void CreatePayMerchantRequest::SetChannelMerchantNo(const string& _channelMerchantNo)
{
    m_channelMerchantNo = _channelMerchantNo;
    m_channelMerchantNoHasBeenSet = true;
}

bool CreatePayMerchantRequest::ChannelMerchantNoHasBeenSet() const
{
    return m_channelMerchantNoHasBeenSet;
}

string CreatePayMerchantRequest::GetChannelCheckFlag() const
{
    return m_channelCheckFlag;
}

void CreatePayMerchantRequest::SetChannelCheckFlag(const string& _channelCheckFlag)
{
    m_channelCheckFlag = _channelCheckFlag;
    m_channelCheckFlagHasBeenSet = true;
}

bool CreatePayMerchantRequest::ChannelCheckFlagHasBeenSet() const
{
    return m_channelCheckFlagHasBeenSet;
}

string CreatePayMerchantRequest::GetMerchantName() const
{
    return m_merchantName;
}

void CreatePayMerchantRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool CreatePayMerchantRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string CreatePayMerchantRequest::GetBusinessPayFlag() const
{
    return m_businessPayFlag;
}

void CreatePayMerchantRequest::SetBusinessPayFlag(const string& _businessPayFlag)
{
    m_businessPayFlag = _businessPayFlag;
    m_businessPayFlagHasBeenSet = true;
}

bool CreatePayMerchantRequest::BusinessPayFlagHasBeenSet() const
{
    return m_businessPayFlagHasBeenSet;
}


