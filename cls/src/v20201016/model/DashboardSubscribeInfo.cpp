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

#include <tencentcloud/cls/v20201016/model/DashboardSubscribeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DashboardSubscribeInfo::DashboardSubscribeInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_cronHasBeenSet(false),
    m_subscribeDataHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_lastStatusHasBeenSet(false)
{
}

CoreInternalOutcome DashboardSubscribeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DashboardId") && !value["DashboardId"].IsNull())
    {
        if (!value["DashboardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.DashboardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardId = string(value["DashboardId"].GetString());
        m_dashboardIdHasBeenSet = true;
    }

    if (value.HasMember("Cron") && !value["Cron"].IsNull())
    {
        if (!value["Cron"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.Cron` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cron = string(value["Cron"].GetString());
        m_cronHasBeenSet = true;
    }

    if (value.HasMember("SubscribeData") && !value["SubscribeData"].IsNull())
    {
        if (!value["SubscribeData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.SubscribeData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscribeData.Deserialize(value["SubscribeData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscribeDataHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("LastStatus") && !value["LastStatus"].IsNull())
    {
        if (!value["LastStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardSubscribeInfo.LastStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatus = string(value["LastStatus"].GetString());
        m_lastStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashboardSubscribeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dashboardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cron.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUin, allocator);
    }

    if (m_lastStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastStatus.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DashboardSubscribeInfo::GetId() const
{
    return m_id;
}

void DashboardSubscribeInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DashboardSubscribeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DashboardSubscribeInfo::GetName() const
{
    return m_name;
}

void DashboardSubscribeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DashboardSubscribeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DashboardSubscribeInfo::GetDashboardId() const
{
    return m_dashboardId;
}

void DashboardSubscribeInfo::SetDashboardId(const string& _dashboardId)
{
    m_dashboardId = _dashboardId;
    m_dashboardIdHasBeenSet = true;
}

bool DashboardSubscribeInfo::DashboardIdHasBeenSet() const
{
    return m_dashboardIdHasBeenSet;
}

string DashboardSubscribeInfo::GetCron() const
{
    return m_cron;
}

void DashboardSubscribeInfo::SetCron(const string& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool DashboardSubscribeInfo::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

DashboardSubscribeData DashboardSubscribeInfo::GetSubscribeData() const
{
    return m_subscribeData;
}

void DashboardSubscribeInfo::SetSubscribeData(const DashboardSubscribeData& _subscribeData)
{
    m_subscribeData = _subscribeData;
    m_subscribeDataHasBeenSet = true;
}

bool DashboardSubscribeInfo::SubscribeDataHasBeenSet() const
{
    return m_subscribeDataHasBeenSet;
}

string DashboardSubscribeInfo::GetCreateTime() const
{
    return m_createTime;
}

void DashboardSubscribeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DashboardSubscribeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DashboardSubscribeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DashboardSubscribeInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DashboardSubscribeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DashboardSubscribeInfo::GetLastTime() const
{
    return m_lastTime;
}

void DashboardSubscribeInfo::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool DashboardSubscribeInfo::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

uint64_t DashboardSubscribeInfo::GetUin() const
{
    return m_uin;
}

void DashboardSubscribeInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DashboardSubscribeInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t DashboardSubscribeInfo::GetSubUin() const
{
    return m_subUin;
}

void DashboardSubscribeInfo::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool DashboardSubscribeInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string DashboardSubscribeInfo::GetLastStatus() const
{
    return m_lastStatus;
}

void DashboardSubscribeInfo::SetLastStatus(const string& _lastStatus)
{
    m_lastStatus = _lastStatus;
    m_lastStatusHasBeenSet = true;
}

bool DashboardSubscribeInfo::LastStatusHasBeenSet() const
{
    return m_lastStatusHasBeenSet;
}

