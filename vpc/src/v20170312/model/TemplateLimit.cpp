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

#include <tencentcloud/vpc/v20170312/model/TemplateLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TemplateLimit::TemplateLimit() :
    m_addressTemplateMemberLimitHasBeenSet(false),
    m_addressTemplateGroupMemberLimitHasBeenSet(false),
    m_serviceTemplateMemberLimitHasBeenSet(false),
    m_serviceTemplateGroupMemberLimitHasBeenSet(false)
{
}

CoreInternalOutcome TemplateLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressTemplateMemberLimit") && !value["AddressTemplateMemberLimit"].IsNull())
    {
        if (!value["AddressTemplateMemberLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateLimit.AddressTemplateMemberLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateMemberLimit = value["AddressTemplateMemberLimit"].GetUint64();
        m_addressTemplateMemberLimitHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateGroupMemberLimit") && !value["AddressTemplateGroupMemberLimit"].IsNull())
    {
        if (!value["AddressTemplateGroupMemberLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateLimit.AddressTemplateGroupMemberLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateGroupMemberLimit = value["AddressTemplateGroupMemberLimit"].GetUint64();
        m_addressTemplateGroupMemberLimitHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateMemberLimit") && !value["ServiceTemplateMemberLimit"].IsNull())
    {
        if (!value["ServiceTemplateMemberLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateLimit.ServiceTemplateMemberLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateMemberLimit = value["ServiceTemplateMemberLimit"].GetUint64();
        m_serviceTemplateMemberLimitHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateGroupMemberLimit") && !value["ServiceTemplateGroupMemberLimit"].IsNull())
    {
        if (!value["ServiceTemplateGroupMemberLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateLimit.ServiceTemplateGroupMemberLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateGroupMemberLimit = value["ServiceTemplateGroupMemberLimit"].GetUint64();
        m_serviceTemplateGroupMemberLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressTemplateMemberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateMemberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressTemplateMemberLimit, allocator);
    }

    if (m_addressTemplateGroupMemberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateGroupMemberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressTemplateGroupMemberLimit, allocator);
    }

    if (m_serviceTemplateMemberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateMemberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceTemplateMemberLimit, allocator);
    }

    if (m_serviceTemplateGroupMemberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateGroupMemberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceTemplateGroupMemberLimit, allocator);
    }

}


uint64_t TemplateLimit::GetAddressTemplateMemberLimit() const
{
    return m_addressTemplateMemberLimit;
}

void TemplateLimit::SetAddressTemplateMemberLimit(const uint64_t& _addressTemplateMemberLimit)
{
    m_addressTemplateMemberLimit = _addressTemplateMemberLimit;
    m_addressTemplateMemberLimitHasBeenSet = true;
}

bool TemplateLimit::AddressTemplateMemberLimitHasBeenSet() const
{
    return m_addressTemplateMemberLimitHasBeenSet;
}

uint64_t TemplateLimit::GetAddressTemplateGroupMemberLimit() const
{
    return m_addressTemplateGroupMemberLimit;
}

void TemplateLimit::SetAddressTemplateGroupMemberLimit(const uint64_t& _addressTemplateGroupMemberLimit)
{
    m_addressTemplateGroupMemberLimit = _addressTemplateGroupMemberLimit;
    m_addressTemplateGroupMemberLimitHasBeenSet = true;
}

bool TemplateLimit::AddressTemplateGroupMemberLimitHasBeenSet() const
{
    return m_addressTemplateGroupMemberLimitHasBeenSet;
}

uint64_t TemplateLimit::GetServiceTemplateMemberLimit() const
{
    return m_serviceTemplateMemberLimit;
}

void TemplateLimit::SetServiceTemplateMemberLimit(const uint64_t& _serviceTemplateMemberLimit)
{
    m_serviceTemplateMemberLimit = _serviceTemplateMemberLimit;
    m_serviceTemplateMemberLimitHasBeenSet = true;
}

bool TemplateLimit::ServiceTemplateMemberLimitHasBeenSet() const
{
    return m_serviceTemplateMemberLimitHasBeenSet;
}

uint64_t TemplateLimit::GetServiceTemplateGroupMemberLimit() const
{
    return m_serviceTemplateGroupMemberLimit;
}

void TemplateLimit::SetServiceTemplateGroupMemberLimit(const uint64_t& _serviceTemplateGroupMemberLimit)
{
    m_serviceTemplateGroupMemberLimit = _serviceTemplateGroupMemberLimit;
    m_serviceTemplateGroupMemberLimitHasBeenSet = true;
}

bool TemplateLimit::ServiceTemplateGroupMemberLimitHasBeenSet() const
{
    return m_serviceTemplateGroupMemberLimitHasBeenSet;
}

