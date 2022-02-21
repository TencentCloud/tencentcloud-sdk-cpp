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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankMerchantRequest::CreateOpenBankMerchantRequest() :
    m_outMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_outMerchantNameHasBeenSet(false),
    m_externalMerchantInfoHasBeenSet(false),
    m_outMerchantShortNameHasBeenSet(false),
    m_outMerchantDescriptionHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMerchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalMerchantInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalMerchantInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalMerchantInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMerchantShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMerchantDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOpenBankMerchantRequest::GetOutMerchantId() const
{
    return m_outMerchantId;
}

void CreateOpenBankMerchantRequest::SetOutMerchantId(const string& _outMerchantId)
{
    m_outMerchantId = _outMerchantId;
    m_outMerchantIdHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::OutMerchantIdHasBeenSet() const
{
    return m_outMerchantIdHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankMerchantRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetOutMerchantName() const
{
    return m_outMerchantName;
}

void CreateOpenBankMerchantRequest::SetOutMerchantName(const string& _outMerchantName)
{
    m_outMerchantName = _outMerchantName;
    m_outMerchantNameHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::OutMerchantNameHasBeenSet() const
{
    return m_outMerchantNameHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetExternalMerchantInfo() const
{
    return m_externalMerchantInfo;
}

void CreateOpenBankMerchantRequest::SetExternalMerchantInfo(const string& _externalMerchantInfo)
{
    m_externalMerchantInfo = _externalMerchantInfo;
    m_externalMerchantInfoHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::ExternalMerchantInfoHasBeenSet() const
{
    return m_externalMerchantInfoHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetOutMerchantShortName() const
{
    return m_outMerchantShortName;
}

void CreateOpenBankMerchantRequest::SetOutMerchantShortName(const string& _outMerchantShortName)
{
    m_outMerchantShortName = _outMerchantShortName;
    m_outMerchantShortNameHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::OutMerchantShortNameHasBeenSet() const
{
    return m_outMerchantShortNameHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetOutMerchantDescription() const
{
    return m_outMerchantDescription;
}

void CreateOpenBankMerchantRequest::SetOutMerchantDescription(const string& _outMerchantDescription)
{
    m_outMerchantDescription = _outMerchantDescription;
    m_outMerchantDescriptionHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::OutMerchantDescriptionHasBeenSet() const
{
    return m_outMerchantDescriptionHasBeenSet;
}

string CreateOpenBankMerchantRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankMerchantRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankMerchantRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


