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

#include <tencentcloud/tke/v20220501/model/LifecycleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

LifecycleConfig::LifecycleConfig() :
    m_preInitHasBeenSet(false),
    m_postInitHasBeenSet(false)
{
}

CoreInternalOutcome LifecycleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PreInit") && !value["PreInit"].IsNull())
    {
        if (!value["PreInit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleConfig.PreInit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preInit = string(value["PreInit"].GetString());
        m_preInitHasBeenSet = true;
    }

    if (value.HasMember("PostInit") && !value["PostInit"].IsNull())
    {
        if (!value["PostInit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleConfig.PostInit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postInit = string(value["PostInit"].GetString());
        m_postInitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecycleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_preInitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreInit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preInit.c_str(), allocator).Move(), allocator);
    }

    if (m_postInitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostInit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postInit.c_str(), allocator).Move(), allocator);
    }

}


string LifecycleConfig::GetPreInit() const
{
    return m_preInit;
}

void LifecycleConfig::SetPreInit(const string& _preInit)
{
    m_preInit = _preInit;
    m_preInitHasBeenSet = true;
}

bool LifecycleConfig::PreInitHasBeenSet() const
{
    return m_preInitHasBeenSet;
}

string LifecycleConfig::GetPostInit() const
{
    return m_postInit;
}

void LifecycleConfig::SetPostInit(const string& _postInit)
{
    m_postInit = _postInit;
    m_postInitHasBeenSet = true;
}

bool LifecycleConfig::PostInitHasBeenSet() const
{
    return m_postInitHasBeenSet;
}

