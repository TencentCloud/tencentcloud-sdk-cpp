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

#include <tencentcloud/vpc/v20170312/model/SetVpnGatewaysRenewFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SetVpnGatewaysRenewFlagRequest::SetVpnGatewaysRenewFlagRequest() :
    m_vpnGatewayIdsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string SetVpnGatewaysRenewFlagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnGatewayIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpnGatewayIds.begin(); itr != m_vpnGatewayIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SetVpnGatewaysRenewFlagRequest::GetVpnGatewayIds() const
{
    return m_vpnGatewayIds;
}

void SetVpnGatewaysRenewFlagRequest::SetVpnGatewayIds(const vector<string>& _vpnGatewayIds)
{
    m_vpnGatewayIds = _vpnGatewayIds;
    m_vpnGatewayIdsHasBeenSet = true;
}

bool SetVpnGatewaysRenewFlagRequest::VpnGatewayIdsHasBeenSet() const
{
    return m_vpnGatewayIdsHasBeenSet;
}

int64_t SetVpnGatewaysRenewFlagRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void SetVpnGatewaysRenewFlagRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool SetVpnGatewaysRenewFlagRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string SetVpnGatewaysRenewFlagRequest::GetType() const
{
    return m_type;
}

void SetVpnGatewaysRenewFlagRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SetVpnGatewaysRenewFlagRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


