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

#include <tencentcloud/cfw/v20190904/model/CreateVpcFwGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateVpcFwGroupRequest::CreateVpcFwGroupRequest() :
    m_nameHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_vpcFwInstancesHasBeenSet(false),
    m_switchModeHasBeenSet(false),
    m_fwVpcCidrHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_fwCidrInfoHasBeenSet(false),
    m_crossUserModeHasBeenSet(false)
{
}

string CreateVpcFwGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
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

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_fwVpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwVpcCidr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwVpcCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwCidrInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidrInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fwCidrInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_crossUserModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossUserMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossUserMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcFwGroupRequest::GetName() const
{
    return m_name;
}

void CreateVpcFwGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateVpcFwGroupRequest::GetMode() const
{
    return m_mode;
}

void CreateVpcFwGroupRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<VpcFwInstance> CreateVpcFwGroupRequest::GetVpcFwInstances() const
{
    return m_vpcFwInstances;
}

void CreateVpcFwGroupRequest::SetVpcFwInstances(const vector<VpcFwInstance>& _vpcFwInstances)
{
    m_vpcFwInstances = _vpcFwInstances;
    m_vpcFwInstancesHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::VpcFwInstancesHasBeenSet() const
{
    return m_vpcFwInstancesHasBeenSet;
}

int64_t CreateVpcFwGroupRequest::GetSwitchMode() const
{
    return m_switchMode;
}

void CreateVpcFwGroupRequest::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

string CreateVpcFwGroupRequest::GetFwVpcCidr() const
{
    return m_fwVpcCidr;
}

void CreateVpcFwGroupRequest::SetFwVpcCidr(const string& _fwVpcCidr)
{
    m_fwVpcCidr = _fwVpcCidr;
    m_fwVpcCidrHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::FwVpcCidrHasBeenSet() const
{
    return m_fwVpcCidrHasBeenSet;
}

string CreateVpcFwGroupRequest::GetCcnId() const
{
    return m_ccnId;
}

void CreateVpcFwGroupRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

FwCidrInfo CreateVpcFwGroupRequest::GetFwCidrInfo() const
{
    return m_fwCidrInfo;
}

void CreateVpcFwGroupRequest::SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo)
{
    m_fwCidrInfo = _fwCidrInfo;
    m_fwCidrInfoHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::FwCidrInfoHasBeenSet() const
{
    return m_fwCidrInfoHasBeenSet;
}

string CreateVpcFwGroupRequest::GetCrossUserMode() const
{
    return m_crossUserMode;
}

void CreateVpcFwGroupRequest::SetCrossUserMode(const string& _crossUserMode)
{
    m_crossUserMode = _crossUserMode;
    m_crossUserModeHasBeenSet = true;
}

bool CreateVpcFwGroupRequest::CrossUserModeHasBeenSet() const
{
    return m_crossUserModeHasBeenSet;
}


