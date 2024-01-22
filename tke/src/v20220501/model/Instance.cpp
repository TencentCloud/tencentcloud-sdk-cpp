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

#include <tencentcloud/tke/v20220501/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_unschedulableHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lanIPHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_nativeHasBeenSet(false),
    m_regularHasBeenSet(false),
    m_superHasBeenSet(false),
    m_externalHasBeenSet(false),
    m_nodeTypeHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("Unschedulable") && !value["Unschedulable"].IsNull())
    {
        if (!value["Unschedulable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Unschedulable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unschedulable = value["Unschedulable"].GetBool();
        m_unschedulableHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("LanIP") && !value["LanIP"].IsNull())
    {
        if (!value["LanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIP = string(value["LanIP"].GetString());
        m_lanIPHasBeenSet = true;
    }

    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("Native") && !value["Native"].IsNull())
    {
        if (!value["Native"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Native` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_native.Deserialize(value["Native"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nativeHasBeenSet = true;
    }

    if (value.HasMember("Regular") && !value["Regular"].IsNull())
    {
        if (!value["Regular"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Regular` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regular.Deserialize(value["Regular"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regularHasBeenSet = true;
    }

    if (value.HasMember("Super") && !value["Super"].IsNull())
    {
        if (!value["Super"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Super` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_super.Deserialize(value["Super"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_superHasBeenSet = true;
    }

    if (value.HasMember("External") && !value["External"].IsNull())
    {
        if (!value["External"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.External` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_external.Deserialize(value["External"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_unschedulableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unschedulable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unschedulable, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Native";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_native.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regular.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_superHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Super";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_super.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "External";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_external.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceRole() const
{
    return m_instanceRole;
}

void Instance::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool Instance::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string Instance::GetFailedReason() const
{
    return m_failedReason;
}

void Instance::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool Instance::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string Instance::GetInstanceState() const
{
    return m_instanceState;
}

void Instance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Instance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

bool Instance::GetUnschedulable() const
{
    return m_unschedulable;
}

void Instance::SetUnschedulable(const bool& _unschedulable)
{
    m_unschedulable = _unschedulable;
    m_unschedulableHasBeenSet = true;
}

bool Instance::UnschedulableHasBeenSet() const
{
    return m_unschedulableHasBeenSet;
}

string Instance::GetCreatedTime() const
{
    return m_createdTime;
}

void Instance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Instance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Instance::GetLanIP() const
{
    return m_lanIP;
}

void Instance::SetLanIP(const string& _lanIP)
{
    m_lanIP = _lanIP;
    m_lanIPHasBeenSet = true;
}

bool Instance::LanIPHasBeenSet() const
{
    return m_lanIPHasBeenSet;
}

string Instance::GetNodePoolId() const
{
    return m_nodePoolId;
}

void Instance::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool Instance::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

NativeNodeInfo Instance::GetNative() const
{
    return m_native;
}

void Instance::SetNative(const NativeNodeInfo& _native)
{
    m_native = _native;
    m_nativeHasBeenSet = true;
}

bool Instance::NativeHasBeenSet() const
{
    return m_nativeHasBeenSet;
}

RegularNodeInfo Instance::GetRegular() const
{
    return m_regular;
}

void Instance::SetRegular(const RegularNodeInfo& _regular)
{
    m_regular = _regular;
    m_regularHasBeenSet = true;
}

bool Instance::RegularHasBeenSet() const
{
    return m_regularHasBeenSet;
}

SuperNodeInfo Instance::GetSuper() const
{
    return m_super;
}

void Instance::SetSuper(const SuperNodeInfo& _super)
{
    m_super = _super;
    m_superHasBeenSet = true;
}

bool Instance::SuperHasBeenSet() const
{
    return m_superHasBeenSet;
}

ExternalNodeInfo Instance::GetExternal() const
{
    return m_external;
}

void Instance::SetExternal(const ExternalNodeInfo& _external)
{
    m_external = _external;
    m_externalHasBeenSet = true;
}

bool Instance::ExternalHasBeenSet() const
{
    return m_externalHasBeenSet;
}

string Instance::GetNodeType() const
{
    return m_nodeType;
}

void Instance::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool Instance::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

