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

#include <tencentcloud/mqtt/v20240516/model/SharedGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

SharedGroup::SharedGroup() :
    m_instanceIdHasBeenSet(false),
    m_sharedNameHasBeenSet(false),
    m_lbStrategyHasBeenSet(false),
    m_expiryIntervalHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SharedGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SharedName") && !value["SharedName"].IsNull())
    {
        if (!value["SharedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.SharedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedName = string(value["SharedName"].GetString());
        m_sharedNameHasBeenSet = true;
    }

    if (value.HasMember("LbStrategy") && !value["LbStrategy"].IsNull())
    {
        if (!value["LbStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.LbStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lbStrategy = value["LbStrategy"].GetInt64();
        m_lbStrategyHasBeenSet = true;
    }

    if (value.HasMember("ExpiryInterval") && !value["ExpiryInterval"].IsNull())
    {
        if (!value["ExpiryInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.ExpiryInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiryInterval = value["ExpiryInterval"].GetInt64();
        m_expiryIntervalHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SharedGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedName.c_str(), allocator).Move(), allocator);
    }

    if (m_lbStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbStrategy, allocator);
    }

    if (m_expiryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiryInterval, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


string SharedGroup::GetInstanceId() const
{
    return m_instanceId;
}

void SharedGroup::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SharedGroup::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SharedGroup::GetSharedName() const
{
    return m_sharedName;
}

void SharedGroup::SetSharedName(const string& _sharedName)
{
    m_sharedName = _sharedName;
    m_sharedNameHasBeenSet = true;
}

bool SharedGroup::SharedNameHasBeenSet() const
{
    return m_sharedNameHasBeenSet;
}

int64_t SharedGroup::GetLbStrategy() const
{
    return m_lbStrategy;
}

void SharedGroup::SetLbStrategy(const int64_t& _lbStrategy)
{
    m_lbStrategy = _lbStrategy;
    m_lbStrategyHasBeenSet = true;
}

bool SharedGroup::LbStrategyHasBeenSet() const
{
    return m_lbStrategyHasBeenSet;
}

int64_t SharedGroup::GetExpiryInterval() const
{
    return m_expiryInterval;
}

void SharedGroup::SetExpiryInterval(const int64_t& _expiryInterval)
{
    m_expiryInterval = _expiryInterval;
    m_expiryIntervalHasBeenSet = true;
}

bool SharedGroup::ExpiryIntervalHasBeenSet() const
{
    return m_expiryIntervalHasBeenSet;
}

string SharedGroup::GetRemark() const
{
    return m_remark;
}

void SharedGroup::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SharedGroup::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t SharedGroup::GetCreateTime() const
{
    return m_createTime;
}

void SharedGroup::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SharedGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t SharedGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void SharedGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SharedGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

