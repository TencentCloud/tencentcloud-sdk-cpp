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

#include <tencentcloud/cfw/v20190904/model/DeleteVpcFwGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DeleteVpcFwGroupRequest::DeleteVpcFwGroupRequest() :
    m_fwGroupIdHasBeenSet(false),
    m_deleteFwGroupHasBeenSet(false),
    m_vpcFwInsListHasBeenSet(false)
{
}

string DeleteVpcFwGroupRequest::ToJsonString() const
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

    if (m_deleteFwGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFwGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteFwGroup, allocator);
    }

    if (m_vpcFwInsListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcFwInsList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcFwInsList.begin(); itr != m_vpcFwInsList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteVpcFwGroupRequest::GetFwGroupId() const
{
    return m_fwGroupId;
}

void DeleteVpcFwGroupRequest::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool DeleteVpcFwGroupRequest::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

int64_t DeleteVpcFwGroupRequest::GetDeleteFwGroup() const
{
    return m_deleteFwGroup;
}

void DeleteVpcFwGroupRequest::SetDeleteFwGroup(const int64_t& _deleteFwGroup)
{
    m_deleteFwGroup = _deleteFwGroup;
    m_deleteFwGroupHasBeenSet = true;
}

bool DeleteVpcFwGroupRequest::DeleteFwGroupHasBeenSet() const
{
    return m_deleteFwGroupHasBeenSet;
}

vector<string> DeleteVpcFwGroupRequest::GetVpcFwInsList() const
{
    return m_vpcFwInsList;
}

void DeleteVpcFwGroupRequest::SetVpcFwInsList(const vector<string>& _vpcFwInsList)
{
    m_vpcFwInsList = _vpcFwInsList;
    m_vpcFwInsListHasBeenSet = true;
}

bool DeleteVpcFwGroupRequest::VpcFwInsListHasBeenSet() const
{
    return m_vpcFwInsListHasBeenSet;
}


