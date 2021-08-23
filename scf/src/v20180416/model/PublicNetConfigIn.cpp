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

#include <tencentcloud/scf/v20180416/model/PublicNetConfigIn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PublicNetConfigIn::PublicNetConfigIn() :
    m_publicNetStatusHasBeenSet(false),
    m_eipConfigHasBeenSet(false)
{
}

CoreInternalOutcome PublicNetConfigIn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicNetStatus") && !value["PublicNetStatus"].IsNull())
    {
        if (!value["PublicNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConfigIn.PublicNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetStatus = string(value["PublicNetStatus"].GetString());
        m_publicNetStatusHasBeenSet = true;
    }

    if (value.HasMember("EipConfig") && !value["EipConfig"].IsNull())
    {
        if (!value["EipConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConfigIn.EipConfig` is not object type").SetRequestId(requestId));
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

void PublicNetConfigIn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string PublicNetConfigIn::GetPublicNetStatus() const
{
    return m_publicNetStatus;
}

void PublicNetConfigIn::SetPublicNetStatus(const string& _publicNetStatus)
{
    m_publicNetStatus = _publicNetStatus;
    m_publicNetStatusHasBeenSet = true;
}

bool PublicNetConfigIn::PublicNetStatusHasBeenSet() const
{
    return m_publicNetStatusHasBeenSet;
}

EipConfigIn PublicNetConfigIn::GetEipConfig() const
{
    return m_eipConfig;
}

void PublicNetConfigIn::SetEipConfig(const EipConfigIn& _eipConfig)
{
    m_eipConfig = _eipConfig;
    m_eipConfigHasBeenSet = true;
}

bool PublicNetConfigIn::EipConfigHasBeenSet() const
{
    return m_eipConfigHasBeenSet;
}

