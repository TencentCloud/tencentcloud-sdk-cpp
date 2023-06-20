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

#include <tencentcloud/csip/v20221121/model/TaskCenterWeakPwdRiskInputParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskCenterWeakPwdRiskInputParam::TaskCenterWeakPwdRiskInputParam() :
    m_checkItemIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome TaskCenterWeakPwdRiskInputParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckItemId") && !value["CheckItemId"].IsNull())
    {
        if (!value["CheckItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCenterWeakPwdRiskInputParam.CheckItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkItemId = value["CheckItemId"].GetInt64();
        m_checkItemIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCenterWeakPwdRiskInputParam.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskCenterWeakPwdRiskInputParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkItemId, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


int64_t TaskCenterWeakPwdRiskInputParam::GetCheckItemId() const
{
    return m_checkItemId;
}

void TaskCenterWeakPwdRiskInputParam::SetCheckItemId(const int64_t& _checkItemId)
{
    m_checkItemId = _checkItemId;
    m_checkItemIdHasBeenSet = true;
}

bool TaskCenterWeakPwdRiskInputParam::CheckItemIdHasBeenSet() const
{
    return m_checkItemIdHasBeenSet;
}

int64_t TaskCenterWeakPwdRiskInputParam::GetEnable() const
{
    return m_enable;
}

void TaskCenterWeakPwdRiskInputParam::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool TaskCenterWeakPwdRiskInputParam::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

