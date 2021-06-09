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

#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_enableMonitorHasBeenSet(false)
{
}

string ModifyVpcAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMonitor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMonitor, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcAttributeRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyVpcAttributeRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyVpcAttributeRequest::GetVpcName() const
{
    return m_vpcName;
}

void ModifyVpcAttributeRequest::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

bool ModifyVpcAttributeRequest::GetEnableMonitor() const
{
    return m_enableMonitor;
}

void ModifyVpcAttributeRequest::SetEnableMonitor(const bool& _enableMonitor)
{
    m_enableMonitor = _enableMonitor;
    m_enableMonitorHasBeenSet = true;
}

bool ModifyVpcAttributeRequest::EnableMonitorHasBeenSet() const
{
    return m_enableMonitorHasBeenSet;
}


