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

#include <tencentcloud/iot/v20180123/model/UnassociateSubDeviceFromGatewayProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

UnassociateSubDeviceFromGatewayProductRequest::UnassociateSubDeviceFromGatewayProductRequest() :
    m_subDeviceProductIdHasBeenSet(false),
    m_gatewayProductIdHasBeenSet(false)
{
}

string UnassociateSubDeviceFromGatewayProductRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subDeviceProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDeviceProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDeviceProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnassociateSubDeviceFromGatewayProductRequest::GetSubDeviceProductId() const
{
    return m_subDeviceProductId;
}

void UnassociateSubDeviceFromGatewayProductRequest::SetSubDeviceProductId(const string& _subDeviceProductId)
{
    m_subDeviceProductId = _subDeviceProductId;
    m_subDeviceProductIdHasBeenSet = true;
}

bool UnassociateSubDeviceFromGatewayProductRequest::SubDeviceProductIdHasBeenSet() const
{
    return m_subDeviceProductIdHasBeenSet;
}

string UnassociateSubDeviceFromGatewayProductRequest::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

void UnassociateSubDeviceFromGatewayProductRequest::SetGatewayProductId(const string& _gatewayProductId)
{
    m_gatewayProductId = _gatewayProductId;
    m_gatewayProductIdHasBeenSet = true;
}

bool UnassociateSubDeviceFromGatewayProductRequest::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}


