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

#include <tencentcloud/cfw/v20190904/model/ModifyVpcFwGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyVpcFwGroupRequest::ModifyVpcFwGroupRequest() :
    m_fwGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vpcFwInstancesHasBeenSet(false),
    m_fwCidrInfoHasBeenSet(false)
{
}

string ModifyVpcFwGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcFwInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcFwInstances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcFwInstances.begin(); itr != m_vpcFwInstances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_fwCidrInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidrInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fwCidrInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcFwGroupRequest::GetFwGroupId() const
{
    return m_fwGroupId;
}

void ModifyVpcFwGroupRequest::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool ModifyVpcFwGroupRequest::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string ModifyVpcFwGroupRequest::GetName() const
{
    return m_name;
}

void ModifyVpcFwGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyVpcFwGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<VpcFwInstance> ModifyVpcFwGroupRequest::GetVpcFwInstances() const
{
    return m_vpcFwInstances;
}

void ModifyVpcFwGroupRequest::SetVpcFwInstances(const vector<VpcFwInstance>& _vpcFwInstances)
{
    m_vpcFwInstances = _vpcFwInstances;
    m_vpcFwInstancesHasBeenSet = true;
}

bool ModifyVpcFwGroupRequest::VpcFwInstancesHasBeenSet() const
{
    return m_vpcFwInstancesHasBeenSet;
}

FwCidrInfo ModifyVpcFwGroupRequest::GetFwCidrInfo() const
{
    return m_fwCidrInfo;
}

void ModifyVpcFwGroupRequest::SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo)
{
    m_fwCidrInfo = _fwCidrInfo;
    m_fwCidrInfoHasBeenSet = true;
}

bool ModifyVpcFwGroupRequest::FwCidrInfoHasBeenSet() const
{
    return m_fwCidrInfoHasBeenSet;
}


