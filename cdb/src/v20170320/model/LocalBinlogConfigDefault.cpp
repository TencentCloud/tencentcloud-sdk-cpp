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

#include <tencentcloud/cdb/v20170320/model/LocalBinlogConfigDefault.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

LocalBinlogConfigDefault::LocalBinlogConfigDefault() :
    m_saveHoursHasBeenSet(false),
    m_maxUsageHasBeenSet(false)
{
}

CoreInternalOutcome LocalBinlogConfigDefault::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaveHours") && !value["SaveHours"].IsNull())
    {
        if (!value["SaveHours"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalBinlogConfigDefault.SaveHours` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saveHours = value["SaveHours"].GetInt64();
        m_saveHoursHasBeenSet = true;
    }

    if (value.HasMember("MaxUsage") && !value["MaxUsage"].IsNull())
    {
        if (!value["MaxUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalBinlogConfigDefault.MaxUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUsage = value["MaxUsage"].GetInt64();
        m_maxUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalBinlogConfigDefault::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saveHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveHours, allocator);
    }

    if (m_maxUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUsage, allocator);
    }

}


int64_t LocalBinlogConfigDefault::GetSaveHours() const
{
    return m_saveHours;
}

void LocalBinlogConfigDefault::SetSaveHours(const int64_t& _saveHours)
{
    m_saveHours = _saveHours;
    m_saveHoursHasBeenSet = true;
}

bool LocalBinlogConfigDefault::SaveHoursHasBeenSet() const
{
    return m_saveHoursHasBeenSet;
}

int64_t LocalBinlogConfigDefault::GetMaxUsage() const
{
    return m_maxUsage;
}

void LocalBinlogConfigDefault::SetMaxUsage(const int64_t& _maxUsage)
{
    m_maxUsage = _maxUsage;
    m_maxUsageHasBeenSet = true;
}

bool LocalBinlogConfigDefault::MaxUsageHasBeenSet() const
{
    return m_maxUsageHasBeenSet;
}

