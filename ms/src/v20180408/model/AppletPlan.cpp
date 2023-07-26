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

#include <tencentcloud/ms/v20180408/model/AppletPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppletPlan::AppletPlan() :
    m_planIdHasBeenSet(false),
    m_appletLevelHasBeenSet(false)
{
}

CoreInternalOutcome AppletPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletPlan.PlanId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetInt64();
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("AppletLevel") && !value["AppletLevel"].IsNull())
    {
        if (!value["AppletLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppletPlan.AppletLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appletLevel = value["AppletLevel"].GetInt64();
        m_appletLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppletPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

    if (m_appletLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appletLevel, allocator);
    }

}


int64_t AppletPlan::GetPlanId() const
{
    return m_planId;
}

void AppletPlan::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool AppletPlan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

int64_t AppletPlan::GetAppletLevel() const
{
    return m_appletLevel;
}

void AppletPlan::SetAppletLevel(const int64_t& _appletLevel)
{
    m_appletLevel = _appletLevel;
    m_appletLevelHasBeenSet = true;
}

bool AppletPlan::AppletLevelHasBeenSet() const
{
    return m_appletLevelHasBeenSet;
}

