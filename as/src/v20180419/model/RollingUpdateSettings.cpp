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

#include <tencentcloud/as/v20180419/model/RollingUpdateSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RollingUpdateSettings::RollingUpdateSettings() :
    m_batchNumberHasBeenSet(false),
    m_batchPauseHasBeenSet(false)
{
}

CoreInternalOutcome RollingUpdateSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchNumber") && !value["BatchNumber"].IsNull())
    {
        if (!value["BatchNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RollingUpdateSettings.BatchNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchNumber = value["BatchNumber"].GetUint64();
        m_batchNumberHasBeenSet = true;
    }

    if (value.HasMember("BatchPause") && !value["BatchPause"].IsNull())
    {
        if (!value["BatchPause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollingUpdateSettings.BatchPause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchPause = string(value["BatchPause"].GetString());
        m_batchPauseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollingUpdateSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchNumber, allocator);
    }

    if (m_batchPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchPause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchPause.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RollingUpdateSettings::GetBatchNumber() const
{
    return m_batchNumber;
}

void RollingUpdateSettings::SetBatchNumber(const uint64_t& _batchNumber)
{
    m_batchNumber = _batchNumber;
    m_batchNumberHasBeenSet = true;
}

bool RollingUpdateSettings::BatchNumberHasBeenSet() const
{
    return m_batchNumberHasBeenSet;
}

string RollingUpdateSettings::GetBatchPause() const
{
    return m_batchPause;
}

void RollingUpdateSettings::SetBatchPause(const string& _batchPause)
{
    m_batchPause = _batchPause;
    m_batchPauseHasBeenSet = true;
}

bool RollingUpdateSettings::BatchPauseHasBeenSet() const
{
    return m_batchPauseHasBeenSet;
}

