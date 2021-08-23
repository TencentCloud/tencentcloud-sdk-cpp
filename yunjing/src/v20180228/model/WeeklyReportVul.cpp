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

#include <tencentcloud/yunjing/v20180228/model/WeeklyReportVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

WeeklyReportVul::WeeklyReportVul() :
    m_machineIpHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vulStatusHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false)
{
}

CoreInternalOutcome WeeklyReportVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulType") && !value["VulType"].IsNull())
    {
        if (!value["VulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.VulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = string(value["VulType"].GetString());
        m_vulTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VulStatus") && !value["VulStatus"].IsNull())
    {
        if (!value["VulStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.VulStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulStatus = string(value["VulStatus"].GetString());
        m_vulStatusHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportVul.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklyReportVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vulStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

}


string WeeklyReportVul::GetMachineIp() const
{
    return m_machineIp;
}

void WeeklyReportVul::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool WeeklyReportVul::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string WeeklyReportVul::GetVulName() const
{
    return m_vulName;
}

void WeeklyReportVul::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool WeeklyReportVul::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string WeeklyReportVul::GetVulType() const
{
    return m_vulType;
}

void WeeklyReportVul::SetVulType(const string& _vulType)
{
    m_vulType = _vulType;
    m_vulTypeHasBeenSet = true;
}

bool WeeklyReportVul::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string WeeklyReportVul::GetDescription() const
{
    return m_description;
}

void WeeklyReportVul::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WeeklyReportVul::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WeeklyReportVul::GetVulStatus() const
{
    return m_vulStatus;
}

void WeeklyReportVul::SetVulStatus(const string& _vulStatus)
{
    m_vulStatus = _vulStatus;
    m_vulStatusHasBeenSet = true;
}

bool WeeklyReportVul::VulStatusHasBeenSet() const
{
    return m_vulStatusHasBeenSet;
}

string WeeklyReportVul::GetLastScanTime() const
{
    return m_lastScanTime;
}

void WeeklyReportVul::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool WeeklyReportVul::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

