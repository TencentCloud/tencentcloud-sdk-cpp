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

#include <tencentcloud/cdwdoris/v20211228/model/ModifySecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifySecurityGroupsRequest::ModifySecurityGroupsRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldSecurityGroupIdsHasBeenSet(false),
    m_modifySecurityGroupIdsHasBeenSet(false)
{
}

string ModifySecurityGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldSecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldSecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_oldSecurityGroupIds.begin(); itr != m_oldSecurityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modifySecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifySecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modifySecurityGroupIds.begin(); itr != m_modifySecurityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityGroupsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifySecurityGroupsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifySecurityGroupsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifySecurityGroupsRequest::GetOldSecurityGroupIds() const
{
    return m_oldSecurityGroupIds;
}

void ModifySecurityGroupsRequest::SetOldSecurityGroupIds(const vector<string>& _oldSecurityGroupIds)
{
    m_oldSecurityGroupIds = _oldSecurityGroupIds;
    m_oldSecurityGroupIdsHasBeenSet = true;
}

bool ModifySecurityGroupsRequest::OldSecurityGroupIdsHasBeenSet() const
{
    return m_oldSecurityGroupIdsHasBeenSet;
}

vector<string> ModifySecurityGroupsRequest::GetModifySecurityGroupIds() const
{
    return m_modifySecurityGroupIds;
}

void ModifySecurityGroupsRequest::SetModifySecurityGroupIds(const vector<string>& _modifySecurityGroupIds)
{
    m_modifySecurityGroupIds = _modifySecurityGroupIds;
    m_modifySecurityGroupIdsHasBeenSet = true;
}

bool ModifySecurityGroupsRequest::ModifySecurityGroupIdsHasBeenSet() const
{
    return m_modifySecurityGroupIdsHasBeenSet;
}


