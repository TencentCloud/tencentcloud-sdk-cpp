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

#include <tencentcloud/antiddos/v20200309/model/CreatePortAclConfigListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreatePortAclConfigListRequest::CreatePortAclConfigListRequest() :
    m_instanceIdListHasBeenSet(false),
    m_aclConfigHasBeenSet(false)
{
}

string CreatePortAclConfigListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aclConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aclConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreatePortAclConfigListRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void CreatePortAclConfigListRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool CreatePortAclConfigListRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

AclConfig CreatePortAclConfigListRequest::GetAclConfig() const
{
    return m_aclConfig;
}

void CreatePortAclConfigListRequest::SetAclConfig(const AclConfig& _aclConfig)
{
    m_aclConfig = _aclConfig;
    m_aclConfigHasBeenSet = true;
}

bool CreatePortAclConfigListRequest::AclConfigHasBeenSet() const
{
    return m_aclConfigHasBeenSet;
}


