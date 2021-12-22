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

#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DynamicDiskConfig::DynamicDiskConfig() :
    m_enableHasBeenSet(false),
    m_stepForwardPercentageHasBeenSet(false),
    m_diskQuotaPercentageHasBeenSet(false),
    m_maxDiskSpaceHasBeenSet(false)
{
}

CoreInternalOutcome DynamicDiskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicDiskConfig.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("StepForwardPercentage") && !value["StepForwardPercentage"].IsNull())
    {
        if (!value["StepForwardPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicDiskConfig.StepForwardPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepForwardPercentage = value["StepForwardPercentage"].GetInt64();
        m_stepForwardPercentageHasBeenSet = true;
    }

    if (value.HasMember("DiskQuotaPercentage") && !value["DiskQuotaPercentage"].IsNull())
    {
        if (!value["DiskQuotaPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicDiskConfig.DiskQuotaPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskQuotaPercentage = value["DiskQuotaPercentage"].GetInt64();
        m_diskQuotaPercentageHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSpace") && !value["MaxDiskSpace"].IsNull())
    {
        if (!value["MaxDiskSpace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicDiskConfig.MaxDiskSpace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSpace = value["MaxDiskSpace"].GetInt64();
        m_maxDiskSpaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicDiskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_stepForwardPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepForwardPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepForwardPercentage, allocator);
    }

    if (m_diskQuotaPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskQuotaPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskQuotaPercentage, allocator);
    }

    if (m_maxDiskSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSpace, allocator);
    }

}


int64_t DynamicDiskConfig::GetEnable() const
{
    return m_enable;
}

void DynamicDiskConfig::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DynamicDiskConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DynamicDiskConfig::GetStepForwardPercentage() const
{
    return m_stepForwardPercentage;
}

void DynamicDiskConfig::SetStepForwardPercentage(const int64_t& _stepForwardPercentage)
{
    m_stepForwardPercentage = _stepForwardPercentage;
    m_stepForwardPercentageHasBeenSet = true;
}

bool DynamicDiskConfig::StepForwardPercentageHasBeenSet() const
{
    return m_stepForwardPercentageHasBeenSet;
}

int64_t DynamicDiskConfig::GetDiskQuotaPercentage() const
{
    return m_diskQuotaPercentage;
}

void DynamicDiskConfig::SetDiskQuotaPercentage(const int64_t& _diskQuotaPercentage)
{
    m_diskQuotaPercentage = _diskQuotaPercentage;
    m_diskQuotaPercentageHasBeenSet = true;
}

bool DynamicDiskConfig::DiskQuotaPercentageHasBeenSet() const
{
    return m_diskQuotaPercentageHasBeenSet;
}

int64_t DynamicDiskConfig::GetMaxDiskSpace() const
{
    return m_maxDiskSpace;
}

void DynamicDiskConfig::SetMaxDiskSpace(const int64_t& _maxDiskSpace)
{
    m_maxDiskSpace = _maxDiskSpace;
    m_maxDiskSpaceHasBeenSet = true;
}

bool DynamicDiskConfig::MaxDiskSpaceHasBeenSet() const
{
    return m_maxDiskSpaceHasBeenSet;
}

