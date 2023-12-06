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

#include <tencentcloud/privatedns/v20201028/model/AddSpecifyPrivateZoneVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

AddSpecifyPrivateZoneVpcRequest::AddSpecifyPrivateZoneVpcRequest() :
    m_zoneIdHasBeenSet(false),
    m_vpcSetHasBeenSet(false),
    m_accountVpcSetHasBeenSet(false),
    m_syncHasBeenSet(false)
{
}

string AddSpecifyPrivateZoneVpcRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accountVpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountVpcSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountVpcSet.begin(); itr != m_accountVpcSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_syncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sync, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddSpecifyPrivateZoneVpcRequest::GetZoneId() const
{
    return m_zoneId;
}

void AddSpecifyPrivateZoneVpcRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AddSpecifyPrivateZoneVpcRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<VpcInfo> AddSpecifyPrivateZoneVpcRequest::GetVpcSet() const
{
    return m_vpcSet;
}

void AddSpecifyPrivateZoneVpcRequest::SetVpcSet(const vector<VpcInfo>& _vpcSet)
{
    m_vpcSet = _vpcSet;
    m_vpcSetHasBeenSet = true;
}

bool AddSpecifyPrivateZoneVpcRequest::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

vector<AccountVpcInfo> AddSpecifyPrivateZoneVpcRequest::GetAccountVpcSet() const
{
    return m_accountVpcSet;
}

void AddSpecifyPrivateZoneVpcRequest::SetAccountVpcSet(const vector<AccountVpcInfo>& _accountVpcSet)
{
    m_accountVpcSet = _accountVpcSet;
    m_accountVpcSetHasBeenSet = true;
}

bool AddSpecifyPrivateZoneVpcRequest::AccountVpcSetHasBeenSet() const
{
    return m_accountVpcSetHasBeenSet;
}

bool AddSpecifyPrivateZoneVpcRequest::GetSync() const
{
    return m_sync;
}

void AddSpecifyPrivateZoneVpcRequest::SetSync(const bool& _sync)
{
    m_sync = _sync;
    m_syncHasBeenSet = true;
}

bool AddSpecifyPrivateZoneVpcRequest::SyncHasBeenSet() const
{
    return m_syncHasBeenSet;
}


