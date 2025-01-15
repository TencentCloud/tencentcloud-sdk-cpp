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

#include <tencentcloud/dlc/v20210125/model/SmartOptimizerChangeTablePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartOptimizerChangeTablePolicy::SmartOptimizerChangeTablePolicy() :
    m_dataRetentionTimeHasBeenSet(false)
{
}

CoreInternalOutcome SmartOptimizerChangeTablePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataRetentionTime") && !value["DataRetentionTime"].IsNull())
    {
        if (!value["DataRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerChangeTablePolicy.DataRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetentionTime = value["DataRetentionTime"].GetInt64();
        m_dataRetentionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartOptimizerChangeTablePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRetentionTime, allocator);
    }

}


int64_t SmartOptimizerChangeTablePolicy::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

void SmartOptimizerChangeTablePolicy::SetDataRetentionTime(const int64_t& _dataRetentionTime)
{
    m_dataRetentionTime = _dataRetentionTime;
    m_dataRetentionTimeHasBeenSet = true;
}

bool SmartOptimizerChangeTablePolicy::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}

