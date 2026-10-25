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

#include <tencentcloud/rum/v20210622/model/UsageDetailRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

UsageDetailRow::UsageDetailRow() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_reportVolumeHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_byDateHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetailRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("AppStatus") && !value["AppStatus"].IsNull())
    {
        if (!value["AppStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.AppStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appStatus = value["AppStatus"].GetInt64();
        m_appStatusHasBeenSet = true;
    }

    if (value.HasMember("ReportVolume") && !value["ReportVolume"].IsNull())
    {
        if (!value["ReportVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.ReportVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportVolume = value["ReportVolume"].GetInt64();
        m_reportVolumeHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("ByDate") && !value["ByDate"].IsNull())
    {
        if (!value["ByDate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsageDetailRow.ByDate` is not array type"));

        const rapidjson::Value &tmpValue = value["ByDate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageTimePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_byDate.push_back(item);
        }
        m_byDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetailRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_reportVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportVolume, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_byDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_byDate.begin(); itr != m_byDate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UsageDetailRow::GetInstanceId() const
{
    return m_instanceId;
}

void UsageDetailRow::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UsageDetailRow::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UsageDetailRow::GetInstanceName() const
{
    return m_instanceName;
}

void UsageDetailRow::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool UsageDetailRow::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t UsageDetailRow::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void UsageDetailRow::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool UsageDetailRow::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string UsageDetailRow::GetAppId() const
{
    return m_appId;
}

void UsageDetailRow::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UsageDetailRow::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UsageDetailRow::GetAppName() const
{
    return m_appName;
}

void UsageDetailRow::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool UsageDetailRow::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string UsageDetailRow::GetAppType() const
{
    return m_appType;
}

void UsageDetailRow::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool UsageDetailRow::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

int64_t UsageDetailRow::GetAppStatus() const
{
    return m_appStatus;
}

void UsageDetailRow::SetAppStatus(const int64_t& _appStatus)
{
    m_appStatus = _appStatus;
    m_appStatusHasBeenSet = true;
}

bool UsageDetailRow::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

int64_t UsageDetailRow::GetReportVolume() const
{
    return m_reportVolume;
}

void UsageDetailRow::SetReportVolume(const int64_t& _reportVolume)
{
    m_reportVolume = _reportVolume;
    m_reportVolumeHasBeenSet = true;
}

bool UsageDetailRow::ReportVolumeHasBeenSet() const
{
    return m_reportVolumeHasBeenSet;
}

double UsageDetailRow::GetPercent() const
{
    return m_percent;
}

void UsageDetailRow::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool UsageDetailRow::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

vector<UsageTimePoint> UsageDetailRow::GetByDate() const
{
    return m_byDate;
}

void UsageDetailRow::SetByDate(const vector<UsageTimePoint>& _byDate)
{
    m_byDate = _byDate;
    m_byDateHasBeenSet = true;
}

bool UsageDetailRow::ByDateHasBeenSet() const
{
    return m_byDateHasBeenSet;
}

