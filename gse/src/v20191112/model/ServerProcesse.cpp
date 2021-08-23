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

#include <tencentcloud/gse/v20191112/model/ServerProcesse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

ServerProcesse::ServerProcesse() :
    m_concurrentExecutionsHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

CoreInternalOutcome ServerProcesse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConcurrentExecutions") && !value["ConcurrentExecutions"].IsNull())
    {
        if (!value["ConcurrentExecutions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerProcesse.ConcurrentExecutions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentExecutions = value["ConcurrentExecutions"].GetUint64();
        m_concurrentExecutionsHasBeenSet = true;
    }

    if (value.HasMember("LaunchPath") && !value["LaunchPath"].IsNull())
    {
        if (!value["LaunchPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerProcesse.LaunchPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchPath = string(value["LaunchPath"].GetString());
        m_launchPathHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerProcesse.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerProcesse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concurrentExecutionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentExecutions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentExecutions, allocator);
    }

    if (m_launchPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchPath.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ServerProcesse::GetConcurrentExecutions() const
{
    return m_concurrentExecutions;
}

void ServerProcesse::SetConcurrentExecutions(const uint64_t& _concurrentExecutions)
{
    m_concurrentExecutions = _concurrentExecutions;
    m_concurrentExecutionsHasBeenSet = true;
}

bool ServerProcesse::ConcurrentExecutionsHasBeenSet() const
{
    return m_concurrentExecutionsHasBeenSet;
}

string ServerProcesse::GetLaunchPath() const
{
    return m_launchPath;
}

void ServerProcesse::SetLaunchPath(const string& _launchPath)
{
    m_launchPath = _launchPath;
    m_launchPathHasBeenSet = true;
}

bool ServerProcesse::LaunchPathHasBeenSet() const
{
    return m_launchPathHasBeenSet;
}

string ServerProcesse::GetParameters() const
{
    return m_parameters;
}

void ServerProcesse::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool ServerProcesse::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

