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

#include <tencentcloud/mps/v20190612/model/AddBlindWatermarkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AddBlindWatermarkConfig::AddBlindWatermarkConfig() :
    m_switchHasBeenSet(false),
    m_embedInfoHasBeenSet(false)
{
}

CoreInternalOutcome AddBlindWatermarkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddBlindWatermarkConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("EmbedInfo") && !value["EmbedInfo"].IsNull())
    {
        if (!value["EmbedInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddBlindWatermarkConfig.EmbedInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_embedInfo.Deserialize(value["EmbedInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_embedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddBlindWatermarkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_embedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_embedInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AddBlindWatermarkConfig::GetSwitch() const
{
    return m_switch;
}

void AddBlindWatermarkConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AddBlindWatermarkConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

BlindWatermarkEmbedInfo AddBlindWatermarkConfig::GetEmbedInfo() const
{
    return m_embedInfo;
}

void AddBlindWatermarkConfig::SetEmbedInfo(const BlindWatermarkEmbedInfo& _embedInfo)
{
    m_embedInfo = _embedInfo;
    m_embedInfoHasBeenSet = true;
}

bool AddBlindWatermarkConfig::EmbedInfoHasBeenSet() const
{
    return m_embedInfoHasBeenSet;
}

