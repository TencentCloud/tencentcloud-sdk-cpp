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

#include <tencentcloud/apigateway/v20180808/model/ApiEnvironmentStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiEnvironmentStrategy::ApiEnvironmentStrategy() :
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_environmentStrategySetHasBeenSet(false)
{
}

CoreInternalOutcome ApiEnvironmentStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEnvironmentStrategy.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEnvironmentStrategy.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEnvironmentStrategy.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiEnvironmentStrategy.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentStrategySet") && !value["EnvironmentStrategySet"].IsNull())
    {
        if (!value["EnvironmentStrategySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiEnvironmentStrategy.EnvironmentStrategySet` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvironmentStrategySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvironmentStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_environmentStrategySet.push_back(item);
        }
        m_environmentStrategySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiEnvironmentStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentStrategySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentStrategySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environmentStrategySet.begin(); itr != m_environmentStrategySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ApiEnvironmentStrategy::GetApiId() const
{
    return m_apiId;
}

void ApiEnvironmentStrategy::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiEnvironmentStrategy::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiEnvironmentStrategy::GetApiName() const
{
    return m_apiName;
}

void ApiEnvironmentStrategy::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiEnvironmentStrategy::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiEnvironmentStrategy::GetPath() const
{
    return m_path;
}

void ApiEnvironmentStrategy::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ApiEnvironmentStrategy::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ApiEnvironmentStrategy::GetMethod() const
{
    return m_method;
}

void ApiEnvironmentStrategy::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiEnvironmentStrategy::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<EnvironmentStrategy> ApiEnvironmentStrategy::GetEnvironmentStrategySet() const
{
    return m_environmentStrategySet;
}

void ApiEnvironmentStrategy::SetEnvironmentStrategySet(const vector<EnvironmentStrategy>& _environmentStrategySet)
{
    m_environmentStrategySet = _environmentStrategySet;
    m_environmentStrategySetHasBeenSet = true;
}

bool ApiEnvironmentStrategy::EnvironmentStrategySetHasBeenSet() const
{
    return m_environmentStrategySetHasBeenSet;
}

