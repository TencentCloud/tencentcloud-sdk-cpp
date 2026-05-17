/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/CosAlarmRiskIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAlarmRiskIdInfo::CosAlarmRiskIdInfo() :
    m_alarmRiskIdHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome CosAlarmRiskIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmRiskId") && !value["AlarmRiskId"].IsNull())
    {
        if (!value["AlarmRiskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmRiskIdInfo.AlarmRiskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRiskId = value["AlarmRiskId"].GetInt64();
        m_alarmRiskIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAlarmRiskIdInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAlarmRiskIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmRiskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRiskId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


int64_t CosAlarmRiskIdInfo::GetAlarmRiskId() const
{
    return m_alarmRiskId;
}

void CosAlarmRiskIdInfo::SetAlarmRiskId(const int64_t& _alarmRiskId)
{
    m_alarmRiskId = _alarmRiskId;
    m_alarmRiskIdHasBeenSet = true;
}

bool CosAlarmRiskIdInfo::AlarmRiskIdHasBeenSet() const
{
    return m_alarmRiskIdHasBeenSet;
}

int64_t CosAlarmRiskIdInfo::GetAppId() const
{
    return m_appId;
}

void CosAlarmRiskIdInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAlarmRiskIdInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

