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

#include <tencentcloud/tcb/v20180608/model/FunctionPublicNetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

FunctionPublicNetConfig::FunctionPublicNetConfig() :
    m_publicNetStatusHasBeenSet(false),
    m_eipConfigHasBeenSet(false)
{
}

CoreInternalOutcome FunctionPublicNetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicNetStatus") && !value["PublicNetStatus"].IsNull())
    {
        if (!value["PublicNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionPublicNetConfig.PublicNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetStatus = string(value["PublicNetStatus"].GetString());
        m_publicNetStatusHasBeenSet = true;
    }

    if (value.HasMember("EipConfig") && !value["EipConfig"].IsNull())
    {
        if (!value["EipConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionPublicNetConfig.EipConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eipConfig.Deserialize(value["EipConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eipConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionPublicNetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_eipConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eipConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FunctionPublicNetConfig::GetPublicNetStatus() const
{
    return m_publicNetStatus;
}

void FunctionPublicNetConfig::SetPublicNetStatus(const string& _publicNetStatus)
{
    m_publicNetStatus = _publicNetStatus;
    m_publicNetStatusHasBeenSet = true;
}

bool FunctionPublicNetConfig::PublicNetStatusHasBeenSet() const
{
    return m_publicNetStatusHasBeenSet;
}

FunctionEipConfig FunctionPublicNetConfig::GetEipConfig() const
{
    return m_eipConfig;
}

void FunctionPublicNetConfig::SetEipConfig(const FunctionEipConfig& _eipConfig)
{
    m_eipConfig = _eipConfig;
    m_eipConfigHasBeenSet = true;
}

bool FunctionPublicNetConfig::EipConfigHasBeenSet() const
{
    return m_eipConfigHasBeenSet;
}

