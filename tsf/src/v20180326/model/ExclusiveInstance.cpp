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

#include <tencentcloud/tsf/v20180326/model/ExclusiveInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ExclusiveInstance::ExclusiveInstance() :
    m_centerTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_instanceNamespaceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExclusiveInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CenterType") && !value["CenterType"].IsNull())
    {
        if (!value["CenterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.CenterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_centerType = string(value["CenterType"].GetString());
        m_centerTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceNamespaceId") && !value["InstanceNamespaceId"].IsNull())
    {
        if (!value["InstanceNamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.InstanceNamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNamespaceId = string(value["InstanceNamespaceId"].GetString());
        m_instanceNamespaceIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveInstance.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExclusiveInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_centerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CenterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_centerType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNamespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNamespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string ExclusiveInstance::GetCenterType() const
{
    return m_centerType;
}

void ExclusiveInstance::SetCenterType(const string& _centerType)
{
    m_centerType = _centerType;
    m_centerTypeHasBeenSet = true;
}

bool ExclusiveInstance::CenterTypeHasBeenSet() const
{
    return m_centerTypeHasBeenSet;
}

string ExclusiveInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ExclusiveInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExclusiveInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExclusiveInstance::GetInstanceType() const
{
    return m_instanceType;
}

void ExclusiveInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ExclusiveInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ExclusiveInstance::GetInstanceName() const
{
    return m_instanceName;
}

void ExclusiveInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ExclusiveInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ExclusiveInstance::GetRegionId() const
{
    return m_regionId;
}

void ExclusiveInstance::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ExclusiveInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ExclusiveInstance::GetInstanceNamespaceId() const
{
    return m_instanceNamespaceId;
}

void ExclusiveInstance::SetInstanceNamespaceId(const string& _instanceNamespaceId)
{
    m_instanceNamespaceId = _instanceNamespaceId;
    m_instanceNamespaceIdHasBeenSet = true;
}

bool ExclusiveInstance::InstanceNamespaceIdHasBeenSet() const
{
    return m_instanceNamespaceIdHasBeenSet;
}

string ExclusiveInstance::GetGroupId() const
{
    return m_groupId;
}

void ExclusiveInstance::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ExclusiveInstance::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t ExclusiveInstance::GetCreateTime() const
{
    return m_createTime;
}

void ExclusiveInstance::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExclusiveInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ExclusiveInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void ExclusiveInstance::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ExclusiveInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

