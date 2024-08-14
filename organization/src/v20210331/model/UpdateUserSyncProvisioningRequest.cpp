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

#include <tencentcloud/organization/v20210331/model/UpdateUserSyncProvisioningRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateUserSyncProvisioningRequest::UpdateUserSyncProvisioningRequest() :
    m_zoneIdHasBeenSet(false),
    m_userProvisioningIdHasBeenSet(false),
    m_newDescriptionHasBeenSet(false),
    m_newDuplicationStatefulHasBeenSet(false),
    m_newDeletionStrategyHasBeenSet(false)
{
}

string UpdateUserSyncProvisioningRequest::ToJsonString() const
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

    if (m_userProvisioningIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProvisioningId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userProvisioningId.c_str(), allocator).Move(), allocator);
    }

    if (m_newDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_newDuplicationStatefulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDuplicationStateful";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDuplicationStateful.c_str(), allocator).Move(), allocator);
    }

    if (m_newDeletionStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDeletionStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDeletionStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserSyncProvisioningRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateUserSyncProvisioningRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateUserSyncProvisioningRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateUserSyncProvisioningRequest::GetUserProvisioningId() const
{
    return m_userProvisioningId;
}

void UpdateUserSyncProvisioningRequest::SetUserProvisioningId(const string& _userProvisioningId)
{
    m_userProvisioningId = _userProvisioningId;
    m_userProvisioningIdHasBeenSet = true;
}

bool UpdateUserSyncProvisioningRequest::UserProvisioningIdHasBeenSet() const
{
    return m_userProvisioningIdHasBeenSet;
}

string UpdateUserSyncProvisioningRequest::GetNewDescription() const
{
    return m_newDescription;
}

void UpdateUserSyncProvisioningRequest::SetNewDescription(const string& _newDescription)
{
    m_newDescription = _newDescription;
    m_newDescriptionHasBeenSet = true;
}

bool UpdateUserSyncProvisioningRequest::NewDescriptionHasBeenSet() const
{
    return m_newDescriptionHasBeenSet;
}

string UpdateUserSyncProvisioningRequest::GetNewDuplicationStateful() const
{
    return m_newDuplicationStateful;
}

void UpdateUserSyncProvisioningRequest::SetNewDuplicationStateful(const string& _newDuplicationStateful)
{
    m_newDuplicationStateful = _newDuplicationStateful;
    m_newDuplicationStatefulHasBeenSet = true;
}

bool UpdateUserSyncProvisioningRequest::NewDuplicationStatefulHasBeenSet() const
{
    return m_newDuplicationStatefulHasBeenSet;
}

string UpdateUserSyncProvisioningRequest::GetNewDeletionStrategy() const
{
    return m_newDeletionStrategy;
}

void UpdateUserSyncProvisioningRequest::SetNewDeletionStrategy(const string& _newDeletionStrategy)
{
    m_newDeletionStrategy = _newDeletionStrategy;
    m_newDeletionStrategyHasBeenSet = true;
}

bool UpdateUserSyncProvisioningRequest::NewDeletionStrategyHasBeenSet() const
{
    return m_newDeletionStrategyHasBeenSet;
}


