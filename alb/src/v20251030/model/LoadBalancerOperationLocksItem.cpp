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

#include <tencentcloud/alb/v20251030/model/LoadBalancerOperationLocksItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

LoadBalancerOperationLocksItem::LoadBalancerOperationLocksItem() :
    m_lockReasonHasBeenSet(false),
    m_lockTypeHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerOperationLocksItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LockReason") && !value["LockReason"].IsNull())
    {
        if (!value["LockReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerOperationLocksItem.LockReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockReason = string(value["LockReason"].GetString());
        m_lockReasonHasBeenSet = true;
    }

    if (value.HasMember("LockType") && !value["LockType"].IsNull())
    {
        if (!value["LockType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerOperationLocksItem.LockType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockType = string(value["LockType"].GetString());
        m_lockTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerOperationLocksItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lockReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockReason.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockType.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancerOperationLocksItem::GetLockReason() const
{
    return m_lockReason;
}

void LoadBalancerOperationLocksItem::SetLockReason(const string& _lockReason)
{
    m_lockReason = _lockReason;
    m_lockReasonHasBeenSet = true;
}

bool LoadBalancerOperationLocksItem::LockReasonHasBeenSet() const
{
    return m_lockReasonHasBeenSet;
}

string LoadBalancerOperationLocksItem::GetLockType() const
{
    return m_lockType;
}

void LoadBalancerOperationLocksItem::SetLockType(const string& _lockType)
{
    m_lockType = _lockType;
    m_lockTypeHasBeenSet = true;
}

bool LoadBalancerOperationLocksItem::LockTypeHasBeenSet() const
{
    return m_lockTypeHasBeenSet;
}

