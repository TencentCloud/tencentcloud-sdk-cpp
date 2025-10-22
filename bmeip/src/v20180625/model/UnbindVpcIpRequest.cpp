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

#include <tencentcloud/bmeip/v20180625/model/UnbindVpcIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

UnbindVpcIpRequest::UnbindVpcIpRequest() :
    m_eipIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcIpHasBeenSet(false)
{
}

string UnbindVpcIpRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eipId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindVpcIpRequest::GetEipId() const
{
    return m_eipId;
}

void UnbindVpcIpRequest::SetEipId(const string& _eipId)
{
    m_eipId = _eipId;
    m_eipIdHasBeenSet = true;
}

bool UnbindVpcIpRequest::EipIdHasBeenSet() const
{
    return m_eipIdHasBeenSet;
}

string UnbindVpcIpRequest::GetVpcId() const
{
    return m_vpcId;
}

void UnbindVpcIpRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool UnbindVpcIpRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string UnbindVpcIpRequest::GetVpcIp() const
{
    return m_vpcIp;
}

void UnbindVpcIpRequest::SetVpcIp(const string& _vpcIp)
{
    m_vpcIp = _vpcIp;
    m_vpcIpHasBeenSet = true;
}

bool UnbindVpcIpRequest::VpcIpHasBeenSet() const
{
    return m_vpcIpHasBeenSet;
}


