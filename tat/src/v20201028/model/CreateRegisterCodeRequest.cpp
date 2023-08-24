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

#include <tencentcloud/tat/v20201028/model/CreateRegisterCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

CreateRegisterCodeRequest::CreateRegisterCodeRequest() :
    m_descriptionHasBeenSet(false),
    m_instanceNamePrefixHasBeenSet(false),
    m_registerLimitHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_ipAddressRangeHasBeenSet(false)
{
}

string CreateRegisterCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceNamePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_registerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registerLimit, allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_effectiveTime, allocator);
    }

    if (m_ipAddressRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddressRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRegisterCodeRequest::GetDescription() const
{
    return m_description;
}

void CreateRegisterCodeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRegisterCodeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateRegisterCodeRequest::GetInstanceNamePrefix() const
{
    return m_instanceNamePrefix;
}

void CreateRegisterCodeRequest::SetInstanceNamePrefix(const string& _instanceNamePrefix)
{
    m_instanceNamePrefix = _instanceNamePrefix;
    m_instanceNamePrefixHasBeenSet = true;
}

bool CreateRegisterCodeRequest::InstanceNamePrefixHasBeenSet() const
{
    return m_instanceNamePrefixHasBeenSet;
}

int64_t CreateRegisterCodeRequest::GetRegisterLimit() const
{
    return m_registerLimit;
}

void CreateRegisterCodeRequest::SetRegisterLimit(const int64_t& _registerLimit)
{
    m_registerLimit = _registerLimit;
    m_registerLimitHasBeenSet = true;
}

bool CreateRegisterCodeRequest::RegisterLimitHasBeenSet() const
{
    return m_registerLimitHasBeenSet;
}

int64_t CreateRegisterCodeRequest::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void CreateRegisterCodeRequest::SetEffectiveTime(const int64_t& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool CreateRegisterCodeRequest::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string CreateRegisterCodeRequest::GetIpAddressRange() const
{
    return m_ipAddressRange;
}

void CreateRegisterCodeRequest::SetIpAddressRange(const string& _ipAddressRange)
{
    m_ipAddressRange = _ipAddressRange;
    m_ipAddressRangeHasBeenSet = true;
}

bool CreateRegisterCodeRequest::IpAddressRangeHasBeenSet() const
{
    return m_ipAddressRangeHasBeenSet;
}


