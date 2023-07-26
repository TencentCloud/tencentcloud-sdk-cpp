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

#include <tencentcloud/ms/v20180408/model/AndroidPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AndroidPlan::AndroidPlan() :
    m_planIdHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_encryptParamHasBeenSet(false)
{
}

CoreInternalOutcome AndroidPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidPlan.PlanId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetInt64();
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidPlan.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidPlan.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("EncryptParam") && !value["EncryptParam"].IsNull())
    {
        if (!value["EncryptParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidPlan.EncryptParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptParam = string(value["EncryptParam"].GetString());
        m_encryptParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptParam.c_str(), allocator).Move(), allocator);
    }

}


int64_t AndroidPlan::GetPlanId() const
{
    return m_planId;
}

void AndroidPlan::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool AndroidPlan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string AndroidPlan::GetAppPkgName() const
{
    return m_appPkgName;
}

void AndroidPlan::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AndroidPlan::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AndroidPlan::GetAppType() const
{
    return m_appType;
}

void AndroidPlan::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool AndroidPlan::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string AndroidPlan::GetEncryptParam() const
{
    return m_encryptParam;
}

void AndroidPlan::SetEncryptParam(const string& _encryptParam)
{
    m_encryptParam = _encryptParam;
    m_encryptParamHasBeenSet = true;
}

bool AndroidPlan::EncryptParamHasBeenSet() const
{
    return m_encryptParamHasBeenSet;
}

