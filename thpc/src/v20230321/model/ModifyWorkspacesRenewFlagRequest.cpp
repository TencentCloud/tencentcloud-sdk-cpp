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

#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesRenewFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ModifyWorkspacesRenewFlagRequest::ModifyWorkspacesRenewFlagRequest() :
    m_spaceIdsHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

string ModifyWorkspacesRenewFlagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceIds.begin(); itr != m_spaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyWorkspacesRenewFlagRequest::GetSpaceIds() const
{
    return m_spaceIds;
}

void ModifyWorkspacesRenewFlagRequest::SetSpaceIds(const vector<string>& _spaceIds)
{
    m_spaceIds = _spaceIds;
    m_spaceIdsHasBeenSet = true;
}

bool ModifyWorkspacesRenewFlagRequest::SpaceIdsHasBeenSet() const
{
    return m_spaceIdsHasBeenSet;
}

string ModifyWorkspacesRenewFlagRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void ModifyWorkspacesRenewFlagRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ModifyWorkspacesRenewFlagRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}


