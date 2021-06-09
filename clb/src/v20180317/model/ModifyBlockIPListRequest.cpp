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

#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyBlockIPListRequest::ModifyBlockIPListRequest() :
    m_loadBalancerIdsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clientIPFieldHasBeenSet(false),
    m_blockIPListHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_addStrategyHasBeenSet(false)
{
}

string ModifyBlockIPListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientIPField.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIPList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockIPList.begin(); itr != m_blockIPList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_addStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyBlockIPListRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void ModifyBlockIPListRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool ModifyBlockIPListRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

string ModifyBlockIPListRequest::GetType() const
{
    return m_type;
}

void ModifyBlockIPListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyBlockIPListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyBlockIPListRequest::GetClientIPField() const
{
    return m_clientIPField;
}

void ModifyBlockIPListRequest::SetClientIPField(const string& _clientIPField)
{
    m_clientIPField = _clientIPField;
    m_clientIPFieldHasBeenSet = true;
}

bool ModifyBlockIPListRequest::ClientIPFieldHasBeenSet() const
{
    return m_clientIPFieldHasBeenSet;
}

vector<string> ModifyBlockIPListRequest::GetBlockIPList() const
{
    return m_blockIPList;
}

void ModifyBlockIPListRequest::SetBlockIPList(const vector<string>& _blockIPList)
{
    m_blockIPList = _blockIPList;
    m_blockIPListHasBeenSet = true;
}

bool ModifyBlockIPListRequest::BlockIPListHasBeenSet() const
{
    return m_blockIPListHasBeenSet;
}

uint64_t ModifyBlockIPListRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyBlockIPListRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyBlockIPListRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ModifyBlockIPListRequest::GetAddStrategy() const
{
    return m_addStrategy;
}

void ModifyBlockIPListRequest::SetAddStrategy(const string& _addStrategy)
{
    m_addStrategy = _addStrategy;
    m_addStrategyHasBeenSet = true;
}

bool ModifyBlockIPListRequest::AddStrategyHasBeenSet() const
{
    return m_addStrategyHasBeenSet;
}


