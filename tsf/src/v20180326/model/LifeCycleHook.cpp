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

#include <tencentcloud/tsf/v20180326/model/LifeCycleHook.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

LifeCycleHook::LifeCycleHook() :
    m_hookTypeHasBeenSet(false),
    m_execModeHasBeenSet(false),
    m_execCommandContentHasBeenSet(false),
    m_httpGetOptionHasBeenSet(false)
{
}

CoreInternalOutcome LifeCycleHook::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HookType") && !value["HookType"].IsNull())
    {
        if (!value["HookType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleHook.HookType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hookType = string(value["HookType"].GetString());
        m_hookTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecMode") && !value["ExecMode"].IsNull())
    {
        if (!value["ExecMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleHook.ExecMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execMode = string(value["ExecMode"].GetString());
        m_execModeHasBeenSet = true;
    }

    if (value.HasMember("ExecCommandContent") && !value["ExecCommandContent"].IsNull())
    {
        if (!value["ExecCommandContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleHook.ExecCommandContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execCommandContent = string(value["ExecCommandContent"].GetString());
        m_execCommandContentHasBeenSet = true;
    }

    if (value.HasMember("HttpGetOption") && !value["HttpGetOption"].IsNull())
    {
        if (!value["HttpGetOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleHook.HttpGetOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpGetOption.Deserialize(value["HttpGetOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpGetOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifeCycleHook::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hookTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HookType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hookType.c_str(), allocator).Move(), allocator);
    }

    if (m_execModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execMode.c_str(), allocator).Move(), allocator);
    }

    if (m_execCommandContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecCommandContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execCommandContent.c_str(), allocator).Move(), allocator);
    }

    if (m_httpGetOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpGetOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpGetOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LifeCycleHook::GetHookType() const
{
    return m_hookType;
}

void LifeCycleHook::SetHookType(const string& _hookType)
{
    m_hookType = _hookType;
    m_hookTypeHasBeenSet = true;
}

bool LifeCycleHook::HookTypeHasBeenSet() const
{
    return m_hookTypeHasBeenSet;
}

string LifeCycleHook::GetExecMode() const
{
    return m_execMode;
}

void LifeCycleHook::SetExecMode(const string& _execMode)
{
    m_execMode = _execMode;
    m_execModeHasBeenSet = true;
}

bool LifeCycleHook::ExecModeHasBeenSet() const
{
    return m_execModeHasBeenSet;
}

string LifeCycleHook::GetExecCommandContent() const
{
    return m_execCommandContent;
}

void LifeCycleHook::SetExecCommandContent(const string& _execCommandContent)
{
    m_execCommandContent = _execCommandContent;
    m_execCommandContentHasBeenSet = true;
}

bool LifeCycleHook::ExecCommandContentHasBeenSet() const
{
    return m_execCommandContentHasBeenSet;
}

HttpGetOption LifeCycleHook::GetHttpGetOption() const
{
    return m_httpGetOption;
}

void LifeCycleHook::SetHttpGetOption(const HttpGetOption& _httpGetOption)
{
    m_httpGetOption = _httpGetOption;
    m_httpGetOptionHasBeenSet = true;
}

bool LifeCycleHook::HttpGetOptionHasBeenSet() const
{
    return m_httpGetOptionHasBeenSet;
}

