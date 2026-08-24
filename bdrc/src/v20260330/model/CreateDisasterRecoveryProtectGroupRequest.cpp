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

#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryProtectGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateDisasterRecoveryProtectGroupRequest::CreateDisasterRecoveryProtectGroupRequest() :
    m_sitePairIdHasBeenSet(false),
    m_protectGroupTypeHasBeenSet(false),
    m_recoveryPointObjectiveHasBeenSet(false),
    m_protectGroupNameHasBeenSet(false),
    m_dataDirectionHasBeenSet(false)
{
}

string CreateDisasterRecoveryProtectGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryPointObjectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryPointObjective";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recoveryPointObjective, allocator);
    }

    if (m_protectGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisasterRecoveryProtectGroupRequest::GetSitePairId() const
{
    return m_sitePairId;
}

void CreateDisasterRecoveryProtectGroupRequest::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool CreateDisasterRecoveryProtectGroupRequest::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string CreateDisasterRecoveryProtectGroupRequest::GetProtectGroupType() const
{
    return m_protectGroupType;
}

void CreateDisasterRecoveryProtectGroupRequest::SetProtectGroupType(const string& _protectGroupType)
{
    m_protectGroupType = _protectGroupType;
    m_protectGroupTypeHasBeenSet = true;
}

bool CreateDisasterRecoveryProtectGroupRequest::ProtectGroupTypeHasBeenSet() const
{
    return m_protectGroupTypeHasBeenSet;
}

int64_t CreateDisasterRecoveryProtectGroupRequest::GetRecoveryPointObjective() const
{
    return m_recoveryPointObjective;
}

void CreateDisasterRecoveryProtectGroupRequest::SetRecoveryPointObjective(const int64_t& _recoveryPointObjective)
{
    m_recoveryPointObjective = _recoveryPointObjective;
    m_recoveryPointObjectiveHasBeenSet = true;
}

bool CreateDisasterRecoveryProtectGroupRequest::RecoveryPointObjectiveHasBeenSet() const
{
    return m_recoveryPointObjectiveHasBeenSet;
}

string CreateDisasterRecoveryProtectGroupRequest::GetProtectGroupName() const
{
    return m_protectGroupName;
}

void CreateDisasterRecoveryProtectGroupRequest::SetProtectGroupName(const string& _protectGroupName)
{
    m_protectGroupName = _protectGroupName;
    m_protectGroupNameHasBeenSet = true;
}

bool CreateDisasterRecoveryProtectGroupRequest::ProtectGroupNameHasBeenSet() const
{
    return m_protectGroupNameHasBeenSet;
}

string CreateDisasterRecoveryProtectGroupRequest::GetDataDirection() const
{
    return m_dataDirection;
}

void CreateDisasterRecoveryProtectGroupRequest::SetDataDirection(const string& _dataDirection)
{
    m_dataDirection = _dataDirection;
    m_dataDirectionHasBeenSet = true;
}

bool CreateDisasterRecoveryProtectGroupRequest::DataDirectionHasBeenSet() const
{
    return m_dataDirectionHasBeenSet;
}


