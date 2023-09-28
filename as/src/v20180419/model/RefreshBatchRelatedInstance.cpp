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

#include <tencentcloud/as/v20180419/model/RefreshBatchRelatedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RefreshBatchRelatedInstance::RefreshBatchRelatedInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_lastActivityIdHasBeenSet(false),
    m_instanceStatusMessageHasBeenSet(false)
{
}

CoreInternalOutcome RefreshBatchRelatedInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatchRelatedInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatchRelatedInstance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("LastActivityId") && !value["LastActivityId"].IsNull())
    {
        if (!value["LastActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatchRelatedInstance.LastActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastActivityId = string(value["LastActivityId"].GetString());
        m_lastActivityIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusMessage") && !value["InstanceStatusMessage"].IsNull())
    {
        if (!value["InstanceStatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshBatchRelatedInstance.InstanceStatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusMessage = string(value["InstanceStatusMessage"].GetString());
        m_instanceStatusMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefreshBatchRelatedInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastActivityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastActivityId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusMessage.c_str(), allocator).Move(), allocator);
    }

}


string RefreshBatchRelatedInstance::GetInstanceId() const
{
    return m_instanceId;
}

void RefreshBatchRelatedInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RefreshBatchRelatedInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RefreshBatchRelatedInstance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void RefreshBatchRelatedInstance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool RefreshBatchRelatedInstance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string RefreshBatchRelatedInstance::GetLastActivityId() const
{
    return m_lastActivityId;
}

void RefreshBatchRelatedInstance::SetLastActivityId(const string& _lastActivityId)
{
    m_lastActivityId = _lastActivityId;
    m_lastActivityIdHasBeenSet = true;
}

bool RefreshBatchRelatedInstance::LastActivityIdHasBeenSet() const
{
    return m_lastActivityIdHasBeenSet;
}

string RefreshBatchRelatedInstance::GetInstanceStatusMessage() const
{
    return m_instanceStatusMessage;
}

void RefreshBatchRelatedInstance::SetInstanceStatusMessage(const string& _instanceStatusMessage)
{
    m_instanceStatusMessage = _instanceStatusMessage;
    m_instanceStatusMessageHasBeenSet = true;
}

bool RefreshBatchRelatedInstance::InstanceStatusMessageHasBeenSet() const
{
    return m_instanceStatusMessageHasBeenSet;
}

