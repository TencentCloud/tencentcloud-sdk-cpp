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

#include <tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyNatFwReSelectRequest::ModifyNatFwReSelectRequest() :
    m_modeHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false),
    m_natGwListHasBeenSet(false),
    m_vpcListHasBeenSet(false),
    m_fwCidrInfoHasBeenSet(false)
{
}

string ModifyNatFwReSelectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_cfwInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_natGwListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGwList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_natGwList.begin(); itr != m_natGwList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t ModifyNatFwReSelectRequest::GetMode() const
{
    return m_mode;
}

void ModifyNatFwReSelectRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyNatFwReSelectRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyNatFwReSelectRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void ModifyNatFwReSelectRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool ModifyNatFwReSelectRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}

vector<string> ModifyNatFwReSelectRequest::GetNatGwList() const
{
    return m_natGwList;
}

void ModifyNatFwReSelectRequest::SetNatGwList(const vector<string>& _natGwList)
{
    m_natGwList = _natGwList;
    m_natGwListHasBeenSet = true;
}

bool ModifyNatFwReSelectRequest::NatGwListHasBeenSet() const
{
    return m_natGwListHasBeenSet;
}

vector<string> ModifyNatFwReSelectRequest::GetVpcList() const
{
    return m_vpcList;
}

void ModifyNatFwReSelectRequest::SetVpcList(const vector<string>& _vpcList)
{
    m_vpcList = _vpcList;
    m_vpcListHasBeenSet = true;
}

bool ModifyNatFwReSelectRequest::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

FwCidrInfo ModifyNatFwReSelectRequest::GetFwCidrInfo() const
{
    return m_fwCidrInfo;
}

void ModifyNatFwReSelectRequest::SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo)
{
    m_fwCidrInfo = _fwCidrInfo;
    m_fwCidrInfoHasBeenSet = true;
}

bool ModifyNatFwReSelectRequest::FwCidrInfoHasBeenSet() const
{
    return m_fwCidrInfoHasBeenSet;
}


