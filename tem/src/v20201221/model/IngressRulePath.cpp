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

#include <tencentcloud/tem/v20201221/model/IngressRulePath.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

IngressRulePath::IngressRulePath() :
    m_pathHasBeenSet(false),
    m_backendHasBeenSet(false)
{
}

CoreInternalOutcome IngressRulePath::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressRulePath.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Backend") && !value["Backend"].IsNull())
    {
        if (!value["Backend"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IngressRulePath.Backend` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backend.Deserialize(value["Backend"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressRulePath::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_backendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backend.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IngressRulePath::GetPath() const
{
    return m_path;
}

void IngressRulePath::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool IngressRulePath::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

IngressRuleBackend IngressRulePath::GetBackend() const
{
    return m_backend;
}

void IngressRulePath::SetBackend(const IngressRuleBackend& _backend)
{
    m_backend = _backend;
    m_backendHasBeenSet = true;
}

bool IngressRulePath::BackendHasBeenSet() const
{
    return m_backendHasBeenSet;
}

