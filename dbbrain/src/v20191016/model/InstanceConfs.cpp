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

#include <tencentcloud/dbbrain/v20191016/model/InstanceConfs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

InstanceConfs::InstanceConfs() :
    m_dailyInspectionHasBeenSet(false),
    m_overviewDisplayHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DailyInspection") && !value["DailyInspection"].IsNull())
    {
        if (!value["DailyInspection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.DailyInspection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dailyInspection = string(value["DailyInspection"].GetString());
        m_dailyInspectionHasBeenSet = true;
    }

    if (value.HasMember("OverviewDisplay") && !value["OverviewDisplay"].IsNull())
    {
        if (!value["OverviewDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.OverviewDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overviewDisplay = string(value["OverviewDisplay"].GetString());
        m_overviewDisplayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dailyInspectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyInspection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dailyInspection.c_str(), allocator).Move(), allocator);
    }

    if (m_overviewDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverviewDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overviewDisplay.c_str(), allocator).Move(), allocator);
    }

}


string InstanceConfs::GetDailyInspection() const
{
    return m_dailyInspection;
}

void InstanceConfs::SetDailyInspection(const string& _dailyInspection)
{
    m_dailyInspection = _dailyInspection;
    m_dailyInspectionHasBeenSet = true;
}

bool InstanceConfs::DailyInspectionHasBeenSet() const
{
    return m_dailyInspectionHasBeenSet;
}

string InstanceConfs::GetOverviewDisplay() const
{
    return m_overviewDisplay;
}

void InstanceConfs::SetOverviewDisplay(const string& _overviewDisplay)
{
    m_overviewDisplay = _overviewDisplay;
    m_overviewDisplayHasBeenSet = true;
}

bool InstanceConfs::OverviewDisplayHasBeenSet() const
{
    return m_overviewDisplayHasBeenSet;
}

