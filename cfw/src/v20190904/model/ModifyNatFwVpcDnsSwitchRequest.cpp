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

#include <tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyNatFwVpcDnsSwitchRequest::ModifyNatFwVpcDnsSwitchRequest() :
    m_natFwInsIdHasBeenSet(false),
    m_dnsVpcSwitchLstHasBeenSet(false)
{
}

string ModifyNatFwVpcDnsSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natFwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatFwInsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natFwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsVpcSwitchLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsVpcSwitchLst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnsVpcSwitchLst.begin(); itr != m_dnsVpcSwitchLst.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNatFwVpcDnsSwitchRequest::GetNatFwInsId() const
{
    return m_natFwInsId;
}

void ModifyNatFwVpcDnsSwitchRequest::SetNatFwInsId(const string& _natFwInsId)
{
    m_natFwInsId = _natFwInsId;
    m_natFwInsIdHasBeenSet = true;
}

bool ModifyNatFwVpcDnsSwitchRequest::NatFwInsIdHasBeenSet() const
{
    return m_natFwInsIdHasBeenSet;
}

vector<DnsVpcSwitch> ModifyNatFwVpcDnsSwitchRequest::GetDnsVpcSwitchLst() const
{
    return m_dnsVpcSwitchLst;
}

void ModifyNatFwVpcDnsSwitchRequest::SetDnsVpcSwitchLst(const vector<DnsVpcSwitch>& _dnsVpcSwitchLst)
{
    m_dnsVpcSwitchLst = _dnsVpcSwitchLst;
    m_dnsVpcSwitchLstHasBeenSet = true;
}

bool ModifyNatFwVpcDnsSwitchRequest::DnsVpcSwitchLstHasBeenSet() const
{
    return m_dnsVpcSwitchLstHasBeenSet;
}


