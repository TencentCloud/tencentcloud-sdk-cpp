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

#include <tencentcloud/wedata/v20210820/model/SubscribeWebHook.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubscribeWebHook::SubscribeWebHook() :
    m_hookTypeHasBeenSet(false),
    m_hookAddressHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeWebHook::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HookType") && !value["HookType"].IsNull())
    {
        if (!value["HookType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeWebHook.HookType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hookType = string(value["HookType"].GetString());
        m_hookTypeHasBeenSet = true;
    }

    if (value.HasMember("HookAddress") && !value["HookAddress"].IsNull())
    {
        if (!value["HookAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeWebHook.HookAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hookAddress = string(value["HookAddress"].GetString());
        m_hookAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeWebHook::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hookTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HookType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hookType.c_str(), allocator).Move(), allocator);
    }

    if (m_hookAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HookAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hookAddress.c_str(), allocator).Move(), allocator);
    }

}


string SubscribeWebHook::GetHookType() const
{
    return m_hookType;
}

void SubscribeWebHook::SetHookType(const string& _hookType)
{
    m_hookType = _hookType;
    m_hookTypeHasBeenSet = true;
}

bool SubscribeWebHook::HookTypeHasBeenSet() const
{
    return m_hookTypeHasBeenSet;
}

string SubscribeWebHook::GetHookAddress() const
{
    return m_hookAddress;
}

void SubscribeWebHook::SetHookAddress(const string& _hookAddress)
{
    m_hookAddress = _hookAddress;
    m_hookAddressHasBeenSet = true;
}

bool SubscribeWebHook::HookAddressHasBeenSet() const
{
    return m_hookAddressHasBeenSet;
}

