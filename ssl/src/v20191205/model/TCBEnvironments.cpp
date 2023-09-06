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

#include <tencentcloud/ssl/v20191205/model/TCBEnvironments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TCBEnvironments::TCBEnvironments() :
    m_environmentHasBeenSet(false),
    m_accessServiceHasBeenSet(false),
    m_hostServiceHasBeenSet(false)
{
}

CoreInternalOutcome TCBEnvironments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TCBEnvironments.Environment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environment.Deserialize(value["Environment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("AccessService") && !value["AccessService"].IsNull())
    {
        if (!value["AccessService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TCBEnvironments.AccessService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessService.Deserialize(value["AccessService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessServiceHasBeenSet = true;
    }

    if (value.HasMember("HostService") && !value["HostService"].IsNull())
    {
        if (!value["HostService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TCBEnvironments.HostService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostService.Deserialize(value["HostService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCBEnvironments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostService.ToJsonObject(value[key.c_str()], allocator);
    }

}


TCBEnvironment TCBEnvironments::GetEnvironment() const
{
    return m_environment;
}

void TCBEnvironments::SetEnvironment(const TCBEnvironment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool TCBEnvironments::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

TCBAccessService TCBEnvironments::GetAccessService() const
{
    return m_accessService;
}

void TCBEnvironments::SetAccessService(const TCBAccessService& _accessService)
{
    m_accessService = _accessService;
    m_accessServiceHasBeenSet = true;
}

bool TCBEnvironments::AccessServiceHasBeenSet() const
{
    return m_accessServiceHasBeenSet;
}

TCBHostService TCBEnvironments::GetHostService() const
{
    return m_hostService;
}

void TCBEnvironments::SetHostService(const TCBHostService& _hostService)
{
    m_hostService = _hostService;
    m_hostServiceHasBeenSet = true;
}

bool TCBEnvironments::HostServiceHasBeenSet() const
{
    return m_hostServiceHasBeenSet;
}

