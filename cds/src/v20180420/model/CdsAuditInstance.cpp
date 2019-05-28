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

#include <tencentcloud/cds/v20180420/model/CdsAuditInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace rapidjson;
using namespace std;

CdsAuditInstance::CdsAuditInstance() :
    m_instanceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isolatedTimestampHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome CdsAuditInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTimestamp") && !value["IsolatedTimestamp"].IsNull())
    {
        if (!value["IsolatedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.IsolatedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTimestamp = string(value["IsolatedTimestamp"].GetString());
        m_isolatedTimestampHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CdsAuditInstance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdsAuditInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isolatedTimestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolatedTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string CdsAuditInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CdsAuditInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CdsAuditInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CdsAuditInstance::GetAppId() const
{
    return m_appId;
}

void CdsAuditInstance::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CdsAuditInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CdsAuditInstance::GetUin() const
{
    return m_uin;
}

void CdsAuditInstance::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CdsAuditInstance::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t CdsAuditInstance::GetProjectId() const
{
    return m_projectId;
}

void CdsAuditInstance::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CdsAuditInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CdsAuditInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void CdsAuditInstance::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CdsAuditInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CdsAuditInstance::GetRegion() const
{
    return m_region;
}

void CdsAuditInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CdsAuditInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t CdsAuditInstance::GetPayMode() const
{
    return m_payMode;
}

void CdsAuditInstance::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CdsAuditInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t CdsAuditInstance::GetStatus() const
{
    return m_status;
}

void CdsAuditInstance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdsAuditInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CdsAuditInstance::GetIsolatedTimestamp() const
{
    return m_isolatedTimestamp;
}

void CdsAuditInstance::SetIsolatedTimestamp(const string& _isolatedTimestamp)
{
    m_isolatedTimestamp = _isolatedTimestamp;
    m_isolatedTimestampHasBeenSet = true;
}

bool CdsAuditInstance::IsolatedTimestampHasBeenSet() const
{
    return m_isolatedTimestampHasBeenSet;
}

string CdsAuditInstance::GetCreateTime() const
{
    return m_createTime;
}

void CdsAuditInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CdsAuditInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CdsAuditInstance::GetExpireTime() const
{
    return m_expireTime;
}

void CdsAuditInstance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CdsAuditInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

