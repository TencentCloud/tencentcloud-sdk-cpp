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

#include <tencentcloud/scf/v20180416/model/PublicNetConfigOut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PublicNetConfigOut::PublicNetConfigOut() :
    m_publicNetStatusHasBeenSet(false),
    m_eipConfigHasBeenSet(false)
{
}

CoreInternalOutcome PublicNetConfigOut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicNetStatus") && !value["PublicNetStatus"].IsNull())
    {
        if (!value["PublicNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConfigOut.PublicNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetStatus = string(value["PublicNetStatus"].GetString());
        m_publicNetStatusHasBeenSet = true;
    }

    if (value.HasMember("EipConfig") && !value["EipConfig"].IsNull())
    {
        if (!value["EipConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConfigOut.EipConfig` is not object type").SetRequestId(requestId));
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

void PublicNetConfigOut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string PublicNetConfigOut::GetPublicNetStatus() const
{
    return m_publicNetStatus;
}

void PublicNetConfigOut::SetPublicNetStatus(const string& _publicNetStatus)
{
    m_publicNetStatus = _publicNetStatus;
    m_publicNetStatusHasBeenSet = true;
}

bool PublicNetConfigOut::PublicNetStatusHasBeenSet() const
{
    return m_publicNetStatusHasBeenSet;
}

EipConfigOut PublicNetConfigOut::GetEipConfig() const
{
    return m_eipConfig;
}

void PublicNetConfigOut::SetEipConfig(const EipConfigOut& _eipConfig)
{
    m_eipConfig = _eipConfig;
    m_eipConfigHasBeenSet = true;
}

bool PublicNetConfigOut::EipConfigHasBeenSet() const
{
    return m_eipConfigHasBeenSet;
}

