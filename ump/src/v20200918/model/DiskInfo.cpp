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

#include <tencentcloud/ump/v20200918/model/DiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

DiskInfo::DiskInfo() :
    m_diskNameHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome DiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiskInfo.Usage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetDouble();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

}


string DiskInfo::GetDiskName() const
{
    return m_diskName;
}

void DiskInfo::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool DiskInfo::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

double DiskInfo::GetUsage() const
{
    return m_usage;
}

void DiskInfo::SetUsage(const double& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool DiskInfo::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

