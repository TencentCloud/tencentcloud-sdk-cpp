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

#include <tencentcloud/iot/v20180123/model/AssociateSubDeviceToGatewayProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

AssociateSubDeviceToGatewayProductRequest::AssociateSubDeviceToGatewayProductRequest() :
    m_subDeviceProductIdHasBeenSet(false),
    m_gatewayProductIdHasBeenSet(false)
{
}

string AssociateSubDeviceToGatewayProductRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subDeviceProductIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubDeviceProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subDeviceProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayProductIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateSubDeviceToGatewayProductRequest::GetSubDeviceProductId() const
{
    return m_subDeviceProductId;
}

void AssociateSubDeviceToGatewayProductRequest::SetSubDeviceProductId(const string& _subDeviceProductId)
{
    m_subDeviceProductId = _subDeviceProductId;
    m_subDeviceProductIdHasBeenSet = true;
}

bool AssociateSubDeviceToGatewayProductRequest::SubDeviceProductIdHasBeenSet() const
{
    return m_subDeviceProductIdHasBeenSet;
}

string AssociateSubDeviceToGatewayProductRequest::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

void AssociateSubDeviceToGatewayProductRequest::SetGatewayProductId(const string& _gatewayProductId)
{
    m_gatewayProductId = _gatewayProductId;
    m_gatewayProductIdHasBeenSet = true;
}

bool AssociateSubDeviceToGatewayProductRequest::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}


