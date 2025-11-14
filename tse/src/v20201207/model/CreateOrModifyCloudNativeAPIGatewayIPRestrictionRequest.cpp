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

#include <tencentcloud/tse/v20201207/model/CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest() :
    m_gatewayIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_restrictionTypeHasBeenSet(false),
    m_addressListHasBeenSet(false)
{
}

string CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressList.begin(); itr != m_addressList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetSourceId() const
{
    return m_sourceId;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetRestrictionType() const
{
    return m_restrictionType;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

vector<string> CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::GetAddressList() const
{
    return m_addressList;
}

void CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::SetAddressList(const vector<string>& _addressList)
{
    m_addressList = _addressList;
    m_addressListHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayIPRestrictionRequest::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}


