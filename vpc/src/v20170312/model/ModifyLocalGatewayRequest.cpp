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

#include <tencentcloud/vpc/v20170312/model/ModifyLocalGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyLocalGatewayRequest::ModifyLocalGatewayRequest() :
    m_localGatewayNameHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

string ModifyLocalGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_localGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_localGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLocalGatewayRequest::GetLocalGatewayName() const
{
    return m_localGatewayName;
}

void ModifyLocalGatewayRequest::SetLocalGatewayName(const string& _localGatewayName)
{
    m_localGatewayName = _localGatewayName;
    m_localGatewayNameHasBeenSet = true;
}

bool ModifyLocalGatewayRequest::LocalGatewayNameHasBeenSet() const
{
    return m_localGatewayNameHasBeenSet;
}

string ModifyLocalGatewayRequest::GetCdcId() const
{
    return m_cdcId;
}

void ModifyLocalGatewayRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool ModifyLocalGatewayRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string ModifyLocalGatewayRequest::GetLocalGatewayId() const
{
    return m_localGatewayId;
}

void ModifyLocalGatewayRequest::SetLocalGatewayId(const string& _localGatewayId)
{
    m_localGatewayId = _localGatewayId;
    m_localGatewayIdHasBeenSet = true;
}

bool ModifyLocalGatewayRequest::LocalGatewayIdHasBeenSet() const
{
    return m_localGatewayIdHasBeenSet;
}

string ModifyLocalGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyLocalGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyLocalGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}


