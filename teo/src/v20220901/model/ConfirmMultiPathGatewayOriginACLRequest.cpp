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

#include <tencentcloud/teo/v20220901/model/ConfirmMultiPathGatewayOriginACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ConfirmMultiPathGatewayOriginACLRequest::ConfirmMultiPathGatewayOriginACLRequest() :
    m_zoneIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_originACLVersionHasBeenSet(false)
{
}

string ConfirmMultiPathGatewayOriginACLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_originACLVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginACLVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originACLVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConfirmMultiPathGatewayOriginACLRequest::GetZoneId() const
{
    return m_zoneId;
}

void ConfirmMultiPathGatewayOriginACLRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ConfirmMultiPathGatewayOriginACLRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ConfirmMultiPathGatewayOriginACLRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ConfirmMultiPathGatewayOriginACLRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ConfirmMultiPathGatewayOriginACLRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

int64_t ConfirmMultiPathGatewayOriginACLRequest::GetOriginACLVersion() const
{
    return m_originACLVersion;
}

void ConfirmMultiPathGatewayOriginACLRequest::SetOriginACLVersion(const int64_t& _originACLVersion)
{
    m_originACLVersion = _originACLVersion;
    m_originACLVersionHasBeenSet = true;
}

bool ConfirmMultiPathGatewayOriginACLRequest::OriginACLVersionHasBeenSet() const
{
    return m_originACLVersionHasBeenSet;
}


