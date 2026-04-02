/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/EmailTemplateConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EmailTemplateConfig::EmailTemplateConfig() :
    m_registerSignInHasBeenSet(false),
    m_defaultTplHasBeenSet(false)
{
}

CoreInternalOutcome EmailTemplateConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegisterSignIn") && !value["RegisterSignIn"].IsNull())
    {
        if (!value["RegisterSignIn"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmailTemplateConfig.RegisterSignIn` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registerSignIn.Deserialize(value["RegisterSignIn"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registerSignInHasBeenSet = true;
    }

    if (value.HasMember("DefaultTpl") && !value["DefaultTpl"].IsNull())
    {
        if (!value["DefaultTpl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmailTemplateConfig.DefaultTpl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultTpl.Deserialize(value["DefaultTpl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultTplHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmailTemplateConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registerSignInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterSignIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registerSignIn.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultTplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultTpl.ToJsonObject(value[key.c_str()], allocator);
    }

}


LocalizedTemplate EmailTemplateConfig::GetRegisterSignIn() const
{
    return m_registerSignIn;
}

void EmailTemplateConfig::SetRegisterSignIn(const LocalizedTemplate& _registerSignIn)
{
    m_registerSignIn = _registerSignIn;
    m_registerSignInHasBeenSet = true;
}

bool EmailTemplateConfig::RegisterSignInHasBeenSet() const
{
    return m_registerSignInHasBeenSet;
}

LocalizedTemplate EmailTemplateConfig::GetDefaultTpl() const
{
    return m_defaultTpl;
}

void EmailTemplateConfig::SetDefaultTpl(const LocalizedTemplate& _defaultTpl)
{
    m_defaultTpl = _defaultTpl;
    m_defaultTplHasBeenSet = true;
}

bool EmailTemplateConfig::DefaultTplHasBeenSet() const
{
    return m_defaultTplHasBeenSet;
}

