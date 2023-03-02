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

#include <tencentcloud/mrs/v20200910/model/ReportTypeVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ReportTypeVersion::ReportTypeVersion() :
    m_reportTypeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ReportTypeVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTypeVersion.ReportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = value["ReportType"].GetInt64();
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTypeVersion.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportTypeVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportType, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

}


int64_t ReportTypeVersion::GetReportType() const
{
    return m_reportType;
}

void ReportTypeVersion::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ReportTypeVersion::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t ReportTypeVersion::GetVersion() const
{
    return m_version;
}

void ReportTypeVersion::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ReportTypeVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

