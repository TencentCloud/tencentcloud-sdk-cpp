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

#include <tencentcloud/tcbr/v20220217/model/ReleaseOrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ReleaseOrderInfo::ReleaseOrderInfo() :
    m_idHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false),
    m_grayStatusHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_trafficTypeValuesHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isReleasingHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseOrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.CurrentVersion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentVersion.Deserialize(value["CurrentVersion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentVersionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseVersion") && !value["ReleaseVersion"].IsNull())
    {
        if (!value["ReleaseVersion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.ReleaseVersion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_releaseVersion.Deserialize(value["ReleaseVersion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_releaseVersionHasBeenSet = true;
    }

    if (value.HasMember("GrayStatus") && !value["GrayStatus"].IsNull())
    {
        if (!value["GrayStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.GrayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grayStatus = string(value["GrayStatus"].GetString());
        m_grayStatusHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.ReleaseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseStatus = string(value["ReleaseStatus"].GetString());
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("TrafficTypeValues") && !value["TrafficTypeValues"].IsNull())
    {
        if (!value["TrafficTypeValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.TrafficTypeValues` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficTypeValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficTypeValues.push_back(item);
        }
        m_trafficTypeValuesHasBeenSet = true;
    }

    if (value.HasMember("TrafficType") && !value["TrafficType"].IsNull())
    {
        if (!value["TrafficType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.TrafficType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficType = string(value["TrafficType"].GetString());
        m_trafficTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowRatio") && !value["FlowRatio"].IsNull())
    {
        if (!value["FlowRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.FlowRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowRatio = value["FlowRatio"].GetInt64();
        m_flowRatioHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsReleasing") && !value["IsReleasing"].IsNull())
    {
        if (!value["IsReleasing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseOrderInfo.IsReleasing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReleasing = value["IsReleasing"].GetBool();
        m_isReleasingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseOrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentVersion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_releaseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_releaseVersion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_grayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grayStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficTypeValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficTypeValues.begin(); itr != m_trafficTypeValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleasingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReleasing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReleasing, allocator);
    }

}


int64_t ReleaseOrderInfo::GetId() const
{
    return m_id;
}

void ReleaseOrderInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReleaseOrderInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ReleaseOrderInfo::GetServerName() const
{
    return m_serverName;
}

void ReleaseOrderInfo::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ReleaseOrderInfo::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

VersionInfo ReleaseOrderInfo::GetCurrentVersion() const
{
    return m_currentVersion;
}

void ReleaseOrderInfo::SetCurrentVersion(const VersionInfo& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool ReleaseOrderInfo::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}

VersionInfo ReleaseOrderInfo::GetReleaseVersion() const
{
    return m_releaseVersion;
}

void ReleaseOrderInfo::SetReleaseVersion(const VersionInfo& _releaseVersion)
{
    m_releaseVersion = _releaseVersion;
    m_releaseVersionHasBeenSet = true;
}

bool ReleaseOrderInfo::ReleaseVersionHasBeenSet() const
{
    return m_releaseVersionHasBeenSet;
}

string ReleaseOrderInfo::GetGrayStatus() const
{
    return m_grayStatus;
}

void ReleaseOrderInfo::SetGrayStatus(const string& _grayStatus)
{
    m_grayStatus = _grayStatus;
    m_grayStatusHasBeenSet = true;
}

bool ReleaseOrderInfo::GrayStatusHasBeenSet() const
{
    return m_grayStatusHasBeenSet;
}

string ReleaseOrderInfo::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ReleaseOrderInfo::SetReleaseStatus(const string& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ReleaseOrderInfo::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

vector<ObjectKV> ReleaseOrderInfo::GetTrafficTypeValues() const
{
    return m_trafficTypeValues;
}

void ReleaseOrderInfo::SetTrafficTypeValues(const vector<ObjectKV>& _trafficTypeValues)
{
    m_trafficTypeValues = _trafficTypeValues;
    m_trafficTypeValuesHasBeenSet = true;
}

bool ReleaseOrderInfo::TrafficTypeValuesHasBeenSet() const
{
    return m_trafficTypeValuesHasBeenSet;
}

string ReleaseOrderInfo::GetTrafficType() const
{
    return m_trafficType;
}

void ReleaseOrderInfo::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool ReleaseOrderInfo::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

int64_t ReleaseOrderInfo::GetFlowRatio() const
{
    return m_flowRatio;
}

void ReleaseOrderInfo::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool ReleaseOrderInfo::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

string ReleaseOrderInfo::GetCreateTime() const
{
    return m_createTime;
}

void ReleaseOrderInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReleaseOrderInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool ReleaseOrderInfo::GetIsReleasing() const
{
    return m_isReleasing;
}

void ReleaseOrderInfo::SetIsReleasing(const bool& _isReleasing)
{
    m_isReleasing = _isReleasing;
    m_isReleasingHasBeenSet = true;
}

bool ReleaseOrderInfo::IsReleasingHasBeenSet() const
{
    return m_isReleasingHasBeenSet;
}

