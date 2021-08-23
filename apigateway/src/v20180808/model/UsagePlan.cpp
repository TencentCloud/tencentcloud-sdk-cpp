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

#include <tencentcloud/apigateway/v20180808/model/UsagePlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlan::UsagePlan() :
    m_environmentHasBeenSet(false),
    m_usagePlanIdHasBeenSet(false),
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanId") && !value["UsagePlanId"].IsNull())
    {
        if (!value["UsagePlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.UsagePlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanId = string(value["UsagePlanId"].GetString());
        m_usagePlanIdHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanName") && !value["UsagePlanName"].IsNull())
    {
        if (!value["UsagePlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.UsagePlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanName = string(value["UsagePlanName"].GetString());
        m_usagePlanNameHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanDesc") && !value["UsagePlanDesc"].IsNull())
    {
        if (!value["UsagePlanDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.UsagePlanDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanDesc = string(value["UsagePlanDesc"].GetString());
        m_usagePlanDescHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNumPreSec") && !value["MaxRequestNumPreSec"].IsNull())
    {
        if (!value["MaxRequestNumPreSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.MaxRequestNumPreSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNumPreSec = value["MaxRequestNumPreSec"].GetInt64();
        m_maxRequestNumPreSecHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlan.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsagePlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRequestNumPreSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNumPreSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNumPreSec, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string UsagePlan::GetEnvironment() const
{
    return m_environment;
}

void UsagePlan::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UsagePlan::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string UsagePlan::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void UsagePlan::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool UsagePlan::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string UsagePlan::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void UsagePlan::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool UsagePlan::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string UsagePlan::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void UsagePlan::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool UsagePlan::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

int64_t UsagePlan::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void UsagePlan::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool UsagePlan::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

string UsagePlan::GetCreatedTime() const
{
    return m_createdTime;
}

void UsagePlan::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UsagePlan::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UsagePlan::GetModifiedTime() const
{
    return m_modifiedTime;
}

void UsagePlan::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool UsagePlan::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

