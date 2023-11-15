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

#include <tencentcloud/weilingwith/v20230427/model/DeviceStatusStatRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceStatusStatRes::DeviceStatusStatRes() :
    m_workspaceIdHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_normalSumHasBeenSet(false),
    m_offlineSumHasBeenSet(false),
    m_faultSumHasBeenSet(false),
    m_deviceTypeOverviewSetHasBeenSet(false),
    m_statLevelSetHasBeenSet(false)
{
}

CoreInternalOutcome DeviceStatusStatRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("NormalSum") && !value["NormalSum"].IsNull())
    {
        if (!value["NormalSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.NormalSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalSum = value["NormalSum"].GetInt64();
        m_normalSumHasBeenSet = true;
    }

    if (value.HasMember("OfflineSum") && !value["OfflineSum"].IsNull())
    {
        if (!value["OfflineSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.OfflineSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineSum = value["OfflineSum"].GetInt64();
        m_offlineSumHasBeenSet = true;
    }

    if (value.HasMember("FaultSum") && !value["FaultSum"].IsNull())
    {
        if (!value["FaultSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.FaultSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_faultSum = value["FaultSum"].GetInt64();
        m_faultSumHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeOverviewSet") && !value["DeviceTypeOverviewSet"].IsNull())
    {
        if (!value["DeviceTypeOverviewSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.DeviceTypeOverviewSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceTypeOverviewSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceTypeOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceTypeOverviewSet.push_back(item);
        }
        m_deviceTypeOverviewSetHasBeenSet = true;
    }

    if (value.HasMember("StatLevelSet") && !value["StatLevelSet"].IsNull())
    {
        if (!value["StatLevelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceStatusStatRes.StatLevelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StatLevelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatLevel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statLevelSet.push_back(item);
        }
        m_statLevelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceStatusStatRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_normalSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalSum, allocator);
    }

    if (m_offlineSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineSum, allocator);
    }

    if (m_faultSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faultSum, allocator);
    }

    if (m_deviceTypeOverviewSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeOverviewSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceTypeOverviewSet.begin(); itr != m_deviceTypeOverviewSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statLevelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatLevelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statLevelSet.begin(); itr != m_statLevelSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DeviceStatusStatRes::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DeviceStatusStatRes::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DeviceStatusStatRes::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t DeviceStatusStatRes::GetTotal() const
{
    return m_total;
}

void DeviceStatusStatRes::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DeviceStatusStatRes::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DeviceStatusStatRes::GetNormalSum() const
{
    return m_normalSum;
}

void DeviceStatusStatRes::SetNormalSum(const int64_t& _normalSum)
{
    m_normalSum = _normalSum;
    m_normalSumHasBeenSet = true;
}

bool DeviceStatusStatRes::NormalSumHasBeenSet() const
{
    return m_normalSumHasBeenSet;
}

int64_t DeviceStatusStatRes::GetOfflineSum() const
{
    return m_offlineSum;
}

void DeviceStatusStatRes::SetOfflineSum(const int64_t& _offlineSum)
{
    m_offlineSum = _offlineSum;
    m_offlineSumHasBeenSet = true;
}

bool DeviceStatusStatRes::OfflineSumHasBeenSet() const
{
    return m_offlineSumHasBeenSet;
}

int64_t DeviceStatusStatRes::GetFaultSum() const
{
    return m_faultSum;
}

void DeviceStatusStatRes::SetFaultSum(const int64_t& _faultSum)
{
    m_faultSum = _faultSum;
    m_faultSumHasBeenSet = true;
}

bool DeviceStatusStatRes::FaultSumHasBeenSet() const
{
    return m_faultSumHasBeenSet;
}

vector<DeviceTypeOverview> DeviceStatusStatRes::GetDeviceTypeOverviewSet() const
{
    return m_deviceTypeOverviewSet;
}

void DeviceStatusStatRes::SetDeviceTypeOverviewSet(const vector<DeviceTypeOverview>& _deviceTypeOverviewSet)
{
    m_deviceTypeOverviewSet = _deviceTypeOverviewSet;
    m_deviceTypeOverviewSetHasBeenSet = true;
}

bool DeviceStatusStatRes::DeviceTypeOverviewSetHasBeenSet() const
{
    return m_deviceTypeOverviewSetHasBeenSet;
}

vector<StatLevel> DeviceStatusStatRes::GetStatLevelSet() const
{
    return m_statLevelSet;
}

void DeviceStatusStatRes::SetStatLevelSet(const vector<StatLevel>& _statLevelSet)
{
    m_statLevelSet = _statLevelSet;
    m_statLevelSetHasBeenSet = true;
}

bool DeviceStatusStatRes::StatLevelSetHasBeenSet() const
{
    return m_statLevelSetHasBeenSet;
}

