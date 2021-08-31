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

#include <tencentcloud/cwp/v20180228/model/MonthInspectionReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MonthInspectionReport::MonthInspectionReport() :
    m_reportNameHasBeenSet(false),
    m_reportPathHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome MonthInspectionReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthInspectionReport.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }

    if (value.HasMember("ReportPath") && !value["ReportPath"].IsNull())
    {
        if (!value["ReportPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthInspectionReport.ReportPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportPath = string(value["ReportPath"].GetString());
        m_reportPathHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthInspectionReport.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonthInspectionReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportPath.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string MonthInspectionReport::GetReportName() const
{
    return m_reportName;
}

void MonthInspectionReport::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool MonthInspectionReport::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

string MonthInspectionReport::GetReportPath() const
{
    return m_reportPath;
}

void MonthInspectionReport::SetReportPath(const string& _reportPath)
{
    m_reportPath = _reportPath;
    m_reportPathHasBeenSet = true;
}

bool MonthInspectionReport::ReportPathHasBeenSet() const
{
    return m_reportPathHasBeenSet;
}

string MonthInspectionReport::GetModifyTime() const
{
    return m_modifyTime;
}

void MonthInspectionReport::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool MonthInspectionReport::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

