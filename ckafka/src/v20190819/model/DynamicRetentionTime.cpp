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

#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DynamicRetentionTime::DynamicRetentionTime() :
    m_enableHasBeenSet(false),
    m_diskQuotaPercentageHasBeenSet(false),
    m_stepForwardPercentageHasBeenSet(false),
    m_bottomRetentionHasBeenSet(false)
{
}

CoreInternalOutcome DynamicRetentionTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicRetentionTime.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("DiskQuotaPercentage") && !value["DiskQuotaPercentage"].IsNull())
    {
        if (!value["DiskQuotaPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicRetentionTime.DiskQuotaPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskQuotaPercentage = value["DiskQuotaPercentage"].GetInt64();
        m_diskQuotaPercentageHasBeenSet = true;
    }

    if (value.HasMember("StepForwardPercentage") && !value["StepForwardPercentage"].IsNull())
    {
        if (!value["StepForwardPercentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicRetentionTime.StepForwardPercentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepForwardPercentage = value["StepForwardPercentage"].GetInt64();
        m_stepForwardPercentageHasBeenSet = true;
    }

    if (value.HasMember("BottomRetention") && !value["BottomRetention"].IsNull())
    {
        if (!value["BottomRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicRetentionTime.BottomRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bottomRetention = value["BottomRetention"].GetInt64();
        m_bottomRetentionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicRetentionTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_diskQuotaPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskQuotaPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskQuotaPercentage, allocator);
    }

    if (m_stepForwardPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepForwardPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepForwardPercentage, allocator);
    }

    if (m_bottomRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bottomRetention, allocator);
    }

}


int64_t DynamicRetentionTime::GetEnable() const
{
    return m_enable;
}

void DynamicRetentionTime::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DynamicRetentionTime::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DynamicRetentionTime::GetDiskQuotaPercentage() const
{
    return m_diskQuotaPercentage;
}

void DynamicRetentionTime::SetDiskQuotaPercentage(const int64_t& _diskQuotaPercentage)
{
    m_diskQuotaPercentage = _diskQuotaPercentage;
    m_diskQuotaPercentageHasBeenSet = true;
}

bool DynamicRetentionTime::DiskQuotaPercentageHasBeenSet() const
{
    return m_diskQuotaPercentageHasBeenSet;
}

int64_t DynamicRetentionTime::GetStepForwardPercentage() const
{
    return m_stepForwardPercentage;
}

void DynamicRetentionTime::SetStepForwardPercentage(const int64_t& _stepForwardPercentage)
{
    m_stepForwardPercentage = _stepForwardPercentage;
    m_stepForwardPercentageHasBeenSet = true;
}

bool DynamicRetentionTime::StepForwardPercentageHasBeenSet() const
{
    return m_stepForwardPercentageHasBeenSet;
}

int64_t DynamicRetentionTime::GetBottomRetention() const
{
    return m_bottomRetention;
}

void DynamicRetentionTime::SetBottomRetention(const int64_t& _bottomRetention)
{
    m_bottomRetention = _bottomRetention;
    m_bottomRetentionHasBeenSet = true;
}

bool DynamicRetentionTime::BottomRetentionHasBeenSet() const
{
    return m_bottomRetentionHasBeenSet;
}

