/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesChargeTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ModifyWorkspacesChargeTypeRequest::ModifyWorkspacesChargeTypeRequest() :
    m_spaceIdsHasBeenSet(false),
    m_spaceChargeTypeHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_spaceChargePrepaidHasBeenSet(false)
{
}

string ModifyWorkspacesChargeTypeRequest::ToJsonString() const
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

    if (m_spaceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_spaceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spaceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyWorkspacesChargeTypeRequest::GetSpaceIds() const
{
    return m_spaceIds;
}

void ModifyWorkspacesChargeTypeRequest::SetSpaceIds(const vector<string>& _spaceIds)
{
    m_spaceIds = _spaceIds;
    m_spaceIdsHasBeenSet = true;
}

bool ModifyWorkspacesChargeTypeRequest::SpaceIdsHasBeenSet() const
{
    return m_spaceIdsHasBeenSet;
}

string ModifyWorkspacesChargeTypeRequest::GetSpaceChargeType() const
{
    return m_spaceChargeType;
}

void ModifyWorkspacesChargeTypeRequest::SetSpaceChargeType(const string& _spaceChargeType)
{
    m_spaceChargeType = _spaceChargeType;
    m_spaceChargeTypeHasBeenSet = true;
}

bool ModifyWorkspacesChargeTypeRequest::SpaceChargeTypeHasBeenSet() const
{
    return m_spaceChargeTypeHasBeenSet;
}

bool ModifyWorkspacesChargeTypeRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyWorkspacesChargeTypeRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyWorkspacesChargeTypeRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

SpaceChargePrepaid ModifyWorkspacesChargeTypeRequest::GetSpaceChargePrepaid() const
{
    return m_spaceChargePrepaid;
}

void ModifyWorkspacesChargeTypeRequest::SetSpaceChargePrepaid(const SpaceChargePrepaid& _spaceChargePrepaid)
{
    m_spaceChargePrepaid = _spaceChargePrepaid;
    m_spaceChargePrepaidHasBeenSet = true;
}

bool ModifyWorkspacesChargeTypeRequest::SpaceChargePrepaidHasBeenSet() const
{
    return m_spaceChargePrepaidHasBeenSet;
}


